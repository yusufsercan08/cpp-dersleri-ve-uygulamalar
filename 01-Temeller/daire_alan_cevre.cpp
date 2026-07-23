#include <iostream>

/* dairenin alanını ve çevresini hesaplayan program */
using namespace std;
int main() {
    const float PI = 3.14f;
    float yariCap, cevre, alan;

    cout << "Dairenin yaricapini giriniz: ";
    cin >> yariCap;

    alan = PI * yariCap * yariCap;
    cevre = 2 * PI * yariCap;
    cout << "Dairenin alani = " << alan << endl;
    cout << "Dairenin cevresi = " << cevre << endl;

    return 0;
}