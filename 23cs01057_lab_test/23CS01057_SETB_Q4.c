#include <stdio.h>

int check(int no){
    int count = 0;
    for (int i = 2; i < no; i++){
        if (no % i == 0){
            count++;
        }
    }
    if (count){
        return 1;
    }
    return 0;
}

int main(){
    printf("Enter the number: ");
    int n; scanf("%d", &n);
    if (n < 8){
        printf("Not Possible.\n");
        return 0;
    } else {
        for (int i = 0; i <= n / 2; i++){
            if (check(i) && check(n - i)){
                printf("%d %d\n", i, n - i);
            }
        }
    }
}   