

#include<stdio.h>
#include<conio.h>
void fun();
void calsi();
int main()
{
	fun();
	calsi();
	return 0;
	
}	
void fun()
{
	printf("-----------MENU----------\n\n\n");
	printf("1.addition\n");
	printf("2.substraction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	
	
}
void calsi()
{
	int ch;
	printf("\nenter your choice: ");
	scanf("%d",&ch);
	int a,b,c;
	printf("\nenter first number: ");
	scanf("%d",&a);
	printf("enter second number: ");
	scanf("%d",&b);
	
	switch(ch)
	{
		case 1: c=a+b;
		printf("\naddition =%d",c);
		break;
		
		case 2: c=a-b;
		printf("\nsubstraction =%d",c);
		break;
		
		case 3: c=a*b;
		printf("\nmultiplication =%d",c);
		break;
		
		case 4: c=a/b;
		printf("\ndivision =%d",c);
		break;
		
		default:
		printf("invalide choice..!!!");
		break;
		 
		 
	}
	
	
}	


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

