#include <stdio.h>

/*contar espacios, tabuladores y nuevas lineas de un archivo*/
main()
{
	int c, wc, tc, nl;

	nl = 0;
	tc = 0;
	wc = 0;
	while ((c = getchar()) != EOF)
	{
		if(c == '\n')
			++nl;
		if(c == '\t')
			++tc;
		if(c == ' ')
			++wc;
	}

	printf("%d\n, %d\n, %d\n", nl, tc, wc);	
}