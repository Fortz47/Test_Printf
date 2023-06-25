#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    //unsigned int ui;
    //void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    printf("--------------\nlen: %d", len);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");

    return (0);
}
