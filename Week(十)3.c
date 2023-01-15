int merger(int *a, int *b, int *c)
{
  int *i,*j,temp;
  for(j=c,i=a;j<c+5;j++,i++){
    *j=*i;
  }
  for(j=c+5,i=b;j<c+10;j++,i++){
    *j=*i;
    }
  for(int a=1;a<10;a++){
    for(j=c;j<(c+10-a);j++){
      if(*j>*(j+1)){
        temp=*j;
        *j=*(j+1);
        *(j+1)=temp;
      }
    }
  }
}
