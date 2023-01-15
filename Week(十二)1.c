char *mystrcat(char *dest, char *src)
{
    int k = 0;
  while (*(dest + k) != '\0')
    k++;
  for (; *src != '\0' ; k++)
    {
        *(dest + k) =  *src;
         src++;
    }
    *(dest + k) = '\0';
  return dest;
}
char *mystrncat(char *dest, char *src, int n)
{
    int k = 0;
  while (*(dest + k) != '\0')
    k++;
  for (int count = 0; (*src != '\0') && (n>count)  ; k++)
    {
        *(dest + k) =  *src;
         src++;
         count++;
    }
    *(dest + k) = '\0';
  return dest;
}

