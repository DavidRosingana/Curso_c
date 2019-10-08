#include <stdio.h>

/*contar espacios en blanco, 
si hay mas de uno, sustituir por uno solo*/
main()
{
	int current_char;

	while ((current_char = getchar()) != EOF) {
		if (current_char == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if (current_char == '\b') {
			putchar('\\');
			putchar('b');
		}	
		else if (current_char == '\b') {
			putchar('\\');
			putchar('\\');
		}
		else {
			putchar(current_char);
		}
	}
}