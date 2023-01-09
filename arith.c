#include<stdio.h>
#include"add.h"
#include"sub.h"
#include"mul.h"
#include"div.h"

int main()
{
	int a,b;
	printf("\nEnter Two Numbers : ");
        scanf("%d%d",&a,&b);

	printf("Addition       : %d\n",add(a,b));
	printf("Subtraction    : %d\n",sub(a,b));
	printf("Multiplication : %d\n",mul(a,b));
	printf("Divition       : %d\n",div(a,b));
}	
