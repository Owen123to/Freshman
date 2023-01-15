#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countChar(char str[], int type)
{
  int i,j=strlen(str),count=0;
  if(type==1)
  {
    for(i=0;i<j;i++)
    {
      if(isalpha(str[i]) !=0)
        count++;
    }
  }
   else if(type==2)
  {
    for(i=0;i<j;i++)
    {
      if(isdigit(str[i]) !=0)
        count++;
    }
  }
   else if(type==3)
  {
    for(i=0;i<j;i++)
    {
      if(isdigit(str[i]) ==0 && isalpha(str[i]) ==0 )
        count++;
    }
  }
  return count;
}
