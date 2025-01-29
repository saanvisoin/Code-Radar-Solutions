#include <stdio.h>



int main() {
    int a,b,c,average;
    scanf("%d %d %d",&a,&b,&c);
    average=(a+b+c)/3;
    printf("%.2f",float(average));

    return 0;
}