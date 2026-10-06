#include <stdio.h> 

int main(){
    int row,column;
    // low to high
    // for (row = 0; row <= 5; row++){
    //     for (column = 0; column <= row; column++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // high to low
    for (row = 5; row >= 1; row--){
        for (column = 1; column <= row; column++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}