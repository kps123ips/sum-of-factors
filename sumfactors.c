#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a Number");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	printf("Sum of Factors of a Number is %d",sum);
	getch();
}
