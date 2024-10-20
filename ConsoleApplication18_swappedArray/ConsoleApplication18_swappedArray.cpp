#include<stdio.h>

int main(void)
{
	short i,j;
	short auxilliary;
	short numbers[5] = {1,2,3,4,5};

	for (j = 0; j < 5; j++) // index upto 4 therefore it goes upto 5.
	{
		printf("Numbers array is %hd\n", numbers[j]);
	}


	/* swapping indexes 0 and 4  and 1 and 3 */
	
	for (i = 0; i < 2; i++)
	{
		auxilliary = numbers[i];           //auxilliary = numbers[0];  first try with indices itself as following.
		numbers[i] = numbers[4-i];         //numbers[0] = numbers[4];
		numbers[4-i] = auxilliary;         //numbers[4] = auxilliary;
	}

	printf("Numbers[0] is %hd\n", numbers[0]);
	printf("Numbers[1] is %hd\n", numbers[1]);
	printf("Numbers[2] is %hd\n", numbers[2]);
	printf("Numbers[3] is %hd\n", numbers[3]);
	printf("Numbers[4] is %hd\n", numbers[4]);

	return 0;
}