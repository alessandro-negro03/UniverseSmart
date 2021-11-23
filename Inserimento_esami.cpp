#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define CSTR 15 
#define Esami "Esami_da_sostenere.csv"

 struct s_esame 
    {
    int ID_materia;
    int ID_matricola;
    }; 

struct s_esame esame; 
int MyInput (int);
int MyOut(int);

int main()
{

int numRecord, i;

printf("Quante esami vuoi inserire? ");
scanf ("%d", &numRecord);
printf("\n");



  for (i=0;i<numRecord;i++)
    {
      MyInput(i);
      MyOut(i);
    }
  return i-1;
}


int MyInput (int index) 

{
   printf("Esame %d \n",index);
   printf("  Id matricola: ");
   scanf("%d", &esame.ID_materia);
   printf("  Id materia: ");
   scanf("%d", &esame.ID_matricola);
   
   printf("\n");

return 0;
}

int MyOut(int index)

{

FILE *out;
out = fopen(Esami,"a"); //apertura del file append

if (out)
  {
   fprintf(out,"\nID Materia:, %d\n", esame.ID_materia);
   fprintf(out,"ID Matricola:, %d\n", esame.ID_matricola);
   fclose(out);
   return 0;
   }
else
  {
   printf("Errore apertura file");
   return -1;
  }

}
