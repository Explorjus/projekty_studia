#include <iostream>

using namespace std;

float masa, wzrost, BMI;

int main()
{
    cout << "Podaj mase ciała: ";
    cin >> masa;

    cout << "Podaj wzrost w centymetrach: ";
    cin >> wzrost;
    
    wzrost /= 100;

    BMI = masa / (wzrost * wzrost);

    printf("Twoje BMI wynosi: %.2f\n",BMI);

    if (BMI < 25.0f and BMI > 180.f) {
        cout << "Masz prawidłową masę ciała." << endl;
    } 
    else if (BMI < 18.0f) {
        cout << "Masz niedowagę." << endl;
    }
    else {
        cout << "Masz nadwagę." << endl;
    }
    return 0;
}

