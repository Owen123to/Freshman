char *replace(char *source, char *pattern, char *replacement)
{
   char s[1000];
   char *p=strstr(source,pattern);
   int a=strlen(pattern);
   int b=strlen(replacement);
   char *q=(p+a);
   strcpy(s,q);
   *p='\0';
   strcat(p,replacement);
   strcat(p,s);
   return source;
}
char *replaceAll(char *source, char *pattern, char *replacement)
{
   char s[1000];
   int a=strlen(pattern);
   int b=strlen(replacement);
   char *p;
   while(NULL!=strstr(source,pattern))
   {
   p=strstr(source,pattern);
   char *q=(p+a);
   strcpy(s,q);
   *p='\0';
   strcat(p,replacement);
   strcat(p,s);
   }
   return source;
}
