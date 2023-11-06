#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "donneur.h"

Donneur collect(char *nom, char *cin, int j, int m, int a){  
  Donneur d;
  strcpy(d.nom, nom);
  strcpy(d.cin, cin);
  d.date.a = a;
  d.date.a = m;
  d.date.a = j;
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

char *date_to_string(Date d)
{
  char *s = malloc(12);
  sprintf(s, "%d/%d/%d", d.j, d.m, d.a);
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