#include <stdio.h>
int main() {
    int num, i, count = 0;
  printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            count++;
            break; // If a divisor is found, no need to check further
        }
    }
    if (count > 0) {
        printf("%d is a composite number.\n", num);
    } else {
        printf("%d is a prime number.\n", num);
    }

    return 0;
}
