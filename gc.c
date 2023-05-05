#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ts.h"
#include"gc.h"
#include"quad.h"


FILE *Assembly;

int save_etiq[100];
int pos=0;
int indexLabel=0;
void ToAssembly(ts ls){
	int i,condition;
	Assembly=fopen("CodeObjet.asm","w+");
	
	//NOm du programme
	fprintf(Assembly,"\nTITLE : %s\n",nomPROG);
	
	//Pile declaration
	fprintf(Assembly,"\nPILE SEGMENT stack\n");
	fprintf(Assembly,"\t\t100 DD dup (?)\n");
	fprintf(Assembly,"PILE ENDS\n");
	
	//DATA SEGMENT
	fprintf(Assembly,"\nDATA SEGMENT\n");
	
    for(i=0;i<7;i++)
    {		
            if((ls[i]).svt!=NULL)
            {
                FromTs(((ls[i]).svt));
            }
    }
	fprintf(Assembly,"DATA ENDS\n");
		
	//CODE SEGMENT
	fprintf(Assembly,"\nCODE SEGMENT\n");
		fprintf(Assembly,"BEGIN:\n");
		fprintf(Assembly,"\t\tASSUME SS: PILE, DS: DATA, CS: CODE\n");
		
				fprintf(Assembly,"\t\t\tMov AX,DATA\n");
				fprintf(Assembly,"\t\t\tMov DX,AX\n\n");
				
				FromQuad(QuadR);

				
				
	fprintf(Assembly,"CODE ENDS\n");
	fprintf(Assembly,"END BEGIN\n");
		
	fclose(Assembly);
}

int NatureOperande(char *opr,ts ls){
	
			if(lookup(opr,ls)==1){ 		
				return 1;
			}else{
                if(opr[0]=='T') return 2;
                else return 3;
			}			
	
}



void FromTs(ts *t){
	ts p; char s[10]; int ii;    
	
	for(p=t;p!=NULL;p=p->svt){
		
		if(strcmp(p->nom,nomPROG)!=0){
			fprintf(Assembly,"\t%s ",p->nom);	
		
			switch(p->type)
			{    
                case 1:{/*char*/
					fprintf(Assembly,"DB ");
                    if(p->nature!=0) {
						ii=(int)p->taille; 
						fprintf(Assembly,"'%c'",ii);
					}else{
						if(p->taille==1){
							fprintf(Assembly,"'%c'",36);
						}						
					} 
				} break;    
				
				case 2:{ 	/*float*/
					fprintf(Assembly,"DD ");
					if(p->nature!=0) {
						fprintf(Assembly,"%f",p->taille);
					}else{
						if(p->taille==1){
							fprintf(Assembly,"%.1f",0.0);
						}							
					} 
				} break;
				
                case 0:{	/*INT*/
					fprintf(Assembly,"DW ");
                    
					if(p->nature!=0) {
						ii=(int)p->taille; 
						fprintf(Assembly,"%d",ii);
					}else {
						if(p->taille==1){
							fprintf(Assembly,"%d",0);
						}						
					}
				} break;
				default :{} break;
			}
			
			if(p->taille>1 && p->nature==0){
				ii=(int)p->taille;
				fprintf(Assembly,"%d dup(1)",ii);
			}
			fprintf(Assembly,"\n");
		} 				
}
}							   

void FromQuad(quad *q)
{
	int k=0;
	for(k=0;k<qc;k++)
	{
		if(q[k].opt[0]=='B' && q[k].opt[1]!='O') {save_etiq[pos]=atoi(q[k].opd1); pos++;}
	}
	char * operation = malloc(sizeof(char*));
    int i=0;
    for(i=0;i<qc;i++)
    {
		int ii=0;
		for(ii=0;ii<pos;ii++)
		{
			if(i==save_etiq[ii]){ fprintf(Assembly,"etiq [ %d ] : \n",i);}
		}
		
        if(strcmp(q[i].opt,"+")==0 || strcmp(q[i].opt,"-")==0 || strcmp(q[i].opt,"*")==0 || strcmp(q[i].opt,"/")==0)
		{
			switch(q[i].opt[0])
			{
				case '+' : strcpy(operation,"ADD"); 
						   break; 
				case '-' : strcpy(operation,"SUB"); 
						   break;
				case '*' : strcpy(operation,"MUL"); 
						   break;
				case '/' : strcpy(operation,"DIV"); 
						   break;
			}
			if((q[i].opd1[0]=='T') && (q[i].opd2[0]=='T'))
			{
				fprintf(Assembly,"\t\t\tPOP AX\n");
				fprintf(Assembly,"\t\t\tPOP BX\n");
				fprintf(Assembly,"\t\t\t%s AX,BX\n",operation);
				fprintf(Assembly,"\t\t\tPUSH AX\n");
			}
			else if(q[i].opd1[0]=='T')
			{
				fprintf(Assembly,"\t\t\tPOP AX\n");
				fprintf(Assembly,"\t\t\t%s AX,%s\n",operation,q[i].opd2);
				fprintf(Assembly,"\t\t\tPUSH AX\n");
			}
			else if(q[i].opd2[0]=='T')
			{
				fprintf(Assembly,"\t\t\tPOP AX\n");
				fprintf(Assembly,"\t\t\t%s AX,%s\n",operation,q[i].opd1);
				fprintf(Assembly,"\t\t\tPUSH AX\n");
			}
			else
			{
				fprintf(Assembly,"\t\t\tMOV AX,%s\n",q[i].opd1);
				fprintf(Assembly,"\t\t\t%s AX,%s\n",operation,q[i].opd2);
				fprintf(Assembly,"\t\t\tPUSH AX\n");
			}
		}
		else if(q[i].opt[0]=='^')
		{
			if((q[i].opd1[0]=='T') && (q[i].opd2[0]=='T'))
			{
				fprintf(Assembly,"\t\t\tPOP AX\n");
				fprintf(Assembly,"\t\t\tPOP BX\n");
				fprintf(Assembly,"\t\t\tMOV CX,BX\n");
				fprintf(Assembly,"\t\t\tMOV BX,AX\n");
				fprintf(Assembly,"\t\t\tLabel[ %d ]: MUL AX,BX\n",indexLabel);
				fprintf(Assembly,"\t\t\tloop Label [ %d ]\n",indexLabel);
				fprintf(Assembly,"\t\t\tPUSH AX\n");
			}
			else if(q[i].opd1[0]=='T')
			{
				fprintf(Assembly,"\t\t\tPOP AX\n");
				fprintf(Assembly,"\t\t\tMOV CX,%s\n",q[i].opd2);
				fprintf(Assembly,"\t\t\tMOV BX,AX\n");
				fprintf(Assembly,"\t\t\tLabel[ %d ]: MUL AX,BX\n",indexLabel);
				fprintf(Assembly,"\t\t\tloop Label[ %d ]\n",indexLabel);
				fprintf(Assembly,"\t\t\tPUSH AX\n");
			}
			else if(q[i].opd2[0]=='T')
			{
				fprintf(Assembly,"\t\t\tPOP AX\n");
				fprintf(Assembly,"\t\t\tMOV CX,AX\n");
				fprintf(Assembly,"\t\t\tMOV AX,%s\n",q[i].opd1);
				fprintf(Assembly,"\t\t\tLabel [ %d ]: MUL AX,%s\n",indexLabel,q[i].opd1);
				fprintf(Assembly,"\t\t\tloop Label [ %d ]\n",indexLabel);
				fprintf(Assembly,"\t\t\tPUSH AX\n");
			}
			else
			{
				fprintf(Assembly,"\t\t\tMOV CX,%s\n",q[i].opd2);
				fprintf(Assembly,"\t\t\tMOV AX,%s\n",q[i].opd1);
				fprintf(Assembly,"\t\t\tLabel [ %d ]: MUL AX,%s\n",indexLabel,q[i].opd1);
				fprintf(Assembly,"\t\t\tloop Label[ %d ]\n",indexLabel);
				fprintf(Assembly,"\t\t\tPUSH AX\n");
			}
		}
		else if(q[i].opt[0]=='=')
			{
				if(q[i].opd1[0]=='T')
				{
					fprintf(Assembly,"\t\t\tPOP AX\n");
					fprintf(Assembly,"\t\t\tMOV %s,AX\n",q[i].res);
				}
				else if(q[i].res[0]=='T')
				{
					fprintf(Assembly,"\t\t\tMOV AX,%s\n",q[i].opd1);
					fprintf(Assembly,"\t\t\tPUSH AX\n");
				}
				else 
				{
					fprintf(Assembly,"\t\t\tMOV AX,%s\n",q[i].opd1);
					fprintf(Assembly,"\t\t\tMOV %s,AX\n",q[i].res);
				}
			}
			else if( q[i].opt[0]=='B' && q[i].opt[1] != 'O') 
			{
				
				if(strcmp(q[i].opt,"BNE")==0 || strcmp(q[i].opt,"BNZ")==0)
				{
					strcpy(operation,"JNE");
				} 
				else if (strcmp(q[i].opt,"BLE")==0)
				{
					strcpy(operation,"JLE");
				}
				else if (strcmp(q[i].opt,"BGE")==0)
				{
					strcpy(operation,"JGE");
				}
				else if(strcmp(q[i].opt,"BG")==0)
				{
					strcpy(operation,"JG");
				}
				else if(strcmp(q[i].opt,"BL")==0)
				{
					strcpy(operation,"JL");
				}
				else if(strcmp(q[i].opt,"BE")==0 || strcmp(q[i].opt,"BZ")==0 )
				{
					strcpy(operation,"JE");
				}
				
				if(q[i].opt[1] != 'R')
				{
					if(strcmp(q[i].opt,"BZ")==0)
					{
						if(q[i].opd2[0]=='T') fprintf(Assembly,"\t\t\tPOP AX\n");
						else fprintf(Assembly,"\t\t\tMOV AX,%s\n",q[i].opd2);
						
						fprintf(Assembly,"\t\t\tCMP AX,0\n");
						fprintf(Assembly,"\t\t\t%s etiq[ %s ]\n",operation,q[i].opd1);
					}
					else if(strcmp(q[i].opt,"BNZ")==0)
					{
						if(q[i].opd2[0]=='T') fprintf(Assembly,"\t\t\tPOP AX\n");
						else fprintf(Assembly,"\t\t\tMOV AX,%s\n",q[i].opd2);
						
						fprintf(Assembly,"\t\t\tCMP AX,0\n");
						fprintf(Assembly,"\t\t\t%s etiq[ %s ]\n",operation,q[i].opd1);
					}
					else 
					{
						if(q[i].opd2[0]=='T') fprintf(Assembly,"\t\t\tPOP AX\n");
						else fprintf(Assembly,"\t\t\tMOV AX,%s\n",q[i].opd2);

						if(q[i].res[0]=='T') fprintf(Assembly,"\t\t\tPOP BX\n");
						else fprintf(Assembly,"\t\t\tMOV BX,%s\n",q[i].res);

						
						fprintf(Assembly,"\t\t\tCMP AX,BX\n");
						fprintf(Assembly,"\t\t\t%s etiq[ %s ]\n",operation,q[i].opd1);
					}
					

				}
				else 
				{
					fprintf(Assembly,"\t\t\tJMP etiq[ %s ]\n",q[i].opd1);
				}
			}

    }
}
