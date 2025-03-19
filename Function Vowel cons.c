

#include<stdio.h>
int main()
{

    char ch;
    printf("ENTER A CHARACTER: \n");
    scanf("%c",&ch);
    VOWELCONS(ch);
}


void VOWELCONS(char ch){

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("\n%c IS A VOWEL.",ch);
        }
        else{
            printf("\n%c IS A CONSONANT.",ch);
        }
}
