char *trim(char *dest)
{
  int i = 0;
  while(*(dest+i) == '\n' || *(dest+i) == '\t' || *(dest+i) == ' ')
    i++;
  char *dest1 = (dest+i);
  i = strlen(dest1);
  while (*(dest1 + i-1) == ' ' || *(dest1+i-1) == '\n' || *(dest1+i-1) == '\t')
    i--;
  *(dest1+i) = '\0';
  return dest1;
}
