int countChar(char str[], int type)
{
   int alp = 0,dig = 0 ,other = 0;
   for (int i = 0;str[i] != '\0';i++)
   {
       if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <='z'))
        alp++;
       else if (str[i] >= '0' && str[i] <= '9')
        dig++;
       else
        other++;
   }
   switch (type)
   {
       case 1:
       return alp;
       case 2:
       return dig;
       case 3:
       return other;
   }
}
