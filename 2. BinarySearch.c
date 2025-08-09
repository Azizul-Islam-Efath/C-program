//binary searching(while loop)
#include<stdio.h>
int main() {
    int n, key, low, high, mid;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter a sorted array:\n");
    for(int i=0; i<n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value you want to search: ");
    scanf("%d", &key);

    low= 0;
    high= n-1;
    mid= (low + high)/2;

    while(low <= high) { //mid & low akdm last stage e equal hoa jai ty ai condition(high=low)
        if(key < arr[mid]) {
            high= mid -1;
            mid= (low + high)/2;
        } else if(key > arr[mid]) {
            low= mid +1;
            mid= (low + high)/2;
        } else {
            printf("%d is found at index %d\n", key, mid);
            break;
        }
    } 

    if(low > high) {
        printf("Value not found\n");
    }
    return 0;
}

