#include <stdio.h>
#include <conio.h>

int main()
{
	int A,B,C;
	printf("Enter three integer Number A , B , C :");

	scanf("%d %d %d",&A,&B,&C);

	if(A>B)
	{   if(A>C)
		{
			printf("A is the Largest Number");
		}
		else
		{
			printf("C is the Largest Number");
		}	
			
	}
	else                                  
	{   if(B>C)                               
		{                                     	
			printf("B is the Largest Number");	
		}                                     
		else                                  
		{                                     
			printf("C is the Largest Number");
		}	                                                                    
	}                                         

   /* int result;
    printf("Enter your Marks : ");
    scanf("%d", &result);
    result > 40 ? puts("Pass") : puts("Fail");
    puts(result > 80 ? "Gread A+" : "Gread A-");*/
    getch();
}   