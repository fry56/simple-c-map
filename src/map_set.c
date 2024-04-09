/*
** EPITECH PROJECT, 2024
** simple-c-map
** File description:
** map_set
*/
#include <map.h>
#include <string.h>

map_node *map_set(map *map, char *key, void *value)
{
    map_node *node = map_get(map, key);

    if (node == NULL)
        return NULL;
    node->value = value;
    return node;
}
