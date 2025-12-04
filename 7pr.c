#include <stdio.h>

int main() {
    int i,a,c,b;

    c = 4;
    for (i = 1; i <= 5; i++) {
            for (a = 1; a <= c; a++) {  
            printf(" ");
        }
        c = c-1;

            for (b = 1; b <= 2*i - 1; b++) {  
            printf("*");  
        }
        
        printf("\n");
    }
    return 0;
}
