#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,check,length;
	char str[50],ans='y';
	while(ans=='y')
	{
		check=0;
		clrscr();
		printf("\n\tEnter a string : ");
		scanf("%s",&str);
		length=strlen(str);
		if(length==1)
		{
			printf("\n\n\tOne letter word is always palindrome. Therefore,");
		}
		for(i=0;i<length/2;i++)
		{
			if(str[i]==str[length-1-i])
			{
				check++;
			}
		}
		if(check==strlen(str)/2 || length==1)
		{
			printf("\n\n\t'%s' is palindrome",str);
		}
		else
		{
			printf("\n\n\t'%s' is not palindrome",str);
		}
		printf("\n\n\n\n\tWant to enter again(y/n) : ");
		scanf("%s",&ans);
	}
	return 0;
}