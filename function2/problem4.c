#include <stdio.h>
#include <stdlib.h>
void fonksiyon(char _kelime[],char _kelime1[]){
int sayac =0 ; 
int sayac1=0 ; 
for(int i =0 ; i<50;i++){
if(_kelime1[i]!='\0'){
sayac1++;
}

if(_kelime[i]!='\0'){
    sayac++; 
}

}
if(sayac1==sayac){
    printf("iki kelimenin karakter sayısı eşit");
}
else {
     printf("iki kelimenin karakter sayısı eşit değil");
}
}


int main(){



char kelime[50]={""};
char kelime1[50]={""};
printf("kelime 1 gir : "); 
gets(kelime); 
printf("kelime 2 gir : "); 
gets(kelime1);

fonksiyon(kelime1,kelime);


return 0 ; 
}