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
  Date date;
} Donneur;

#endif

Donneur collect(char* nom,char* cin,int j,int m,int a);
int export(Donneur d);
void populate(Donneur T[],int* n);
char* date_to_string(Date d);
int delete_donneur(char* cin);
int searchDonneurByCIN(const char *cin, Donneur *foundDonneur);