#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    int array[n];


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }


    for (i = 0; i < n; i++) {
        sum += array[i];
    }


    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
