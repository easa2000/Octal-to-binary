// Octal to binary

#include<stdio.h>
void main()
{
	int octal_n=0,remainder,decimal_n,i=0;
	printf("\n Enter the Octal Number: ");
	scanf("%d",&octal_n);
	while(octal_n != 0)
	{
		remainder = octal_n % 10;
		decimal_n += remainder * pow(8,i);
		octal_n/=10;
		i++;
	}
	printf("\n The decimal equivalent = %d",decimal_n);
}
