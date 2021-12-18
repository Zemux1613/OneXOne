#include <stdio.h>

int main() {

    for (int i = 1; i < 11; i++) {
        
        printf("\nFor %d\n\n", i);
        
        for (int j = 1; j < 11; j++) {

            printf("%d\n", i * j);
        
        }

    }

    return 0;
}