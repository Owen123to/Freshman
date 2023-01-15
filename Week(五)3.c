#include<stdio.h>
#include<string.h>
int main(void){
      int a,b,c,flag;
     char str [256] ;
     scanf("%s",str);
     c=strlen(str);
     for (a=0,b=c-1;a<=b;a++,b--){
        if (str[a]==str[b]-32 || str[b]==str[a]-32 || str[a]==str[b]) {
            flag=1;
        }
        else {
            flag=0;
            break ;
     }
     }
     if (flag==1)
        printf("%s is a palindrome.\n",str);
     if (flag==0)
        printf("%s is not a palindrome.\n",str);
}
