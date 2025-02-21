
#include<stdio.h>

void print_array(int x[100],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);

    }

    for(i=0; i<n; i++)
    {
        printf("ARRAY [%d] = %d\n",i,x[i]);

    }
    int max=x[0];
    for(i=0;i<n;i++){
        if(max<=x[i]){
            max=x[i];
        }

    }
printf("The maximum value is : %d",max);


}


int main()
{

    int n,arr[100];
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d",&n);

    print_array(arr[100],n);




}




