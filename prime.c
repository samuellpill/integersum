#include<stdio.h>
 main()
{
int p,n;
printf("enter any number ");
scanf("%d",&n);
p=prime(n,n/2);
if(p==1)
	printf("%d is a prime number ");
else
	printf("%d is a composite number");
	getch();
}
int prime(int n,int i)
{
	if(i==1)
	return 1;
	if(n%i==0)
	return 0;
	return prime(n,i-1);
}
