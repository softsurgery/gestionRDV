#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 100
#define NAME_SIZE 256
#define CIN_SIZE 10

typedef struct {
	int j;
    int m;
    int a;
} Date;


typedef struct {
  char nom[NAME_SIZE];
  char cin[CIN_SIZE];
  Date date;
} Donneur;

int main(){
    
    FILE *file = fopen("donneur.dat", "rb");
    if (file == NULL)
    {
        perror("Error opening file");
    }

    Donneur donneurs[ARRAY_SIZE]; 
    size_t n = 0;                

    while (1)
    {
        if (n >= ARRAY_SIZE)
        {
            fprintf(stderr, "Array is full. Consider increasing ARRAY_SIZE.\n");
            break;
        }

        size_t elementsRead = fread(&donneurs[n], sizeof(Donneur), 1, file);

        if (elementsRead != 1)
        {
            if (feof(file))
            {
                break; // End of file reached
            }
            else
            {
                perror("Error reading from file");
                fclose(file);
            }
        }
        n++;
    }
    for(int i=0;i<n;i++){
        printf("%s %s %d %d %d\n", donneurs[i].nom, donneurs[i].cin, donneurs[i].date.j, donneurs[i].date.m, donneurs[i].date.a);
    }

    fclose(file);
}
