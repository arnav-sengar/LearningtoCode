#include <stdio.h>
int main()
{
    int A[5] ={};
    int B[5] = {1,2,3,4,5};
    int C[5] = {1,2,3};
    int D[5] = {0};
    int E[] = {1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        printf("%d ", A[i]);
        printf("%d ", B[i]);
        printf("%d ", C[i]);
        printf("%d ", D[i]);
        printf("%d \n", E[i]);
    }
    return 0;
}