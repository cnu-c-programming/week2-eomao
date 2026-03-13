#include <stdio.h>

int main(){
    int num1;
    int num2;
    char ch;
    scanf("%d %d %c", &num1, &num2, &ch);
    if(ch == '+'){
        printf(num1 + num2);
    }else if(ch == '-'){
        printf(num1 - num2);
    }else if(ch == '*'){
        printf(num1 * num2);
    }else{
        printf(num1/num2);
    }
    return 0;
}
