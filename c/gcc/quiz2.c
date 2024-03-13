#include <stdio.h>
#include "libcheckeod.h"

void main() {
    int n;
    while(1) {
        printf("Input Number : ");
        scanf("%d", &n);
        if(n == 0) {
            printf("%d is zero... END\n", n);
            break;
        } else {
            if(checkeod(n) == 0)
                printf("%d is even number~!!\n", n);
            else
                printf("%d is odd number~!!\n", n);
        }

    }
}