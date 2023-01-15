int *findMax(int *a, int *b)
{
  int *max = a;
  while (a<b)
  {
      if (*a > *max)
        max = a;
      a++;
  }
  return max;
}
