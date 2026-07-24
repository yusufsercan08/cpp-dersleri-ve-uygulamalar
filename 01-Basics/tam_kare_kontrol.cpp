#include <iostream>
#include <cmath> // sqrt() fonksiyonu için şart!

using namespace std;

int main() {
    int number;
    int karakok;
    int saglama;

    cout << "Pozitif bir sayi giriniz: ";
    cin >> number;

    if (number < 0) {
        cout << "Hata: Negatif sayi giremezsiniz!\n";
    } else {
        karakok = sqrt(number);
        saglama = karakok * karakok;

        if (saglama == number) {
            cout << "Girdiginiz sayi (" << number << ") bir TAM KARE sayidir.\n";
            cout << "Karekoku: " << karakok << "\n";
        } else {
            cout << "Girdiginiz sayi (" << number << ") tam kare degildir.\n";
            cout << "Atsagidaki tamsayi koku: " << karakok << "\n";
        }
    }

    return 0;
}