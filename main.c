#include "printf.h"
//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int main (void)
{
	// variables
	
	char 			c = 'F';
	char 			s[] = "printF";
	void*			p = &c;
	int 			d = -42;
	int				i = 86;
	unsigned int	u = 24;
	int				x = 12742; // Unsigned hexadecimal integer
	int				X = 12724; // Unsigned hexadecimal integer (uppercase)

		
	printf("\n");
	printf("id   \t c\t s\t p\t\t d\t i\t u\t x\t X\t %%\n");
	printf("val  \t %c\t %s\t %p\t %d\t %d\t %d\t %d\t %d\t %%\n", c, s, p, d, i, u, x, X);
	printf("================================================================================================\n");
	printf("pf   \t %c\t %s\t %p\t %d\t %i\t %u\t %x\t %X\t %%\n", c, s, p, d, i, u, x, X);
 ft_printf("mypf \t %c\t %s\t %p\t %d\t %i\t %u\t %x\t %X\t %%\n", c, s, p, d, i, u, x, X);

	c = ' ';
	strcpy(s, "");
	p = NULL;
	d = INT_MIN;
	i = INT_MAX;
	u  = 0;
	x = 0; // Unsigned hexadecimal integer
	X = -10; // Unsigned hexadecimal integer (uppercase)

		
	printf("\n");
	printf("= all\n");
	printf("id   \t c\t s\t p\t d\t\t i\t\t u\t x\t X\t\n");
	printf("val  \t %c\t %s\t %p\t %d\t %d\t %d\t %d\t %d\t\n", c, s, p, d, i, u, x, X);
	printf("===================================================================================================\n");
	printf("pf   \t %c\t %s\t %p\t %d\t %i\t %u\t %x\t %X\t\n", c, s, p, d, i, u, x, X);
 ft_printf("mypf \t %c\t %s\t %p\t %d\t %i\t %u\t %x\t %X\t\n", c, s, p, d, i, u, x, X);
/* 	
	printf("\n");
	printf("= hexadecimal\n");
	printf("val  \t %d\t\t %d\t\t %d\t\t %d\t\t %d\n", -INT_MIN, -1000, 0, 1000, INT_MAX);
	printf("===================================================================================================\n");
	printf("pf   \t %x\t\t %x\t %x\t\t %x\t\t %x\n", -INT_MIN, -1000, 0, 1000, INT_MAX);
 ft_printf("ftpf \t %x\t\t %x\t %x\t\t %x\t\t %x\n", -INT_MIN, -1000, 0, 1000, INT_MAX);

	printf("= decimal\n");
	 int dr = printf("pf   \t %dX\n", 10000);
int ftdr = ft_printf("ftpf \t %dX\n", 10000);
	printf("res   \t %d\n", dr);
 ft_printf("res   \t %d\n", ftdr);

	printf("= hex\n");
	printf("pf   \t %x\n", -INT_MIN);
 ft_printf("ftpf \t %x\n", -INT_MIN);

	printf("pf   \t %x\n", -10);
 ft_printf("ftpf \t %x\n", -10);

	printf("pf   \t %lx\n", 4294967295);
 ft_printf("ftpf \t %x\n", 4294967295);

	printf("pf   \t %x\n", 2147483647);
 ft_printf("ftpf \t %x\n", 2147483647);

	printf("\n");
	printf("tester stuff \n");
 	int printfr = printf("pf slash 001 002 007\001\002\007\v\010\f\r\n");
	printf("%d \n", printfr);
 	int ftprintfr = ft_printf("pf slash 001 002 007\001\002\007\v\010\f\r\n");
	printf("%d \n", ftprintfr);
	printf("\n");

	printf("= hex\n");
	printf("pf   \t %x\n", -INT_MIN);
 ft_printf("ftpf \t %x\n", -INT_MIN);

	printf("pf   \t %x\n", -10);
 ft_printf("ftpf \t %x\n", -10);

	printf("pf   \t %lx\n", 4294967295);
 ft_printf("ftpf \t %x\n", 4294967295);

	printf("pf   \t %x\n", 2147483647);
 ft_printf("ftpf \t %x\n", 2147483647);



*/

	printf("= decimal\n");
	int dr = printf("pf   \t %d\n", -1);
	int ftdr = ft_printf("ftpf \t %d\n", -1);
	printf("res   \t %d\n", dr);
	 ft_printf("res   \t %d\n", ftdr);
	
	dr = printf("pf   \t %d\n", -100);
	ftdr = ft_printf("ftpf \t %d\n", -100);
	printf("res   \t %d\n", dr);
	ft_printf("res   \t %d\n", ftdr);

	dr = printf("pf   \t %d\n", -1000000);
	ftdr = ft_printf("ftpf \t %d\n", -1000000);
	printf("res   \t %d\n", dr);
	ft_printf("res   \t %d\n", ftdr);

	dr = printf("pf   \t %d\n", 1);
	ftdr = ft_printf("ftpf \t %d\n", 1);
	printf("res   \t %d\n", dr);
	 ft_printf("res   \t %d\n", ftdr);
	
	dr = printf("pf   \t %d\n", 100);
	ftdr = ft_printf("ftpf \t %d\n", 100);
	printf("res   \t %d\n", dr);
	ft_printf("res   \t %d\n", ftdr);

	dr = printf("pf   \t %d\n", 1000000);
	ftdr = ft_printf("ftpf \t %d\n", 1000000);
	printf("res   \t %d\n", dr);
	ft_printf("res   \t %d\n", ftdr);


	ft_printf("\n");
	return (0);
}
