// bubble sorting (descending)
#include <stdio.h>
int main()
{
    int size, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size - 1; i++)
    { // koibr swap ar loop cholbe aitr jnne
        for (int j = 1; j < size - 1; j++)
        { // swap krar jnne loop
            if (a[j] > a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    printf("Descending Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

// bubble sorting(ascending)
#include <stdio.h>
int main()
{
    int size, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 1; j < size - 1; j++)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Ascending Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
