#include <stdio.h>

int main()
{
    int arr[100];
    int size, first, second;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Index[%d]= %d \n",i,arr[i]);
    }

    printf("Enter the first element to be deleted: ");
    scanf("%d",&first);

    printf("Enter the second element to be deleted: ");
    scanf("%d",&second);

    int i,found_first=0,found_sec=0;

    for(i=0; i<size; i++)
    {
        if(arr[i]==first)
        {
            found_first++;
        }
        if(arr[i]==second)
        {
            found_sec++;
        }

    }

    for(i=0; i<size; i++)
    {

        if(found_first==0||found_sec==0)
        {
            printf("This element can not be deleted as it is not exist.\n");
            break;
        }
        else
        {

            for (int i = 0; i < size; i++)
            {
                if (arr[i] == first)
                {
                    for (int j = i; j < size - 1; j++)
                    {
                        arr[j] = arr[j + 1];
                    }
                    size--;

                    break ;
                }
            }

            for (int i = 0; i < size; i++)
            {
                if (arr[i] == second)
                {
                    for (int j = i; j < size - 1; j++)
                    {
                        arr[j] = arr[j + 1];
                    }
                    size--;
                    break ;
                }
            }

            printf("Array after deleting elements:\n");
            for (int i = 0; i < size; i++)
            {
                printf("Index[%d] = %d \n",i, arr[i]);
            }

            break;
            printf("\n");
        }
    }

    return 0;
}



