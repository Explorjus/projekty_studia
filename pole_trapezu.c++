#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    float a, b ,h;
    float pole;

    cout << "Podaj a: ";
    cin >> a;

    cout << "Podaj b: ";
    cin >> b;

    cout << "Podaj wysokość: ";
    cin >> h;

    pole = a*b*h/2;

    cout << "Pole trapezu wynsi " << pole;

    return 0;

}