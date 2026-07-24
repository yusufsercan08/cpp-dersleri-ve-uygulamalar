
#include <iostream>
using namespace std;
int main()
{
    char oparator;
    float x,y;
    bool gecersiz =true;

   while(gecersiz)
   {
      cout<<"Enter an operator (+,-,*,/):";
      cout<<"\n";
      cin>>oparator;

      if(oparator=='+'|| oparator=='-'||oparator=='*'||oparator=='/')
      {
          gecersiz=false;
      }
      else
      {
          cout<<"Hatali bir sembol girdiniz! Lutfen tekrar deneyin.\n";
      }
 }
 
 cout<<"Iki sayi giriniz:";
 cin>>x>>y;

switch (oparator) 
{
        case '+':
            std::cout << "Sonuc: " << x + y << std::endl;
            break;
        case '-':
            std::cout << "Sonuc: " << x - y << std::endl;
            break;
        case '*':
            std::cout << "Sonuc: " << x * y << std::endl;
            break;
        case '/':
            if (y != 0) {
                std::cout << "Sonuc: " << x / y << std::endl;
            } else {
                std::cout << "Hata: Bir sayi sifira bolunemez!" << std::endl;
            }
            break;
        default:
            std::cout << "Bilinmeyen bir hata olustu." << std::endl;
            break;
    }

    return 0;
}
