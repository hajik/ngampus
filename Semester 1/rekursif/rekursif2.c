#include <stdio.h>
#include <stdlib.h>
float pangkat(int x, int y);
int faktorial(int x);
float eksponen(int x);
int main()
{
    int nilaiX;
    float nilaiEksponen;
    printf("n Eksponensial dengan deret McLaurin"
                 "n ===============n"
           "n Masukan nilai x : ");
           scanf("%d",&nilaiX);
           nilaiEksponen=eksponen(nilaiX);
           printf("n Hasil e^x jika x = %d adalah %.3f",nilaiX,nilaiEksponen);
    return 0;
}
float eksponen(int x){
    int i,jumlahDeret = 11;
    float hasil;
    hasil=1+x;
    for(i=1;i<=jumlahDeret;i++){
        hasil += (float)(pangkat(x,i+1)/faktorial(i+1));
    }
    return hasil;
}
float pangkat(int x,int y){
    int a;float hasil=1;
    if(y==0)
        hasil=1;
    if(y>0)
    for(a=1;a<=y;a++){
        hasil*=x;
    }
    if(y<0){
        int yy=-(y);
        for(a=1;a<=yy;a++){
        hasil*=x;
        }
        hasil = (float)1/hasil;
    }
    return hasil;
}

int faktorial(int x){
if (x == 1 || x == 0) return 1;
return x * faktorial(x-1);
}
