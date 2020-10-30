/*
** EPITECH PROJECT, 2020
** free_casejj_one
** File description:
** free_casejj_one
*/

#include "my_defender.h"

void free_jj_one(index_s *chain)
{
    index_s *sup = chain->first;

    for (;sup != NULL; sup = sup->next) {
        if (sup->varint.jj == 1 && sup->next != NULL) {
            sup->prev->next = sup->next;
            sup->next->prev = sup->prev;
            free (sup);
        }
        if (sup->varint.jj == 1 && sup->next == NULL) {
            sup->prev->next = NULL;
            free (sup);
        }
    }
}