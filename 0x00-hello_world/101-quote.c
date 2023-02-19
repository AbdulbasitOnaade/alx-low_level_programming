#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - this is the main function
 * Return: this return 1
 *
 */

int main(void) 
	
{
	const char *msg = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int msg_len = strlen(msg);
	const int stderr_fd = 2;
	write(stderr_fd, msg, msg_len);
	return (1);
}

