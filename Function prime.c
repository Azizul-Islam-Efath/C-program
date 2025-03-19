#include<stdio.h>








void CHECK_PRIME(int num)
{

    int i,count=0;
    for(i=num; i>=1; i--)
    {
        if(i%2==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        printf("%d IS A PRIME NUMBER",num);
    }
    else
    {
        printf("%d TS A COMPOSITE NUMBER",num);
    }



}







int main ()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    CHECK_PRIME(num);

}
