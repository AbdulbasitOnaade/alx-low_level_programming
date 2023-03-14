#include <stdio.h>
#include "main.h"

/**
  * _putchar - write the char c to stdout
  * @c:Ther char to print
  *
  * Return: On success 1.
  * On error, -1 is returned and errno is set appropriately.
  */

int _putchar(char c);

{
	return (write(1, &c, 1));

}
