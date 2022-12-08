#include<stdio.h>
int rec(int);
int main()
{
	int b;
	printf("entr a number :");
	scanf("%d",&b);
	printf("factorial of %d=%d",b,rec(b));
	return 0;
}
int rec(int x)
{
	int l;
	if(x==1)
	return 1;
	else
	l = x*rec(x-1);return l;
}

