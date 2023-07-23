#include <stdio.h>
/**
* main - prints alphabet in lowercase expect qand e
* followed by a new line 
* Return = Always 0 (success)
*/
int main(void) {

	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{

	if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
