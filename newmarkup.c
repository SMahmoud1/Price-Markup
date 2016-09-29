// File: newmarkup.c

#include <stdio.h>
#include <math.h>
#define MARKUP 0.10
int 
main(void)
{		
double  price, /*original price of merchandise*/
		added_markup, /*mark up amount to be added to the original price*/
		markup_price, /*price of merchandise after mark up*/
		times;
char ans; 
char second;	 
printf("Do you have any merchandise you wish to mark up? Y or N? \n");
scanf("%s", &ans);

if((ans == 'Y')||(ans=='y'))
{
	mark();
	while((ans == 'Y')||(ans=='y'))
	{
		printf("\nDo you have any more merchandise you wish to mark up? Y or N? \n");
		scanf("%s", &second);
		
		if ((second == 'Y')||(second=='y') )
		{
		     mark();
			 ans ='Y';
		}
		if ((second == 'N') ||(second=='n') )
		{			
			ans = 'N';
			printf("\nThere are no more merchandise to mark up.  Have a great day. \n");
			return 0;
		}
		else if ((second!='y') && (second!='Y') && (second !='N') && (second!='n'))
		{
			printf("\nI do not comprehend your answer :( Good bye!\n");
			return 0;
		}
	}
	
}
else if ((ans =='N') ||  (ans=='n') )
{
	 printf("\nThere are no more merchandise to mark up.  Have a great day. \n");
	 return 0;
}
else 
{
	printf("\nI do not comprehend your answer :( Good bye! \n");
	return 0;
}
}


int
mark(void)
{
double  price, /*original price of merchandise*/
		added_markup, /*mark up amount to be added to the original price*/
		markup_price, /*price of merchandise after mark up*/
		times;
char ans;
			/*Get the original price of merchandise*/
			printf("Enter the original price of merchandise> ");
			scanf("%lf", &price);

			/*determine value to be added by markup*/
			added_markup = MARKUP*price;

			/*determine marked up price*/
			markup_price = added_markup+price;

			printf("\nThe original price is %f \n" , price);
			printf("\nThe 10 percent added mark up equals %f \n",added_markup);
			printf("\nThe final marked up price is %f \n",markup_price);		
			
	}		