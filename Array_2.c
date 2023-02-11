#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("How many number do you want to sum: ");
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter a value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    printf("\nSum of %d is %d", n, sum);
    return 0;
}