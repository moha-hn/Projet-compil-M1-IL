%{
  #include "syn.tab.h"
  extern YYSTYPE yylval;
  int col=0;
  long enn;
%}

%option yylineno

comentIntr [^-\n]*|("\\-")*
lettre [a-zA-Z]
chiffre [0-9]
cchar '.'
reel ({chiffre}+)("."({chiffre}*))
entier {chiffre}+
idf {lettre}+"_"*{lettre}+{chiffre}*|{lettre}+"_"*{chiffre}+|{lettre}
comment "--"{comentIntr}*"--"

%%
"PROGRAM" {col+=yyleng;return PROGRAM;}
"Begin" {col+=yyleng;return Begin;}
"End" {col+=yyleng;return End;}

"CONSTANT" {yylval.CHAINE=strdup(yytext);col+=yyleng;return CONSTANT;}
"INT" {yylval.CHAINE=strdup(yytext);col+=yyleng;return INT;}
"FLT" {yylval.CHAINE=strdup(yytext);col+=yyleng;return FLT;}
"CHR" {yylval.CHAINE=strdup(yytext);col+=yyleng;return CHR;}

"IF" {col+=yyleng;return IF;}
"THEN" {col+=yyleng;return THEN;}
"ELSE" {col+=yyleng;return ELSE;}
"ENDIF" {col+=yyleng;return ENDIF;}

"CASE" {col+=yyleng;return CASE;}
"CHECK" {col+=yyleng;return CHECK;}
"SO" {col+=yyleng;return SO;}
"ENDCHECK" {col+=yyleng;return ENDCHECK;}
"DEFAULT" {col+=yyleng;return DEFAULT;}
"ENDCASE" {col+=yyleng;return ENDCASE;}

"FOR" {col+=yyleng;return FOR;}
"DO" {col+=yyleng;return DO;}
"ENDFOR" {col+=yyleng;return ENDFOR;}

{comment} {yylval.CHAINE=strdup(yytext);col+=yyleng;printf("est un commentaire");}
{idf} {if(yyleng>8) printf("IDF trop long");
        else
        {
          yylval.CHAINE=strdup(yytext);col+=yyleng;return IDF;
        }
      }
{reel} {yylval.CHAINE=strdup(yytext);col+=yyleng;return REEL;}
{entier} {yylval.CHAINE=strdup(yytext);col+=yyleng;return ENTIER;}
{cchar} {yylval.CHAINE=strdup(yytext);col+=yyleng;return CCHAR;}

"+" {yylval.CHAINE=strdup(yytext);col+=yyleng;return PLUS;}
"-" {yylval.CHAINE=strdup(yytext);col+=yyleng;return MINUS;}
"*" {yylval.CHAINE=strdup(yytext);col+=yyleng;return MUL;}
"/" {yylval.CHAINE=strdup(yytext);col+=yyleng;return DIV;}
"^" {yylval.CHAINE=strdup(yytext);col+=yyleng;return POW;}

">" {yylval.CHAINE=strdup(yytext);col+=yyleng;return SUP;}
"<" {yylval.CHAINE=strdup(yytext);col+=yyleng;return INF;}
"==" {yylval.CHAINE=strdup(yytext);col+=yyleng;return EQUAL;}
"!=" {yylval.CHAINE=strdup(yytext);col+=yyleng;return DIFF;}
">=" {yylval.CHAINE=strdup(yytext);col+=yyleng;return SUPEQUAL;}
"<=" {yylval.CHAINE=strdup(yytext);col+=yyleng;return INFEQUAL;}

"&" {yylval.CHAINE=strdup(yytext);col+=yyleng;return AND;}
"|" {yylval.CHAINE=strdup(yytext);col+=yyleng;return OR;}
"!" {yylval.CHAINE=strdup(yytext);col+=yyleng;return NOT;}

"=" {yylval.CHAINE=strdup(yytext);col+=yyleng;return AFFECTATION;}

"(" {yylval.CHAINE=strdup(yytext);col+=yyleng;return PARENTHESEGauche;}
")" {yylval.CHAINE=strdup(yytext);col+=yyleng;return PARENTHESEDroite;}
"[" {yylval.CHAINE=strdup(yytext);col+=yyleng;return CROCHETGauche;}
"]" {yylval.CHAINE=strdup(yytext);col+=yyleng;return CROCHETDroite;}
"{" {yylval.CHAINE=strdup(yytext);col+=yyleng;return ACCOLADEGauche;}
"}" {yylval.CHAINE=strdup(yytext);col+=yyleng;return ACCOLADEDroite;}
";" {yylval.CHAINE=strdup(yytext);col+=yyleng;return PNTV;}
":" {yylval.CHAINE=strdup(yytext);col+=yyleng;return DEUXP;}
"," {yylval.CHAINE=strdup(yytext);col+=yyleng;return VIRGULE;}
[\n] {col=0;yylineno++;}
"." {printf("erreur lexicale ligne %d  :p\n",yylineno);}
%%
int yywrap(){
 return 1;
}
