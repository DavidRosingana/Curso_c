#include <stdio.h>

/*contar caracteres de un archivo*/
main()
{
	long nc;

	for(nc = 0; getchar()!=EOF; ++nc);
		;
	printf("%ld\n", nc);
}