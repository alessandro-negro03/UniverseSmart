#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define CSTR 15 
#define Anagrafica_matricole "Anagrafica_matricole.csv"

 struct s_matricola 
    {
    char cognome[CSTR];
    char nome [CSTR];
    int  id;
    }; 

struct s_matricola matricola; 
int MyInput (int);
int MyOut(int);

int main()
{

int numRecord, i;

printf("Quante matricole vuoi inserire?");
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
   printf("Matricola %d \n",index);
   printf("  Cognome: ");
   scanf("%s", matricola.cognome);
   printf("     Nome: ");
   scanf("%s", matricola.nome);
   matricola.id = index;
   printf("\n");

return 0;
}

int MyOut(int index)

{

FILE *out;
out = fopen(Anagrafica_matricole,"a"); //apertura del file append

if (out)
  {
   fprintf(out,"\n Cognome:, %s\n", matricola.cognome);
   fprintf(out,"Nome:, %s\n", matricola.nome);
   fprintf(out,"ID:, %d\n", matricola.id);
   fclose(out);
   return 0;
   }
else
  {
   printf("Errore apertura file");
   return -1;
  }

}
