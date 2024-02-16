#include <stdio.h>

int check(int no){
    int sum = 0;
    for (int i = 1; i < no; i++){
        if (no % i == 0){
            sum += i;
        }
    }
    if (sum == no){
        return 1;
    }
    return 0;
}


int main(){
    int low, high;
    printf("Lower Limit: ");
    scanf("%d", &low);
    printf("Upper Limit: ");
    scanf("%d", &high);

    printf("Perfect numbers: ");

    for (int i = low; i <= high; i++){
        if (check(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
}   