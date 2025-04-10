#include<stdio.h>
int main() {
    int arr[100], n=5;
    int key, found=0, linearsteps=0, binarysteps=0;

    printf("Enter %d array elements:\n", n);
    for(int i=0; i<n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value you want to search: ");
    scanf("%d", &key);

    //for linear
    printf("\n_FOR LINEAR SEARCH_\n");

    for(int i=0; i<n; i++) {
        linearsteps++;
        if(key == arr[i]) {
            printf("%d is found at index %d\n", key, i);
            printf("%d is found at position %d\n", key, i+1);
            found=1;
        }
    }
    if(found == 0) {
        printf("%d is not found\n", key);
    }

    //for binary search
    int temp;
    printf("\n_FOR Binary SEARCH_\n");
    for(int i=0; i<n; i++) {
        for(int j=1; j<n; j++) {
            if(arr[j-1] > arr[j]) {
                temp= arr[j-1];
                arr[j-1]= arr[j];
                arr[j]= temp;
            }
        }
    }
    printf("The sorted array:\n");
    for(int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }

    //after sorting
    int mid, higher, lower;
    lower=0;
    higher= n-1;
    mid= (higher + lower)/2;
    while(lower <= higher) {
        binarysteps++;
        if(key > arr[mid]) {
            lower= mid+1;
            mid= (higher + lower)/2;
        }
        else if(key < arr[mid]) {
            higher= mid - 1;
            mid= (higher + lower)/2;
        }
        else{
            printf("\n%d is at index %d\n", key, mid);
            break;
        }
    }
    if(lower > higher) {
        printf("Value is not found\n");
    }

    //compare
    if(binarysteps < linearsteps) {
        printf("Binary Searching is better for finding elements\n");
    } else {
        printf("Linear Searching is better for finding elements\n");
    }
    return 0;
}
