#include<stdio.h>
int main(){
    int x = 10, y = 10;
    printf("%d %d\n", x, y);
    x = y = -1;
    printf("%d %d", x, y);
    return 0;
}