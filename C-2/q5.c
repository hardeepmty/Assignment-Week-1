#include <stdio.h>
int main()
{
    int n;
    int a[10000], b[10000];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The original array is: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    printf("the copied array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}