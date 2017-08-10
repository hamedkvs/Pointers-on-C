/*
 * This programs reads input from a line (from standard input) and outputs the checksum in the next
 * line.
 * the checksum is calculated by adding each character's ASCII code. Overflow must be ignored.
 *
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char checksum = -1;
    int input;
    while( (input = getchar()) != EOF){
        if(input != '\n'){
            checksum+= input;
        }
        else
        {
            printf("%d\n", checksum);
            checksum = -1;
        }
    }
        
}
