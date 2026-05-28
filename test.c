// cc test.c -I../ft_printf -L../ft_printf -lftprintf && ./a.out

#include <stdio.h>
#include <ft_printf.h>

int main(void)
{
	char *fmt;
	int ret;

	setvbuf(stdout, NULL, _IONBF, 0);

	fmt = "1: %% test: [%%]";
	ret = printf(fmt, 'X');
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 'X');
	printf("/ret=%i\n", ret);

	fmt = "2: %% test: [%%%%]";
	ret = printf(fmt, 'X');
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 'X');
	printf("/ret=%i\n", ret);

	fmt = "3 char test: [%c][%c][%c]";
	ret = printf(fmt, 'a', '\t', 127);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 'a', '\t', 127);
	printf("/ret=%i\n", ret);

	fmt = "4 char test: [%c][%c][%c]";
	ret = printf(fmt, 0, 1, 2);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 1, 2);
	printf("/ret=%i\n", ret);

	fmt = "5 str test: [%s][%s][%s]";
	ret = printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);

	fmt = "6 int test: [%d][%d][%d]";
	ret = printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);

	fmt = "7 int max test: [%i][%i]";
	ret = printf(fmt, 2147483647, 2147483648);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 2147483647, 2147483648);
	printf("/ret=%i\n", ret);

	fmt = "8 int min test: [%i][%i]";
	ret = printf(fmt, -2147483648, -2147483649);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, -2147483648, -2147483649);
	printf("/ret=%i\n", ret);

	fmt = "9 uint test: [%u][%u][%u]";
	ret = printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);

	fmt = "10 uint test: [%u][%u]";
	ret = printf(fmt, 2147483647, 2147483648);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 2147483647, 2147483648);
	printf("/ret=%i\n", ret);

	fmt = "11 uint max test: [%u][%u]";
	ret = printf(fmt, 4294967295, 4294967296);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 4294967295, 4294967296);
	printf("/ret=%i\n", ret);

	fmt = "12 hex test: [%x][%x][%x]";
	ret = printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);

	fmt = "13 hex max test: [%x][%x][%x]";
	ret = printf(fmt, 2147483648, 4294967295, 4294967296);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 2147483648, 4294967295, 4294967296);
	printf("/ret=%i\n", ret);

	fmt = "14 ptr test: [%p][%p][%p]";
	ret = printf(fmt, fmt, printf, 0);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, fmt, printf, 0);
	printf("/ret=%i\n", ret);

	fmt = "15 ptr test: [%p][%p][%p]";
	ret = printf(fmt, -2147483648, 2147483647, 18446744073709551615);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, -2147483648, 2147483647, 18446744073709551615);
	printf("/ret=%i\n", ret);

	fmt = "98 unknown directive test: [%Q]";
	ret = printf(fmt);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt);
	printf("/ret=%i\n", ret);

	fmt = "99 null directive test: %";
	ret = printf(fmt);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt);
	printf("/ret=%i\n", ret);

	fmt = "";
	ret = printf(fmt);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt);
	printf("/ret=%i\n", ret);

	fmt = NULL;
	ret = printf(fmt);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt);
	printf("/ret=%i\n", ret);
}
