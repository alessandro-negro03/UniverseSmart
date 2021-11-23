#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define CSTR 15 
#define Materie "Materie.csv"

 struct s_materia 
    {
    char nome [CSTR];
    int  id;
    }; 

struct s_materia materia; 
int MyInput (int);
int MyOut(int);

int main()
{

int numRecord, i;

printf("Quante materie vuoi inserire?");
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
   printf("Materia %d \n",index);
   printf("  Nome materia: ");
   scanf("%s", materia.nome);
   materia.id = index;
   printf("\n");

return 0;
}

int MyOut(int index)

{

FILE *out;
out = fopen(Materie,"a"); //apertura del file append

if (out)
  {
   fprintf(out,"\n Nome:, %s\n", materia.nome);
   fprintf(out,"ID:, %d\n", materia.id);
   fclose(out);
   return 0;
   }
else
  {
   printf("Errore apertura file");
   return -1;
  }

}
