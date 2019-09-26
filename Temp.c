#include <stdio.h>
/*imprimir tabla de equivalencia Celsius / Fahrenheit*/

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("%s\t%s\n", "Fahrenheit", "Celsius");

	while (fahr <= upper)
	{
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f\t\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}