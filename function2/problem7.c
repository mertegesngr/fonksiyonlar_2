#include <stdio.h>
#include <stdlib.h>


int buyukTsayi (int _dizi[]){

    int enBuyuk=_dizi[0] ;

    for (int i = 0 ; i<6; i++ ){

        if(_dizi[i]>enBuyuk){

            enBuyuk=_dizi[i]; 
        }
    } 

    printf("dizinin en büyük terimi : %d",enBuyuk);
return enBuyuk; 
}

int main (){



    int dizi [6]={50,60,70,80,90,100}; 

buyukTsayi(dizi); 

    return 0 ; 
}