
#include <stdio.h>
#include "cal.h"

int main() {
    int num1, num2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);

    printf("Sum: %d\n", sum);

  
    return 0;
}

