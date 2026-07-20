#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnumber(int n)
{
    long nb;
    nb = n;
    if (nb >= 10)
        ft_putnumber(nb / 10);
    ft_putchar((nb % 10) + '0');
}
void print_digits(void)
{
    int i;
    i = 0;
    while(i <= 9)
    {
        ft_putnumber(i);
        i++;
    }
}
