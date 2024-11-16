/*Arivu is creating a program that calculates the sum of the digits of a given non-negative integer. Use the auto storage class to implicitly determine the return type of the function.



The program should prompt the user to enter a non-negative integer, calculate the sum of its digits, and then display the result. If the entered number is negative, the program should print a message asking the user to enter a positive integer.

Input format :
The input consists of an integer representing the number.

Output format :
The output displays the sum of the digits of the given positive integer. If the number is a negative number, it displays "Please enter a positive integer!".
*/

#include <stdio.h>

auto sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    int num;

    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer!");
    } else {
        auto result = sumOfDigits(num);
        printf("Sum of digits: %d\n", result);
    }

    return 0;
}
