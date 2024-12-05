#include <stdio.h>
#include <stdlib.h>


void diziYazdir(int leng ,int _dizi[]){

for (int i=0;i<leng ; i++){
    printf("%d\n",_dizi[i]); 
}


}


int main(){

int dizi [5]={1,2,3,4,5};

diziYazdir(5,dizi);






    return 0 ; 
}