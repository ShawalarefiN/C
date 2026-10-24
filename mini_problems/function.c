#include <stdio.h>

// int isEven(int a){
//     if (a % 2 == 0){
//         printf("Even");
//     } else {
//         printf("ODD");
//     }
// }

int larger(int a, int b);
  
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    int result = larger(a,b);
    printf("the larger number is: %d", result);
    return 0;
}

int larger(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}