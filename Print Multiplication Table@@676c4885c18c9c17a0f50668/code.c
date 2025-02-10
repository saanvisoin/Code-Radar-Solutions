#include <stdio.h>
int main(){
    int i,n,result;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        result=n*i;
        printf("\n %d X %d = %d",n,i,result);

    }
}