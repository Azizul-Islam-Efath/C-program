#include <stdio.h>

int main()
{
    char arr[100];
    int size=5;
    int First_insert=3;
    printf("Enter %d elements:\n", First_insert);
    for (int i = 0; i < First_insert; i++)
    {
        scanf(" %c", &arr[i]);
    }
    printf("After Inserting %d Elements The array is : ",First_insert);
    for (int i = 0; i < First_insert; i++)
    {
        printf(" %c ", arr[i]);
    }

    char del;
    printf("\n\nEnter the elements you want to delete:\n");
    scanf(" %c",&del);
    for (int i = 0; i < First_insert; i++)
    {
        if(arr[i]==del)
        {
            arr[i]=arr[i+1];
            arr[i+1]=arr[i+2];
            First_insert--;
        }
    }
    printf("\n\nAfter Deleting %c Elements The array is : ",del);
    for (int i = 0; i < First_insert; i++)
    {
        printf(" %c ", arr[i]);
    }
    printf("\n");

    int second_insert=2;
    printf("\nInsert %d more elements:\n", second_insert);

    for(int i=First_insert ; i<(First_insert+second_insert) ; i++)
    {
        printf("index[%d]= ",i);
        scanf(" %c",&arr[i]);
        printf("\n");
    }


    printf("\n\nAfter inserting %d Elements The array is : ",second_insert);
    for (int i = 0; i < (First_insert+second_insert); i++)
    {
        printf(" %c ", arr[i]);
    }
    printf("\n");


    int temp_size=(First_insert+second_insert);
    char Second_del;
    printf("\n\nEnter the elements you want to delete:\n");
    scanf(" %c",&Second_del);
    for (int i = 0; i < temp_size; i++)
    {
        if(arr[i]==Second_del)
        {
            arr[i]=arr[i+1];
            arr[i+1]=arr[i+2];
            arr[i+2]=arr[i+3];
            temp_size--;
        }
    }

    printf("\n\nAfter Deleting %c Elements The array is : ",Second_del);
    for (int i = 0; i < temp_size; i++)
    {
        printf(" %c ", arr[i]);
    }
    printf("\n");


    int third_insert=2;
    printf("\nInsert %d more elements:\n", third_insert);

    for(int i=temp_size ; i<size ; i++)
    {
        printf("index[%d]= ",i);
        scanf(" %c",&arr[i]);
        printf("\n");
    }


    printf("\n\nAfter inserting %d Elements The array is : ",third_insert);
    for (int i = 0; i < size; i++)
    {
        printf(" %c ", arr[i]);
    }
    printf("\n");



    char third_del;
    printf("\n\nEnter the elements you want to delete:\n");
    scanf(" %c",&third_del);
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==third_del)
        {
            arr[i]=arr[i+1];
            arr[i+1]=arr[i+2];
            arr[i+2]=arr[i+3];
            arr[i+3]=arr[i+4];
            size--;
        }
    }

    printf("\n\nAfter Deleting %c Elements The array is : ",third_del);
    for (int i = 0; i < size; i++)
    {
        printf(" %c ", arr[i]);
    }
    printf("\n");




    int forth_insert=1;
    printf("\nInsert %d more elements:\n", forth_insert);

    for(int i=size ; i<size+1 ; i++)
    {
        printf("index[%d]= ",i);
        scanf(" %c",&arr[i]);
        printf("\n");
    }

    size=5;
    printf("\n\nAfter inserting %d Elements The array is : ",forth_insert);
    for (int i = 0; i < size; i++)
    {
        printf(" %c ", arr[i]);
    }
    printf("\n");



    printf("\n\nAfter  Reversing , The array is : ");
    for (int i = size-1; i >= 0; i--)
    {
        printf(" %c ", arr[i]);
    }
    printf("\n\n");


    if (size >= 5)
    {
        printf("The array is full now,Don't do overflow\n");
    }
    return 0;
}
