#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "donneur.h"

Donneur collect(char *nom, char *cin, int j, int m, int a,char sexe,char* ets){  
  Donneur d;
  strcpy(d.nom, nom);
  strcpy(d.cin, cin);
  d.date.a = a;
  d.date.m = m;
  d.date.j = j;
  d.sexe = sexe;
  strcpy(d.ets,ets);
  return d;
}

int export(Donneur d){
  FILE *fp = fopen("donneur.dat", "ab");
  if (fp == NULL){
    fprintf(stderr,"Impossible d'ouvrir le fichier\n");
    return 0;
  } else{
    fwrite(&d, sizeof(Donneur), 1, fp);
    fclose(fp);
    return 1;
  }
}

void populate(Donneur T[], int *n)
{
  FILE *fp = fopen("donneur.dat", "rb");
  if (fp == NULL)
  {
    perror("Error opening file");
  }
  else
  {
    *n = 0;
    while (1)
    {
      if (*n >= ARRAY_SIZE)
      {
        fprintf(stderr, "Array is full. Consider increasing ARRAY_SIZE.\n");
        break;
      }

      int elementsRead = fread(&T[*n], sizeof(Donneur), 1, fp);
      if (elementsRead != 1)
      {
        if (feof(fp))
          break;
        else
        {
          perror("Error reading from file");
          fclose(fp);
        }
      }
      (*n)++;
    }

    fclose(fp);
  }
}

int delete_donneur(char *cin)
{
  FILE *fp = fopen("donneur.dat", "rb");
  if (fp == NULL)
  {
    perror("Error opening file");
    return -1;
  }

  FILE *tempFile = fopen("temp_file.bin", "wb");
  if (tempFile == NULL)
  {
    perror("Error creating temp file");
    fclose(fp);
    return -1;
  }

  Donneur donneur;
  int deleted = 0;

  while (fread(&donneur, sizeof(Donneur), 1, fp) == 1)
  {
    if (strcmp(donneur.cin, cin) == 0)
    {
      deleted = 1;
    }
    else
    {
      fwrite(&donneur, sizeof(Donneur), 1, tempFile);
    }
  }

  fclose(fp);
  fclose(tempFile);

  remove("donneur.dat");
  rename("temp_file.bin", "donneur.dat");
  return deleted;
}

char *date_to_string(Date d) {
    int length = snprintf(NULL, 0, "%d/%d/%d", d.j, d.m, d.a);
    char *s = (char *)malloc(length + 1);

    if (s != NULL) {
        snprintf(s, length + 1, "%d/%d/%d", d.j, d.m, d.a);
    }

    return s;
}

int searchDonneurByCIN(const char *cin, Donneur *foundDonneur) {
    FILE *file = fopen("donneur.dat", "rb"); 
    if (file == NULL) {
        perror("Error opening file");
        return 0;
    }

    Donneur donneur;
    int found = 0; 

    while (fread(&donneur, sizeof(Donneur), 1, file) == 1) {
        if (strcmp(donneur.cin, cin) == 0) {
            *foundDonneur = donneur;
            found = 1;
            break; 
        }
    }
    fclose(file);
    return found;
}

int loadETS(char* ETS[],int* n){
  FILE* file = fopen("ets.txt", "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", "ets.txt");
        return 0;
    }

    char buffer[256];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0';
        ETS[*n] = malloc(strlen(buffer));
        strcpy(ETS[*n],buffer);
        if (ETS[*n] == NULL) {
            fprintf(stderr, "Memory allocation error\n");
            fclose(file);
            return 0;
        }
        (*n)++;
    }
    fclose(file);
    return 1;
}

int nbETS(char nomFichier[]){
  int n = 0;
  FILE* file = fopen(nomFichier, "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", nomFichier);
        return 0;
    }

    char buffer[256];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        n++;
    }
    fclose(file);
    return n;
}

int listRDV(char nomFichier[],char ETS[],int jour,int mois,int annee){
  FILE *fp = fopen("donneur.dat", "rb");
  if (fp == NULL){
    perror("Error opening file");
    return 0;
  }
  else {
    int n = 0;
    Donneur d;
    while (1){
      if (n >= ARRAY_SIZE){
        fprintf(stderr, "Array is full. Consider increasing ARRAY_SIZE.\n");
        break;
      }

      int elementsRead = fread(&d, sizeof(Donneur), 1, fp);
      if (elementsRead != 1){
        if (feof(fp)) break;
        else{
          perror("Error reading from file");
          fclose(fp);
        }
      }
      if (d.date.j == jour && d.date.m == mois && d.date.a == annee && strcmp(ETS,d.ets)) n++;
    }
    fclose(fp);
    return n;
  }
}

float moyRDV_ETS(char nomFichier[],int jour,int mois,int annee){
  int nbets = nbETS(nomFichier);
  Donneur T[ARRAY_SIZE];
  int n = 0;
  populate(T,&n);
  return n/nbets;
}

