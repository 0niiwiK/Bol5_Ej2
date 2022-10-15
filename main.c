#include <stdio.h>

int main() {
    int num=0,negativos=0,positivos=0,multiplos15=0,acumuladorpar=0;
    for (int i = 0; i < 10; ++i) {
        printf("Introduce un numero entero: ");
        scanf("%d",&num);
        if (num<0)
            negativos++;
        else
            positivos++;
        if (num%15==0)
            multiplos15++;
        if (num%2==0)
            acumuladorpar=acumuladorpar+num;
    }
    printf("Cantidad de valores negativos: %d\n",negativos);
    printf("Cantidad de valores positivos: %d\n",positivos);
    printf("Cantidad de valores multiplos de 15: %d\n",multiplos15);
    printf("Suma de valores pares: %d",acumuladorpar);
    return 0;
}
