#include<stdio.h>
#include<math.h>

int main(){
      int tcase/*�`�@���X��*/,dcase/*�U�O��Ʀ��X��*/;
      int a,b,i,j,n/*�w�j�Ƨǧ�X�Ѥp��j��*/,temp/*�洫�Ϊ�*/;
      scanf("%d",&tcase);
      if(tcase>0 && tcase<100){
      for (a=1;a<=tcase;a++) {/*��J��tcase�����*/
           scanf("%d",&dcase);
            float x[dcase],y[dcase];/*�Ψ��x�sXY�b*/;
            for (j = 0; j < n; j++){/*��Jdcase��XY�y��*/
                scanf("%lf", &(x[j]));
                if (x[j] < 0 || x[j] > 30000)
                    break;
                scanf("%lf", &(y[j]));
                if (y[j] < 0 || y[j] > 8848)
                    break;
            }
        for(n=1;n<dcase;n++) {/*�w�j�Ƨ�X�Ѥp��j*/
          for (i=0;i<dcase-n;i++){
            if (x[i]>x[i+1]){
              temp=x[i+1];
              x[i+1]=x[i];
              x[i]=temp;
              temp=y[i];
              y[i]=y[i+1];
              y[i+1]=temp;
            }
      }
  }
   float len=0.0/*�p�����*/;
  b = (dcase - 1);
  len += sqrt(((x[b-1]-x[b])*(x[b-1]-x[b]))+((y[b-1]-y[b])*(y[b-1]-y[b])));
  a=y[b-1];
  for (b=(dcase-2);b>0;b--) {/*�q�̫�@�I�}�l���e��Y�b��L�j,�M��Ѭۦ��κ�X�Ӯg����,����a���y���ܦ�b���y�ЦA�~���*/
    if (y[b-1]>a){/*�ۦ��κ�k:(a��y-b��y)*(a��xy�b�Pa�e���@�Ixy�b������)/(a��y�b)*/
    len+=((y[b-1]-a)*(sqrt((x[b-1]-x[b])*(x[b-1]-x[b])+(y[b-1]-y[b])*(y[b-1]-y[b])))/(sqrt((y[b-1]-y[b])*(y[b-1]-y[b]))));
    a=y[b-1];
    }
  }
  printf("%.2f\n",len);/*�⧹��M�X����*/
  a=1;
      }
}
}




