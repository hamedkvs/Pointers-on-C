#include <stdio.h>
#include <string.h>

int main(){
    char ch;
    char *input = "a";
    strcat(input, "hi");
    printf("%s",input);
#if 0
    signed char checksum = -1;
    while((ch = getchar()) != EOF && ch != '\n')
        checksum+= ch;
    printf("%s\n%d",input,checksum);
#endif

}
