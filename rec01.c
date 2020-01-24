#include <stdio.h>
#include <ctype.h>

/*
Author: Justin Rapczynski
EUID: Jar0574
Professor: Mark Thompson
Title: Recetation 1
Description: Program that takes in an ASCII character given from user
then gives back that character in decimal, hexidecimal, and binary
*/

void chartobinary(char ASCII) //function that converts an ASCII character to binary using bitwise operators
{
    int i;
    printf("\n");
    printf("    bin -- ");
    
    for(i=7; i>=0; i--)
        putchar( (ASCII & (1 << i)) ? '1' : '0' );
     printf("\n");
}

int main() {
    char ASCII; // character that the user will enter

    printf("Please enter an ASCII character: "); // asking for the user to enter a character

    scanf("%c", &ASCII); // take in character and assign it to ASCII

    printf("The ASCII value of a is: ");
    printf("\n");
    printf("    dec -- "); 
    printf( "%i\n", ASCII); // prints ASCII character as a decimal 
    printf("    hex -- "); 
    printf("%02X", ASCII); // prints ASCII character as hexidecimal

    chartobinary( ASCII); // calls the function that turns characters to binary

    return 0;
}