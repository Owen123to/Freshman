#include<stdio.h>
#include<math.h>

int main(){
      int tcase/*總共有幾筆*/,dcase/*各別資料有幾筆*/;
      int a,b,i,j,n/*泡沫排序把X由小到大排*/,temp/*交換用的*/;
      scanf("%d",&tcase);
      if(tcase>0 && tcase<100){
      for (a=1;a<=tcase;a++) {/*輸入有tcase筆資料*/
           scanf("%d",&dcase);
            float x[dcase],y[dcase];/*用來儲存XY軸*/;
            for (j = 0; j < n; j++){/*輸入dcase個XY座標*/
                scanf("%lf", &(x[j]));
                if (x[j] < 0 || x[j] > 30000)
                    break;
                scanf("%lf", &(y[j]));
                if (y[j] < 0 || y[j] > 8848)
                    break;
            }
        for(n=1;n<dcase;n++) {/*泡沫排序X由小到大*/
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
   float len=0.0/*計算長度*/;
  b = (dcase - 1);
  len += sqrt(((x[b-1]-x[b])*(x[b-1]-x[b]))+((y[b-1]-y[b])*(y[b-1]-y[b])));
  a=y[b-1];
  for (b=(dcase-2);b>0;b--) {/*從最後一點開始往前找Y軸比他大,然後由相似形算出照射長度,之後a的座標變成b的座標再繼續找*/
    if (y[b-1]>a){/*相似形算法:(a的y-b的y)*(a的xy軸與a前面一點xy軸的長度)/(a的y軸)*/
    len+=((y[b-1]-a)*(sqrt((x[b-1]-x[b])*(x[b-1]-x[b])+(y[b-1]-y[b])*(y[b-1]-y[b])))/(sqrt((y[b-1]-y[b])*(y[b-1]-y[b]))));
    a=y[b-1];
    }
  }
  printf("%.2f\n",len);/*算完後映出長度*/
  a=1;
      }
}
}




