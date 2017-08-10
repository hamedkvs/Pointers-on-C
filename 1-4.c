/*
 * The program reads lines and prints the line with the highest characters. 
 * It is assumed each line is no more than 1000 characters.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000 //maximum number of characters in each line
int main(){
    int input;
    char line[MAX];
    char max_line[MAX];
    int max_length = 0;
    int index = 0;
    int line_chars = 0;
    

    while( (input = getchar()) != EOF)
    {
        if(input != '\n')
        {
            line[index] = input;
            line_chars++;
            index++;
        }
        else
        {
            if(line_chars > max_length){
                max_length = line_chars;
                for(int i=0; i< MAX; i++)
                    max_line[i] = line[i];
            }
            index = 0;
            line_chars = 0;
        }
    }
    printf("%s (with %d characters)\n",max_line, max_length);

}
