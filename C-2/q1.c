#include <stdio.h>
int count_occurances(int arr[], int n, int num)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 6};
    int n = 9;
    int num = 3;
    int occurances = count_occurances(arr, n, num);
    printf("the number %d occurs %d times.", num, occurances);
    return 0;
}