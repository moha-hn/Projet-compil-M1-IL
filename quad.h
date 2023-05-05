typedef struct element_qdr{
    char *opt;
    char *opd1;
    char *opd2;
    char *res;
}quad;

typedef struct element_pile{
	char *donnee;
	struct element_pile *prc;
}pile;

char tempp[5];
char idfSwitch[15];
char defaultTemp[15];
char idfQuad[15];

quad QuadR[1000];

pile *pile1,*pile2,*pile3;


int qc;

char* ToSTR(int i);
void createQuad(char* opt, char* opd1, char* opd2, char* res);
void createQuadA(int type, char *cond1, char *cond2, char *res);
void createQuadL(int type, char *cond1, char *cond2, char *res);
void empiler_Str(pile **p,char *donne);
void empiler_Int(pile **p,int donne);
char* first(pile*p);
char* depiler(pile**p);
void displayQuad();
