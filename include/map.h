/*
** EPITECH PROJECT, 2022
** c-map.h
** File description:
** desc
*/
#pragma once

#include <stdlib.h>
#include <stdbool.h>

typedef struct map_node {
    char *key;
    void *host;
    void *value;
    struct map_node *next;
    struct map_node *prev;
} map_node;

typedef struct map {
    map_node *head;
    map_node *tail;
    size_t length;
} map;

#define map_foreach(map, node) \
        for (map_node *node = map->head; node; node = node->next)

map *map_new(void);
map_node *map_get(map *map, char *key);
map_node *map_add(map *map, char *key, void *value);
bool map_remove(map *map, char *key);
map_node *map_set(map *map, char *key, void *value);