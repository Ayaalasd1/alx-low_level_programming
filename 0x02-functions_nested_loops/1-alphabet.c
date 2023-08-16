#include "main.h"
/**
 * print_alphabet - entry point
 * Description: - utilizes on the _putchar function to print the alphabet a - z
* Return void
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
