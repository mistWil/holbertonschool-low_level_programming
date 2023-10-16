#include <stdlib.h> 
#include <time.h> 
/**
 *  Task 0: Positive or negative
 *  Edit by : Wil L.
 *
 */  
 
int main(void) 
{  
	/*Variable*/
	int n;   
	
	/*Aleatoire*/
	srand(time(0));
      	n = rand() - RAND_MAX / 2;

      	/* Conditions*/

	if (n < 0)
	{
		printf("is positive\n");
	} else if (n=0)
	{
		printf("is zero\n");
	} else 
	{
		printf("is negative\in");
	}	

	return (0); 
}
