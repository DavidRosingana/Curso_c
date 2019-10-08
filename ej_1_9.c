#include <stdio.h>

/*contar espacios en blanco, 
si hay mas de uno, sustituir por uno solo*/
main()
{
	int current_char, last_char_printed;

	while ((current_char = getchar()) != EOF)
	{
		if (current_char != ' ' || last_char_printed != current_char)
		{
			putchar(current_char);
		}

		last_char_printed = current_char;
	}

}