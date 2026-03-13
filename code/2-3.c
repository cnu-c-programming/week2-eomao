#include <stdio.h>

int main(){
    unsigned int x = 0x12345678;
    unsigned char* addr = (unsigned char*)&x;

    printf("%c\n", *addr);
    printf("%c\n", *(addr + 1));
    printf("%c\n", *(addr + 2));
    printf("%c\n", *(addr + 3));

    return 0;
}
