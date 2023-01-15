#include<stdio.h>
#include<string.h>

int main ()
{
    char *ptr,a[100];
    gets(a);
    while(strrchr(a,' ') != NULL)
    {
        ptr=strrchr(a,' ');
        printf("%s ",ptr+1);
        *ptr='\0';
    }
    printf("%s",a);
}
