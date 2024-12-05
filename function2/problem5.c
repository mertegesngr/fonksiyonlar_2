#include <stdio.h>
#include <stdlib.h>

int konum(int _dizi[],int _sayi){
    int konum ; 
for(int i =0 ; i<5 ; i++){

if(_dizi[i]==_sayi){
konum = i ; 
}

}
printf("girdiğiniz sayının dizideki indexi : %d",konum);
return konum ; 
}



int main(){

int dizi [5]={1,2,3,4,5}; 
int sayi ; 

printf("hangi sayının konumunu görmek istiyorsunuz : "); 
scanf("%d",&sayi); 
konum(dizi,sayi);





    return 0 ; 
}