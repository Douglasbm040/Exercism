#include <stdio.h>
#include<math.h>
int is_armstrong_number(int candidate){
    char* digito ; 
    int n_digito = ceil(log10(candidate));
    sprintf(digito,"%c",candidate);
    printf("o digito e %c e o numero de digito e %d",digito,n_digito);
    return n_digito;
}
 void main(){
   is_armstrong_number(0);


 }