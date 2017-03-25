#include <stdio.h>
#include <stdlib.h>

void main(){
    int price,tax,nprice,ntax;
    printf("Give price.\n");
    scanf("%d",&price);
    printf("Give tax percent.\n");
    scanf("%d",&tax);
    ntax=price*tax*0.01;
    nprice=price+ntax;
    printf("Full value:%d\nTax Value:%d",nprice,ntax);


}
