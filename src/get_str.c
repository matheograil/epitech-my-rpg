/*
** EPITECH PROJECT, 2022
** GET_STR.C
** File description:
** GET_STR.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

char *get_str(char *filename)
{
    struct stat st;
    int size;
    char *str;
    int file = open(filename, O_RDONLY);

    stat(filename, &st);
    size = st.st_size;
    str = malloc(sizeof(char) * (size + 1));
    read(file, str, size);
    str[size] = '\0';
    close(file);
    return (str);
}
