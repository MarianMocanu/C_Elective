#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(){
    int x, y;
    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &x, &y);
    printf("\nThe smallest value is %d", min(x, y));
    return 0;
}