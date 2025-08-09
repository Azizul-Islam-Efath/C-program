#include <stdio.h>

// Partition function: Places pivot in the correct position
int partition(int arr[], int low, int high)
{
    int pivot = arr[low]; // Choosing first element as pivot
    int i = low + 1;      // Left side iterator
    int j = high;         // Right side iterator

    while (i <= j)
    {
        // Find element greater than pivot
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        // Find element smaller than pivot
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        // Swap elements if needed
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap pivot with arr[j] to put it in the correct place
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; // Return pivot position
}

// Quick Sort function (Recursive)
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high); // Get pivot index
        quickSort(arr, low, pivotIndex - 1);        // Sort left subarray
        quickSort(arr, pivotIndex + 1, high);       // Sort right subarray
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("\nSorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}