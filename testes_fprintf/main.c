#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	// ft_printf("arroz");
	// printf("\n");
	// printf("arroz");
	// printf("\n");
	// printf("\n");
	// ft_printf("123 %d", 123);
	// printf("\n");
	// printf("123 %d", 123);
	// printf("\n");
	// printf("\n");
	// ft_printf("arroz, %s", "comi arroz");
	// printf("\n");
	// printf("arroz, %s", "comi arroz");
	// printf("\n");
	// printf("\n");
	// ft_printf("arroz, %c", 'c');
	// printf("\n");
	// printf("arroz, %c", 'c');
	// printf("\n");printf("\n");
	// ft_printf("arroz, %x", 1500);
	// printf("\n");
	// printf("arroz, %x", 1500);
	// printf("\n");
	// printf("\n");
	// ft_printf("arroz, %X", 1500);
	// printf("\n");
	// printf("arroz, %X", 1500);
	// printf("\n");
	// printf("\n");
	// ft_printf("arroz %%");
	// printf("\n");
	// printf("arroz %%");
	// printf("\n");
	// printf("\n");
	// char * t = "tou";
	// ft_printf("arroz, %p", t);
	// printf("\n");
	// printf("arroz, %p", t);
	// printf("\n");
	// printf("\n");
	// ft_printf("arroz, %u", -123);
	// printf("\n");
	// printf("arroz, %u", -123);
	// printf("\n");
	// printf("\n");
	// ft_printf("arroz, %u", 123);
	// printf("\n");
	// printf("arroz, %u", 123);
	// printf("\n");
	// printf("\n");
	// ft_printf("arroz, %d, %s, %c, %x, %X, %p, %u", 555, t, 't', 852, 852, t, 879);
	// printf("\n");
	// printf("arroz, %d, %s, %c, %x, %X, %p, %u", 555, t, 't', 852, 852, t, 879);
	// printf("\n");
	// printf("\n");
	int i;
	i = ft_printf(" %x ", -1);
	printf("\n");
	printf("Valor criada: %d\n", i);
	printf("\n");
	i = printf(" %x ", -1);
	printf("\n");
	printf("Valor original: %d\n", i);
}
