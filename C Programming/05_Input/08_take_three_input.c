#include<stdio.h>
int main() {
    int x;
    char y;
    double z;
    scanf("%d%c%lf", &x, &y, &z);
    printf("x = %d, y = %c, z = %lf", x, y, z);
    return 0;
}