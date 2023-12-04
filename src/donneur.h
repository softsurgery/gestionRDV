//DONNEUR_H

#ifndef ARRAY_SIZE
#define ARRAY_SIZE 100
#endif

#ifndef NAME_SIZE
#define NAME_SIZE 256
#endif

#ifndef CIN_SIZE
#define CIN_SIZE 10
#endif

#ifndef ETS_SIZE
#define ETS_SIZE 10
#endif

#ifndef DATE_STRUCT
#define DATE_STRUCT

typedef struct {
	int j;
    int m;
    int a;
} Date;

#endif

#ifndef DONNEUR_STRUCT
#define DONNEUR_STRUCT

typedef struct {
  char nom[NAME_SIZE];
  char cin[CIN_SIZE];
  char sexe;
  char ets[ETS_SIZE];
  Date date;
} Donneur;

#endif

Donneur collect(char* nom,char* cin,int j,int m,int a,char sexe,char* ets);
int export(Donneur d);
void populate(Donneur T[],int* n);
char* date_to_string(Date d);
int delete_donneur(char* cin);
int searchDonneurByCIN(const char *cin, Donneur *foundDonneur);
int loadETS(char* ETS[],int* n);
int nbETS(char nomFichier[]);
int listRDV(char nomFichier[],char ETS[],int jour,int mois,int annee);
float moyRDV_ETS(char nomFichier[],int jour,int mois,int annee);