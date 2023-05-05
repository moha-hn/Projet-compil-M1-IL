#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include  "quad.h"

//cretion d'1 quadruplet
void createQuad(char *opt, char *opd1, char *opd2, char *res){
	QuadR[qc].opt=strdup(opt);
	QuadR[qc].opd1=strdup(opd1);
	QuadR[qc].opd2=strdup(opd2);
	QuadR[qc].res=strdup(res);
	qc++;
}

//convert interger to string
char* ToSTR(int i){
	char s[15];
	sprintf(s,"%d",i);
	return strdup(s);
}

//creation d'1 quad arithmeitque
void createQuadA(int type, char *cond1, char *cond2, char *res){
	char *TypeBR;
	switch(type){
		case 1 :{//1==> "==" (égale)
			TypeBR=strdup("BNE");
		}
		break;
		case 2 :{//2==> "!=" (different)
			TypeBR=strdup("BE");
		}
		break;
		case 3 :{//3==> ">=" higher Or Equal
			TypeBR=strdup("BL");
		}
		break;
		case 4 :{//4==> "<=" lower Or Equal
			TypeBR=strdup("BG");
		}
		break;
		case 5 :{//5==> "<" lower
			TypeBR=strdup("BGE");
		}
		break;
		case 6 :{//6==> ">" higher
			TypeBR=strdup("BLE");
		}
		break;
	}
	createQuad(TypeBR,ToSTR(qc+3),cond1,cond2);
	createQuad("=","1","",res);
	createQuad("BR",ToSTR(qc+2),"","");
	createQuad("=","0","",res);
}

//creation d'1 quad logique
void createQuadL(int type, char *cond1, char *cond2, char *res){
	switch(type){
		case 1 :{//1==> not
			createQuad("BNZ",ToSTR(qc+3),cond1,"");
			createQuad("=","","1",res);
			createQuad("BR",ToSTR(qc+2),"","");
			createQuad("=","","0",res);
		}
		break;
		case 2 :{//2==> or
			createQuad("BNZ",ToSTR(qc+4),cond1,"");
			createQuad("BNZ",ToSTR(qc+3),cond2,"");
			createQuad("=","","0",res);
			createQuad("BR",ToSTR(qc+2),"","");
			createQuad("=","","1",res);
		}
		break;
		case 3 :{//3==> and
			createQuad("BZ",ToSTR(qc+4),cond1,"");
			createQuad("BZ",ToSTR(qc+3),cond2,"");
			createQuad("=","","1",res);
			createQuad("BR",ToSTR(qc+2),"","");
			createQuad("=","","0",res);
		}
		break;
	}
}
//les piles pour l'imbrecation

//empiler String
void empiler_Str(pile **p,char *donne){
	pile *new;

	new=(pile*)malloc(sizeof(pile));
	new->donnee=strdup(donne);

	//mise à jour chainage
	new->prc=*p;
	*p=new;
}

//empiler integer
void empiler_Int(pile **p,int donne){
	pile *new;
	char str[10];
	new=(pile*)malloc(sizeof(pile));
	sprintf(str,"%d",donne);
	new->donnee=strdup(str);
	//update chaining
	new->prc=*p;
	*p=new;
}

//get first ele on the  pile
char* first(pile*p){
	return p->donnee;
}

//depiler
char* depiler(pile**p){
	char *res;
	pile *H;
	H=*p;
	res=strdup(H->donnee);
	*p=H->prc;
	free(H);
	return res;
}


void displayQuad(){
	int i;
	printf("\n::::::::::::::::::::::::::::::: Quadruplets :::::::::::::::::::::::::::::::::::\n");
	printf("___________________________________________________________________\n");
	for(i=0;i<qc;i++){
		printf("\n|\t %d - ( %s  ,  %s  ,  %s  ,  %s )",i,QuadR[i].opt,QuadR[i].opd1,QuadR[i].opd2,QuadR[i].res);
	}
	printf("\n___________________________________________________________________\n");
}
