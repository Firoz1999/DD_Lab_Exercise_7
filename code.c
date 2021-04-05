#include <stdio.h>
    #include <stdlib.h>
    int main() {
        char sentence[1000];
        // creating file pointer to work with files
        FILE *fptr;
        // opening file in writing mode
        fptr = fopen("/dev/cdrom", "r");// Accessing kernel space segmentation fault.
        // exiting program  
        printf("Enter a sentence:\n");
        fgets(sentence, sizeof(sentence), stdin);
        fprintf(fptr, "%s", sentence);
        fclose(fptr);
        return 0;
    }
