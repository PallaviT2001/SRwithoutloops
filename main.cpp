#include<stdio.h>
void reverseString(char *str)
{
    if(*str=='\0')
    {
        return;
    }
    reverseString(str+1);
    printf("%c",*str);
}
int main()
{
    char str[]="Hello world";
    printf("Reversed string is\n");
    reverseString(str);
    return 0;
}
