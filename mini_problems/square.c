#include <stdio.h>
int main() {
    for (int row = 1; row <= 10; row++){
        for (int column = 1; column <= 10; column++){
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}
