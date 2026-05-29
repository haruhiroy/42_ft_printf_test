// cc test_bonus.c -I../ft_printf -L../ft_printf -lftprintf && ./a.out

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

	fmt = "3a char width test: [%3c][%3c][%3c]";
	ret = printf(fmt, 'a', '\t', 127);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 'a', '\t', 127);
	printf("/ret=%i\n", ret);

	fmt = "3b char width test: [%-3c][%-3c][%-3c]";
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

	fmt = "5a str width test: [%10s][%10s][%10s]";
	ret = printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);

	fmt = "5b str width test: [%-10s][%-10s][%-10s]";
	ret = printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);

	fmt = "5c str width test: [%-4s][%-4s][%-4s]";
	ret = printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);

	fmt = "5d str precision test: [%10.8s][%10.8s][%10.8s]";
	ret = printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);

	fmt = "5e str precision test: [%-10.5s][%-10.5s][%-10.5s]";
	ret = printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, "42tokyo","", NULL);
	printf("/ret=%i\n", ret);

	fmt = "6 int test: [%d][%d][%d]";
	ret = printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);

	fmt = "6a int plus test: [%+1d][%+1d][%+1d]";
	ret = printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);

	fmt = "6b int spc test: [% 1d][% 1d][% 1d]";
	ret = printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);

	fmt = "6c int zero test: [%04d][%04d][%04d]";
	ret = printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);

	fmt = "6d int zero spc test: [% 04d][%0 4d][%0 4d]";
	ret = printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, -42);
	printf("/ret=%i\n", ret);

	fmt = "6e int precision test: [%.d][% -8.4d][%8.4d]";
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

	fmt = "8a int min minus test: [%-d][%-d]";
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

	fmt = "12 hex test: [%x][%X][%x]";
	ret = printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);

	fmt = "12a hex alt test: [%#x][%#X][%#x]";
	ret = printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);

	fmt = "12a hex width test: [%#8x][%#8X][%#8x]";
	ret = printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);

	fmt = "12a hex zero width test: [%#08x][%#08X][%#08x]";
	ret = printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 0, 42, 127);
	printf("/ret=%i\n", ret);

	fmt = "13 hex max test: [%x][%x][%x]";
	ret = printf(fmt, 2147483648, 4294967295, 4294967296);
	printf("/ret=%i\n", ret);
	ret = ft_printf(fmt, 2147483648, 4294967295, 4294967296);
	printf("/ret=%i\n", ret);

	fmt = "13a hex max alt test: [%#x][%#x][%#x]";
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
