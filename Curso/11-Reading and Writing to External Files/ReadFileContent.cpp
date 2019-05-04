#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){

    // Cursor that will go through my entire file
    int c;
    char contentText[255];

    // File to be read
    FILE *file;

    // Opens the file in the chosen directory
    file = fopen("Text.txt", "r");

    // If the file is found
    if(file){

        // Counter
        int i = 0;

        // To the end of the file
        while((c = getc(file)) != EOF){

            // Prints on the screen
            printf("%c", c);

            // Vector of char receives the current letter
            contentText[i] = c;

            // Increases the content of letters
            i++;
        }

        // Close the file
        fclose(file);
    }

    // Counter
    int i = 0;

    // Printing content read
    for(i = 0; i < strlen(contentText) -2; i++){
        printf("%c", contentText[i]);
    }

    return 0;
}
