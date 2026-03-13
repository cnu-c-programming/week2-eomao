#include <stdio.h>

int main(){
    unsigned int x = 0x12345678;
    unsigned char* addr = (unsigned char*)&x;

    printf("%02x\n", *addr);
    printf("%02x\n", *(addr + 1));
    printf("%02x\n", *(addr + 2));
    printf("%02x\n", *(addr + 3));

    return 0;
}
