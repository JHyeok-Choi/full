#include <stdio.h>

void main() {
    int x = 1;
    printf(" Result : %d \n", *(char *)&x);

    if(*(char *)&x == 1)
        printf(" This syste is Little-Endian \n");
    else
        printf(" This syste is Big-Endian \n");
}