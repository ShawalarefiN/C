#include <stdio.h>


int main(){
    int a;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &a);


    for (int i = 1; i <= 10; i++){
        int multi = a * i;
        printf("%d X %d= %d\n", a, i, multi);
    }
     
    return 0;
}