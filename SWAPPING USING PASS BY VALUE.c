#include <stdio.h>
void swap(char a,char b);

int main()
{
    char x,y;
    printf("enter the values of x,y\n");
    scanf(" %c %c",&x,&y);

    printf("Before swapping x = %c, y = %c\n", x,y);

    swap(x,y);
    return(0);
}

void swap(char a,char b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping x = %c, y = %c\n", a,b);
}
