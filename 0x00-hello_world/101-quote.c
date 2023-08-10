#include <unistd.h>
/**
 * main - Entry point.
 *
 * Description: The code prints to the error output.
 * Return: would always return 1 if successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" -Dora korpar, 2015-1019\n", 59);
	return (1);
}
