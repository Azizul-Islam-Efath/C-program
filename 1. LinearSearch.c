//Linear searching 
#include<stdio.h>
int main() {
    int n, key, found=0;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value you want to search: ");
    scanf("%d", &key);
    for(int i=0; i<n; i++) {
        if(key == arr[i]) {
            printf("The key value is found at index %d\n", i);
            printf("The key value is found at position %d\n", i+1);
            found=1; //key value paoa gse ty 0 theke 1
        }
    }
    
    if(found == 0) { //key value paoa na gele found same thkbe
        printf("The key value is not available\n");
    }
    return 0;
}
