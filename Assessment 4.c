
#include <stdio.h>

int main()
{
    char arr[100];
    int size;
    char ch,temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d Character: \n", size);

    for (int i = 0; i < size; i++)
    {
        scanf(" %c",&arr[i]);
    }

    printf("The array after inserting -\n");
    for (int i = 0; i < size; i++)
    {
        printf("index[%d] = %c \n",i,arr[i]);
    }
    printf("\n");
    int i,j;
    for (i=0; i<size-1; i++)
    {

        for(j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {

                temp=arr[j];

                arr[j]=arr[j+1];

                arr[j+1]=temp;
            }
        }
    }

    printf("\nThe sorted array in ascending order is :\n");
    for(i=0; i<size; i++)
    {
        printf(" index[%d]= %c \n",i,arr[i]);
    }
    printf("\n\n");
    printf("Enter the Character you want to search: ");
    scanf(" %c",&ch);

    int min,max,mid,found=0;
    min = 0;
    max = size - 1;


    while (min <= max)
    {
        mid = (min+max)/2;
        if (arr[mid] == ch)
        {
            printf("Character '%c' found at index %d.\n", ch, mid);
            break;
        }
        else if (arr[mid] < ch)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }

    }
    if (min>max)
    {
        printf("Character '%c' not found in the array.\n", ch);
    }


    return 0;
}

