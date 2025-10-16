//3. Write a program in C to find the sum of all elements of the array.


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the Element %d of Arr : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum = sum + arr[i];
    }

    printf("The sum of Elements is %d\n", sum);
    return 0;
}

