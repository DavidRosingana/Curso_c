#include <stdio.h>
/*imprimir tabla de equivalencia Celsius / Fahrenheit*/

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while (fahr <= upper) {
		celsius = (fahr-32) / 1.8;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}