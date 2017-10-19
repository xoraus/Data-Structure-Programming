#include <stdio.h>
#include <string.h>

int p(char *,int, int);

int main()
{
	int no,q,k,j,n=0,e=0;
	char a[20];

	printf("Enter the number to check if it is palindrome or not\n");
	scanf("%s",&a);
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
}

