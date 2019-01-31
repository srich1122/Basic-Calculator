
#include<stdio.h>
#include<stdlib.h>

int main()
{
//Print the list of options to the user
	printf("1. Addition \n");
	printf("2. Subtraction \n");
	printf("3. Multiplication \n");
	printf("4. Division \n");
	printf("5. Modulus \n");
	printf("6. Test if Prime \n");
	printf("7. Exit \n");
	
	
//Create choice variable
	int choice;

// Ask the user for their choice	
	printf("Please enter choice: ");
	scanf("%d",&choice);

//Continue based on the user's choice
	 if(choice==1)
	{	
		//Addition
		int addone;
		int addtwo;
		int sum;
		
		printf("Please enter the first number:   \n");
		scanf("%d",&addone);
		printf("Please enter the second number:   \n");
		scanf("%d",&addtwo);
		
		sum = addone + addtwo;
		
		printf("%d + %d = %d", addone, addtwo, sum);
	}
	else if(choice==2)
	{
		// Subtraction
		int subone;
		int subtwo;
		int difference;
		
		printf("Please enter the first number:   \n");
		scanf("%d",&subone);
		printf("Please enter the second number:   \n");
		scanf("%d",&subtwo);
		
		difference = subone - subtwo;
		
		printf("%d - %d = %d", subone, subtwo, difference);
	}
	else if(choice==3)
	{
		//Multiplication
		int multiplyone;
		int multiplytwo;
		int multiple;
		
		printf("Please enter the first number:	\n");
		scanf("%d",&multiplyone);
		printf("Please enter the second number:	\n");
		scanf("%d",&multiplytwo);
		
		multiple = multiplyone * multiplytwo;
		
		printf("%d * %d = %d", multiplyone, multiplytwo, multiple);
	}
	else if(choice==4)
	{
		//Division
		int divone;
		int divtwo;
		int quotient;
		int remainder;
		
		printf("Please enter the first number:	\n");
		scanf("%d",&divone);
		printf("Please enter the second number:	\n");
		scanf("%d",&divtwo);
		
		quotient = divone / divtwo;
		remainder = divone % divtwo;
		
		printf("%d / %d = %d with a remainder of %d", divone, divtwo, quotient, remainder);
	}
	else if(choice==5)
	{
		//Modulus
		int userin;
		int absvalue;
				
		printf("Please enter the number:	\n");
		scanf("%d",&userin);
		
		absvalue = abs(userin);
		
		printf("The absoulte value is %d", absvalue);
	}
	else if(choice==6)
	{
		//Test if prime
		int maybeprime;
		int	i;
		int flag = 1;	
		
		printf("Please enter the number:	\n");
		scanf("%d",&maybeprime);
		
		for (i = 2; i <= maybeprime / 2; i++)
		{
			if(maybeprime % i==0)
			{
				flag = 0;
				break;
			}
		}
		if(flag==1)
		{
			printf("This is a prime number.");
		}
		else
		{
			printf("This is not a prime number.");
		}
	}
	else if(choice==7)
	{
		//Exit
		printf("Goodbye!");
	}	
}

