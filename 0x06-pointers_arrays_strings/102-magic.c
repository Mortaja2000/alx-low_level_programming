#include <stdio.h>

/**
 * magic - prints a[2] = 98 followed by anew line*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/**
* write your code of line here...
* Remember:
* - you are not allowd to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
	*(p + 5) = 98;
	/*...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
return (0);

}
