/* 
 * File:   main.c
 * Author: ocarinahuff
 *
 * Created on December 14, 2014, 3:21 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str2hex(char *str);

int main() {
    print_str2hex("\r\n");
    printf("0x%02X\n", '9' - '0');
    return 0;
}

void print_str2hex(char *str) {
    while(*str)
        printf(*++str?"0x%02X, ":"0x%02X\n", *str);
}