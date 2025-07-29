/**
1.Print odd number from n1 to n2

2. One linear condition 
for (int i = (n1 % 2 == 0 ? n1 + 1 : n1); i <= n2; i += 2) {
        printf("%d\n", i);
    }

3.using continue (less effective)
for (int i = n1; i <= n2; i++) {
        if (i % 2 == 0) continue;
        printf("%d\n", i);
    }
**/

#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    // Make sure n1 is odd
    if (n1 % 2 == 0) {
        n1++;
    }

    for (int i = n1; i <= n2; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}




/**
1.print even and odd number separately 

**/
#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("Odd numbers:\n");
    for (int i = n1; i <= n2; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\nEven numbers:\n");
    for (int i = n1; i <= n2; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

/**
1. count how many even and odd numbers are in a list
2. count how many even and odd numbers are in a list using array
 */

#include <stdio.h>

int main() {
    int n, num;
    int evenCount = 0, oddCount = 0;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if(num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nEven numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}

// 2. count how many even and odd numbers are in a list using array
#include <stdio.h>

int main() {
    int arr[] = {12, 7, 5, 64, 14};  // Example list
    int n = sizeof(arr) / sizeof(arr[0]);  // Get the number of elements
    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}


// palindrome number
#include<stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    int x=num, rev=0;
    if(num < 0){
        return 0;
    }
    while(num!=0){
        rev=rev*10+num%10;
        num=num/10;
    }
    if (x==rev){
        return 1;
    }

    return 0;
}

// palindrome other way
#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

/**
    factorial 
    fact*=1
*/

#include <stdio.h> 

int main() {
    int number; 
    long long factorial = 1;

    printf("Enter a non-negative integer: ");

    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    }
    // Handle the base cases: factorial of 0 or 1 is 1
    else if (number == 0 || number == 1) {
        printf("Factorial of %d is: %lld\n", number, factorial); 
    }
    else {
        for (int i = 2; i <= number; i++) {
            factorial *= i; 
        }
        printf("Factorial of %d is: %lld\n", number, factorial);
    }

    return 0; 
}



/**
    Compute the Sum of Digits of a Number
 */

#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Make number positive if it's negative
    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        sum += number % 10;  // Get last digit and add to sum
        number = number / 10; // Remove last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}





/**
 * Count the Number of Digits in an Integer
 */
#include <stdio.h>
#include <stdlib.h>  // For abs()

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num = abs(num);  // Remove negative sign if any

    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}




/**
 * Find the Largest Digit in an Integer
 */

#include <stdio.h>
#include <stdlib.h>  // For abs()

int main() {
    int num, digit, max_digit = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num = abs(num);  // Remove negative sign

    if (num == 0) {
        max_digit = 0;
    } else {
        while (num != 0) {
            digit = num % 10;
            if (digit > max_digit) {
                max_digit = digit;
            }
            num /= 10;
        }
    }

    printf("Largest digit: %d\n", max_digit);

    return 0;
}




/**
 * 
 * Find the Last Digit of an Integer
 */
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;
    if (lastDigit < 0) lastDigit = -lastDigit;

    printf("Last digit: %d\n", lastDigit);
    return 0;
}
