#include <stdio.h>
#include <stdlib.h>

main()
{
    int n1,n2,n3,suma;
    float resultado_promedio;
    printf("Ingrese el primer n�mero: ");
    scanf("%d",&n1);
    printf("Ingrese el segundo n�mero: ");
    scanf("%d",&n2);
    printf("Ingrese el tercer n�mero: ");
    scanf("%d",&n3);
    suma=n1+n2+n3;
    resultado_promedio = suma/3;
    printf("El promedio obtenido es de: %f",resultado_promedio);

    return 0;
}
