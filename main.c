#include <stdio.h>

// Function declaration
int sum1();
int product1();

int main() {
    printf("Hello World! I get it that this is a typical way that is taught to programmers, that's why I am going in an unorthodox way!\n");

    int sum = 2 + 3;
    printf("The sum of the two numbers is %d\n", sum);

    int pro = 2 * 3;
    printf("The product of the two numbers is %d\n", pro);

    int diff = 2 - 3;
    printf("The difference of the two numbers is %d\n", diff);

    int division = 4 / 2;
    printf("The division of the two numbers is %d\n", division);

    printf("Hello I am still learning C from Bro-Code\n");

    sum1();
    product1();

    return 0;
}

// Function definition
int sum1() {
    int a = 4 + 5;
    printf("The sum of the values of a and b is %d\n", a);
    return 0;
}
int product1(){
    int b=2*4;
    printf("The Product of the values of the a and b is %d\n",b);
    return 0;

}


