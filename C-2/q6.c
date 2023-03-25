#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4};
    int maxCount = 0;
    int maxFreq;
    for (int i = 0; i < 6; i++)
    {
        int count = 0;
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxFreq = arr[i];
        }
    }
    printf("%d %d", maxFreq, maxCount);
    return 0;
}