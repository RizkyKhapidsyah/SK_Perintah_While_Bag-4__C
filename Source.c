#include <stdio.h>
#include <conio.h>

int main()
{
	int a = 0;

	while(1)
	{
		puts("Here I go...!");
		a++;
		if( a > 10)
			break;
	}

	_getch();
	return(0);
}