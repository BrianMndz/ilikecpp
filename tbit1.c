#include <stdio.h>

int *ptr(int n){
    int *p = &n;
    return p;
}

int main(void)
{
    int *nn = ptr(7);
    printf("%d, %d\n", *nn, nn);
    return 0;
}
