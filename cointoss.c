#include <stdlib.h>
#include <stdio.h>


void main(){
    int n;
    int prob;
    int i;
    int heads=0,tails=0;
    int *result;
    printf("Give number of throws.\n");
    scanf("%d" ,&n);
    result = (int *)malloc(n*sizeof(int));
    for (i=0;i<n;i++){
        prob=rand()%100;
        if (prob<50){
                printf("Heads\n");
                heads++;
                result[i]=1;
                }
        else{
            printf("Tails\n");
            tails++;
            result[i]=0;
        }
    }
    printf("Heads:%d \nTails:%d \n" ,heads ,tails);
    for (i=0;i<n;i++){
        printf("%d" ,result[i]);
    }



}

