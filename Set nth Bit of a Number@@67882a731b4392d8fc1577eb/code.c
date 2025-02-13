// Your code here...
#include <stdio.h>

int main() {
    int num, pos;
    
    // Taking input
    scanf("%d %d", &num, &pos);
    
    // Setting the nth bit
    num |= (1 << pos);
    
    // Output the updated number
    printf("%d\n", num);
    
    return 0;
}
