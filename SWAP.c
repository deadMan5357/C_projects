#include<stdio.h>
void swap1(char ,char );
void swap2(char *,char *);
int main()
{char a,b;
printf("Enter two characters:\n");
scanf("%c %c",&a,&b);

printf("The elements to be swapped are:%c %c",a,b);

swap1(a,b);
swap2(&a,&b);

return(0);
}

void swap1(char x,char y)
{char t;
 t=x;
 x=y;
 y=t;
printf("\nSwapped elements after 'Pass by value':%c %c",x,y);
}

void swap2(char *x,char *y)
{char t;
 t=*x;
 *x=*y;
 *y=t;
printf("\nSwapped elements after 'Pass by reference':%c %c",*x,*y);
}