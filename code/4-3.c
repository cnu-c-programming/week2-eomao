#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int i;
    for(i = 2; i <= sqrt(num); i++){
        if(num/i == 0){
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}
