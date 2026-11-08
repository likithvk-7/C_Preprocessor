#include<stdio.h>
#include<string.h>

FILE *fp,*fs,*fo,*f1;

void headerFile(char *); // Headerfile inclusion function declaration
void commentRemoval(char *); // Comment Removal function declaration
void macroReplacement(char *); // Macros replacement function declaration


int main(int argc, char **argv)
{
    if(argc!=2)
    {
        printf("Usage: ./a.out filename\n");
        return 1;
    }
    char ch;
    headerFile(argv[1]);  // passing address of filename in actual argument (CLA) for headerfile inclusion
    commentRemoval(argv[1]);  // passing address of filename in actual argument (CLA) for comment removal
    macroReplacement("temp.i");  // passing address of filename in actual argument (CLA) for macro replacement
    return 0;
}

