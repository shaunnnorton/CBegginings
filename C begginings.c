#include <stdio.h>
int addCalc(int num1, int num2) {
    int sum = num1+num2;
    return sum;
}

int main() {
    char name[1];
    printf("What is your name? ");
    gets(name);
    printf("Hello, World! \n");
    printf("And Hello: ");
    puts(name);
    int num1;
    int num2;
    printf("What is the first number? ");
    scanf("%d", &num1);
    printf("What is the second number? ");
    scanf("%d", &num2);
    int sum = addCalc(num1, num2);
    printf("Your answer is %d", sum);
    return 0;
}
