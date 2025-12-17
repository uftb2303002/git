#include <stdio.h>
int main(void) {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    if (n > 0) {
        printf("Sum from 1 to %d = %d\n", n, sum);
    } else {
        printf("Please enter a positive number\n");
    }
    return 0;
}
