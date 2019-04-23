#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct fruit{
    string color;
    string name;
};

int main(){

    // Defining
    fruit *firstFruit = new fruit;

    // Modifying values
    firstFruit->color = "Yellow";
    firstFruit->name = "Banana";

    // Printing values
    cout << "Fruit: " << firstFruit->name << ", Color: " << firstFruit->color;

    // Creating fruit list
    fruit *pointerFruitList = new fruit[2];

    // Modifying values
    pointerFruitList[0].color = "Red";
    pointerFruitList[0].name = "Strawberry";
    pointerFruitList[1].color = "Green";
    pointerFruitList[1].name = "Kiwi";

    // Scrolling and displaying
    int i;
    for(i = 0; i < 2; i++){
        cout << "\nFruit: " << pointerFruitList[i].name << ", Color: " << pointerFruitList[i].color;
    }
    return 0;
}
