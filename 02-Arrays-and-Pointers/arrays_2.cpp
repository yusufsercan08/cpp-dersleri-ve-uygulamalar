#include <iostream>
#include <string>

//Bu kodda iki farklı yöntemle diziyi ekrana yazdırıyoruz. Birincisi klasik for döngüsü, ikincisi ise C++11 ile gelen range-based for döngüsü.
using namespace std;

int main() 
{
    string cars[6] = {"Volvo", "BMW", "Ford", "Skoda", "Nissan", "Tesla"};

    // 1. YÖNTEM: Klasik İndeks Tabanlı For Döngüsü (Index-based)
    cout << "--- Klasik For Dongusu ---\n";
    for (int i = 0; i < 6; i++) 
    {
        cout << i + 1 << ". Araba: " << cars[i] << "\n";
    }

    cout << "\n--------------------------\n\n";

    // 2. YÖNTEM: Modern C++11 Range-based For Döngüsü (Reference & Const)
    // auto  : 'cars' dizisinin türünü (string) derleyicinin otomatik tahmin etmesini sağlar.
    // &     : Bellekte yeni kopyalama yapmaz (performans artar). Doğrudan orijinal veriye referans (etiket) bağlar.
    // const : Referans ile bağlandığımız orijinal dizinin yanlışlıkla değiştirilmesini önler (read-only yapar).
    
    cout << "--- Range-based For Dongusu ---\n";
    for (const auto &car : cars)
    {
        cout << "Araba: " << car << "\n";
    }

    return 0;
}




