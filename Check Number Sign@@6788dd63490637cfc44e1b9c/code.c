#include <stdio.h>
int main(){
    int a;
    scanf("5d",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
    return 0;
}