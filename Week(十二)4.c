#include<stdio.h>
#include<string.h>

int main () {
      char  str [9999];
      char  str1 [9999];
      gets(str);
      int a = strlen(str);
      int b , c , d ,e=0;
      for ( b = a-1; b>=0 ; b--)
        {
            if (str[b] != ' ')
            {
                for ( c = b; c>=0 ;c--)
                {
                    if (str[c] == ' ')
                    {
                        for ( d = (c+1)  ; d<=b ; d++)
                        {
                            str1[e] = str[d];
                            e++;
                            if (d == b)
                            {
                                str1[e] = ' ';
                                e++;
                            }
                        }
                        break;
                    }
                    if (c == 0)
                    {
                       for (d = c ; d<=b ; d++)
                       {
                           str1[e] = str[d];
                            e++;
                       }
                    }
                }
                b = c;
            }
        }
        puts(str1);
}

