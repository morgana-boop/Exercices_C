#include <stdio.h>
#define NUMERT 100
int a[NUMERT];

int main ()
{
    for(int i = 0; i < NUMERT; i++)
    {
        a[i] = 12;
        printf("Valore de i %d, valores de a[] %d\n", i, a[i]);
    }
    
    return 0;
}