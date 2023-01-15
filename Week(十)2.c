int between(int *a, int *b)
{
  int *i,sum=0;
  for(i=a;i<b;i++){
    sum+=*i;
  }
  return sum;
}
