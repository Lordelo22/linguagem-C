#include <stdio.h>

int main()
{

 int numero, cifra; 

 printf ("Insira o numero que voce deseja inverter:\n");
 scanf ("%i", &numero);

 if (numero >= 0) {
     do {
    cifra = numero % 10;
    printf ("%i", cifra);
    numero /= 10;
     } while (numero != 0); {
         printf ("\n");
     }
}

 else if (numero < 1) {
    numero = numero * -1;
    printf ("-"); 
    do {
        cifra = numero % 10; 
        printf ("%i", cifra);
        numero /= 10;
      } while (numero !=0); {
      printf ("\n");
     }
 }
 
 return 0;

}