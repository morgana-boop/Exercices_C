#include <stdio.h>

void lista(int *vect, int val)
{
    for(int i = 0; i < val; i++)
    {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vect[i]);
    }
    for(int j = 0; j < val; j++)
    {
        printf("Valor da %dº posição é: %d\n", j + 1, vect[j]);
    }
}

int main ()
{   
    int val;
    printf("Digite quantidade de vetores: ");
    scanf("%d", &val);
    int vect[val];

    lista(vect, val);
}