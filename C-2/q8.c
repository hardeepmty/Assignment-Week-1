#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[150];
    int vowel = 0, consonant = 0;
    printf("enter the string ");
    scanf("%s", &str);

    for (int i = 0; i < str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else
            consonant++;
    }
    printf("vowels:%d\n", vowel);
    printf("consonanats:%d\n", consonant);

    return 0;
}