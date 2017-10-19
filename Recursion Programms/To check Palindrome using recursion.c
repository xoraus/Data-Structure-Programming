#include <stdio.h>
#include <string.h>

int p(char *,int, int);

int main()
{
	int no,q,k,j,n=0,e=0;
	char a[20];

	printf("Enter the number to check if it is palindrome or not\n");
	scanf("%s",a);
	k=strlen(a);
	e=p(a,k-1,n);
	if(e==1)
	{
		printf("\nNot a palindrome\n");
	}
	else
	{
		printf("it is palindrome\n");
	}
	return 0;
}

int p(char a[],int k,int n)
{
	char *t;
	t=a;
	if(k<n) // Base condition 
		return 0;
	else if (a[n] == a[k])
	{
		return p(t,t-1,n+1); //function calls itself
	}
	else
	{
		return 1;
	}
}

