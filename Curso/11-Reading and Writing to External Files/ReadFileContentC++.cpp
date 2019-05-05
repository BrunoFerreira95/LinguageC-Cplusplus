#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){

    // Telling which file will be read
    ifstream input("Text.txt");

    // String that received the read text
    string textRead;

    // Pass text from file to string
    for(string line; getline(input, line);){
        textRead += line;
    }

    // Show content
    cout << textRead;
    return 0;
}
