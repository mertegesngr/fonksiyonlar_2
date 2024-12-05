#include <stdio.h>
#include <stdlib.h>


void tersYazdir(int leng , int _dizi[]){
int tersDizi[leng];
int a =leng-1; 
for (int i =0 ; i<leng; i++){
tersDizi[i] =_dizi[a];
a--; 
}
for (int i=0 ;i<leng;i++){
    printf("%d\n",tersDizi[i]);
}


}

int main(){


int dizi[5]={1,2,3,4,5}; 

tersYazdir(5,dizi);


    return 0 ; 
}