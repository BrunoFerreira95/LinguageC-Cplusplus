#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

// Main function
int main(){

    // Creates the file object
    ofstream OutputFile;

    // Open file or create if it does not exist
    OutputFile.open("Text.txt", std::ios_base::app);

    // White something
    OutputFile << "\nSuper Novelty";

    // Close the file
    OutputFile.close();

    // Pauses the program after running
    system("pause");

    // Returns zero for the program
    return 0;
}
