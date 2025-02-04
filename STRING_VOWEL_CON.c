
#include<stdio.h>
int main()
{

    char str[200],ch;
    printf("ENTER A STRING: ");
    gets(str);

    int i,capital,small,vowel,con,digit,word,other;

    i=vowel=con=digit=word=other=0;

    while((ch=str[i])!='\0')
    {

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;

        else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
            con++;

        else if(ch>='0'&&ch<='9')
            digit++;

        else if(ch==' ')
            word++;
        else
            other++;

        i++;

    }
    word++;
    printf(" \n\n\n");

    printf("NUMBER OF VOWEL: %d \n",vowel);

    printf("NUMBER OF CONSONANT: %d \n",con);

    printf("NUMBER OF DIGIT: %d \n",digit);

    printf("NUMBER OF WORD: %d \n",word);

    printf("NUMBER OF SPECIAL CHARACTER: %d \n",other);
    int j;

    j=capital=small=0;

    while((ch=str[j])!='\0')
    {
        if(ch>='a' && ch<='z')
        {
            small++;
        }
        else if(ch>='A' && ch<='Z')
        {
            capital++;
        }
        j++;
    }

    printf("NUMBER OF CAPITAL LETTER: %d \n",capital);

    printf("NUMBER OF SMALL LETTER: %d \n",small);


}
