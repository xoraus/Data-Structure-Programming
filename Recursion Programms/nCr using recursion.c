#include <stdio.h>

int rec_ncr(int , int );

int main()
{
	int n,r;
	printf("Enter the value of n and r\n");
	scanf("%d%d",&n,&r);
	printf("The value of %dC%d is %d\n",n,r,rec_ncr(n,r));

	return 0;
}

int rec_ncr(int n, int r)
{
	if((r==0) || (n==r))
		return 1;
	else
		return rec_ncr(n-1,r-1)+rec_ncr(n-1,r);
}
