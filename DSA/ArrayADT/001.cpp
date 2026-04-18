#include <stdio.h>
#include <iostream>
using namespace std;
struct Array{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("Elements are : \n");
    for(i=0;i<arr.size;i++)
        cout << arr.A[i] << endl;
}
int main()
{
    struct Array arr;
    printf("Enter the size of the array");
    scanf("%d" , &arr.size);

    arr.A=new int[arr.size];

    printf("Enter the number of elements you want to insert\n");
    scanf("%d",&arr.length);

    printf("Enter the elements of the array\n");
    for(int i = 0; i<arr.length;i++)
        scanf("%d" , &arr.A[i]);

    printf("The size of the array is %d\n", arr.size);

    Display(arr);
}