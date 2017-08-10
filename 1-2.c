/*
** This program reads lines from the standard input and prints them in standard output along
** with their corresponding line number. '$' shows the termination of the input.
**
** The exercise requests the program not to impose any limits on each line's number of characters,
** because of this we bear in mind the concept of a line which is a sequence of characters ending
** with a newline '\n'. 
** Note that the sequence can continute after the newline character but it will be considered as 
** the starting point for a new sentence.
** 
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    int input;
    int line = 0;
    int isAtTheBeginning = 1;
    while( (input = getchar()) != EOF)
    {
        if(isAtTheBeginning == 1){
            line++;
            isAtTheBeginning = 0;
            printf("%d ",line);
        }
        putchar(input);
        if(input == '\n')
            isAtTheBeginning = 1;
    }
    return EXIT_SUCCESS;
}
