#include <stdio.h>

int main(){
    int a[10]={1,2,3,4,5};
    int aux;

    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    for(int i=5;i>0;i--){
        a[i]=a[i-1];
    }
    printf("corrimiento");
    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    return;
}