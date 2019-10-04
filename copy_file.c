#include <stdio.h>

/*
copiar un archivo caracter por caracter
*/

main()
{
	int c;

	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
}