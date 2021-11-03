#include <stdio.h>
#include "fonctions.h"
int main() {
int a;
int b;
printf ("\nSaisie du Premier Nombre: ");
scanf("%d",& a);
do { 
printf ("\nSaisie du second Nombre: ");
scanf("%d",& b);
}
while (b==0);
printf("\n %d + %d = %d", a, b,a+b);
return (0);
}
