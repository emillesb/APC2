#include <stdio.h>

int main(){
    
char s[] = "Maria", *ptr = s;
    
    printf("s[0] = %c, *(s+0) = %c\n", s[0], *(s+0)); 
    printf("s[1] = %c, *(s+1) = %c\n", s[1], *(s+1)); 
    printf("s[2] = %c, *(s+2) = %c\n", s[2], *(s+2));
    printf("s[3] = %c, *(s+3) = %c\n", s[3], *(s+3));
    printf("s[4] = %c, *(s+4) = %c\n", s[4], *(s+4));
    printf("s[5] = %c, *(s+5) = %c\n", s[5], *(s+5));


    printf("ptr = %c, *(ptr) = %c\n", ptr[0], *(ptr));
    printf("ptr[1] = %c, *(ptr+1) = %c\n", ptr[1], *(ptr+1));
    printf("ptr[2] = %c, *(ptr+2) = %c\n", ptr[2], *(ptr+2));
    printf("ptr[3] = %c, *(ptr+3) = %c\n", ptr[3], *(ptr+3));
    printf("ptr[4] = %c, *(ptr+4) = %c\n", ptr[4], *(ptr+4));
    
    return 0;
}
