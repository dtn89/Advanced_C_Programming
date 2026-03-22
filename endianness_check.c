#include <stdio.h>

int main(){
    unsigned long int x = 0x76543210;
    char *c = (char*) &x;

    printf("Gia tri cua x (hex): 0x%x\n", x);
    printf("Byte tai dia chi thap nhat: 0x%x\n", *c);

    if(*c == 0x10){
        printf("Ket luan: He thong dung Little-endan");
    }
    else{
        printf("Ket luan: He thong dung Big-endian");
    }
    return 0;
}