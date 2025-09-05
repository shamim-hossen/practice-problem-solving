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


/**
 * 
 * count even digit in number
 */
#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) num = -num;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            count++;
        num /= 10;
    }

    printf("Even digit count: %d\n", count);
    return 0;
}



/**
 * print first digit of integer
 */
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) num = -num;

    while (num >= 10) {
        num /= 10;
    }

    printf("First digit: %d\n", num);
    return 0;
}

/**
 * check if the digits of a number are in increasing or decreasing order
 */
#include <stdio.h>

int main() {
    int num, prev_digit, curr_digit;
    int increasing = 1, decreasing = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    prev_digit = num % 10;
    num /= 10;

    while (num > 0) {
        curr_digit = num % 10;

        if (curr_digit < prev_digit) {
            decreasing = 0;
        } else if (curr_digit > prev_digit) {
            increasing = 0;
        }

        prev_digit = curr_digit;
        num /= 10;
    }

    if (increasing) {
        printf("Digits are in increasing order.\n");
    } else if (decreasing) {
        printf("Digits are in decreasing order.\n");
    } else {
        printf("Digits are not in order.\n");
    }

    return 0;
}


/**
 * Find the Last Digit of a Number 
 */

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;
    printf("Last digit: %d\n", lastDigit);

    return 0;
}


/*
    Check if a Year is a Leap Year
*/
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    return 0;
}


/*
    Check if a Number is a Palindrome
*/

#include <stdio.h>
int main() {
    int num, original, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while(num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if(original == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}


/**
 * Reverse a Number
 */
#include <stdio.h>
int main() {
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reverse);
    return 0;
}

/**
 * Find Factorial of a Number
 */
#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %d\n", fact);
    return 0;
}



/**
 * Reverse a Input Number
 */
#include <stdio.h>
int main() {
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reverse);
    return 0;
}


/**
 * Check if a Number is Prime
 */
#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1) {
        isPrime = 0;
    } else {
        for(i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}

/**
 * Find GCD (Greatest Common Divisor)
 */
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while(a != b) {
        if(a > b)
            a -= b;
        else
            b -= a;
    }

    printf("GCD = %d\n", a);
    return 0;
}

/**
 * Find LCM (Least Common Multiple)
 */
#include <stdio.h>
int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while(1) {
        if(max % a == 0 && max % b == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }

    return 0;
}

/**
 * Check Armstrong Number
 */
#include <stdio.h>
int main() {
    int num, original, sum = 0, digit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;
    while(num != 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if(sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}

/**
 * Print Multiplication Table
 */
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

/**
 * Check if Number is Perfect
 */
#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        printf("Perfect Number\n");
    else
        printf("Not Perfect\n");

    return 0;
}

/**
 * Find the Largest Digit in a Number
 */
#include <stdio.h>
int main() {
    int num, max = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        if(digit > max)
            max = digit;
        num /= 10;
    }

    printf("Largest digit = %d\n", max);
    return 0;
}


/**
 * Count Even and Odd Digits in a Number
 */
int main() {
    int num, even = 0, odd = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        if(digit % 2 == 0)
            even++;
        else
            odd++;
        num /= 10;
    }

    printf("Even digits: %d\n", even);
    printf("Odd digits: %d\n", odd);
    return 0;
}


/**
 * Sum of First N Even Numbers
 */
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter how many even numbers to sum: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += 2 * i;
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);
    return 0;
}


/**
 * Check if All Digits Are Even
 */
#include <stdio.h>
int main() {
    int num, digit, allEven = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        if(digit % 2 != 0) {
            allEven = 0;
            break;
        }
        num /= 10;
    }

    if(allEven)
        printf("All digits are even\n");
    else
        printf("Not all digits are even\n");

    return 0;
}

/**
 * Print Digits in Reverse Order
 */
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse: ");
    while(num != 0) {
        printf("%d ", num % 10);
        num /= 10;
    }
    printf("\n");

    return 0;
}


/**
 * Find Product of Digits
 */
#include <stdio.h>
int main() {
    int num, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        product *= num % 10;
        num /= 10;
    }

    printf("Product of digits = %d\n", product);
    return 0;
}

/**
 * Check if a Digit Exists in Number
 */
#include <stdio.h>
int main() {
    int num, digit, found = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter digit to search: ");
    scanf("%d", &digit);

    int temp = num;
    while(temp > 0) {
        if(temp % 10 == digit) {
            found = 1;
            break;
        }
        temp /= 10;
    }

    if(found)
        printf("Digit %d is in number %d\n", digit, num);
    else
        printf("Digit %d is not in number %d\n", digit, num);

    return 0;
}


/**
 * Check if Sum of Digits is Even
 */
#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }

    if(sum % 2 == 0)
        printf("Sum of digits is even\n");
    else
        printf("Sum of digits is odd\n");

    return 0;
}

/**
 * Find the First Digit of a Number
 */
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num >= 10) {
        num /= 10;
    }

    printf("First digit = %d\n", num);
    return 0;
}

/**
 * Check if First and Last Digits are the Same
 */
#include <stdio.h>
int main() {
    int num, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    while(num >= 10) {
        num /= 10;
    }

    first = num;

    if(first == last)
        printf("First and last digits are the same\n");
    else
        printf("First and last digits are different\n");

    return 0;
}


/**
 * Check if a Number is Harshad Number (Niven Number)
 */
#include <stdio.h>
int main() {
    int num, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if(num % sum == 0)
        printf("Harshad (Niven) number\n");
    else
        printf("Not a Harshad number\n");

    return 0;
}

/**
 * Print All Divisors of a Number
 */
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Divisors: ");
    for(int i = 1; i <= num; i++) {
        if(num % i == 0)
            printf("%d ", i);
    }

    return 0;
}

/**
 * Print Sum of Digits Until it Becomes a Single Digit (Digit Root)
 */
#include <stdio.h>
int main() {
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num >= 10) {
        sum = 0;
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    printf("Single digit sum = %d\n", num);
    return 0;
}

/**
 * Find Difference Between Sum of Even and Odd Digits
 */
#include <stdio.h>
int main() {
    int num, evenSum = 0, oddSum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        int digit = num % 10;
        if(digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;
        num /= 10;
    }

    printf("Difference = %d\n", evenSum - oddSum);
    return 0;
}

/**
 * Find the Smallest Digit in a Number
 */
#include <stdio.h>
int main() {
    int num, digit, min = 9;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        if(digit < min)
            min = digit;
        num /= 10;
    }

    printf("Smallest digit = %d\n", min);
    return 0;
}