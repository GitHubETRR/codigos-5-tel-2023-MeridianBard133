#include <stdio.h>
#include <string.h>
#define CANT_MAX 5 

int main (void){
    char txt1[]="Hola";
    char txt2[5];
    int i=0;
    strcpy(txt2,txt1);
    while(txt2[i])printf("%c",txt2[i++]);    
    return 0;
}
