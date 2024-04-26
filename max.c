#include <stdio.h>
int Max(int *arr, int n) {
    int max = *arr;
    for(int i = 1; i < n; i++) {
        if(*(arr +i)> max) {
            max = *(arr+i);
        }
    }
    return max;
}
int main() {
    int arr[100], i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n) ;
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]) ;
        }
    printf("The maximum number of this array is: %d\n", Max(arr,n));
    return 0;
}