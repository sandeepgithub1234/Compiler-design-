#include<stdio.h>

#define AREA(x,y) (x*y)
#define VOLUME(x,y,z)(AREA(x,y)*z)

int main()
{
int x;
int y;

// Nested Macro

printf("Addition of two number: %d",AREA(2,5));
printf("Multiplication: %d",VOLUME(4,5,6));
return(0);

}
