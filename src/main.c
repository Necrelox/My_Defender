/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my_defender.h"

int rdtsc(void)
{
    __asm__ __volatile__("rdtsc");
}

void help_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("./my_defender\n");
    my_putstr("\n");
    my_putstr("\n");
    my_putstr("jh");
}

int main (int ac, char **av)
{
    srand(rdtsc());
    if (ac >= 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            help_usage();
            return (0);
        }
        return (84);
    }
    init_menu_one();
    return (0);
}
