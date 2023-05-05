#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ts.h"


int hash(char* var){
 int i=0,all=0;
  while(var[i]!='\0'){
    all+=var[i]%7;
    i++;
  }
  all=all%7;
  return all;
}

int lookup(char* var ,ts ls){

int index=hash(var);

ts p =(ls[index]).svt;
while (p != NULL ){
  if(strcmp( var, p->nom)==0) return 1;
  p=p->svt;
}
return 0;
}

void insert(char* var,int typ,int natur,float taill,ts ls){
  int index = index=hash(var);
  ts element = malloc(sizeof(noeud));
  strcpy(element->nom,var);
  element->type=typ;
  element->nature=natur;
  element->taille=taill;
  element->svt=(ls[index]).svt;
  (ls[index]).svt=element;

}

int getType(char * var ,ts ls){
  int index=hash(var);
  ts p =(ls[index]).svt;
  while (p != NULL ){
    if(strcmp( var, p->nom)==0){return p->type;}
    p=p->svt;
  }
  return -1;
}


int getNature(char *var,ts ls){
  int index=hash(var);
  ts p =(ls[index]).svt;
  while (p != NULL ){
    if(strcmp( var, p->nom)==0){return p->nature;}
    p=p->svt;
  }
  return -1;
}





void displayTS(ts ls){
  char nature[10];
  char type[10];
  printf(":::::::::::::::::::::::::: Table des symboles :::::::::::::::::::::::::::::\n:");
  printf("________________________________________________________________________________\n");
  printf("|\t ligne \t|\t nom \t|\t type \t|\t nature |\t taille |\n");
  int i;
  for( i=0;i<7;i++)
  {
    ts p =(ls[i]).svt;
    while (p != NULL )
    {
        if(p->nature==0) strcpy(nature,"IDF");
        else strcpy(nature,"CONST");

        if(p->type==2) strcpy(type,"FLT");
        if(p->type==1) strcpy(type,"CHR");
        if(p->type==0) strcpy(type,"INT");

  printf("________________________________________________________________________________\n");
        printf("|\t %d \t|\t  %s \t|\t %s \t|\t %s \t|\t %.2f \t|\n",i,p->nom,type,nature,p->taille);

        p=p->svt;
    }

  }
        printf("________________________________________________________________________________\n");
}
void init(ts ls){
  int i;
  for( i=0;i<7;i++){
    (ls[i]).svt=NULL;
  }
}
