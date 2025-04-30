
#include <stdio.h>

typedef struct rgb_char {
    char r;
    char g;
    char b;
    char a;
} RGBChar;

typedef union pixel {
    int pixel;
    struct rgb_char;};

int main() {
    
    

    return 0;
}