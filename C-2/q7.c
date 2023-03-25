#include <stdio.h>

int sort(int *a, int n)
{
    int i, j, temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[i] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int print(int *a, int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[] = {-2, 9, -78, -14, 5};
    int n = 5;
    sort(a, n);
    print(a, n);
    return 0;
}