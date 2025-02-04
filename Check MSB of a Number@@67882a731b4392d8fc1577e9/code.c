#include <stdio.h>
int main() {
    int a,msb;
    scanf("%d",&a);
    msb=(a>>(sizeof(int)*8-1));
    if(msb==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}