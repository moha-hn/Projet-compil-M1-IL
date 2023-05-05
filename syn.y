%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "quad.h"
    #include "ts.h"
    #include "opt.h"
    #include "gc.h"

   
    int typv;

    int cptTemp=1;
    int cptEndCheck=0;

    int yylex();
    extern FILE* yyin ;
    extern int yylineno;
    extern int col;
    
%}

%union
{
  int III;
  char *CHAINE;
  struct
    {
     char* ctx;
     int type;
     int nature;
     float taille;
   }tt;
}

%token PROGRAM Begin End <CHAINE>CONSTANT <CHAINE>INT <CHAINE>FLT <CHAINE>CHR
%token IF THEN ELSE ENDIF
%token CASE CHECK SO ENDCHECK DEFAULT ENDCASE
%token FOR DO ENDFOR
%token <CHAINE>IDF <CHAINE>REEL <CHAINE>ENTIER <CHAINE>CCHAR
%token <CHAINE>PLUS <CHAINE>MINUS <CHAINE>MUL <CHAINE>DIV <CHAINE>POW
%token <CHAINE>SUP <CHAINE>INF <CHAINE>EQUAL <CHAINE>DIFF <CHAINE>SUPEQUAL <CHAINE>INFEQUAL
%token <CHAINE>AND <CHAINE>OR <CHAINE>NOT <CHAINE>AFFECTATION
%token <CHAINE>PARENTHESEGauche <CHAINE> PARENTHESEDroite <CHAINE>CROCHETGauche <CHAINE>CROCHETDroite
%token <CHAINE>ACCOLADEGauche <CHAINE>ACCOLADEDroite <CHAINE>PNTV <CHAINE>DEUXP <CHAINE>VIRGULE

%type <III>TYPE sep sepa condition1
%type <tt>valeur expressionA expressionC

%left OR
%left AND
%left NOT
%left SUP INF EQUAL DIFF SUPEQUAL INFEQUAL
%left PLUS MINUS
%left DIV MUL
%left POW
%left PARENTHESEGauche PARENTHESEDroite

%start S

%%
/*==========================PROGRAMME===============================================*/
S: PROGRAM IDF Declaration Begin Instruction End IDF {if(strcmp($2,$7)!=0) {yyerror();}
                                                         else {nomPROG= strdup($2);createQuad("","","",""); printf("\n^_^ Good Job ^_^\n"); } 
                                                          };
/*==========================DECLARATION===============================================*/
TYPE: INT {$$=0;}
      |CHR {$$=1;}
      |FLT {$$=2;};

Declaration: listaVariable PNTV Declaration
              |
             CONSTANT IDF AFFECTATION valeur PNTV  Declaration
             {
               float ab;
              if($4.type==1) ab = $4.ctx[0];
              else  ab=atof($4.ctx); 
               if(!lookup($2,listesymbol))
                insert($2,$4.type,1,ab,listesymbol);
               else {printf("DoubleDeclaration\n");return 0;}
             }
             |
            ;
listaVariable: IDF sep listaVariable
              {
                int k= $2;
                char kk[5];
                itoa(k,kk,10);
                if(k>1)
                {
                  createQuad("BOUNDS",kk,"","");
                  createQuad("ADEC",$1,"","");
                }
                
                if(!lookup($1,listesymbol))
                  insert($1,save_type,0,$2,listesymbol);
                else {printf("DoubleDeclaration\n");return 0;}
              }
              | IDF sepa  TYPE
              {
                int k= $2;
                char kk[5];
                itoa(k,kk,10);
                if(k>1)
                {
                 createQuad("BOUNDS",kk,"","");
                 createQuad("ADEC",$1,"","");
                }
               save_type=$3;
                if(!lookup($1,listesymbol))
                  insert($1,$3,0,$2,listesymbol);
                else {printf("DoubleDeclaration\n");return 0;}
              }
  ;
sep : VIRGULE {$$=1;} | CROCHETGauche ENTIER CROCHETDroite VIRGULE {$$=atoi($2); }
    ;
sepa : DEUXP {$$=1;} | CROCHETGauche ENTIER CROCHETDroite DEUXP {$$=atoi($2);}
    ;

/*==========================INSTRUCTION===============================================*/
Instruction: Aff Instruction|
             IFCdn Instruction|
             CASECdn Instruction|
             loop Instruction |
             ;

/*==========================AFFECTATION===============================================*/
Aff:IDF AFFECTATION expressionA PNTV
    {
      if(!lookup($1,listesymbol))
      {
          printf("variable non declaré\n"); return 0;
      }
      else
      {
        int t = getType($1,listesymbol);
        if(t != $3.type )
        {
          printf("Incpmpatibilite des types\n");
           return 0;
        }
      }
      //1111111
       createQuad("=",$3.ctx,"",$1);
    }

    |
    IDF CROCHETGauche ENTIER CROCHETDroite AFFECTATION expressionA PNTV
    {
      if(!lookup($1,listesymbol))
      {
          printf("variable non declaré\n"); return 0;
      }
      else
      {
        int t = getType($1,listesymbol);
        if(t != $6.type )
        {
          printf("Incpmpatibilite des types\n");
           return 0;
        }
      }
    }
    ;
  //a virifier

/*==========================Expression===============================================*/
expressionA:expressionA PLUS expressionA    {if($1.type==2 || $3.type==2)
                                              {$$.type=2;}
                                            else  $$.type=0;
                                                  $1.ctx=strdup($$.ctx);
                                                  $$.taille=1;
                                                  $$.nature=0;

                                                  sprintf($$.ctx,"T%d",cptTemp);
                                                  createQuad("+",$1.ctx,$3.ctx,$$.ctx);
                                                  cptTemp++;
                                          }
            |
            expressionA MINUS expressionA {if($1.type==2 || $3.type==2)
                                          {$$.type=2;}
                                          else $$.type=0;
                                          $1.ctx=strdup($$.ctx);
                                          $$.taille=1;
                                          $$.nature=0;

                                          sprintf($$.ctx,"T%d",cptTemp);
                                          createQuad("-",$1.ctx,$3.ctx,$$.ctx);
                                          cptTemp++;
                                          }
            |
            expressionA MUL expressionA  {if($1.type==2 || $3.type==2)
                                          {$$.type=2;}
                                          else $$.type=0;
                                          $1.ctx=strdup($$.ctx);
                                          $$.taille=1;
                                          $$.nature=0;

                                          sprintf($$.ctx,"T%d",cptTemp);
                                          createQuad("*",$1.ctx,$3.ctx,$$.ctx);
                                          cptTemp++;
                                          }
            |
            expressionA DIV expressionA  {if($1.type==2 || $3.type==2)
                                          {$$.type=2;}
                                          else $$.type=0;
                                          $1.ctx=strdup($$.ctx);
                                          $$.taille=1;
                                          $$.nature=0;

                                          sprintf($$.ctx,"T%d",cptTemp);
                                          createQuad("/",$1.ctx,$3.ctx,$$.ctx);
                                          cptTemp++;
                                          }
            |
            expressionA POW  expressionA {if($1.type==2 || $3.type==2)
                                          {$$.type=2;}
                                          else $$.type=0;
                                          $1.ctx=strdup($$.ctx);
                                          $$.taille=1;
                                          $$.nature=0;

                                          sprintf($$.ctx,"T%d",cptTemp);
                                          createQuad("^",$1.ctx,$3.ctx,$$.ctx);
                                          cptTemp++;
                                          }
            |
            IDF CROCHETGauche ENTIER CROCHETDroite
                                                    {if(!lookup($1,listesymbol))
                                                        {
                                                          printf("variable non declaré \n"); return 0;
                                                        }
                                                      else
                                                      {
                                                          int n= getNature($1,listesymbol);
                                                          if(n==1)
                                                          {
                                                            printf("Impossible de modifier une Constante\n"); return 0;
                                                          }
                                                          else
                                                          {
                                                            int k = getType($1,listesymbol);
                                                            if(k!=2) k=0;
                                                            $$.ctx=$1;
                                                            $$.type=k;
                                                            $$.taille=1;
                                                            $$.nature=0;
                                                          }
                                                      }
                                                  }
            |
            IDF
                  {
                    if(!lookup($1,listesymbol))
                    {
                      printf("variable non declaré \n"); return 0;
                    }
                    else
                    {
                      int n= getNature($1,listesymbol);
                      
                      if(n==1)
                      {
                        printf("Impossible de modifier une Constante\n"); return 0;
                      }
                      else
                      {
                        int k = getType($1,listesymbol);
                        if(k!=2) k=0;
                        $$.ctx=$1;
                        $$.type=k;
                        $$.taille=1;
                        $$.nature=0;
                      }
                    }
                }
            |
            valeur{ int k= $1.type;
                   
                   $1.ctx=strdup($$.ctx);
                    $$.type=k;$$.taille=1;$$.nature=0;}
            ;

expressionC:expressionA SUP expressionA
            {
                $1.ctx=strdup($$.ctx);
              sprintf($$.ctx,"T%d",cptTemp);
              createQuadA(6,$1.ctx,$3.ctx,$$.ctx);
              cptTemp++;
            }|
            expressionA INF expressionA{
                $1.ctx=strdup($$.ctx);
              sprintf($$.ctx,"T%d",cptTemp);
              createQuadA(5,$1.ctx,$3.ctx,$$.ctx);
              cptTemp++;
            }|
            expressionA EQUAL expressionA{
                $1.ctx=strdup($$.ctx);
              sprintf($$.ctx,"T%d",cptTemp);
              createQuadA(1,$1.ctx,$3.ctx,$$.ctx);
              cptTemp++;
            }|
            expressionA SUPEQUAL expressionA{
              $1.ctx=strdup($$.ctx);
              sprintf($$.ctx,"T%d",cptTemp);
              createQuadA(3,$1.ctx,$3.ctx,$$.ctx);
              cptTemp++;
            }|
            expressionA INFEQUAL expressionA{
                $1.ctx=strdup($$.ctx);
              sprintf($$.ctx,"T%d",cptTemp);
              createQuadA(4,$1.ctx,$3.ctx,$$.ctx);
              cptTemp++;
            }|
            expressionA DIFF expressionA{
                $1.ctx=strdup($$.ctx);
              sprintf($$.ctx,"T%d",cptTemp);
              createQuadA(2,$1.ctx,$3.ctx,$$.ctx);
              cptTemp++;
            }|
            expressionC AND expressionC{
              $1.ctx=strdup($$.ctx);
            sprintf($$.ctx,"T%d",cptTemp);
            createQuadL(3,$1.ctx,$3.ctx,$$.ctx);
            cptTemp++;
            }|
            expressionC OR expressionC{
              $1.ctx=strdup($$.ctx);
            sprintf($$.ctx,"T%d",cptTemp);
            createQuadL(2,$1.ctx,$3.ctx,$$.ctx);
            cptTemp++;
            }|
            NOT expressionC{
            $2.ctx=strdup($$.ctx);
            sprintf($$.ctx,"T%d",cptTemp);
            createQuadL(1,$2.ctx,"",$$.ctx);
            cptTemp++;
            } |
            expressionA{
                $1.ctx=strdup($$.ctx);
            }
            ;


valeur: REEL {$$.type =2;$1=strdup($$.ctx);$$.taille=1;$$.nature=-1;}|
        ENTIER {$$.type =0;$1=strdup($$.ctx);$$.taille=1;$$.nature=-1;}|
        CCHAR {$$.type =1;sprintf($$.ctx,"%c",$1[1]);$$.taille=1;$$.nature=-1;}
        ;

/*==========================IF_ELSE===============================================*/
IFCdn: IF PARENTHESEGauche expressionC PARENTHESEDroite {
          empiler_Int(&pile1,qc);
          createQuad("BZ","",QuadR[qc-1].res,"");
        }
        THEN Instruction elsebloc ENDIF{
          QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        };

elsebloc: ELSE {
            QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
            empiler_Int(&pile1,qc);
            createQuad("BR","","","");
            }  Instruction
          |
          ;
/*==========================switch===============================================*/
CASECdn: CASE PARENTHESEGauche IDF
          {
            sprintf(idfSwitch,"%s",strdup($3));

            //sauvegarder un tempp, et generer un quadruplet pour le default du switch
            sprintf(defaultTemp,"T%d",cptTemp); cptTemp++;
            empiler_Str(&pile1,defaultTemp);
            createQuad("=","0","",defaultTemp);

            //empiler l'idf du switch
            empiler_Str(&pile1,idfSwitch);

            //initialiser & empiler le cpt des endCheck
            cptEndCheck=0;
            empiler_Int(&pile2,cptEndCheck);
          }
          PARENTHESEDroite  blocCase
          {			  //mise à jour des BR end check
                 cptEndCheck=atoi(depiler(&pile2));
                  while(cptEndCheck>0){
                    QuadR[atoi(depiler(&pile3))].opd1=ToSTR(qc);
                    cptEndCheck--;
                  }
          }  ENDCASE;
blocCase: CHECK condition1 expressionA
          {
            strcpy(idfSwitch,depiler(&pile1));
            sprintf(tempp,"T%d",cptTemp); cptTemp++;
            //quadruplet condition
            createQuadA($2,idfSwitch,$3.ctx,tempp);

            //empiler la position du quad a metre a jour
            empiler_Int(&pile1,qc);
            createQuad("BZ","",QuadR[qc-1].res,"");

            empiler_Str(&pile1,idfSwitch);
            }
          SO Instruction blockEnd  blocCase|
          DEFAULT
          {
            depiler(&pile1);//depiler idfSwitch on en a plus besoin
            strcpy(defaultTemp,depiler(&pile1));//depiler le defaultTemp
            //empiler la position du quad a metre a jour
            empiler_Int(&pile1,qc);
            createQuad("BNZ","",defaultTemp,"");

          }
          Instruction{
                      //mise a jour quadruplet
                      QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
                    } |
          ;
blockEnd : ENDCHECK
          {
                strcpy(idfSwitch,depiler(&pile1));
                //mise a jour quadruplet
                QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);

                empiler_Str(&pile1,idfSwitch);

                //mise à jour du cpt du endCheck
                cptEndCheck=atoi(depiler(&pile2));
                cptEndCheck++;
                empiler_Int(&pile2,cptEndCheck);

                //empiler la pos du BR de fin du check
                empiler_Int(&pile3,qc);
                createQuad("BR","","","");
              }
            |{
    									strcpy(idfSwitch,depiler(&pile1));
    									//mise a jour quadruplet br
    									QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);

    									//generer un quadruplet pour le default
    									strcpy(defaultTemp,first(pile1));
    									createQuad("=","1","",defaultTemp);

    									empiler_Str(&pile1,idfSwitch);
    								}  ;
/*==========================Condition===============================================*/


condition1: SUP {$$=6;} |
            INF {$$=5;} |
            EQUAL {$$=1;} |
            SUPEQUAL {$$=2;} |
            INFEQUAL {$$=3;} |
            DIFF {$$=4;} ;
/*==========================FOR===============================================*/
loop : FOR PARENTHESEGauche Aff
        {
           empiler_Int(&pile1,qc);
        }
        expressionC //condition
        {
           empiler_Int(&pile2,qc);
           createQuad("BZ","",QuadR[qc-1].res,"");
           empiler_Int(&pile2,qc);
          createQuad("BR","","","");
           empiler_Int(&pile2,qc);
        }
          PNTV Aff1 PARENTHESEDroite DO
           {
             createQuad("BR",first(pile1),"","");
               strcpy(tempp,depiler(&pile2));
               QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
              empiler_Str(&pile2,tempp);
          }
          Instruction
           {
               createQuad("BR",depiler(&pile2),"","");
               QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
           }
           ENDFOR
           {
               depiler(&pile1);
           };
//init : IDF AFFECTATION ENTIER   ;
Aff1 : IDF AFFECTATION expressionA;


%%
int yyerror(){
  printf("err synt a la ligne %d , colonne %d \n",yylineno,col );
}
int main()
{
  qc=0;
  init(listesymbol);
  yyin=fopen("pgm.txt","r");
  yyparse();
  displayTS(listesymbol);
  displayQuad();
  optimisation();
  displayQuad();
  ToAssembly(listesymbol);
return 0;
}
