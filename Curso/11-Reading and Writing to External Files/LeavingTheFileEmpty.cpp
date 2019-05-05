#include <string.h>
#include <stdio.h>
#include <fstream>

using namespace std;

int main(){

    // Create the file object
    ofstream myFile;

    // Open file
    myFile.open("vocabulary.txt");
    // Empty the
    myFile << "";

    // Close the file
    myFile.close();

    return 0;
}
