#include <stdio.h>

void memcpy(void *src, void *dst, int length){
    char *source = (const char*) (src);
    char *destiation = (char*) (dst);

    for(int i = 0; i < length; i++){
        *destiation++ = *source++;
    }
}

int main(){
    char ten_con[10] = "Phat";
    char ten_cha[10] = "Nam";

    memcpy(ten_cha, ten_con, 10);

    printf("%s", ten_con);
    return 1;
}