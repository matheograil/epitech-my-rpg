/*
** EPITECH PROJECT, 2022
** MY.H
** File description:
** MY.H file.
*/

#ifndef MY_H_

    #define MY_H_

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <fcntl.h>

int my_intlen(int);
char *my_itoa(int);
void my_put_nbr(int);
void my_putchar(char);
void my_putstr(char *);
int my_strcmp(char *, char *);
int my_strlen(char *);

#endif /* !MY_H_ */
