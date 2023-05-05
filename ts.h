#ifndef TS_H
# define TS_H

typedef struct elm *ts;
typedef struct elm
  { char nom[8];
   int type;
   int nature;
   float taille;
   ts svt;
 }noeud;

 typedef struct
   { char nom[8];
    int type;
    int nature;
    float taille;
  }tt;
int save_type;
char * nomPROG;

 ts listesymbol[7];
int hash(char*);
int lookup (char*,ts);
void insert(char*,int,int,float,ts);
int getType(char * ,ts );
void init(ts);
void displayTS(ts);
#endif
