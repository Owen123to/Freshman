#include<stdio.h>
#include<string.h>

int main()
{
    int number;
    scanf("%d",&number);
    char str[number][51];

    for (int i = 0; i < number; i++)
        scanf("%s", str[i]);

    for (int i = 1; i <number; i++)
    {
        for (int j = 0; j < (number-i) ; j++)
        {
           if (strcmp(str[j], str[j+1]) > 0)
           {
            char temp[51];
            strcpy(temp, str[j]);
            strcpy(str[j], str[j + 1]);
            strcpy(str[j + 1], temp);
           }
        }
    }
        for (int i = 0; i < number; i++)
           {
               if (i!=(number-1))
               printf("%s\n", str[i]);
               else
                printf("%s", str[i]);
           }

    return 0;
}
