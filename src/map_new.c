/*
** EPITECH PROJECT, 2024
** simple-c-map
** File description:
** map_new
*/
#include <map.h>
#include <stdlib.h>

map *map_new(void)
{
    return calloc(1, sizeof(map));
}
