#include <stdio.h>
#include <stdlib.h>

void kSayisi(char _cumle[]){
int sayac =0 ; 
for(int i =0 ; i<50;i++){

if(_cumle[i]!='\0'){
    sayac++; 
}
else {
    break ; 
}
}
printf("karakter sayısı : %d",sayac); 

}



int main(){
char cumle[50];
printf("cümle gir: "); 
gets(cumle);

kSayisi(cumle); 


    return 0 ; 
}