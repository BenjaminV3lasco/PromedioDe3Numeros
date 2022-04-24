#include <stdio.h>
#include <stdlib.h>

main()
{
    int n1,n2,n3,suma;
    float resultado_promedio;
    printf("Ingrese el primer número: ");
    scanf("%d",&n1);
    printf("Ingrese el segundo número: ");
    scanf("%d",&n2);
    printf("Ingrese el tercer número: ");
    scanf("%d",&n3);
    suma=n1+n2+n3;
    resultado_promedio = suma/3;
    printf("El promedio obtenido es de: %f",resultado_promedio);

    return 0;
}
