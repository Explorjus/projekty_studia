#include <iostream>
#include <iomanip> //pozwala na zaokraglenie
using namespace std;

int main() {
    float liczba1;
    float liczba2; 
    float predkosc;  //definuje liczby i ich typ
    
    cout << "Podaj droge: ";  //pierwsze dane
    cin >> liczba1;  //dziala jak input w python
    cout << "Podaj czas: ";
    cin >> liczba2;

    predkosc = liczba1 / liczba2;   //dodaje zmienna tutaj dzialanie

    cout << fixed << setprecision(4);  //pozwala na zaokraglenie do 4 liczb po przecinku

    cout << "Predkosc wynosi: " << predkosc << endl;  //printuje wyjscie

    return 0;
}