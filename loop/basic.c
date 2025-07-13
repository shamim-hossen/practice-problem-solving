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
