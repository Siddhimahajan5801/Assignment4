#include<stdio.h>

int main(){
    int i;

    printf("The table of 5 is:\n");

    for (i=1;i<=10;i++) {
        printf("5x%d=%d\n",i,i*5);
    }
    return 0;
}