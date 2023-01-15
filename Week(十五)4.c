#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000],str2[1000];
    int A = 0 , B = 0 ;
    gets(str1);
    gets(str2);
    for (int i = 0 ; str1[i] != '\0' ; i++)
    {
        if (str1[i] == str2[i])
        {
            str1[i] = ' ';
            str2[i] = '*';
            A++;
        }
    }
    for (int k = 0; str1[k] != '\0' ; k++)
    {
        for (int j = 0 ; str2[j] != '\0' ; j++)
        {
            if (str1[k] == str2[j])
                B++;
        }
    }
    printf("%d %d\n",A,B);
}
