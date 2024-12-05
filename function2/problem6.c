#include <stdio.h>
#include <stdlib.h>

int iHarf(char _cumle[] , char _harf[]){

int sayac =0 ; 
for (int i =0 ; i<50 ; i++){

    if(_harf[0]==_cumle[i]){
        sayac++; 
    }
}

printf("%c harfi %d kadar tekrar etmiştir",_harf[0],sayac); 

return sayac ; 
}


int main(){

char cumle[50]={""}; 
char harf[1]; 
printf("cümle gir : "); 
gets(cumle); 
printf("hangi harfin kaç kez tekrar ettiğini bulmak istiyorsunuz:"); 
gets(harf); 

iHarf(cumle,harf);
    return 0 ; 
}