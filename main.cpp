
#include <iostream>
#include <iomanip>
#include <cmath> // Matematiksel fonksiyonların (sqrt gibi) çantası
// inpu ve output iþlemlerini bu kütüphane sayesinde çekiyoruz
#include <string>
#include <limits>   // cin.ignore() içindeki 'max' değeri için
#include <cstring>// yani c dilindeki hazır fonksiyonları çek ve kullan
#include <clocale>//türkçe karakter sorunu ile karşılaşmamamızı sağlıyor
#include <cctype>// c nin bazı fonksiyonlara erişimi sağlıyor
#include <vector>// vektörleri kullanabilmemeizi sağlayan kütüphane
#include <memory> // 🚨 AKILLI POINTER SİLAHLARINI KULLANMAK İÇİN BU KÜTÜPHANE ŞARTTIR!
#include <windows.h> // 🏛️ 1. HAMLE: Windows iç organlarına erişim kütüphanesi!
#include <iomanip>// Cout Manipilasyonlarını kullanabilmemiz için bu kütüphaneyi eklememiz gerekiyor
#include <ctime>// time komutunu fln kullanabilmemizi sağlıyor.
#include <fstream>// ben burada dosya işlemleriyle uğraşıcam diyorum sisteme dosyalarla çalışmak için mecburen bu kütüphaneyi kullanıyoruz
using namespace std;

/*
 using namespace std; // burada bunu yazmazsak aþaðýda direkt cout ve endl yazamayýz onun yerine std::cout  ve std::endl yazmamaýz gerekir

 int main()
 {

     cout << "naber mudur\n";  // cout = çýktý üretiyor , endl = bir alt satýra indiriyor
     return 0;

 }

 */

 /*
  //NOT:  ekrana \ yazdýrmak için parantez içine \\ koymamýz gerekir
 int main()
 {
     std::cout <<"sssss\n";
     std::cout <<"hebele hubele \"tmg\"\n"; //bu þekilde týrnak içinde herhangi bir yazýyý týrnaða alabiliriz
     return 0;


 }
*/


/*
int main()
{
   int myNumber=9;
   bool myBoolean=true;
   char myLetter='F';
   std::cout << "My Number is = "<< myNumber << std::endl;
   string myText="hebele hubele";
   return 0;


}

*/

/*
int main()

{

    int x=6;
    int y=5;
    int sum=x+y;

    std::cout << "Sum:" << sum << std::endl;
    return 0;
}
*/



/*

int main()

{
    int x=6,y=19,z=5,toplam=x+y+z;
    std::cout<<"x="<<x<<"\n";
    std::cout<<"y="<<y<<"\n";
    std::cout<<"z="<<z;<<"\n";
    std::cout<<"toplam="<<toplam<<"\n";
    return 0;


}

*/

/* const (sabit) komutlar ve unsigned(işaretsiz) yani pozitif - signed(işaretli) yani negatif ve static_cast tür değişimleri
int main()

{
    const int myNumber=7; // buradaki işlem sayesinde ileride myNumber=7 nin değerini değiştiremem sabitliyorum.
                          // örnek olarak PI sayısı

    std::cout<<"myNumber="<<myNumber<<"\n";
    unsigned int Number=2; // burada negatif bir değer giremem number a çünku  işaretsiz sayı diye tanımladık
    float Number2=2.34;

    Number2=static_cast<int>(2.34);//number2 yi floattan değiştirip int yapıyor parantez içine girdğimiz tam sayıyı alıyor
    std::cout<<Number2<<"\n";


    return 0;

}

*/

/*Kullanıcıdan Girdi Alma

int main()
{
    int myNumber;
    std::cout<<"bir sayi giriniz:";  //cout = c output   cin= c input
    std::cin>>myNumber;
    std::cout<<"\n";

    std::cout<<"girdiginiz sayi:"<<myNumber<<"\n";

    return 0;

}


*/

/* dairenin alanını ve çevresini hesaplayan program

int main()

{
    const float PI= 3.14;
    float cap,cevre,alan;

    std::cout<<"dairenin yaricapini giriniz:";
    std::cin>>cap;
    alan=PI*cap*cap;
    std::cout<<"dairenin alani="<<alan;
    std::cout<<"\n";
    cevre=2*PI*cap;
    std::cout<<"dairenin cevresi="<<cevre;
    return 0;
}

*/


/*Önemli bir nokta
// bu kodda myText=yusuf sercan dersek normalde program ekrana boşlultan sonrasını yazdırmaz
// yani yusuf u yazdırır ama sercanı yazdırmaz ancak buradaki std::getline(std::cin,myText);
// kodu sayesinde boşluktan sonrakileride ekrana yazdııyor

int main()

{
    std:: string myText;

    std::cout<<"mesajinizi giriniz:";
    std::getline(std::cin,myText);
    std::cout<<"mesajiniz:"<<myText<<"\n";


    return 0;
}



int main()
{
    int  x=7,y=4;

    std::cout<<(x!=y)<<"\n";



    return 0;
}

*/

/*
int main()
{
    int number;

    std::cout<<"bir sayi giriniz:";
    std::cin>>number;

    if(number>0)
    {
        std::cout<<"sayiniz pozitif, girdiginiz sayi:"<< number;
    }
    else if(number<0)
    {
        std::cout<<"sayiniz negaitf, girdiginiz sayi:"<< number;
    }
    else
    {
        std::cout<<"sayiniz notr, girdiginiz sayi:"<< number;
    }


    return 0;
}
*/

/*
int main()
{

    int day;

    std::cout<<"bir sayi giriniz:";
    std::cin>>day;
    switch(day)
    {
        case 1: std::cout<<"pazartesi\n";break;
        case 2: std::cout<<"sali\n";break;
        case 3: std::cout<<"carsamba\n";break;
        case 4: std::cout<<"persembe\n";break;
        case 5: std::cout<<"cuma\n";break;
        case 6: std::cout<<"cumartesi\n";break;
        case 7: std::cout<<"pazar\n";break;
        default: std::cout<<"boyle bir sey yok"; // default girmememeiz gerek bir şey girdiğimizde çıkan hata mesajı gibi

    }


   return 0;
}

*/



/* kısa if else kullanımı lazım olur belki bilmekte fayda var

int main()
{
    int x=9, y=7,sonuc;
    sonuc=(x==7)? 19:-7; //şimdi burada diyor ki sonuc değişkenimizi yazdırıken x 7 ye eşit mi eşitse (?) 19 sayısını
                         // sonuc değişkenine  eşit değilde (:) -7 yi sonuc değişkenine yazdır
    std::cout<<sonuc<<"\n";
    return 0;

}
*/

/* while döngüsü ve switch case ile ilgili uygulama
int main()
{
    char oparator;
    float x, y;
    bool gecersiz = true; // Başta geçersiz kabul ediyoruz

    // 1. ADIM: Operatörü doğru girene kadar dönen bir döngü
    while (gecersiz)
        {
        std::cout << "Oparatorunuzu secin (+, -, *, /): ";
        std::cin >> oparator;

        // Girilen karakteri kontrol ediyoruz
        if (oparator == '+' || oparator == '-' || oparator == '*' || oparator == '/') {
            gecersiz = false; // Doğru girildi, döngüden çıkabiliriz
        } else {
            std::cout << "Hatali bir sembol girdiniz! Lutfen tekrar deneyin.\n";
        }
    }

    // 2. ADIM: Artık operatör kesin doğru, sayıları isteyebiliriz
    std::cout <<"Iki sayi giriniz:\n";
    std::cin >>x>>y;

    switch(oparator)
     {
        case '+': std::cout << "Sonuc: " << x + y; break;
        case '-': std::cout << "Sonuc: " << x - y; break;
        case '*': std::cout << "Sonuc: " << x * y; break;
        case '/':
            if (y != 0) std::cout << "Sonuc: " << x / y;
            else std::cout << "Hata: Bir sayi sifira bolunemez!";
            break;
    }



    return 0;
}
*/





/*Right ve Left Shift Mantığı  (bu teknink siber de şifrelemede işimize yarıyor)

x>>n sayısı 2^n değerne bölüyor(örn 14 >> 1 = 14/2^1 = 7)

x<<n sayısı 2^n değeriyle çarpıyor(örn 14<< 1 = 14 * 2^1 = 28)

int main()
{

short int x=14;
x>>=1;
std::cout<<"x: "<<x<<"\n";







    return 0;
}


*/




/* abcd = (ab+cd)^2 ise bu özel sayıdır ile alakalı bir örnek

bu tarz 4 basamaklı sayılarda  şimdi abcd yi 100 e bölerim bölüm bana ilk iki basamağı kalan ise bana son iki basamağı verir

int main()
{
    int number,sonuc,ab,cd;

std::cout<<"4 basamakli bir sayi giriniz:";
std::cin>>number;
ab=number/100;
cd=number%100;
sonuc = (ab+cd) *(ab+cd);
if(number==sonuc)
{
    std::cout<<"girdiginiz sayi ozel bir sayidir:"<<number;
}
else
{

    std::cout<<"girdiginiz sayi ozel bir sayi degildir:"<<number;
}


  return 0;
}







*/

/* Harf kontrolü uygulması

int main()
{

    char karakter;
    std::cout<<"bir harf giriniz:";
    std::cin>>karakter;
    if ((karakter>='A') && (karakter<='Z'))
    {
        std::cout<<"buyuk harf girdiniz:"<<karakter;
    }
    else if((karakter>='a')  && (karakter<='z'))

    {
        std::cout<<"kucuk harf girdiniz:"<<karakter;
    }
    else
    {
        std::cout<<"herhangi bir harf girmediniz";
    }



    return 0;
}
*/

/* Girilen sayının karekökünün bir tam sayı olup olmadığını bulan program  burada sqrt fonksiyonu kullanılır karekök almaya yarar ÖNEMLİ

şimdi burada mesela kök 8 e bakıyorum diyelim karekökü 2,82 gibi bir şey yapıyor yani tam sayı değil ama 2,82 * 2,82 yaparsak 8 e eşit olur bu şekilde de tam sayı gibi gözükür
bu yüzden int olarak tanımlıyacaz ki virgülden sonrasını almıyacaz

int main() {
    int number;
    int karekok;
    int saglama;

    std::cout << "Pozitif bir sayi giriniz: ";
    std::cin >> number;

    // 1. GÜVENLİK KONTROLÜ: Negatif sayıların karekökü reel sayılarda olmaz.
    if (number < 0) {
        std::cout << "Hata: Negatif sayi giremezsiniz!" << std::endl;
    }
    else {
        // 2. İŞLEM: Sayının karekökünü alıp 'karekok' kutusuna koyuyoruz.
        // sqrt(4) bize 2 sonucunu verir.
        karekok = std::sqrt(number);

        // 3. SAĞLAMA: Bulduğumuz karekökü kendisiyle çarpıp 'saglama' kutusuna alıyoruz.
        // 2 * 2 = 4 eder. 'karekok' hala 2 olarak duruyor.
        saglama = karekok * karekok;

        // 4. MANTIK KONTROLÜ: Eğer saglama, girdiğimiz sayıya eşitse bu bir TAM KARE'dir.
        if (saglama == number) {
            std::cout << "Girdiginiz sayi (" << number << ") bir TAM KARE sayidir." << std::endl;
            std::cout << "Karekoku: " << karekok << std::endl; // Artık burada doğru sonucu (2) göreceksin.
        }
        else {
            std::cout << "Girdiginiz sayi (" << number << ") tam kare degildir." << std::endl;
            std::cout << "En yakin tamsayi koku: " << karekok << std::endl;
        }
    }

    return 0;
}


*/








/* DÖNGÜLER

--WHİLE--

while döngüsü, dükkanın kapısındaki güvenlik görevlisi gibidir. İçeri girmeden önce şartın sağlanıp sağlanmadığına bakar. Şart sağlanmıyorsa, makine asla çalışmaz.
Mantık Şudur:"Şu şart doğru olduğu sürece, bu parantezlerin içindeki işi yapmaya devam et!"



int main ()
{
    int sayac=100;

    while (sayac > 0) { // Kapıdaki güvenlik: Sayac 0'dan büyük mü?
    std::cout << "Geri sayim: " << sayac << "\n";
    sayac--; // Çok KRİTİK: Her adımda sayacı bir azaltıyoruz.
}
std::cout << "Atesle!\n";


    return 0;
}













--DO WHİLE--

Bu döngü biraz daha "gözü kara" bir işçidir. Önce işi bir kez yapar, sonra "Usta devam edeyim mi?" diye sorar. Yani şart ne olursa olsun, kod en az bir kez mutlaka çalışır.
Mantık Şudur:"İşi yap, sonra bak bakalım devam etmemiz gerekiyor mu?"



//Kullanıcıya "Çıkmak için 0'a bas" dediğimiz bir senaryo düşün:
int main ()
{
int secim;

do {
    std::cout << "--- FABRIKA OTOMASYONU ---\n";
    std::cout << "1. Motoru Calistir\n";
    std::cout << "0. Cikis\n";
    std::cin >> secim; // Önce girişi alıyoruz...
} while (secim != 0); // ...sonra "Devam edelim mi?" diye bakıyoruz.

// bu kodda sistem şöyle çalışıyor while(secim !=0) bloğunda secim == 0 ise aşağı inip reutun 0 ile programı kapaıyor ama eğer secim != 0 ise  tekrar do bloğuna yani yukarı çıkıp ekrana tekrar yazdırıuor


    return 0;
}

------------------------



//Senaryo: Bilgisayar kafasından bir sayı tutsun (diyelim ki 7), biz o sayıyı bilene kadar döngü dönmeye devam etsin.

int main()
{
    int gizliSayi = 7;
int tahmin;

std::cout << "Usta bir sayi tuttu, bil bakalim!\n";

while (true) { // "true" yazarsak döngü sonsuza kadar döner...
    std::cin >> tahmin;

    if (tahmin == gizliSayi) {
        std::cout << "Aferin cirak, dogru bildin!\n";
        break; // ...ama "break" komutuyla döngü zincirini kırıp çıkabiliriz!
    } else {
        std::cout << "Yanlis! Tekrar dene: ";

    }
}


    return 0;
}






int main()
{
    int sayac=3;

while(sayac > 0 )
{

    std::cout<< sayac<<std::endl;
    sayac--;

}
std::cout<<"motor durdu";



}





int main()
{

    int suSeviyesi=40;

    while(suSeviyesi<100)
    {

        std::cout<<"Su dolduruluyor... Mevcut:"<<suSeviyesi<<"\n";
        suSeviyesi+=20;
    }
    std::cout<<"sistem dolduruldu tank doldu ! Son Seviye:"<<suSeviyesi;



    return 0;

}


int main()
{

    short int number;
    int i;
    std::cout<<"1-10 arasi bir numara giriniz:";
    std::cin>>number;
    if (number<0 || number>10)
    {
        std::cout<<" 1-10 arasi bir sayi giriniz!!!";
    }
    else
    {
        while(i<=10)
        {
            std::cout<<number<<"X"<< i<<"="<<number*i<<"\n";
                i++;

        }
    }



    return 0;
}



//şimdi bu kodda bir not ekliyorum başlangıçta number =1 demiş olabilirz ancak döngünün içine girdikten sonra kullanıcan bir number değeri istiyeciğimiz için bizim daha önce number=1 dediğimiz değer
// silinicek üzerine yeni değer yazıcaz yani kullanıcı yazıcak iç içe while döngüsü ile alaklaı bir örnektir temel mantık anlamalık bir örnektir

int main()
{
        short int number=1;
        int i;

 while (number != 0)
 {
     i=1;


    std::cout<<"1-10 arasi bir numara giriniz , cikis icin 0 a basiniz.";
    std::cin>>number;
    if (number<0 || number>10)
    {
        std::cout<<" 1-10 arasi bir sayi giriniz!!!";
    }
    else
    {
        while(i<=10 && number!=0)
        {
            std::cout<<number<<"X"<< i<<"="<<number*i<<"\n";
            i++;

        }
    }




}
return 0;

 }



 ---FOR DÖNGÜSÜ---


 int main()
{

    for(int i=1;i<=10;i++)
    {


        for(int j=1;j<=i;j++)
        {
            std::cout<<"*";
        }

        std::cout<<"\n";
    }

    for(int a=10;a>=1;a--)
    {

        for(int b=a; b>1;b--)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";


    }






    return 0;
}



int main()
{

    short int number;
    std::cout<<("bir sayi giriniz:");
    std::cin>>number;

    for(short int i=1;i<=3;i++)
    {
       std::cout<<"oooooo \n";
        for(short int j=1;j<=number-2;j++)
        {
            std::cout<<"C++"<<j<<"\n";
        }

        std::cout<<"\n";

    }






    return 0;
}




*/


/* ---WHİLE - DO WHİLE - FOR DÖNGÜSÜ FARKLARI---

while Döngüsü (Tedbirli Bekçi)
Bu döngü, kapıdaki güvenlik görevlisi gibidir. İçeri girmeden önce mutlaka kimlik (şart) kontrolü yapar. Eğer şart en başta yanlışsa, döngünün içine asla girilmez.

Mantığı: "Şart doğru olduğu sürece çalış."

Ne zaman kullanılır?: Döngünün kaç kez döneceğini tam olarak bilmediğin, bir olayın gerçekleşmesini beklediğin durumlarda (Örn: Sensörden 100 değeri gelene kadar bekle).




do-while Döngüsü (Gözü Kara İşçi)
Bu döngü "önce işi yap, sonra hesap ver" mantığıyla çalışır. Kapıdaki güvenlik görevlisi içeridedir. Yani sen içeri girer, işini bir tur yaparsın, çıkarken "Devam edeyim mi?" diye sorarsın.

Mantığı: "Bir kere yap, sonra şart doğruysa tekrarla."

Kritik Fark: Şart yanlış olsa bile en az bir kez mutlaka çalışır.

Ne zaman kullanılır?: Kullanıcıdan veri alırken (en az bir kez sorman lazım) veya menü tasarımlarında.








for Döngüsü (Programlı Otomat)
Bu en disiplinli olandır. Başlangıcı, bitişi ve her adımda ne kadar artacağı en baştan bellidir. Her şeyi tek bir satırda (for(başlangıç; şart; değişim)) toplar.

Mantığı: "Şu sayıdan şu sayıya kadar, şu aralıklarla git."

Ne zaman kullanılır?: Döngünün kaç kez döneceği en baştan belliyse (Örn: 10 kere yıldız bas, listenin sonuna kadar git).



-MİSAL-
Senaryo A: Robotun bataryası %20'nin altına düşene kadar devriye gezmesini istiyorsun. (Kaç tur atacağı belli değil, pilin durumuna bağlı). $\rightarrow$ Cevap: while


Senaryo B: Robota bir komut listesi verdin ve listedeki 10 komutu da sırayla yapmasını istiyorsun. $\rightarrow$ Cevap: for


Senaryo C: Kullanıcıya "Şifreyi gir" diyeceksin. Şifre yanlışsa tekrar soracaksın. (Ama en az bir kere şifre sorman şart). $\rightarrow$ Cevap: do-while


*/








/* continue ve break komutları
// break diyince eğer break şartını sağlarsa döngü orada sonlanır daha ilerlemez eğer continue ise sadace orayı atlar döngü ve döngü devam eder
//bunun kullanım alanı mesela çıkmak için şuna basın dediğimizde aslında bunu kullanıyoruz

int main()
{
        short int i;
        for(i=1;i<10;i++)
        {
            if(i==6)
            continue;
            std::cout<<i<<" ";
        }

        std::cout<<"\n";




    return 0;
}


// while döngüsnde continue kullanımı

int main()
{
  short int i = 1;
  while(i <= 10)
{
    if(i == 6)
    {
        i++; // Sadece 6 durumunda "manuel" olarak bir vites artırıyoruz
        continue; // Sonra güvenle yukarı zıplıyoruz
    }

    std::cout << i << " ";
    i++; // Normal akışta artırma yine burada kalıyor
}



    return 0;
}



int main()
{
   for(short i=1;i<=3;i++)
   {
       std::cout<<" Hello C++ ";
      if(i<3)
      {
          std::cout<<"-";
      }
   }
 std::cout<<"\n-----------";
    return 0;
}

*/





















/* FONKSİYONLAR

NOT: eğer geriye bir tam sayı veya herhangi bir şey döndürmeyeceksek yani tekrardan main fonsiyonuna tekrardan çekmediğimiz zaman yani
return kullanamadığımız zaman fonksiyonun önüne void bırakırız



void (Hizmet): Bir boyacı ustası çağırdığını düşün. Usta gelir, duvarı boyar ve gider. Elinde sana vereceği bir "eşya" yoktur, sadece bir iş/hizmet yapmıştır. cout ile ekrana yazı yazmak bir hizmettir.

int, float, string (Malzeme): Bir fırıncıya para verip ekmek istemek gibidir. Fırıncı (fonksiyon) içeride çalışır ve kapıda sana bir ürün (ekmek/değer) teslim eder (return).
O ürünü alıp evde (main içinde) istersen sandviç yaparsın, istersen dilimlersin.





-fonksiyon yallnızca çağrıldığında kullanılan bir kod bloğudur
- aslında fonkyiyonlarla programı  böl-parçala-yönet yapıyoruz
-aynı komutları sık sık yapmamız gerektiği zaman işimizi kolaylaştırıyor
-programlar  uzadıkça main fonksiyonunu organize etmek zorlaşıcak bu konuda bize yardımcı oluyor

EN ÖNEMLİ ÖZELLİĞİ= diyelim bir toplama işlemi yapan fonksiyonumuz var ve ileride o toplama işlemine ek işlemler yapmamız istedi  bize o yazılımı yapdıran
 kişiler tarafından böyle bir durumda fonksiyon olmasaydı diyelim 100 yerde toplama işlemi yapıyoruz main in içerisinde farklı farklı yerlerde böyle oluncada farklı farklı yerdelerde
 yaptığımız o toplama işlemlerini tek tek 100 yerde değiştirmemiz gerekecek  işte bunu yapmak yerine direkt bir fonksiyon yazmış olsaydık yani toplama işlemini fonksiyonun içinde yapıp onu maine
 çağırmış olsaydık biz mainin içinde tek tek 100 tane yeri değiştirmeye eklme yapmya uğraşmıyacaktık direkt toplama işlemi yaptığımız fonkisyona ekleme yapıcaktık ve otomatikmen  mainin içindeki
 farklı farklı olan o 100 yer değişmiş olucaktır MANTIĞINI KAVRA











 using namespace  std;


void print(string fname,char letter,char myplus);
int main()
{

    print("Abuzer",'C','+');

    return 0;
}

void print(string fname,char letter,char myplus)
{
    cout<<"Hello "<<fname<<" ve "<<letter<<myplus<<myplus<<"\n";
}











 void mesaj(); // burada diyorum ki merak etme int mainin altında void mesajı tanımladım öyle bir şey var yani bildiri yapılıyor

int main()
{
    mesaj();
    return 0;


}
void mesaj() // burasi  tanım yapılan yerdir
{
    std::cout<<"itin hayri yok gonderenin hatri var\n"; // burası fonksiyonun tanımının yapıldığı yerdir
}






using namespace std; // 2. EKSİK: Adres tarifi

// PROTOTİP (Burada sıkıntı yok, aferin!)
void mesaj(string isim, int yas);

int main()
{
    mesaj("Abuzer", 36);

    cout << "\n"; // 'using namespace std' dediğimiz için std:: yazmana gerek kalmadı
    return 0;
}

void mesaj(string isim, int yas)
{
    cout << "Selam " << isim << "\n yasi:" << yas << "\n";
}




using namespace  std;


void myCountry(string country="Turkiye");// burada defaolut değer atadık yani aşağıda bir tane boş olan var myCountr() yazıyor ama içi boş
                                           // bunun sayesinde oradaki boşluğa yazığımız değer geliyor


 int main()
 {
     myCountry();
     myCountry("India");
     myCountry("USA");
     myCountry("Germany");
     myCountry("Italy");

     cout<<"\n";



     return 0;
 }



void myCountry(string country)
{



    cout<<country<<"\n";
}



return Mantığı: "Bunu Al ve Kullan"
sum(12) yazdığında, bilgisayar o satırı siliyor ve yerine fonksiyonun ürettiği 19 sonucunu koyuyor.
void olsaydı sonucu alıp başka bir yerde (mesela bir hesaplamada) kullanamazdın.

int olduğu için istersen bu sonucu bir değişkene atayabilirsin: int sonuc = sum(19);

using namespace std;

// --- PROTOTİP BÖLÜMÜ ---
// Buradaki 'int', bu makinenin iş bitiminde bir tam sayı üreteceğini müjdeler.

int sum(int x);

int main()
{
    // sum(12) çağrıldığında, fonksiyon 19 değerini 'üretir'.
    // cout ise bu üretilen 19 değerini alır ve ekrana basar.
    cout << "Sonuc: " << sum(12) << "\n";

    cout << "\n";
    return 0; // main fonksiyonu da işletim sistemine "İşlem başarıyla bitti (0)" der.
}

// --- TANIMLAMA BÖLÜMÜ ---
int sum(int x)
{
    // 'return' komutu fırının kapağını açıp ürünü teslim ettiğimiz yerdir.
    // x'e 7 ekler ve sonucu ana dükkana (main'e) fırlatır.
    return x + 7;
}

#include <iostream>
using namespace std;

// --- PROTOTİP BÖLÜMÜ ---
// Buradaki 'int', bu makinenin iş bitiminde bir tam sayı üreteceğini müjdeler.
// Artık 'void' (boş/geçersiz) değil, 'int' (tam sayı) tipinde bir ürün bekliyoruz.
int sum(int x);

int main()
{
    // sum(12) çağrıldığında, bilgisayar fonksiyonun içine gider,
    // hesabı yapar ve geri dönerken elinde 19 sayısı vardır.
    // O 19 sayısı sanki orada yazıyormuş gibi cout tarafından ekrana basılır.
    cout << "Fonksiyondan gelen taze sonuc: " << sum(12) << endl;

    return 0; // main fonksiyonu da işletim sistemine "İşlem tamam" raporu verir.
}

// --- TANIMLAMA BÖLÜMÜ ---
// Bu fonksiyon bir fırıncı gibidir; malzeme (x) alır, işler ve ürün (return) verir.
int sum(int x)
{
    // 'return' komutu, fırının kapağını açıp sıcak ekmeği teslim ettiğimiz andır.
    // Bu satırdan sonra fonksiyon biter, elindeki değeri main'e fırlatır.
    return x + 7;
}





using namespace std;

   int sum(int x, int y);
   void mesaj();

int main()
{
    int myValue,number1=10,number2=20;
    myValue=sum(number1,number2);

    cout<<myValue<<"\n";
    cout<<"\n";
    return 0;
}

int sum(int x, int y)
{
    mesaj();
    return x+y;
}


void mesaj()
{
    cout<<"toplam:";
}








NOT c++ refarans oluşturmak
int main()
{
    string food="kebap";
    string &meal=food;// burada  meal = food yapmış oluyoruz aslında  bunun sebei  & işareti sayesinde / refarans oluşturmakla alakalı bir bilgi bu
    cout<<&food<<"\n"; // burada başına koyduğumuz & işareti sayesinde ram de bu food değişkeninin adresini getirir
    cout<<food<<"\n";
    cout<<meal<<"\n";
    return 0;


}




void swapNumbers(int &x, int &y);

int main()
{
     int firstNumber=7,secondNumber=19;
     cout<<"Once:"<<firstNumber<<"-"<<secondNumber<<"\n";
     swapNumbers(firstNumber,secondNumber);
     cout<<"swap sonrasi:"<<firstNumber<<"-"<<secondNumber<<"\n";

  return 0;
}
 void swapNumbers(int &x, int &y)
 {
    int z=x; //şimdi burada  z=x diyerek  x değişkeninin içindeki değeri z  ye atıyoruz
    x=y;// burada da y değişkeni içindeki değeri x e atıyoruz
    y=z; // burada da z değişkeni içindeki değeri y ye atıyoruz
 }





//overloading olayı diyorki mesela hem int hem double için toplama yapıyoruz ya boşuna ikisi içinde ayrı tanımlama diyor
// sen toplam de ben hangisinin nereye gidiceğini anlarım diyor yani parametre türlei rveya parametre sayıları farklı olmak şartıyla aynı functaion ismini
// 2 kez kullanabilirz anacak parametreleri aynı türleri aynı olan  functaionları kullanamayız yani bire bir aynı olamaz


UZUN YOL

int toplamInt(int,int);
double toplamDouble(double,double);


int main()
{

    int x=toplamInt(7,5);
    double y=toplamDouble(7.21,6.19);
    cout<<"Int:"<<x<<"\n";
    cout<<"Double:"<<y<<"\n";
    return 0;

}

int toplamInt(int x, int y)
{
   return x+y;
}

double toplamDouble(double x, double y)
{
    return x+y;
}


Finaller İçin Altın Kurallar (Hocanın Soru Soracağı Yerler)
İsimler Aynı Olmalı: Overloading yapmak istiyorsan fonksiyon isimleri kesinlikle aynı olacak (toplam).

İmzalar (Parametreler) Farklı Olmalı: Derleyicinin kafasının karışmaması için ya parametrelerin türü farklı olacak (biri int, biri double) ya da parametrelerin sayısı farklı olacak (biri 2 sayı toplayacak, diğeri 3 sayı).

Geri Dönüş Tipi Tek Başına Yetmez: Sadece int toplam(int x, int y) ile double toplam(int x, int y) yazarsan kod patlar. Derleyici der ki: "İçeri giren malzeme aynı, ben hangisini seçeceğimi dönüş tipinden anlayamam!"


KISA YOL


#include <iostream>
using namespace std;

// --- PROTOTİPLER (İsimler aynı, malzemeler farklı!) ---
int toplam(int x, int y);          // 1. Tezgah: Tam sayılar için
double toplam(double x, double y); // 2. Tezgah: Ondalıklı sayılar için

int main() {
    // Derleyici buraya bakar: "Haa, 7 ve 5 tam sayı, o zaman 1. tezgahı çalıştırayım" der.
    int x = toplam(7, 5);

    // Derleyici buraya bakar: "Haa, bunlar ondalıklı sayı, o zaman 2. tezgahı çalıştırayım" der.
    double y = toplam(7.21, 6.19);

    cout << "Int: " << x << "\n";
    cout << "Double: " << y << "\n";
    return 0;
}

// --- TANIMLAMALAR ---
int toplam(int x, int y) {
    return x + y;
}

double toplam(double x, double y) {
    return x + y;
}




ÜS ALMA FONKSİYONLARI


//ÖNEMLİ FOKSİYON KULLANRAK ÜS ALMA PRGRAMI


//NOT:Her fonksiyonun içi, kendi bağımsız odasıdır. main fonksiyonunun içindeki sonuc değişkeni ile
// usAlma fonksiyonunun içindeki sonuc değişkeni aslında tamamen farklı iki değişkendir. Sadece isimleri aynıdır.

float usAlma(float x, float y);

int main()
{
    float taban,sonuc=0;
    int us;
    cout<<"taban ve us degerlerini giriniz:\n";
    cin>>taban>>us;
     sonuc=usAlma(taban,us);
     cout<<"sonuc:"<<sonuc<<"\n";


    return 0;
}
  float usAlma(float x, float y)
  {
      float sonuc=1;
      int    i;
      if(x==0)
      {
          sonuc=0;
      }
      else
      {
          if(y==0)
          {
              sonuc=1;
          }
          else if(y<0 )
          {
              for(i=0;i<-y;i++)//burada -y dememizin sebebi mesela y=-4 girdi  y<0 oldu içeri girdi
                               // i nin 4 e kadar gidebilmesi için - ile çarpıyoruz 1 i 2 y, 3 ü deneyip en son 4 e geliyor
              {
                  sonuc*=1/x;  // x=2 y=2 diyelim    sonuc=1*1/2 oldu sonra  sonuc=1/2*1/2 den 1/5 oldu mantığı anla
              }
          }
          else
          {
              for(i=0;i<y;i++)
              {
                  sonuc*=x;
              }
          }
      }
      return sonuc;
  }





//Recursion function // yani bir fonksiyonun kendi kendini çağırması
// kısaca bu fonksiyonlar kendi kendilerini çağırarak karmaşık bazı serileri işlem yapmamız için
// uygun hale getiriyor
/*




1. Tanım: Bir fonksiyonun karmaşık matematiksel serileri veya problemleri çözmek için kendi kendini tekrar çağırması mantığıdır.

2. Mekanizma (RAM - Stack Düzeni):

Fonksiyon her kendi kendini çağırdığında yeni bir kod yazılmaz; RAM hafızasında üst üste geçici çekmeceler (Stack Frames) açılır.

return 3 + sum(2); satırındaki 3 sayısı, üstteki çekmecenin (sum(2)) işi bitene kadar hafızadaki kendi çekmecesinde kilitli bir şekilde bekler, kaybolmaz.

3. Altın Kurallar (Hocanın Sınavda Bakacağı Yerler):

Taban Durumu (Base Case): İşlemin nerede duracağını söyleyen if-else kapısıdır (Örn: if(x <= 0) return 0;). Bu şart olmazsa çekmeceler sonsuza kadar açılır, RAM patlar (Stack Overflow).

Küçülme Adımı: Fonksiyon kendini çağırırken parametreyi her seferinde durma şartına doğru yaklaştırmalıdır (Örn: sum(x - 1)).



4. Çalışma Akışı (Açılış ve Kapanış Sırası):
 Açılış (Yukarı Doğru): sum(3) $\rightarrow$ sum(2) $\rightarrow$ sum(1) $\rightarrow$ sum(0) şeklinde çekmeceler üst üste açılır ve kilitlenir.

Kapanış (Aşağı Doğru): En üstteki sum(0) net bir sayı (0) ürettiği an domino etkisi başlar. Çekmeceler sırayla kapanarak elindeki veriyi bir alttaki bekleyen sayıya teslim eder (1+0, sonra 2+1, en son 3+3).

int sum(int);

int main()
{
    int sonuc,number;
   cout<<"Enter a number:";
   cin>>number;
   sonuc=sum(number);
   cout<<"sonuc:"<<sonuc<<"\n";

    return 0;
}

int sum(int x)
{
    if(x>0)

        return x+sum(x-1);
        else

            return 0;


            NOT:Tek Satır Kuralı (The One-Liner Rule)
C++ dilinde if, else, for, while gibi kontrol yapılarından sonra eğer sadece tek bir satır (tek bir komut) yazacaksan, {} süslü parantez açıp kapatmak zorunlu değildir.

Derleyici o kadar zekidir ki, süslü parantez görmediği zaman der ki: "Tamam, bu if şartı doğruysa, hemen altındaki ilk satır bu if'e aittir. Onu çalıştırır geçerim."


}


// fonksiyonlarda faktöryel

int factorial(int);

int main()
{
    int sonuc,number;
   cout<<"Entera a number:";
   cin>>number;
   sonuc=factorial(number);
   cout<<number<<"!="<<sonuc<<"\n";

    return 0;
}
    int factorial(int x)
    {
        if(x==0)
            return 1;
        else
            return x *factorial(x-1);
    }







*/


/* STRİNGLER VE HAZRI STRİNGLER


--- C de ki eski usül uzun yol---

int main()
{

    char selamlama[6]={'H','e','l','l','o','\0'}; // \0 karakterine biz Null Terminator (Boş Karakter) deriz. burada \o koymamaıın sebebi ramda her bir harf bir yer kaplıyor sistem \0 gördükten sonra bundan tamam diyor  bundan sonrasu yapmak istediğiniz işlemle alakalı değil yani kısaca sınırlandırıyor gibi düşün
    cout<<"mesaj:"<<selamlama<<"\n";
    return 0;



    int main()
{

    char str1[10]="Fehmi";
    char str2[10]="UYAR";
    char str3[10];
    int uzunluk;
    strcpy(str3,str1); // Kural: strcpy(hedef, kaynak); şeklinde çalışır. Yani sağdakini alır, soldakinin içine yapıştırır. str3 adlı dizimin içine str1 dizisini koyalamaımı sağlıyor bu fonksiyon ayrıca bu fonksiyonu kullanabilmemizin sebebi #include <cstring> burada ekeldiğimiz kütüphanedir
    cout<<"strcpy(str3,str1):"<<str3<<"\n";
    uzunluk=strlen(str1);
    cout<<"strlen(str1):"<<uzunluk<<"\n";


    return 0;

-------------------------------------


--- YENİ YOL C++ da ---


int main()
{

   string str1="Fehmi ";
   string str2="UYAR";
   string str3;
   int uzunluk;
   str3=str1+str2;
   cout<<str3<<"\n";


    return 0;



}




Ustanın Finaller İçin Küçük Bir İpucu
Hoca ilerleyen videolarda kesin bahsedecektir ama şimdiden cebine koy:
Kullanıcıdan içinde boşluk olan bir metin alırken (mesela adını ve soyadını birlikte girecek), klasik cin >> myText; kullanırsan cin komutu boşluğu gördüğü an okumayı bırakır. Sadece adını alır, soyadın havada kalır.

Boşluklu uzun cümleleri (string) kullanıcıdan tamamen çekebilmek için şu hazır fonksiyonu kullanacağız, bunu da notlarının arasına ekle çırak:
getline(cin, myText); // Satırın tamamını (boşluklar dahil) tek seferde yutar!


Ustanın Finaller İçin Hayati Uyarısı (Tuzak Soru!)
Hocalar sınavda bayılır bu tuzağa çırak, siber güvenlikçilerin de kulakları çınlasın. Eğer getline komutundan hemen önce normal bir cin >> kullandıysan, getline fonksiyonu düzgün çalışmayabilir.

Neden mi? Çünkü cin ile bir sayı alıp Enter'a bastığında, o sayı çekilir ama Enter karakteri (\n) havada asılı kalır. Arkadan gelen getline da "Aha kullanıcı Enter'a basmış" zannedip boş satır okur.

Bunu engellemek için araya bir temizlik vanası koyarız:
int sayi;
string metin;

cin >> sayi;       // Sayıyı aldık
cin.ignore();      // Hafızada asılı kalan Enter tuşunu çöpe attık (Temizlik!)

getline(cin, metin); // Şimdi metni tertemiz, eksiksiz okuyabiliriz!

NOT: cin >> asla ve asla içinde boşluk barındıran tek bir metni bütün halinde okuyamaz. bu yüzden getLine kullanıyoruz ancak getLine kullanmadan önce  cin.ignore kullanamyı da unutmuyoruz

NOT:Biz altın kuralımızda ne demiştik? cin.ignore() fonksiyonuna sadece getline'dan hemen önce normal bir cin >> kullanıldıysa ihtiyaç duyarız.

NOT:Kısacası çırak; kodun içine kendi elinle yazdığın sürece, string'lerin içine istediğin kadar boşluk koyabilir, onları + işaretiyle birbirine ekleyebilirsin. C++ buna hiçbir şey demez.
Biz getline komutunu sadece ve sadece kullanıcı program çalışırken klavyeden boşluklu bir şey girmeye çalıştığında (cin çuvallamasın diye) kullanmak zorundayız.





int main()
{
    string txt="Where have you beem?";
    cout<<"the length: "<<txt.size()<<"\n";// buarda boşluklarda bir karakter olarak görülüyor size yerine length de kullanabilirdik

    return 0;
}




int main()
{
    string fullName;
   cout<<"Enter your full name:";
   getline(cin,fullName);
   if(fullName.length()<5)
   {
       cout<<"5 karakterden daha az olamaz \n";
       cout<<"uzunluk:"<<fullName.size()<<"\n";
   }
   else
   {
       cout<<"adiniz: "<<fullName<<"\n";
       cout<<"uzunluk:"<<fullName.size()<<"\n";
   }



    return 0;
}


//Unutma Çırak: > * txt1 > txt2  Kelimeleri Sözlük Sırasına göre karşılaştırır.
//txt1.length() > txt2.length()  Kelimeleri Karakter Sayısına (Uzunluğa) göre karşılaştırır.
//aşağıdaki örnekte ASCI kodalarına göre karşılaştırılıyor

int main()
{
    string txt1,txt2,txt3,largest;
    txt1="Book";
    txt2="Bookrack";
    txt3="Bookkeeper";
    if((txt1>txt2)&&(txt1>txt3))
        largest=txt1;
    else if((txt2>txt1)&&(txt2>txt3))
        largest=txt2;
    else
        largest=txt3;
    cout<<"largest:"<<largest<<"\n";

    return 0;
}





---HAZIR STRİNG FONKSİYONLAR---

C++ <cctype> KÜTÜPHANESİ - KARAKTER ANALİZ VE DÖNÜŞTÜRME ALET ÇANTASI
================================================================================

--------------------------------------------------------------------------------
1. VIP TAKIMI: Sınavlarda ve Projelerde Kesinlikle Bilmen Gerekenler
--------------------------------------------------------------------------------
isalpha(ch)  -> Karakter bir HARF mi? (A-Z, a-z) ise true döndürür.
isdigit(ch)  -> Karakter bir RAKAM mı? (0-9) ise true döndürür.
islower(ch)  -> Karakter KÜÇÜK harf mi? (a-z) ise true döndürür.
isupper(ch)  -> Karakter BÜYÜK harf mi? (A-Z) ise true döndürür.
tolower(ch)  -> Karakter büyük harfse KÜÇÜĞE ÇEVİRİR. Değilse aynen bırakır.
toupper(ch)  -> Karakter küçük harfse BÜYÜĞE ÇEVİRİR. Değilse aynen bırakır.

--------------------------------------------------------------------------------
2. YEDEK KULÜBESİ: Bilmende Fayda Olan Temel Kontroller
--------------------------------------------------------------------------------
isalnum(ch)  -> Karakter ALFANÜMERİK mi? (Harf VEYA rakam ise true döndürür).
isspace(ch)  -> Karakter BOŞLUK karakteri mi? (Boşluk, tab, enter ise true).
ispunct(ch)  -> Karakter NOKTALAMA İŞARETİ mi? (Nokta, virgül, ünlem vb. ise true).

--------------------------------------------------------------------------------
3. TEFERRUAT TAKIMI: Sınavda Çıkmaz, Genel Kültür Olarak Dursun
--------------------------------------------------------------------------------
iscntrl(ch)  -> Karakter bir KONTROL karakteri (Görünmeyen sistem komutu) mi?
isgraph(ch)  -> Karakter BOŞLUK HARİÇ basılabilir/görünür bir karakter mi?
isprint(ch)  -> Karakter BOŞLUK DAHİL ekrana basılabilir bir karakter mi?
isblank(ch)  -> Karakter boşluk veya tab (tab tuşu boşluğu) karakteri mi?



// isalnum fonksiyon = ben bir şey girdiğim zaman bunun harf mi rakam mı olup olamdığını bana kontrol eder
int main()
{
     char ch;
     cout<<"Enter a character:";
     cin>>ch;
     if(isalnum(ch))
        cout<<"bir harf veya bir rakam girdiniz\n";
     else
        cout<<"girmedin";


    return 0;
}



//isdigit=Sadece sayı girmemizi sağlıyor yani kullanıcıdan aldığımız verinin sadece sayı olup olmadığını konrtol ediyoruz
int main()
 {
      string txt;
      cout<<"Enter a string:";
      getline(cin,txt);
      for(int i=0;i<txt.size();i++)
      {
          if(isdigit(txt[i]))
          {
              cout<<txt[i]<<" ";
          }
      }


     return 0;
 }


int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(isdigit(ch))
        cout<<"rakam girdiniz\n";
    else
       cout<<"rakam girmediniz\n";
       return 0;


}
================================================================================

//resize fonksiyonu yeniden boyuntlandırmamıza yarıyor
int main()
{
    string txt;
    cout<<"Enter a string:";
    getline(cin,txt);
    int myLength=txt.size();
    cout<<"eski:"<<txt<<"\n";
    txt.resize(myLength+2,'+');//sonuna ++ ekliyecek
    cout<<"yeni:"<<txt<<"\n";
    txt.resize(12);// burada direkt 12 karaktere kadar alıcak ondan sonrakileri almıyacak kısallttı yani
    cout<<txt<<"\n";


    return 0;
}



int main()
{
    string txt;
    cout<<"Enter a string:";
    getline(cin,txt);
    cout<<"size: "<<txt.size()<<"\n";
    cout<<"length: "<<txt.length()<<"\n";
    cout<<"kapasite: "<<txt.capacity()<<"\n";bit//bu string için ne kadarlık bir alan ayrılmış bit cinsinden
    cout<<"max size: "<<txt.max_size()<<"\n";// bir stringin ulaşabileceği max olan uzunluğu gösterir

    return 0;
}

//clear fonksiyonu
int main()
{
    string txt;
    cout<<"Enter a string:";
    getline(cin,txt);
    cout<<txt<<"\n";
    txt.clear();
    cout<<txt<<"\n";

    return 0;
}


//stringlere erişim
int main()
{
    string txt;
    cout<<"Enter a string: ";
    getline(cin,txt);
    cout<<txt[1]<<"\n";// diyelim ali yazdik bize  l harfini çağıracak


    return 0;
}


//at fonksiyonu stringin içindeki karakterleri getirmemizi sağlar.
int main()
{
    string txt;
    cout<<"Enter a string:";
    getline(cin,txt);

    for(int i=0;i<txt.length();i++)
    {
        cout<<txt.at(i);
    }
    cout<<"\n";


    return 0;
}


/*

//find("aranacak_sey"): Metnin içinde arama yapar, bulursa yerini (kaçıncı harf olduğunu) söyler.
//substr(baslangic, adet): Metnin içinden, belirtilen yerden başlayarak istediğin kadar harfi kesip yeni bir kelime yapar.
//begin() / end(): Bir döngünün metnin ilk harfinden başlayıp son sınırına kadar hatasız gitmesini sağlayan gizli başlangıç ve bitiş tabelalarıdır.
int main() {
    // 1. Bir log satırı olduğunu hayal et
    string log = "Kullanici:Yusuf sisteme giris yapti.";

    // 2. İki nokta üst üste (:) işaretinin yerini bulalım
    int konum = log.find(":"); // find aleti bize 10 sayısını verecek

    // 3. O konumdan hemen sonrasını kesip ismi alalım
    // 11. karakterden başla, 5 harf kes al (Y-u-s-u-f)
    string isim = log.substr(11, 5);

    cout << "Sistemdeki Gizli Isim: " << isim << endl; // Ekranda Yusuf yazacak!

    return 0;
}



/*

string::iterator it = txt.begin() (Kalkış İstasyonu):
Buradaki string::iterator it kısmı sadece bir unvandır. Bilgisayara diyorsun ki: "Ben bir harf tarama robotu (it) kiraladım." txt.begin() ise bu robotun metnin ilk harfinin ('i') üstüne konumlanmasını sağlar. Tren ilk istasyondan kalktı.

it != txt.end() (Son Durak Kontrolü):
!= işareti "eşit olmadığı sürece" demektir. txt.end() ise metnin bittiği, şantiyenin dışındaki o görünmez sınır çizgisidir. Yani bu şart bilgisayara şunu der: "Robot henüz yolun sonuna (end) varmadıysa döngüyü döndürmeye devam et." Yol bitince tren durur.

it++ (Bir Sonraki Vagon):
Her harfle işimiz bittiğinde robotu bir sağdaki harfe kaydırır. 'i' harfi biter, 'n' harfine geçer.

Döngünün içindeki cout << *it; satırındaki o yıldız (*) ise robotun elindeki cımbızdır. Robot hangi harfin üstünde duruyorsa, yıldız sayesinde o harfin içini okur ve ekrana basar.



Ustanın Özeti
Ekrana dümdüz bir metin basacaksan cout << txt; yaz geç çırak, kimse sana iterator sormaz.

Ama hocalar sınavda "Metnin içindeki boşlukları sayın", "Büyük harfleri bulun" gibi karakter analizi soruları soracağı için, sana bu harf harf yürüme mekanizmasını (tren mantığını) şimdiden aşılamaya çalışıyorlar.

AŞAĞIDA DETAYLI ANLATIM VAR----->



int main()
{
    string txt="interesting subject topic";

    for(string::iterator it=txt.begin();it!=txt.end();it++)
    {
        cout<<*it;
    }
    cout<<"\n";


    return 0;
}

================================================================================
          C++ MODERN STRING VE ITERATOR (YİNELEYİCİ) REHBERİ
================================================================================

--------------------------------------------------------------------------------
1. C-TİPİ DİZİLER (char[]) vs MODERN C++ STRING
--------------------------------------------------------------------------------
* Eski Yöntem (C): char str[10] = "Fehmi";
  - Hafıza boyutu sabittir, baştan tahmin etmek gerekir.
  - Metnin bittiğini anlamak için sonuna görünmez '\0' (Null) karakteri koyar.
  - Kopyalamak için <cstring> kütüphanesinden "strcpy(hedef, kaynak)" gerekir.
  - Harf sayısını ölçmek için "strlen(metin)" kullanılır ('\0' karakterini saymaz).

* Yeni Yöntem (C++): string myText = "Life is hard";
  - #include <string> kütüphanesiyle çalışır.
  - Hafıza yönetimini otomatik yapar; metin uzadıkça RAM'de kendi yer açar.
  - Metinleri birleştirmek için dümdüz "+" operatörü kullanılır (Örn: str1 + str2).

--------------------------------------------------------------------------------
2. VERİ GİRİŞ PROTOKOLÜ (cin >> vs getline)
--------------------------------------------------------------------------------
* Kural 1: Kullanıcıdan TEK KELİME veya SAYI alacaksan "cin >> veri;" kullanılır.
  - "cin >>" gurmedir; önündeki boşluk, tab veya enter karakterlerini otomatik atlar.
  - Cümle içindeki BOŞLUĞU gördüğü an "metin bitti" sanır ve okumayı durdurur!

* Kural 2: İçinde BOŞLUK olan uzun bir cümle alacaksan "getline(cin, veri);" kullanılır.
  - Boşlukları umursamaz, kullanıcı klavyeden ENTER'a basana kadar her şeyi yutar.

* KRİTİK TUZAK (Sınavlık):
  - "cin >>" komutundan hemen sonra "getline()" kullanacaksan araya MUTLAKA
    "cin.ignore();" koymalısın.
  - Çünkü "cin >>" hafızada sinsi bir Enter (\n) artığı bırakır. "cin.ignore()"
    bu artığı çöpe süpürür ki arkadan gelen "getline()" boşa düşmesin.

--------------------------------------------------------------------------------
3. GİZEMLİ OPERATÖR: "::" (SCOPE RESOLUTION)
--------------------------------------------------------------------------------
* Şantiye Adı: "Soyadı Gösterici" veya "Adres Belirleyici".
* Ne İş Yapar?: Sağındaki aletin/kavramın, solundaki hangi aileye (kütüphane/sınıf)
  ait olduğunu bilgisayara tarif eder.
* Örnek: "string::iterator" --> string ailesinin içindeki iterator aleti.
* Örnek: "std::cout"        --> std kütüphanesinin içindeki cout aleti.

--------------------------------------------------------------------------------
4. ITERATOR (YİNELEYİCİ) NEDİR?
--------------------------------------------------------------------------------
* Şantiye Adı: "Ray Üzerindeki Lazerli Tarayıcı" veya "Barkod Okuyucu Cihaz".
* Ne İş Yapar?: Bellekte yan yana duran karakterlerin üzerinde sırayla, hata
  yapmadan yürüyebilen akıllı bir rehber / işaretçidir.
* Fonksiyonları:
  - begin() -> Metnin İLK harfinin üzerine konuşlanır.
  - end()   -> Son harfi değil! Son harften bir sonraki GÖRÜNMEZ SINIR çizgisine bakar.

--------------------------------------------------------------------------------
5. AKILLI ITERATOR DÖNGÜSÜ VE ANATOMİSİ
--------------------------------------------------------------------------------
Hocanın yazdığı o upuzun döngü aslında bir tren rotasıdır:

for(string::iterator it = txt.begin(); it != txt.end(); it++)
{
    cout << *it;
}

* "string::iterator it" -> "string ailesinden 'it' adında bir barkod okuyucu kiraladım."
* "it = txt.begin()"     -> Robot işe ilk harften başlasın. (Tren kalktı)
* "it != txt.end()"      -> Önündeki yer yolun sonu (end) olmadığı sürece yürümeye devam et.
* "it++"                 -> Her adımda bir sağdaki vagonun (harfin) üzerine kay.
* "*it"                  -> Başımdaki YILDIZ (*) işareti benim cımbızımdır. Robotun o an
                            üstünde durduğu kutunun İÇİNDEKİ HARFİ söküp ekrana basar.

--------------------------------------------------------------------------------
6. KRİTİK STRING FONKSİYONLARI ÖZETİ
--------------------------------------------------------------------------------
* txt.length() veya txt.size() -> Metnin harf sayısını verir (İkisi de aynı şeydir).
* txt.resize(yeni_boyut, 'karakter') -> Metni uzatır veya giyotin gibi kısaltır.
* txt.find("aranan") -> Metin içinde arama yapar, bulursa kaçıncı sırada olduğunu söyler.
* txt.substr(başlangıç, adet) -> Metni belirtilen yerden cımbızla kesip koparma makasıdır.

* KRİTİK TUZAK (Sözlük Sırası):
  - "string" ifadeleri ">" veya "<" ile karşılaştırırsan bilgisayar harf sayısına bakmaz!
  - Kelimeleri SÖZLÜK SIRASINA (ASCII koduna) göre harf harf yarıştırır.
  - Alfabede sonra gelen harfin değeri daha büyüktür (Örn: "Bookrack" > "Bookkeeper").




ama bu yukarıdaki hammalığı yapmıyacan auto kullanıcan onun yerine



1. auto Sihri Nedir? (Tüm Hamallığı Bitiren Kelime)
İlk kodda (image_b4e2d8.png) derleyiciye amele gibi uzun uzun unvan yazıyordun: string::iterator it.
İkinci kodda ise sadece auto it yazmışsın.

auto kelimesinin yazılım mühendisliğindeki görevi şudur: "Ey derleyici, sağ taraftaki txt.cbegin() fonksiyonuna bak. Onun ne tip bir işaretçi döndüreceğini sen zaten benden iyi biliyorsun. Tembellik etme, onun veri tipini (unvanını) benim yerime sen tahmin et ve buraya otomatik yaz."

Böylece sen klavyede 20 karakter yazmaktan kurtuluyorsun, arkada C++ motoru yine aynı çarkı döndürüyor.

2. Kodda Küçük Bir Detay Daha Var: cbegin() ve cend()
Dikkat ettin mi, hoca sadece auto kullanmakla kalmamış; begin() yerine cbegin(), end() yerine de cend() yazmış.

Hatırlarsan sana yukarıda verdiğim o fihrist notunda "VIP Takımı" ile "Kilitli Kadro"yu ayırmıştık. Başındaki 'c' harfi neydi? Const (Sabit/Kilitli).

Hoca derleyiciye diyor ki: "Ben bu metnin içinde auto yardımıyla pratik bir şekilde gezeceğim. Ama gezerken harfleri sadece okuyacağım (cbegin), yanlışlıkla hiçbir harfi değiştirmeyeceğim. Emniyet mandalını kapat!"


// auto kelimesi "string::iterator" unvanını otomatik olarak kendi tahmin eder!
for (auto it = txt.begin(); it != txt.end(); it++) {
    cout << *it;
}



// txt içindeki her bir karakteri (char c) sırayla getirir, arka planda yine iterator çalışır.
for (char c : txt) {
    cout << c;
}


================================================================================



/*
//substr fonksiyonu

1. Senaryo: Siber Vatan (Log Analizi ve Saldırı Tespiti)
Bir siber güvenlik mühendisi olarak bir sisteme sızılmaya çalışılıp çalışılmadığını inceliyorsun. Elinde sisteme giriş yapan kullanıcıların verileri var. Ama bu veriler her saniye değişiyor:

saniye gelen veri: USER:Ahmet_1907_LOGGED_IN

saniye gelen veri: USER:Yusuf_Sercan_LOGGED_IN

saniye gelen veri: USER:Gokhan_KTU_LOGGED_IN

Senin yazacağın koruma programının görevi, sisteme giren kişinin sadece kullanıcı adını ekrana basmak.

Şimdi söyle bakalım çırak, kodun içine sabit bir şekilde cout << "Ahmet"; yazabilir misin? Yazamazsın, çünkü bir sonraki saniye sisteme Yusuf giriyor!

İşte burada substr devreye giriyor. Koda diyorsun ki:

"Gelen metin ne olursa olsun, her zaman 5. karakterden başla (çünkü USER: kısmı 5 karakter), aradaki ismi kesip al!"

substr fonksiyonu o dinamik metnin içinden Ahmet'i, Yusuf'u, Gökhan'ı cımbızla çekip alır. Sen sadece tek bir satır kod yazarsın, program her gelen farklı isimde tıkır tıkır çalışır.


string txt = "Now step live. Where did you buy it?";
string txt2 = txt.substr(5, 7);

ekrana = "tep liv" yazdırır


================================================================================
       C++ DİNAMİK METİN PARÇALAMA: FIND VE SUBSTR PASLAŞMASI
================================================================================

--------------------------------------------------------------------------------
1. DETEKTİF FONKSİYON: find()
--------------------------------------------------------------------------------
* Ne İş Yapar?: Metnin içinde spesifik bir kelime veya harf arar.
* Çalışma Mantığı: Aramaya her zaman en baştan (0. indeksten) başlar.
* Sonuç: Eğer aranan şeyi BULURSA, başladığı ilk harfin İNDEKS (oda) numarasını
  bize tam sayı (int) olarak döndürür.
* Örnek:
  string txt = "Siber Vatan";
  int konum = txt.find("Vatan"); // "Vatan" kelimesinin 'V' harfi 6. odadadır.
  // konum değişkeninin değeri 6 olur.

--------------------------------------------------------------------------------
2. MAKAS FONKSİYON: substr()
--------------------------------------------------------------------------------
* Ne İş Yapar?: Bir metnin içinden belli bir parçayı kesip koparmaya yarar.
* Kullanım Şekilleri:
  1) txt.substr(başlangıç, adet); -> Belirtilen odadan başlar, sağa doğru yazılan
                                     adet kadar harfi keser alır.
  2) txt.substr(başlangıç);       -> İkinci sayı yazılmazsa, belirtilen odadan
                                     başlar ve CÜMLENİN SONUNA KADAR her şeyi alır.

--------------------------------------------------------------------------------
3. BÜYÜK MÜHENDİSLİK PASLAŞMASI (Hocanın Sınav Sorusu Tipi)
--------------------------------------------------------------------------------
Gerçek projelerde (SAYBOT veya Log Analizlerinde) metinler canlı ve değişken
geldiği için sabit sayılarla kesme yapamayız. Önce yerini buldurur (find), sonra
oradan kestiririz (substr).

* Örnek Senaryo Analizi:
  string txt = "Now step live. Where did you buy it?";

  // 1. Adım: "did" kelimesinin yerini bilgisayara bulduruyoruz.
  int i = txt.find("did"); // Boşluklar ve noktalar dahil sayınca '21' çıkıyor.

  // 2. Adım: Bulunan '21' değerini makasa başlangıç noktası yapıyoruz.
  string txt3 = txt.substr(i); // txt.substr(21) anlamına gelir.

  // Sonuç: 21. odadan (did başından) cümlenin sonuna kadar olan kısmı keser:
  // txt3'ün içi artık şudur: "did you buy it?"

--------------------------------------------------------------------------------
⚠️ DIKKAT: ALTIN İNDEKS KURALLARI (Sınavda Can Yakan Yerler)
--------------------------------------------------------------------------------
1) Bilgisayar saymaya HER ZAMAN 0'dan başlar. İlk harf 1 değil, 0. indekstir.
2) Kelimelerin arasındaki BOŞLUKLAR (' ') birer karakterdir ve indeks sayarken
   kesinlikle hesaba katılır!
3) Cümle içindeki NOKTA (.), VİRGÜL (,), SORU İŞARETİ (?) gibi tüm semboller de
   birer odadır, sayarken atlamamalısın.




   int main ()
{
     string txt="Now step live. Where did    you buy it?";
     string txt2=txt.substr(5,7);
     int i=txt.find("did");
     string txt3=txt.substr(i);
     cout<<i<<"\n";


    return 0;
}

çıktıya 21 yazdırır did i arar d de 21. indekste olduğu için onu ekrana yazdırır
================================================================================



//compare fonksioyonu

--------------------------------------------------------------------------------
7. GÜVENLİK PROTOKOLÜ: compare()
--------------------------------------------------------------------------------
* Ne İş Yapar?: İki string ifadeyi milimetrik olarak karşılaştırır.
* Siber Güvenlik Notu: Dümdüz "==" işaretine göre harf harf kontrolü çok daha
  kesin ve güvenlidir. Şifre doğrulama mekanizmalarında başroldedir.
* Terazinin Sonuçları:
  str1.compare(str2) == 0  --> İki metin BİREBİR AYNDIR (Şifre doğru!).
  str1.compare(str2) < 0   --> str1 sözlükte str2'den ÖNCE gelir.
  str1.compare(str2) > 0   --> str1 sözlükte str2'den SONRA gelir.


  int main()
{
    string password="hope";
    string enterCode;

    cout<<"please enter password:";
    getline(cin,enterCode);

    if(password.compare(enterCode)==0)
    {
        cout<<"password is correct!\n";
    }
    else
    {
        cout<<"password is incorrect\n";
    }


    return 0;
}




================================================================================


--------------------------------------------------------------------------------
8. HAFIZA SIFIRLAMA VE ATAMA: assign()
--------------------------------------------------------------------------------
* Ne İş Yapar?: "=" (eşittir) işaretinin gelişmiş halidir. Değişkenin içindeki
  eski veriyi TAMAMEN SİLER, yerine yeni veriyi atar. Üzerine ekleme YAPMAZ!

* 3 Farklı Kullanım Şekli (Hocanın Kodundaki Sır):
  1) txt.assign(base);
     -> base metninin tamamını kopyalar, txt'nin içine yazar.

  2) txt.assign(base, 5, 11);
     -> base metninin 5. indeksinden başlar, sağa doğru 11 karakteri kesip txt'ye atar.

  3) txt.assign("life is cool", 7);
     -> Çift tırnaklı metnin EN BAŞINDAN başlar, sadece İLK 7 karakterini kesip txt'ye atar.
        (Sonuç: "life is" olur, geri kalan " cool" kısmı çöpe gider).


int main ()
{
    string txt,base;

    base="This explanation is not enough for me";
    txt.assign(base);
    cout<<txt<<"\n";
    txt.assign(base,5,11);
    cout<<txt<<"\n";
    txt.assign("Life is cool",7);
    cout<<txt<<"\n";


    return 0;
}



================================================================================

NOT:
Unutma Çırak: C++ string fonksiyonlarında (ister substr olsun, ister assign olsun, ister insert olsun) yan yana iki sayı gördüğünde kural hep aynıdır:

İlk sayı: BAŞLANGIÇ noktasıdır (Oda numarası).

İkinci sayı: ADET / UZUNLUK bildirir (Kaç karakter alınacağı).

Harika bir mantık yakaladın, bu detay seni sınavda en az 10 puan öne geçirir. Bu araya kaynak yapma aletinin mantığı da kafana tam oturdu mu çırak? Not defterine bunun da özetini geçelim mi?


// insert fonksiyonu = ekleme fonksinoyu
int main()
{
    string txt,txt2,txt3;
    txt="to be question";
    txt2="the ";
    txt3="or not to be";
    txt.insert(6,txt2);// burada diyorum ki 6. indeksin önünce txt2 mesajını ekle insert et yani
    cout<<txt<<"\n";
    txt.insert(6,txt3,3,4);// burada diyor ki 3. indeksten başla ve 4 karakter al şunu da unutma önceki satırda the yı insert ettiğimiz için çıktıda the da gözükücek

    cout<<txt<<"\n";


    return 0;
}

//swap fonksiyonu adı üstünde işte

int main()
{
    string buyer,seller;
    buyer=" money";//goods
    seller=" goods";//money

    cout<<"Before the swap, buyer has "<<buyer;
    cout<<" and seller has "<<seller<<"\n";
    seller.swap(buyer);

    cout<<"After the swap, buyer has "<<buyer;
    cout<<" and seller has "<<seller<<"\n";




    return 0;
}


//erase fonksiyonu = adı üstünde silme işine yarıyor stringden bazı harfleri silmemize yarıyacak.

int main()
{
    string txt;
    txt="This is an example sentence";
    cout<<txt<<"\n";
    txt.erase(5,3);// dedimki kardeş 5. indeksten başla 3 karakter sil
    cout<<txt<<"\n";//burayada silinmiş halini yazdırıyorum




    return 0;
}



//replace fonksiyonu = değiştirme işine yarar

int main()
{
     string base,txt,txt2,txt3,txt4;
     base="This is a test string";
     txt2="n example";
     txt3="sample phrase";
     txt4="useful";
     txt=base;
     cout<<txt<<"\n";
     txt.replace(9,5,txt2);//diyom ki txt=base olduğundan base için yazılan stringe git 9. indeksten başla 5 karakter ilerle heh o ilerlediğin alanı txt2 ile değiştir
     cout<<txt<<"\n";
     txt.replace(19,6,txt3,7,6)// burada ki ekstra mantık şu txt3 ün hepsini istemiyorum onunda 7. indeksten başlayıp 6 karakter ilerleyip kapsadığı kelimeleri istiyorum
     cout<<txt<<"\n";



    return 0;
}





*/


/*HAZIR MATAMATİK FONKSİYONLARI

// MAX VE MİN fonksiyonları ,değerleri alma
int main()
{
    float x,y,result;
    x=7.0;
    y=19.0;
    cout<<max(x,y)<<"\n";
    cout<<min(x,y)<<"\n";



   return 0;
}

================================================================================
          C++ <cmath> KÜTÜPHANESİ - MATEMATİK ALET ÇANTASI
================================================================================
* NOT: Bu fonksiyonları kullanabilmek için kodun en üstüne MUTLAKA
  "#include <cmath>" kütüphanesi eklenmelidir!

--------------------------------------------------------------------------------
1. ÜSTEL VE KÖKLÜ İŞLEM ALETLERİ
--------------------------------------------------------------------------------
exp(x)   -> Euler sabitinin (e ~ 2.718) x. kuvvetini hesaplar. (e^x)
pow(x,y) -> x üssü y ($x^y$) hesabını yapar. (Örn: pow(2,3) bize 8 döndürür).
sqrt(x)  -> x sayısının KARAKÖKÜNÜ alır. (Örn: sqrt(16) bize 4 döndürür).
abs(x)   -> x sayısının MUTLAK DEĞERİNİ alır, eksiyi artıya çevirir.

aşağıdaki örnek sütüne bu fonksiyonları ekliyebilirsin---->

================================================================================

//exp fonksiyonu
//not bu fonksiyonu kullanmak için #include <cmath> kütüphanesini çağırmak gerekir
int main()
{
    float x,y,result;
    x=7.0;
    y=19.0;
    result=exp(x);// e üssü x in değerini alıyoruz yani burada e^7 yi bulup çıktı olarak yazdırıyor buradaki e sayısı sabit vardıya e=2.71828$$
    cout<<result<<"\n";

    return 0;
}


int main()
{
     float x,y,result;
     x=64;
     y=3.0;
     result=cbrt(x);// küp alma x=64 olduğundan çıktıya 4 yazacak
     cout<<result<<"\n";




    return 0;
}


int main()
{
     float x,y,result;
     x=4.0;
     y=3.0;
     result=hypot(x,y);// hipotenüs alıyor şimdi x=4,y=3 olunca hipotneüs de çıktıya 5 vermesi lazım
     cout<<result<<"\n";




    return 0;
}

//ceil tavan demek mesela 2.1 den 2.9 a kadar olan bütün sayıları bi üst sayı olan 3 e yuvarlar tavandan aklına gelsin
int main()
{
     float x,y,result;
     x=4.0;
     y=3.0;
     cout<<ceil(2.1)<<"\n";
     cout<<ceil(3.7)<<"\n";
     cout<<ceil(-2.1)<<"\n";
     cout<<ceil(-3.7)<<"\n";




    return 0;
}

//floor zemin demek bu da  ceil in aksine mesela 2.1 den 2.9 a kadar olan tüm sayıları bi alt sayı olan 2 ye yuvarlar zeminden aklına gelsin
int main()
{
     float x,y,result;
     x=4.0;
     y=3.0;
     cout<<floor(2.1)<<"\n";
     cout<<floor(3.7)<<"\n";
     cout<<floor(-2.1)<<"\n";
     cout<<floor(-3.7)<<"\n";




    return 0;
}

//round da en yakın sayıya yuvarlar
int main()
{
     float x,y,result;
     x=4.0;
     y=3.0;
     cout<<round(2.1)<<"\n";
     cout<<round(3.7)<<"\n";
     cout<<round(-2.1)<<"\n";
     cout<<round(-3.7)<<"\n";




    return 0;
}

//abs mutlak değere alamak istersem kullanılır

int main()
{
   float x,y,result;
   x=-7.0;
   y=24.0;
   result=abs(x);
   cout<<result<<"\n";



  return 0;
}

//abs mutlak değere alamak istersem kullanılır

int main()
{
   float x,y,result;
   x=-7.0;
   y=24.0;
   result=abs(x);
   cout<<result<<"\n";



  return 0;
}

*/


/*DİZİLER (arraylar)

0'dan Başlama Kuralı: Mühendislikte saymaya 0'dan başlarız. Dolabın ilk çekmecesinin numarası 1 değil, 0'dır.

Aynı Tip: Dolabın içine hem vida hem yağ koyamazsın. Hepsi tam sayı (int) veya hepsi ondalıklı (float) olmalı.




Boyut Sabitliği: Statik dizilerde boyut, program çalışmaya başlamadan önce belirlenir. "Ben 100 elemanlık yer açtım" dersen, 101. elemanı oraya sığdıramazsın. Dolap sabittir.



İndis (Index) Zehirlenmesi: En çok hata buradan çıkar. 5 elemanlı bir dizinin son elemanı dizi[4]'tür. Eğer dizi[5]'e bir şey yazmaya çalışırsan, yan komşunun (başka bir

Hafıza Hesabı: int 4 byte yer tutar. int dizi[10] dersen, hafızada $10 \times 4 = 40$ byte yer kaplarsın. Mühendis adam, ne kadar yer harcadığını bilir.






using namespace std;

int main()
{
    int sensorVerileri[5]={10,20,30,40,50};
    // 3. elemana (yani 2. indexe) ulaşalım:
    cout << "3. sensorun degeri: " << sensorVerileri[2]; // Ekrana 30 basar.



return 0;


}





using namespace std;
int main()
{

// 5 sensörden gelen veriyi ekrana basalım
int sensorler[5] = {102, 345, 201, 78, 550};

for(int i = 0; i < 5; i++) {
    cout << i << ". sensorun degeri: " << sensorler[i] << endl;
}


    return 0;
}












using namespace std;

// --- PROTOTİPLER ---
void selamla(string isim = "SAYBOT");
int bataryaYuzdesi(float voltaj); // Sadece voltajı alacak
void durumKontrol(int yuzde);

int main() {
    float girilenVoltaj;
    int sonucYuzde;

    selamla(); // Varsayılan isimle selamlar

    cout << "Robotun voltajini girin (V): ";
    cin >> girilenVoltaj;
    while (girilenVoltaj > 12.6 || girilenVoltaj < 0) {
        // Kullanıcı 12.6'dan büyük veya 0'dan küçük girerse buraya girer
        cout << "\nHata: Gecersiz voltaj! Lutfen 0 ile 12.6 arasinda bir deger giriniz: ";
        cin >> girilenVoltaj; // Tekrar girdi alıyoruz
    }

    // Fonksiyonu çağırıp gelen sonucu değişkene hapsediyoruz
    sonucYuzde = bataryaYuzdesi(girilenVoltaj);

    cout << "Batarya Durumu: %" << sonucYuzde << endl;

    // Şimdi yüzdeye göre kontrol yapıyoruz
    durumKontrol(sonucYuzde);

    return 0;
}

// --- TANIMLAMALAR ---

void selamla(string isim) {
    cout << isim << " : Sistem baslatiliyor...\n";
}

int bataryaYuzdesi(float voltaj) {
    // Formülü uygula ve tam sayıya çevirip döndür
    int yuzde = (voltaj / 12.6) * 100;
    return yuzde; // Sonucu geri gönderiyoruz
}

void durumKontrol(int yuzde) {
    if (yuzde < 20) {
        cout << "UYARI: Batarya Dusuk!\n";
    } else {
        cout << "Sistem Stabil.\n";
    }
}

================================================================================
          C++ DİZİLER (ARRAYS) - VİDEO ÖNCESİ ZIRHLANMA REHBERİ
================================================================================

--------------------------------------------------------------------------------
1. DİZİ (ARRAY) NEDİR?
--------------------------------------------------------------------------------
* Aynı veri tipindeki onlarca değişkeni hafızada (RAM) yan yana ve bitişik olarak
  tutmamızı sağlayan çok çekmeceli dev bir veri dolabıdır.
* Tek tek "hiz1, hiz2, hiz3" diye amele gibi değişken tanımlamayı bitirir.

--------------------------------------------------------------------------------
2. ASLA DEĞİŞMEYEN 4 MÜHENDİSLİK KURALI
--------------------------------------------------------------------------------
Kural 1 -> İndeks Numarası: Sayma her zaman 0'dan başlar.
           5 elemanlı dizinin odaları: 0, 1, 2, 3, 4'tür. (dizi[5] YASAKTIR!)

Kural 2 -> Tek Tip Zorunluluğu: İçindeki tüm elemanlar aynı tipte olmak zorundadır.
           Ya hepsi int, ya hepsi float, ya hepsi char. Karışık yükleme yapılamaz.

Kural 3 -> Statik (Sabit) Boyut: Boyut kodu yazarken kilitlenir. Program çalışırken
           "hadi bunu 2 çekmece daha uzatalım" diyemezsin.

Kural 4 -> Bitişik Nizam: Elemanlar RAM bellekte peş peşe, sırt sırta dizilirler.
           Siber güvenlikte bellek taşması (Buffer Overflow) bu yüzden etkilidir.

--------------------------------------------------------------------------------
3. TEMEL TANIMLAMA VE KULLANIM ŞEKİLLERİ
--------------------------------------------------------------------------------
// Yöntem A: Boyutunu ve içindeki elemanları baştan elinle vermek:
int puanlar[3] = {85, 90, 100};
// puanlar[0] = 85 , puanlar[1] = 90 , puanlar[2] = 100 olur.

// Yöntem B: Boyut verip içini boş bırakmak (Sonradan doldurmak için):
int hizlar[5];
hizlar[0] = 30; // İlk çekmeceye 30 sayısını koyduk.
hizlar[1] = 45; // İkinci çekmeceye 45 sayısını koyduk.

// Yöntem C: Boyut yazmadan elemanları dizmek (C++ boyutu kendi sayar):
int sayilar[] = {10, 20, 30, 40}; // Derleyici bunu otomatik 4 boyutlu yapar.

--------------------------------------------------------------------------------
⚠️ FINALLER İÇİN ÖĞRETMEN TUZAKLARI (KULAĞA KÜPE)
--------------------------------------------------------------------------------
* Tuzak 1: int dizi[5] = {1, 2}; yazarsan ne olur?
  - Kod hata vermez! İlk iki çekmeceye 1 ve 2 koyar. Geri kalan boş çekmeceleri
    C++ otomatik olarak 0 (sıfır) ile doldurur. Yani dizinin içi {1, 2, 0, 0, 0} olur.

* Tuzak 2: int dizi[5]; yazıp içini hiç doldurmadan ekrana basarsan ne olur?
  - Ekrana sıfır basmaz çırak! Hafızada o an şansına ne kalmışsa (çöp veri /
    garbage value) ekrana saçma sapan, devasa sayılar basar. İşini şansa bırakma.

* Tuzak 3: Dizileri taramak için en büyük dostumuz "for" döngüsüdür. Sayacı
  her zaman "int i = 0;" diye başlatmak zorundasın.
================================================================================


--------------------------------------------------------------------------------
9. STATİK DİZİ vs DİNAMİK DİZİ (MÜHENDİSLİK KIYASI)
--------------------------------------------------------------------------------
* STATİK DİZİ (Static Array):
  - Kodu yazarken boyutu kilitlenir (Örn: int dizi[10];).
  - Program çalışırken boyutu ASLA değiştirilemez (En büyük defosu).
  - RAM'in çok hızlı olan "Stack" bölgesinde yaşar.
  - Sınırları aşılırsa "Buffer Overflow" (Hafıza Taşması) siber açığı doğar.

* DİNAMİK DİZİ (Dynamic Array / Vector):
  - Boyutu baştan esnektir. Program koşarken canlı olarak büyüyüp küçülebilir.
  - C++ dünyasındaki en popüler karşılığı "std::vector" yapısıdır.
  - RAM'in geniş ve devasa olan "Heap" bölgesinde yaşar.
  - Canlı ve kaç tane geleceği bilinmeyen verileri (Sensör logları vb.) tutmak için şarttır.
================================================================================


int main()
{
    string cars[5]={"volvo","bmw","ford","skoda","nissan"};
int myNumbers[4]={10,7,19,20};

cout<<*myNumbers<<"\n";//*myNumbers olunca ram de dizinin ilk değerini geitiriyor yani 10 yazıyor ekranda
return 0;



}


--------------------------------------------------------------------------------
10. DİZİLERİ FOR DÖNGÜSÜ İLE TARAMAK
--------------------------------------------------------------------------------
* Bir dizinin tüm elemanlarını ekrana basmak veya işlemek için en garanti yol
  "for" döngüsü kullanmaktır.
* Döngünün sayacı (int i = 0;) HER ZAMAN 0'dan başlamalıdır, çünkü dizinin ilk
  elemanı 0. indektedir.
* Döngünün durma şartı (i < boyut;) dizinin eleman sayısından KÜÇÜK olduğu
  sürece çalışmalıdır. Eşittir (<=) koyarsan dizi sınırını aşar, çöp veri basarsın!


  // dizi ile for kullanmak
int main()
{
    string cars[6]={"volvo","bmw","ford","skoda","nissan","tesla"};
    int myNumbers[4]={10,7,19,20};

    for(int i=0;i<6;i++)
    {
        cout<<cars[i]<<"\n";
    }


  return 0;
}

================================================================================

int main ()
{
    string cars[4];
    cars[0]="Skoda";
    cars[1]="Volvo";
    cars[2]="Ford";
    cars[3]="BMW";
    for(string myCars:cars)// diyorum ki türü string olan myCars adında bir değişken oluştur ve cars adındaki dizimin tamamını myCars adlı değişkenimin içine boşalt : da o işe yarıyor burada
    {
        cout<<myCars<<"\n";
    }

    return 0;
}





//dizi boyutunu bulma
int main()
{
    int myNumbers[5]={19,7,12,3,9};

    cout<<sizeof(myNumbers)<<"\n";// int tam sayı olarak 4 byte lık bir yer ayırır ram de her biri 4 byte 5 tane 4x5=20 yazıcak ekrana

    int getLength=sizeof(myNumbers)/sizeof(int);//burada  şöyle oldu ram de kapladığı byte ı (20) yi ben bunu ram de kendisi için kapladığı alana bölersem onunda int karşılığı 4byte dı  yani 20/4 den = 5 uzunluğumuzu bulmuş olduk
    cout<<getLength<<"\n";                      // not= bu amelelik statik diziler diye dinamik dizilerde bunla uğraşmıyacaz



    return 0;
}



--------------------------------------------------------------------------------
13. ÇOK BOYUTLU DİZİLER (MATRİSLER) - TABLO MANTIĞI
--------------------------------------------------------------------------------
* Tanım: string letters[Satır_Sayısı][Sütun_Sayısı];
* Şantiye Mantığı: İç içe parantezlerle kafa yormak yok! Her zaman yatay satırlar
  ve dikey sütunlardan oluşan bir EXCEL TABLOSU hayal edilir.

* Kodun Analizi: letters[2][4]
  - Baştaki [2] -> Bu tablonun tam 2 tane SATIRI var demektir.
  - Sondaki [4] -> Her satırın içinde 4 tane SÜTUN (veri) var demektir.

* Elemana Ulaşma Kuralı: letters[Hangi_Satır][Hangi_Sütun]
  - NOT: Sayma her zaman 0'dan başlar!
  - letters[0][2] -> 0. satır, 2. sütundaki elemanı getirir (Yani "C" harfi).
  - letters[1][1] -> 1. satır, 1. sütundaki elemanı getirir (Yani "F" harfi).
================================================================================



// çok boyutlu dizilerin mantığı
int main()
{
    string letters[2] [4]=    //burada dizi içerisinde dizi oluşturduk ama manatığını böyle anlama mantık şu; bi tablo yapıyormuşuz gibi düşün baştaki [2] iki satırı sonra gelen [4] dört sütunu temsil ediyormuş gibi düşün yani bi tablo oluştuduk
    {
      {"A","B","C","D"}// 4 sütun da şunu diyor içerisinde dört tane veri olucak mantığını böyle anla

      ,// burada iki satır için iki tane süslü parantez açtık en dış dizimin içinde 2  satırlı dizi için oluşturdum gibi düşün

      {"E","F","G","H"}

    };
    // İŞTE EKRANA YAZDIRMA MOTORU BURADA BAŞLIYOR:

    // 1. Dışarıdaki Döngü: Satırları kontrol eder (0. ve 1. satır)
    for(int satir = 0; satir < 2; satir++)
    {
        // 2. İçerideki Döngü: O anki satırın içindeki tüm sütunları tek tek tarar
        for(int sutun = 0; sutun < 4; sutun++)
        {
            // Koordinata gidip harfi söküyoruz
            cout << letters[satir][sutun] << " ";
        }

        // Bir satır tamamen bitince alt satıra geçmek için Enter basıyoruz
        cout << "\n";
    }


    return 0;
}


/*

TUR 1: Robot 0. Satıra (İlk Rafa) İniyor
Dıştaki döngü başladı ve satir = 0 oldu. Robot şu an ilk satırın başında bekliyor. İçeri giriyor ve karşısına sutun döngüsü çıkıyor. Bu sutun döngüsü 0'dan 3'e kadar tek tek sayacak:

sutun = 0 oluyor: Robot letters[satir][sutun] yani letters[0][0] odasına elini atıyor. Orada kim var? A harfi var. Söküp ekrana basıyor.

sutun = 1 oluyor: satir hala 0! Robot letters[0][1] odasına bakıyor. Orada kim var? B var. Ekrana basıyor.

sutun = 2 oluyor: Robot letters[0][2] odasına bakıyor. Orada kim var? C var. Ekrana basıyor.

sutun = 3 oluyor: Robot letters[0][3] odasına bakıyor. Orada kim var? D var. Ekrana basıyor.

İlk Raf Bitti! sutun döngüsü 4 olamayacağı için kendini kapatıyor. Robot iç kısımdan dışarı çıkarken altındaki cout << "\n"; komutuna çarpıyor ve konsolda alt satıra (Enter) geçiyor.


TUR 2: Robot 1. Satıra (İkinci Rafa) İniyor
Dıştaki döngü başa sarıyor, satir++ oluyor ve satir = 1 durumuna geçiyoruz. Robot şimdi ikinci rafa indi. İçeri giriyor ve içteki sutun döngüsü hafızasını sıfırlayıp en baştan (0'dan) tekrar kuruluyor:

sutun = 0 oluyor: Robot bu sefer letters[satir][sutun] yani letters[1][0] odasına bakıyor. Kim var orada? E harfi. Ekrana basıyor.

sutun = 1 oluyor: Robot letters[1][1] odasına bakıyor. Oradaki F harfini basıyor.

sutun = 2 oluyor: Robot letters[1][2] odasına bakıyor. Oradaki G harfini basıyor.

sutun = 3 oluyor: Robot letters[1][3] odasına bakıyor. Oradaki H harfini basıyor.

İkinci Raf da Bitti! sutun döngüsü yine kapandı. Robot dışarı çıkıyor, satir döngüsü de 2 olamayacağı için (satir < 2 şartından dolayı) o da duruyor. Şantiyede iş bitiyor!


İşin Özü / Usta Özeti
Bilgisayar o letters[satir][sutun] satırını okurken, köşeli parantezlerin içine o anki sayıları yazar.

Dıştaki döngü (yavaş dönen çark) hangi satırda (rafta) olduğumuzu kilitler.

İçteki döngü (hızlı dönen çark) o raf kilitliyken soldan sağa doğru bölmeleri (sütunları) tıkır tıkır tarar.

Yani harfleri sırayla çeken şey, o döngüler döndükçe parantezlerin içinin otomatik olarak [0][0], [0][1], [0][2] diye değişmesidir çırak.


// bu sefer 3 tane dizi olucak tablo mantığı yerine küp mantığını düşün ve anla
int main()
{
    string letters[2][2][2]=
    {
        {
            {"A","B"},
            {"C","D"}
        },
        {
             {"E","F"},
             {"G","H"}

        }





    };




    return 0;
}


int main()
{
    string letters[2][4]=
    {
        {"A","B","C","D"},
        {"E","F","G","H"}

    };
    cout<<letters[0][2]<<"\n";//C yi yazdırıcak mantığı anla
    cout<<letters[1][3]<<"\n";//H yi yazdırıcak
    return 0;
}




/*
--------------------------------------------------------------------------------
15. MATRİS UYGULAMASI: AMİRAL BATTI ALGORİTMASI
--------------------------------------------------------------------------------
* Değişken Temizliği -> RAM'de önceden kalma çöp verileri (garbage value) engellemek
  için sayaçlar (hits, turns) her zaman "0" ile başlatılmalıdır.
* bool Matris Kullanımı -> Doğruluk/Yanlışlık durumları (Gemi var=1, Yok=0) için
  bellekte en az yer kaplayan "bool" tipi matrisler tercih edilir.
* Durum Güncelleme -> Vurulan hedefin matristeki değeri anında "0" yapılarak
  kullanıcının aynı yeri tekrar vurup hile yapması (mantıksal bug) engellenir.
================================================================================

NOT:Sana bunun tek satırlık bir usta tüyosu cevabını vereyim, kulağına küpe yap: Eğer bir işin kaç turda biteceğini adın gibi biliyorsan for döngüsü kullanılır;
ama işin kaç turda biteceği tamamen belirsizse, bir şarta bağlıysa oraya while döngüsü dikilir!
--------------------------------------------------------------------------------
16. MÜHENDİSLİK KARARI: FOR mu, WHILE mı?
--------------------------------------------------------------------------------
* FOR DÖNGÜSÜ   -> Tur sayısı BAŞTAN BELLİ olan işlerde kullanılır.
                   (Örn: 10 elemanlı diziyi ekrana basmak, 50 kere dön demek vb.)

* WHILE DÖNGÜSÜ -> Tur sayısı ucu açık, tamamen bir DURUMA/ŞARTA bağlı olan
                   senaryolarda kullanılır.
                   (Örn: Kullanıcı doğru şifreyi girene kadar dön, oyundaki tüm
                   gemiler batana kadar dön, SAYBOT engelden kaçana kadar dön vb.)
================================================================================

//basit düzeyde amiral battı  oyunu (ÖNEMLİ BİR ÖRNEK mantığını anla)
int main()
{
    bool ships[4][4]=
    {
      {0,0,1,1},// bizim gemi [0][2] de [0][3] de var bu satır için geçerli diğerleri de aynı mantıkta
      {0,0,0,0},
      {0,0,0,1},
      {0,1,0,0}

    };
    int hits=0,numberOfTurns=0;//numberOfTurns tur sayısını ifade ediyor yani kaç turda bu kişi gemileri batırdı onları tutucaz 0 a eşitlememizin sebebi eğer ram de onun için ayırdığımız alanda başka bir değer varsa ben o değeri 0 a eşitliyim farklı bir değer çekmesin diye
    int satır,sütun;// bunları ztn kullanıcıdan aldığımız için ram den onlara herhangi bir farklı sayı atanması mümkün olmadığından bunları sıfıra eşitlemedik
    while(hits<4)
    {
        cout<<"Selecting coordinates\n";
        cout<<"Choose a row(satir) number between 0 and 3--> ";//indeks numaraları tabloda 0 1 2 3 diy gittiği için 0 dan 3 e kadar
        cin>>satır;
        cout<<"Chooese a column(sutun) number between 0 and 3--> ";
        cin>>sütun;
        if(ships[satır][sütun])
        {
            ships[satır][sütun]=0;// gemi vurulduğu için tablodaki vurulan 1 olan gemiyi 0 a eşitledik gemi battı yani
            hits++;// vuruş sayısını arttırıoyrum  döngüden çıkabilmesi için
            cout<<"You hit! "<<(4-hits)<<" left\n\n";// vurulduktan sonra kalan gemileri gösteriyor
        }
        else
        {
            cout<<"You missed\n\n";
        }
        numberOfTurns++;//while içierisnde kaç kez döndüğmüzü anlayıp kaçıncı turda olduğumuzu görücez toplamda kaç tur oynadım yani kaç tahminde bulundum


    }
    cout<<"Victory!\n";
    cout<<"You won in "<<numberOfTurns<<" turns\n";// kaçıncı turda kazandığımızı gösteriyor yukarıda numberOfTurns++ bu yüzden yaptık




    return 0;
}






/*
--------------------------------------------------------------------------------
17. DİZİLERDE VERİ GÜVENLİĞİ VE DO-WHILE PROTOKOLÜ
--------------------------------------------------------------------------------
* Giriş Validasyonu (Input Validation) -> Kullanıcıdan indeks alırken "if(index < 0 ||
  index > 4)" gibi sınır kontrolleri yapmak ŞARTTIR. Yapılmazsa bellek taşması
  (Buffer Overflow) siber açığı doğar.

* do-while Döngüsü -> Şart ne olursa olsun, döngü içerisindeki kodların EN AZ BİR KERE
  çalıştırılması gereken durumlarda (Kullanıcı menüleri, oyun arayüzleri vb.) kullanılır.
  Kontrol mekanizması (şart) en sonda çalışır.

* switch-case Entegrasyonu -> Kullanıcının yaptığı seçime göre (Yazma:1, Okuma:2)
  farklı iş kollarına (case) dallanmayı sağlayan en temiz kontrol yapısıdır.
================================================================================
// dizilerde dışarıdan değer yazıp okumak
int main()
{
    double myValue,myNumbers[5]={0,0,0,0,0};// yani index numarası en fazla 4 olabilir 0 dan başladığı için mantığı kavra birde burada 0 ları yazmamızın sebebi başta 0 a eşitleyip oranın boş olduğunu söylüyoruz yoksa ram den saçma değerler getirebilir
    int index,choice;
    do
    {
        cout<<" Make a choice (exit:-1)\n";
        cout<<"\t1. write to array\n";
        cout<<"\t2. read to array\n";
        cin>>choice;
        if(choice==-1)break;
        if(choice!=1 && choice!=2)
        {
            cout<<"are you kidding us!\n";
            continue;
        }
        cout<<"Enter array index:";
        cin>>index;
        if(index<0 || index>4)
        {
            cout<<"index must be in the range of 0-4\n";
            continue;
        }
        switch(choice)
        {
          case 1:cout<<"Enter the value:";
          cin>>myValue;
          myNumbers[index]=myValue;
          cout<<"write operation is successful\n\n";
          break;
          case 2:cout<<"myNumbers["<<index<<"] = "<<myNumbers[index]<<"\n"  ;
          break;


        }
    }
    while(choice!=-1);



    return 0;
}


/*
--------------------------------------------------------------------------------
18. DİZİ BOYUTUNU KULLANICIDAN ALMA VE MODULO (%) FİLTRESİ
--------------------------------------------------------------------------------
* Canlı Boyut Atama -> "cin >> x; int dizi[x];" kalıbıyla, statik bir dizinin
  kaç çekmeceli olacağına program çalışırken kullanıcı karar verebilir (VLA mantığı).

* Süslü Parantez Uyarısı -> Bir for veya if yapısından sonra "{ }" kullanılmazsa,
  sadece ama sadece peşinden gelen İLK SATIR o yapıya dahil olur. Kod okurken
  girintilere aldanma, parantezlere bak!

* Tek-Çift Filtreleme Formülü:
  - sayi % 2 == 0  --> Sayı ÇİFTTİR (Even).
  - sayi % 2 == 1  --> Sayı TEKTİR (Odd).
================================================================================

// dizilerde tek ve çift sayıları bulma
int main()
{
    int i, x;
    cout << "Enter a positive number (Dizi Boyutu): ";
    cin >> x;

    // Kullanıcının verdiği 'x' boyutuna göre dinamik görünümlü statik dizi açıyoruz!
    int numbers[x];

    cout << "Enter the array numbers:\n";
    // 1. DÖNGÜ: Kullanıcıdan sayıları tek tek toplama odası
    for(i = 0; i < x; i++)
    {
        cin >> numbers[i];
    } // <-- Hoca videoda bu parantezi koymadığı için alt satırlar döngünün içindeymiş gibi görünüyor!

    // 2. DÖNGÜ: Sadece TEK sayıları tarama odası
    cout << "\nOdd Numbers (Tekler): ";
    for(i = 0; i < x; i++)
    {
        if(numbers[i] % 2 == 1) // 2'ye bölümünden kalan 1 ise tektir
        {
            cout << numbers[i] << " ";
        }
    }

    // 3. DÖNGÜ: Sadece ÇİFT sayıları tarama odası
    cout << "\nEven Numbers (Ciftler): ";
    for(i = 0; i < x; i++)
    {
        if(numbers[i] % 2 == 0) // 2'ye bölümünden kalan 0 ise çifttir
        {
            cout << numbers[i] << " ";
        }
    }

    cout << "\n";
    return 0;
}



!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//dizilerde sıralama AŞIRI ÖNEMLİ MANTIĞINI ANLA

    void sortIt();
    void showArray();
    void showArrayReverse();

    int numbers[7],i;// yukarıdaki 3 fonksiyonun içerisinde de çalışabilsin diye int main in içinde yazmadık

    int main()
    {
        cout<<"Enter the array numbers:\n";
        for(i=0;i<7;i++)
            cin>>numbers[i];
            cout<<"\nBefore sorting\n";
            showArray();
            cout<<"\nThe array is sorting...\n";
            sortIt();
            cout<<"\nAfter sorting\n";
            showArray();
            cout << "\nAfter sorting (Buyukten Kucuge)\n";
          showArrayReverse(); // Tersten sıralama (6'dan 0'da doğru geri vites)
            cout<<"\n";
        return 0;
    }

    void sortIt()
    {
        int j,reserve;
        for(i=0;i<7;i++)
        {
            for(j=i+1;j<7;j++)// j=i+1 dememin sebebi 0. indeksi onun 1 fazlasıyla karşılaştırmalıyım 1 de 2 ile karşlaştırmalıyım o yüzden j=i+1
            {
                if(numbers[j]<numbers[i])// diyelim ki kullanıcı sırasıyla 2 4 6 12 0 5 4 girdi.
// Şimdi burada i=0 oluyor, j=1 oldu. i=0 olduğundan numbers[0] odasına bakıyoruz, orada 2 var.
// İç for'a girdik j=1 oldu. Şimdi j, numbers[1] odasına bakıyor, kim var orada? 4 var.
// If'e geçiyor, diyor ki 4 < 2 mi? Yanlış! Hemen iç forun sonuna gidiyor, j++ çalışıyor ve j=2 oluyor.
// Sonra j=2, numbers[2] odasına bakıyor, kim var? 6 var. If'e geçiyor, diyor ki 6 < 2 mi? Yanlış!
// Aynı işlem tekrar ediyor ve j=4 olduğunda numbers[4] odasına giriyor. Kim var orada? 0.
// "0 < 2 mi?" diye soruyor. DOĞRU! Şimdi if'in içindeki takas (swap) işlemlerine giriyoruz.

// reserve zaten bizim boş odamız (yedek bardağımız), orayı değerleri kaybetmeden değiştirmek için kullanıyoruz.
// İlk adımda numbers[0] odamızın içindeki o eski 2 değerini kaybetmemek için reserve odasına kopyalayıp güvene alıyoruz.
// Hemen ardından numbers[i] yani numbers[0] odasının içine, sağ taraftaki numbers[j] yani numbers[4] odasindeki 0 değerini kopyalayıp yapıştırıyoruz. Bu işlem olunca numbers[0] odasındaki eski 2 siliniyor ve orası artık 0 oluyor.
// En son adımda ise, numbers[j] yani numbers[4] odasının içine, en başta reserve odasına emanet ettiğimiz o 2 değerini fırlatıp yazıyoruz.

// Böylece bu 3 satırlık if bloğunun içi bittiğinde numbers[0] odası 0, numbers[4] odası ise 2 değerini almış oluyor.
// Yani portakal suyu ile elma suyunun yerini, üçüncü bir boş bardak yardımıyla birbirine karıştırmadan başarıyla takas etmiş olduk!
// Dizimizin yeni hali şu an: {0, 4, 6, 12, 2, 5, 4} oldu.

// Bu takas işlemi biter bitmez içteki for döngüsü hiç durmaz, if çalışsa da çalışmasa da hemen j++ çarkını çalıştırır ve j=5 olur.
// Tarayıcı kafa mermi gibi sağa doğru akmaya devam eder; bu sefer numbers[5] odasındaki 5 sayısı ile bizim en başa taze kilitlediğimiz numbers[0] odasındaki YENİ 0 sayısını kıyaslar (5 < 0 mı diye bakar).
// j döngüsü 7 olana kadar (yani dizinin sonuna kadar) tüm odaları böyle tarar ve i=0 için en küçük sayıyı (0'ı) kesin olarak en başa çiviler.
// İçteki j döngüsü tamamen bitince sistem dıştaki for döngüsüne döner, i=1 yapar ve aynı amelelik bu sefer 1. oda için en baştan başlar!
                {
                    reserve=numbers[i];
                    numbers[i]=numbers[j];
                    numbers[j]=reserve;
                }
            }
        }


    }
    void showArray()
    {
        for(i=0;i<7;i++)
        cout<<numbers[i]<<" ";// küçükten büyüğe sıralamayı göster

    }
    void showArrayReverse()
    {
            for(i=6;i>=0;i--)
            cout<<numbers[i]<<" ";// büyükten küçüğe sıralamayı göster
    }


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!




void myFunction(int myNumbers[7]);

int main()
{
    int myNumbers[7]={19,7,12,25,57,3,11};
    myFunction(myNumbers);



    return 0;
}

void myFunction(int myNumbers[7])
{
    for(int i=0;i<7;i++)
        cout<<myNumbers[i]<<"\n";
}




// bir dizideki en büyük ve en küçük sayıyı bulma
// her öğrencinin okul numarasını ve notunu iki ayrı diziye alıp sonuç olarak en yüksek ve en düşük notu alan kişiyi ekrana yazdırıcaz

int main()
{
    // largets=0: En büyük notu ararken teraziyi sıfırdan başlatıyoruz (gelen her not bundan büyük olacak).
    // smallest=100: En küçük notu ararken teraziyi tavan fiyattan açıyoruz (gelen her not bundan küçük olacak).
    int mySize, i, largest = 0, smallest = 100, largeIndex, smallIndex;

    cout << "Enter the class size: "; // Sınıfta kaç öğrenci olacağını kullanıcıya soruyoruz.
    cin >> mySize; // Sınıf mevcudunu (dizi boyutunu) canlı olarak hafızaya alıyoruz.

    // Kullanıcının verdiği mevcuda göre yan yana iki paralel dolap açıyoruz:
    int notes[mySize];      // Öğrencilerin notlarını tutacak dolap
    int studentNo[mySize];  // Öğrencilerin okul numaralarını tutacak dolap

    // 1. DÖNGÜ: Şantiyeye malzeme toplama odası (Kullanıcıdan verileri alma)
    for(i = 0; i < mySize; i++) {
        cout << "Student No / Student Note: ";
        // Peş peşe girilen verileri aynı indeksteki (aynı hizadaki) çekmecelere fırlatıyoruz.
        // Örn: 0. çekmecede 145 nolu öğrenci ve onun aldığı 85 notu yan yana duruyor.
        cin >> studentNo[i] >> notes[i];
    }

    // 2. DÖNGÜ: Cımbızla En Büyük ve En Küçük Elemanı Ayıklama Odası
    for(i = 0; i < mySize; i++) {

        // --- EN BÜYÜK NOTU BULMA KONTROLÜ ---
        if(notes[i] > largest) {
            largest = notes[i];  // Eğer şu anki çekmecedeki not eldeki liderden büyükse, yeni lider bu not oluyor!
            largeIndex = i;      // Bu rekor kıran öğrencinin oda numarasını (indeksini) hemen cebimize atıyoruz.
        }

        // --- EN KÜÇÜK NOTU BULMA KONTROLÜ ---
        if(notes[i] < smallest) {
            smallest = notes[i]; // Eğer şu anki not eldeki en ezik nottan da küçükse, yeni dip noktamız bu oluyor!
            smallIndex = i;      // Bu en düşük notu alan öğrencinin de oda numarasını (indeksini) cebimize atıyoruz.
        }
    }

    // SONUÇLARI RAPORLAMA Protokolü:
    // largeIndex ve smallIndex'i kullanarak rekor kıran öğrencilerin okul numaralarına doğrudan ulaşıyoruz.
    cout << "\nStudent number " << studentNo[largeIndex] << " received the highest grade (" << largest << ")\n";
    cout << "\nStudent number " << studentNo[smallIndex] << " received the lowest grade (" << smallest << ")\n";

    return 0;
}




//ÖNEMLİ BİR ÖRNEK MANTIĞI ANLA // Dizilerde satır ve sütun toplamlarını bulma


int main()
{
    // 3 satır ve 4 sütundan oluşan bir Excel tablosu açtık
    int matrix[3][4], i, j;

    // 1. ADIM: TABLONUN İÇİNİ MATEMATİKSEL OLARAK DOLDURMA MOTORU
    for(i = 0; i < 3; i++) // Satırları gezen şef (0, 1, 2)
    {
        for(j = 0; j < 4; j++) // Sütunları gezen şef (0, 1, 2, 3)
        {
            // Hücrenin içine o anki satır numarası ile sütun numarasının toplamını yaz!
            matrix[i][j] = i + j;
        }
    } // <-- Doldurma motoru burada bitti, kapandı!

    // 2. ADIM: DOLAN TABLOYU EKRANA BASMA MOTORU
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n"; // Her satır bitince bir alt satıra geç
    }

    return 0;
}


// Dizilerde satır ve sütun toplamlarını bulma
/*
--------------------------------------------------------------------------------
20. MATRİSLERDE SATIR VE SÜTUN TARAMA FARKI
--------------------------------------------------------------------------------
* Kural -> Matrislerde parantez sırası HER ZAMAN [Satır][Sütun] şeklindedir.

* Satır Satır Tarama (Yatay) -> "matrix[i][j]" kalıbı kullanılır.
  Baştaki indeks sabit kalır, sondaki indeks sağa doğru kayar. (Excel satırı gibi).

* Sütun Sütun Tarama (Dikey) -> "matrix[j][i]" kalıbı kullanılır.
  Sondaki indeks (sütun) sabit kilitlenirken, baştaki indeks (satır) sürekli artar.
  Böylece robot yukarıdan aşağıya doğru diklemesine toplama yapar.

* sum = 0; Temizliği -> Her satır veya sütun bittiğinde toplam değişkenini
  sıfırlamak şarttır. Yoksa bir sonraki hattın toplamı eskisinin üstüne eklenir (çöp veri).


================================================================================

int main()
{
    int matrix[5][5]=
    {
        {5,3,7,0,19},
        {2,8,10,4,3},
        {7,4,2,9,0},
        {16,7,1,5,8},
        {1,14,2,3,10}

    };
    int i,j,sum=0;
    for(i=0;i<5;i++)// i yi satır j yi sütun olarak düşün
    {
        for(j=0;j<5;j++)
        {
           cout<< matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    for(i=0;i<5;i++)
    {
        cout<<i+1<<". row sum ";
        for(j=0;j<5;j++)
        {
            sum+=matrix[i][j];//Yazılımda köşeli parantezin her zaman ilk kutusu Satır, ikinci kutusu Sütun demektir. Bu kural asla değişmez!
        }
        cout<<sum<<"\n";
        sum=0;// yanlış toplama yapmasın diye önceki satırlarda olan toplamı sıfırlıyoruz bi sonraki satıra geçtiğinde üstüne eklenmesin diye
    }
    cout<<"\n";

    for(i=0;i<5;i++)
    {
        cout<<i+1<<". column sum: ";
        for(j=0;j<5;j++)
        {
            sum+=matrix[j][i];// burada j yi satır olarak gösteriyoruz sabitlensin diye i de sütunları geziyor
            /*
                  ================================================================================
Kritik Düzeltme: matrix[j][i] ile Sütun Toplama Notu
================================================================================
* DOĞRUSU: "Bu kodda matrix[j][i] yazarak j'yi satır, i'yi ise sütun olarak
  atadık. Dıştaki döngü 'i' olduğu için her turda bir sütun numarası SABİTLENİR
  (Örn: i=0). İçteki döngü 'j' (satır) olduğu için, j mermi gibi sırayla 0'dan 4'e
  kadar tüm satırları GEZER. Böylece sabitlenen o sütun yukarıdan aşağıya dikey
  olarak toplanmış olur!"
================================================================================

        }
        cout<<sum<<"\n";
        sum=0;
    }


    return 0;
}

================================================================================
                    DİNAMİK BELLEK KUTSAL PROTOKOLÜ
================================================================================
* Sol taraf (int*) neyi gösteriyorsa, sağ taraf (new int) onu yaratmalıdır.
* new anahtar kelimesi -> RAM'in serbest bölgesi olan HEAP'ten yer kiralar.
* delete[]             -> Kiralanan arsayı RAM'e geri teslim eder (ŞARTTIR!).
* NULL                 -> Adresi silerek kuryenin başıboş kalmasını engeller.
================================================================================

// dinamik dizi oluşturma
// dinamik dizinin çalışma süresi boyunca boyutunu değiştirebiliyoruz ancak statik olarak dizilerde boyutu değiştiremiyoruz
int main()
{
    int sizeArr;
    cout<<"Enter the size:";
    cin>>sizeArr;
    int* myArray= new int[sizeArr];

    for(int i=0;i<sizeArr;i++)
    {
        cout<<"myArray["<<i<<"]=";
        cin>>myArray[i];
    }
    for(int i=0;i<sizeArr;i++)
    {
        cout<<myArray[i]<<" "; // dizimiz bir pointer olduğu için  myArray[i] bunun yerine *(myArray+i) diye de yazabilirdik aynı mantık a gelirdi
    }
    delete[]myArray;// kapanmadan önce diziyi temizliyoruz
    myArray=NULL;// dizimi hafızada yer işagel etmesin diye NULL komutuna eşitliyorum



    return 0;
}







*/


/*
using namespace std;

// --- PROTOTİPLER ---
void selamla(string isim = "SAYBOT");
int bataryaYuzdesi(float voltaj); // Sadece voltajı alacak
void durumKontrol(int yuzde);

int main() {
    float girilenVoltaj;
    int sonucYuzde;

    selamla(); // Varsayılan isimle selamlar

    cout << "Robotun voltajini girin (V): ";
    cin >> girilenVoltaj;
    while (girilenVoltaj > 12.6 || girilenVoltaj < 0) {
        // Kullanıcı 12.6'dan büyük veya 0'dan küçük girerse buraya girer
        cout << "\nHata: Gecersiz voltaj! Lutfen 0 ile 12.6 arasinda bir deger giriniz: ";
        cin >> girilenVoltaj; // Tekrar girdi alıyoruz
    }

    // Fonksiyonu çağırıp gelen sonucu değişkene hapsediyoruz
    sonucYuzde = bataryaYuzdesi(girilenVoltaj);

    cout << "Batarya Durumu: %" << sonucYuzde << endl;

    // Şimdi yüzdeye göre kontrol yapıyoruz
    durumKontrol(sonucYuzde);

    return 0;
}

// --- TANIMLAMALAR ---

void selamla(string isim) {
    cout << isim << " : Sistem baslatiliyor...\n";
}

int bataryaYuzdesi(float voltaj) {
    // Formülü uygula ve tam sayıya çevirip döndür
    int yuzde = (voltaj / 12.6) * 100;
    return yuzde; // Sonucu geri gönderiyoruz
}

void durumKontrol(int yuzde) {
    if (yuzde < 20) {
        cout << "UYARI: Batarya Dusuk!\n";
    } else {
        cout << "Sistem Stabil.\n";
    }
}

*/


/* Pointer

-Bellekteki bir verinin değerini değil, o verinin saklandığı
odanın RAM ADRESİNİ (Hexadecimal) tutan özel değişkenlerdir.

NOT: biz RAM i iyi ve verimli kullanmak için pointer lara ihtiyaç duyuyoruz

Hexadecimal sayılarda;/16 ya bölerek bulduğumuz
10---->A
11---->B
12---->C
13---->D
14---->E
15---->F

NOT: pointer Verileri kopyalamadan, direkt adresi üzerinden yönettiği için RAM tasarrufu sağlar, hızı tavan yaptırır.

-pointer:bellek adresini değer olarak saklayan bir değişkendir(varriabledir) yani içerisinde sayıları tutmaz bellek adreslerini tutar
-Normal Değişken (x): Çekmecenin içindeki yükü (5) tutar.
-Pointer Değişkeni: O çekmecenin içindeki yükle ilgilenmez, direkt o çekmecenin oda numarasını (adresini) hafızasında saklar!

A-)(Ampersand)Amperzan İşareti (&) ---> "Adresini Ver!" Anahtarı

Herhangi bir değişkenin başına & işareti koyduğun an bilgisayara şu emri verirsin: "Bana onun içindeki sayıyı söyleme!
Bana o değişkenin RAM'deki açık adresini, oda numarasını getir!"
cout << x; --> Ekrana 5 basar.
cout << &x; --> Ekrana 0x7ffee3b4 (RAM adresi) basar.

B-) (Asterisk)Yıldız İşareti (*) ---> "Adrese Git, İçini Aç!" Anahtarı
İçerik/Dereference Operatörü". Pointer'ın elindeki adrese
gitmeyi ve o adresteki gerçek veriyi okumayı/değiştirmeyi sağlar.

Bu işaretin iki numarası vardır:

1-)Bir Pointer tanımlarken başına konur: int* ptr; (Yani: "Ben sıradan bir değişken değilim, ben adres tutan bir Pointer'ım" der).

2-)Kodun içinde bir adresin başına konursa: "Elimdeki adrese git, o kapıyı kır ve içerideki çekmecede ne yük varsa onu cımbızla çek getir!" anlamına gelir.



int main()
{
    int x=7;

    cout<<x<<"\n";
    cout<<&x<<"\n";
    /*
    NOT:
    Yükün Kendisi (x): Değeri hep 7, hiç değişmiyor.
    Yükün Adresi (&x): Her çalıştırmada RAM'in doluluk oranına ve ASLR mekanizmasına göre fırıl fırıl değişir.

        return 0;










--------------------------------------------------------------------------------
22. POINTER ATAMA VE DEREFERENCE (ADRESE GİTME) REFLEKSİ
--------------------------------------------------------------------------------
* int* ptr = &x; -> int'in dibindeki yıldız, ptr değişkeninin bir "Adres Muhtarı"
                    olacağını ilan eder. &x ise x'in RAM koordinatını ona yükler.

* cout << ptr;   -> Pointer'ın sakladığı "Adres Değerini" ekrana basar. (Örn: 0x79e7)

* cout << *ptr;  -> Pointer'ın elindeki adrese GİT (Dereference) ve o odanın
                    içindeki gerçek yükü/sayıyı ekrana bas demektir. (Örn: 7)
================================================================================


int main()
{
    int x=7;
    int* ptr=&x;//* işareti int ın diretk dibine boşluk bırakmdan koyunca ben aslında burada adres tutucam diyorum

    cout<<x<<"\n";
    cout<<&x<<"\n";
    cout<<ptr<<"\n";// bana pointerın içerisindeki değeri ver diyor pointer ın içerisinde de x=7 nin adresi var önemli nokta bana pointer ın adresini ver demiyorum içindeki değeri ver  diyorum
    cout<<*ptr<<"\n";// git örnek veriyorum x=7 nin adrexi qw123r12 olsun buraya git diyorum bellekte her nerdeyse git onun içersindeki değeri getir yani 7 yi






    return 0;
}



NOT: ram de alanlar adres ve değer şeklinde tutulur

NOT: bi pointer 3 farklı şeklide yazılabilir Örnek;
    string* ptr=&food;
    string * ptr=&food;
    string *ptr=&food;
--------------------------------------------------------------------------------
23. POINTER YAZIM STANDARTLARI VE TANIMLAMA KURALLARI
--------------------------------------------------------------------------------
* RAM Anatomisi -> Bellekteki her veri bloğu benzersiz bir "Adres" (Oda Numarası)
                   ve o adreste saklanan "Değer" (Yük) ikilisinden oluşur.

* Yıldızın Konumu -> "T* p;", "T * p;" veya "T *p;" yazımları teknik olarak
                     BİREBİR AYNDIR. Derleyici boşlukları önemsemez.

* Çoklu Tanımlama Tuzağı -> Yan yana birden fazla pointer tanımlanırken her
                            değişkenin başına ayrı ayrı yıldız koymak ŞARTTIR:
                            "int *p1, *p2;" --> Doğru (İkisi de pointer)
                            "int* p1, p2;"  --> Yanlış (p2 düz int kalır!)
================================================================================

int main()

{
    string food="pizza" ;
    string* ptr=&food;

    cout<<food<<"\n";
    cout<<&food<<"\n";
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n\n\n";

    *ptr="Hamburger";// diyor ki pointer ın içinde tuttuğu adresin içerisindeki değere git yani food a git food un içerisnde de pizza var heh işte onu hambuger yap diyor
    cout<<food<<"\n";
    cout<<ptr<<"\n";// yukarıdakiler le yani pizza olanla aynı adresi tutar
    cout<<*ptr<<"\n";

// ben pointerin içerisindeki değeri güncellediğim zaman otomatikman food değişkeninide güncellemiş oluyorum ztn pointerların amacı da budur
    return 0;
}

// NOT: pointer da bir değişkendir  sadece bizim ona verdiğimiz değişkenin adresini tutan değişkenlere pointer deniyor


int main()
{
    int x = 7;
    int* ptr = &x;

    cout << "Value of x is: " << *x << "\n";       // 🎯 Ekrana basar: 7
    cout << "Address of x is: " << &x << "\n";     // 🎯 Ekrana basar: 0x1111 (x'in adresi)

    // ⚠️ DİKKAT: ptr'nin içindeki değer, x'in adresidir!
    cout << "Value inside ptr (x's address): " << ptr << "\n";   // 🎯 Ekrana basar: 0x1111

    // ⚠️ DİKKAT: &ptr, pointer'ın RAM'deki kendi apartman dairesidir!
    cout << "Actual RAM address of ptr itself: " << &ptr << "\n"; // 🎯 Ekrana basar: 0x9999

    // 🔥 İŞTE SENİN ARADIĞIN 7 BURADA!
    cout << "Value that ptr points to: " << *ptr << "\n";         // 🎯 Ekrana basar: 7 (Adrese git, içini aç!) eğer pointerın içindeki 7 ye ulaşmak istiyorsak bunu yapmamız gerkeiyor

    return 0;
}


/*
Ustadan Kafandaki Tozu Alacak Son Özet:
1-)ptr --> ptr odasının içindeki yükü (yani kuryenin elindeki x'in adresini) verir.
2-)&ptr --> ptr odasının RAM'deki kendi bina numarasını verir.
3-)*ptr --> Kuryeyi o adrese gönderir, kapıyı açtırır ve içerideki 7'yi kolundan tutup getirir!

--------------------------------------------------------------------------------
26. DERERENCE (*) OPERATÖRÜNÜN KULLANIM SINIRI VE GEÇERSİZ TİP HATASI
--------------------------------------------------------------------------------
* Kural          -> Başına "*" (Yıldız) konulacak değişken mutlaka bir POINTER
                    (adres tutucu) olmak zorundadır.

* Hatalı Kullanım-> Düz bir değişkenin (int x = 7;) başına "*" koyup "*x" yazmak
                    derleyiciyi patlatır. Çünkü düz sayıların içinde gidilecek
                    bir RAM adresi bulunmaz.

* Hata Mesajı    -> "invalid type argument of unary '*'" görüyorsan; bil ki pointer
                    olmayan, düz bir elemana zorla adrese gitme anahtarı sokmaya
                    çalışıyorsundur!
================================================================================

================================================================================
KUTSAL KURAL: Yıldız (*) Kimin Başına Gelir, Kimin Başına GELEMEZ?
================================================================================
* BAŞINA GELİR   -> Pointer değişkenlerinin (y, z gibi). Çünkü onların ÖZ DEĞERİ
                    birer adrestir. Yıldız koyunca o adrese GİDİLİR.

* BAŞINA GELEMEZ -> Düz değişkenlerin (x gibi). Çünkü onların ÖZ DEĞERİ birer
                    sayıdır/veridir. Sayının başına yıldız koyup "adrese git"
                    diyemezsin, terminal hata verir!
================================================================================


--------------------------------------------------------------------------------
27. ÇOKLU POINTER VE ORTAK ADRES MANİPÜLASYONU PROTOKOLÜ
--------------------------------------------------------------------------------
* Ortak Hedef   -> Birden fazla pointer aynı değişkenin adresini tutabilir
                   (double* y = &x; double* z = &x;).

* Zincirleme Etki-> Pointerlardan biri üzerinden değer değiştirildiğinde (*y = 70.19;),
                   asıl değişken (x) ve o adresi gösteren diğer tüm pointerlar (*z)
                   artık o yeni değeri okur.

* Altın Kural    -> Başında "*" olan her pointer, RAM'deki asıl hücrenin canlı
                   yansımasıdır (aynasıdır).
================================================================================
RAM Şantiyesindeki Gizli Operasyon (Saniye Saniye)
Diyelim ki x değişkeni RAM'de 0xAAAA adresinde duruyor.
Sen yukarıda double* y = &x; dediğin için, y'nin içine değer olarak ne yazıldı? 0xAAAA yazıldı. Yani y şu an x'in adresini elinde tutuyor.

Şimdi o senin kafanı karıştıran *y = 70.19; satırı tetiklendiği an bilgisayar sırayla şu adımları atıyor:

Yıldız (*) Anahtarını Görüyor: Bilgisayar diyor ki: "Aha, sol tarafta yıldız var! Ben y'nin kendi odasını (&y adresini) kesinlikle değiştirmeyeceğim. y'nin içindeki adrese telsiz çakacağım."

Adresi Okuyor: y odasının içine bakıyor. İçinde ne yazıyor değer olarak? 0xAAAA (Yani x'in adresi).

Hedefe Koşuyor: Bilgisayar eline feneri alıyor, RAM koridorlarında 0xAAAA adresindeki odaya doğru koşuyor. O oda kimin odasıydı? x'in odası!

Yükü Değiştiriyor: x'in odasının kapısını tekmeyle açıyor, içerideki eski 3.14 yükünü çöpe fırlatıyor ve yerine 70.19 değerini çiviliyor!


Ustadan Kafandaki O Düğümü Çözecek Son Özet
Eğer yıldız koymadan sadece y = 70.19; yazsaydın (ki derleyici double* tipine düz sayı atadığın için hata verirdi), o zaman haklı olurdun; y'nin kendi değerini değiştirmeye çalışırdın.

Ama başına * (Yıldız) koyduğun an, sen aradan çekiliyorsun; o ok, direkt y'nin hedef gösterdiği x odasını vuruyor! Biz buna yazılımda "Uzaktan Kumanda ile Değer Değiştirme" diyoruz aslanım.




// pointer ile değer güncelleme
int main()
{
    double x = 3.14;
    double* y = &x; // burada diyoruz ki ben y ye bi adres atıyacağım  &x diyerek de x in adresini y ye atıyorum yani y nin değeri artık x in adresi oluyor
    double* z = &x;

    // Adres Basma Protokolü
    cout << "address of x is " << &x << "\n";
    cout << "address of y is " << &y << "\n"; // y'nin kendi RAM adresi
    cout << "address of z is " << &z << "\n\n"; // 🎯 İŞTE BURADAKİ TIRNAĞI DÜZELTTİK!

    // Değer Basma Protokolü
    cout << "value of x is " << x << "\n";   // Ekrana 3.14 basar
    cout << "value of y is " << y << "\n";   // y'nin içinde x'in adresi var, onu basar
    cout << "value of z is " << z << "\n\n";   // z'nin içinde de x'in adresi var, onu basar

    *y=70.19;
    cout << "value of x is " << x << "\n";
    cout << "value of y is " <<*y << "\n";
    cout << "value of z is " <<*z << "\n";



    return 0;

}



// pointerlarda arttırma
int main()
{
    int x = 7;
    int* ptr = &x;
    // USTA NOTU: x adında 4 byte'lık bir int çekmeci açtık, içine 7 koyduk.
    // ptr isimli kuryeyi yaratıp, eline x'in RAM adresini (Örn: 0x1000) verdik.

    cout << "ptr:" << ptr << "\n";
    // 🎯 Ekrana x'in adresini basar (Örn: 0x1000).

    cout << "*ptr:" << *ptr << "\n";
    // 🎯 Kurye o adrese gider, kapıyı açar ve içerideki "7" yükünü getirir.

    ptr++;
    // 🔥 İŞTE DANANIN KUYRUĞUNUN KOPTUĞU YER!
    // Kuryeye "Cebindeki adresi 1 adım arttır" dedik.
    // ptr, işaret ettiği tipin "int" (yani 4 byte) olduğunu bildiği için,
    // adresi düz 1 sayı arttırmaz! Tam 4 byte ileriye ÖTELER.
    // Adresimiz 0x1000 ise artık "0x1004" olur! Yani bir sonraki komşu arsaya zıplar.

    cout << "ptr:" << ptr << "\n";
    // 🎯 Ekrana o yeni, 4 byte ötelenmiş adresi basar (Örn: 0x1004).

    cout << "*ptr:" << *ptr << "\n";
    // ⚠️ SİBER GÜVENLİK ALARMI!
    // Kurye yeni adrese (0x1004) gider ve kapıyı açar.
    // Ama o odada bizim "x" değişkenimiz yok! Orası RAM'in sahipsiz, rastgele bir odasıdır.
    // Ekrana tamamen şansına bağlı, RAM'de o an ne kaldıysa saçma sapan bir çöp değer (garbage value) basar!

    cout << &x;
    // 🎯 x'in asıl adresini basar. ptr artsa bile x'in dünyadaki yeri sabittir, değişmez!

    return 0;
}



// pointeri bir fonksiyon parametresi olarak almak

Pointer İle Uzaktan Kumandayı Bağlamak
Şimdi dükkandaki o büyük silahı, yani dün gece aslanlar gibi söktüğün Pointer mekanizmasını devreye alacağız. Fonksiyona fotokopi göndermeyeceğiz; main'deki o asıl odanın RAM adresini teslim edeceğiz ki uzaktan kumandayla içeriyi patlatabilsin!

Bunun için kodunda 3 küçük mühendislik dokunuşu yapman gerekiyor çırak:

Fonksiyonun Protokolünü Değiştir: Fonksiyona düz int değil, adres tutacağını söylemek için yıldız (*) koy: int replaceValue(int* x);

Fonksiyona Adres Gönder: main içinde çağırırken başına ampersan (&) koyup adres fırlat: replaceValue(&x);

Fonksiyonun İçinde Kapıyı Aç: İçeride o adrese gitmek için yıldız anahtarını kullan: *x = 26;

NOT: yani pointer kullanmazsak ram den 2 farklı alan ayırıcakken pointer kullanırsak biz ram de sadece 1 alan kullanıp onu değiştirmiş olucaz

void replaceValue(int* x);

int main()
{
    int x = 70;
    cout << "value of variable x is: " << x << "\n"; // Ekrana: 70

    // 2. Aksiyon: Fonksiyona x'in değerini değil, RAM'deki açık adresini fırlatıyoruz!
    replaceValue(&x);

    cout << "value of variable x after the function is: " << x << "\n"; // 🎯 Ekrana: 26!

    return 0;
}

// 3. Şantiye: Kurye (pointer) elindeki adresle içeri giriyor
void replaceValue(int* x)
{
    // yıldıza dikkat! "Sana gelen adrese git, o odanın içindeki yükü 26 yap" dedik!
    *x = 26;
}










// pointer sız hali
void replaceValue(int x);

int main()
{
    int x=70;
    cout<<"value of variable x is "<<x<<"\n";
    replaceValue(x);
    cout<<"value of variable x after the funciton is "<<x<<"\n";

    return 0;
/*
Eğer senin amacın sadece buysa: Yani "Usta ben main'deki asıl değere dokunmasam da olur, fonksiyon kendi odasında o sayıyı alsın, 19 yapsın, ekrana bassın ve ölsün" diyorsan  Pointer KESİNLİKLE GEREKSİZ. Şu an yazdığın kod mükemmel bir çözümdür.

Eğer senin amacın hocanın videodaki amacıysa: Yani "Usta ben öyle bir kod yazacağım ki, fonksiyon bittikten sonra bile main'deki o asıl x değişkeni kalıcı olarak 19'a dönüşmüş olacak" diyorsan  Pointer KESİNLİKLE ŞART! Çünkü fonksiyona adres (&x) vermediğin sürece, o fonksiyonun main'in içindeki dünyaya gücü hayatta yetmez.

yani kısaca pointer kullanmadığımız için kalıcı olmuyor yani artık programa x=19 la devam etmiyor geçici oluyor program yazdırdıktan sonra tekrar x=70 ile devam ediyor ama pointer kullansaydık kalıcı olucakatı program artık x=19 ile devam edicekti


//Sen bu kodda pointer kullanmadın, evet; ama fonksiyonun içinde yaptığın o x = 19; hamlesi, main'deki asıl x değişkenini DEĞİŞTİREMEDİ! Fonksiyon sadece kendi odasındaki fotokopiyle oynadı, asıl x o beton duvarın arkasında 70 olarak çakılı kaldı.
}
void replaceValue(int x)
{
    x=19;
    cout<<"value of variable x inside the funciton is "<<x<<"\n";
}







// pointer lı hali artık kalıcı olarak değiştirioyruz x değişkenini

void replaceValue(int* ptr);

int main()
{
    int x=70;
    cout<<"value of variable x is "<<x<<"\n";
    replaceValue(&x);
    cout<<"value of variable x after the funciton is "<<x<<"\n";
    return 0;
}
void replaceValue(int* ptr)
{
    *ptr=19;
    cout<<"value of variable x inside the function is "<<*ptr<<"\n";
}






// pointerla kare alma özelliği

// 1. Tabela: Makinenin adı getSquare!
float getSquare(float* ptr);

int main()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;

    // 2. Çağırma: getSquare makinesini çağırıyoruz
    cout << "square of number is " << getSquare(&number) << "\n";

    return 0;
}

// 3. Gövde: İşte buradaki ismi "getSquare" olarak düzelttik çırak!
float getSquare(float* ptr)
{
    // Adrese gidip sayıyı okuyor, kendisiyle çarpıp paketi return ile main'e fırlatıyor!
    return *ptr * *ptr;
}

================================================================================
C++ PROGRAMLAMA DİSİPLİNİ - KUTSAL BELLEK VE FONKSİYON GÖSTERİCİLERİ (POINTER)
================================================================================
Ders Kodu   : YZM-2026 / SİBER-VATAN
Konu        : Fonksiyon Göstericileri (Function Pointers)
Eğitmen     : Usta
Çırak       : Yusuf Sercan İşçi
--------------------------------------------------------------------------------

[ BÖLÜM 1: BÜYÜK FELSEFE (FONKSİYONUN ADRESİ Mİ OLUR?) ]
--------------------------------------------------------------------------------
1. Tıpkı düz değişkenler (int, double) gibi, yazdığımız tüm fonksiyonlar da
   gökten inmez; derlendikten sonra RAM'in "Code Segment" (Kod Bölgesi) adı
   verilen özel bir parseline yerleşirler.
2. RAM'e yerleşen her fonksiyonun, makine kodunun başladığı bizzat kendine ait
   bir "başlangıç bina numarası" (RAM Adresi) vardır.
3. Fonksiyon Göstericisi (Function Pointer); düz bir sayı adresi değil, koca bir
   iş makinesinin (fonksiyonun) RAM'deki başlangıç adresini tutan özel ve janti
   bir kuryedir!

--------------------------------------------------------------------------------
[ BÖLÜM 2: KUTSAL SÖZDİZİMİ (SYNTAX) VE TABELA ASMA PROTOKOLÜ ]
--------------------------------------------------------------------------------
Bir fonksiyon pointer'ı tanımlanırken derleyiciye çok katı bir söz verilir.
Tabela aynen şöyle asılır:

    Dönüş_Tipi (*Pointer_Adı)(Parametre_Tipleri);

ÖRNEK REÇETE:
    int (*func)(int, int);

* int          -> "Bu kuryenin bağlayacağı fonksiyon geriye 'int' fırlatmalı!"
* (*func)      -> "Bu parantez ve yıldız şart! Ben bir fonksiyon pointer'ıyım."
* (int, int)   -> "Bu kuryenin bağlayacağı fonksiyon kapıda iki tane 'int' istemeli!"

⚠️ KRİTİK UYARI: Eğer ortadaki parantezi unutup "int *func(int, int);" yazarsan,
   derleyici bunu pointer değil, geriye "int* (int adresi)" döndüren sıradan bir
   fonksiyon sanır ve şantiye havaya uçar! Parantez ŞART!

--------------------------------------------------------------------------------
[ BÖLÜM 3: SATIR SATIR RAM ARKASINDAKİ TELSİZ TRAFİĞİ ]
--------------------------------------------------------------------------------
Yaptığımız o delikanlı kodun işlemci seviyesindeki tam röntgeni şudur:

1. "func = multiplication;"
   -> Çarpma makinesinin RAM'deki adresi (Örn: 0xFA55) cımbızla sökülür, func
      kuryesinin içine DEĞER olarak yazılır. Kumanda çarpma makinesine kilitlenir.

2. "func = &addition;"
   -> C++ mimarisinde fonksiyonun sadece ismi zaten direkt adres demektir. Başına
      "&" koysan da koymasan da işlemci aynı adresi (Örn: 0xBB11) okur. Kuryenin
      elindeki eski adres silinir, yeni adres toplama makinesi olur.

3. "func(5, 4);" ile "(*func)(19, 2);" Arasındaki Fark Nedir?
   -> Derleyicinin gözünde İKİSİ DE BİREBİR AYNIDIR! Düz çağırmak modern C++
      tarzıdır; başına yıldız koyup paranteze almak ise eski toprak, jargona
      uygun "Adrese git ve fonksiyonu tetikle" demektir. İkisi de çalışır.

--------------------------------------------------------------------------------
[ BÖLÜM 4: MÜHENDİSLİK VE SİBER GÜVENLİK VİZYONU (BİZE NE FAYDASI VAR?) ]
--------------------------------------------------------------------------------
Neden düz "multiplication(7,11);" yazıp çağırmıyoruz da bu taklaları atıyoruz?

Olay A: Dinamik Kumanda Masası (Yazılım Mühendisliği)
* Çalışma anında (Runtime), kullanıcıdan gelen emre veya robotun o anki sensör
  durumuna göre hangi fonksiyonun çalışacağına havada karar vermek için kullanılır.
* Yüzlerce "if-else" yazıp işlemciyi yormak yerine, tek bir "func" kuryesinin
  elindeki adresi değiştirerek kodun akışı milisaniyede yönlendirilir.

Olay B: API Hooking ve Zararlı Yazılım Analizi (Siber Güvenlik)
* Hackerlar veya gelişmiş antivirüs sistemleri programların akışını değiştirmek
  için tam olarak bu mekanizmayı manipüle ederler.
* Windows'un resmi bir sistem fonksiyonunun RAM adresini bulup, o adresi kendi
  yazdıkları fonksiyonun adresiyle değiştirirler (Hooking). Program orijinal
  fonksiyonu çağırıyorum sanırken hackerın fonksiyon pointer'ını tetikler!



  // pointer fonksiyonlar / yani buradaki amaç fonksiyonun kendisi pointer olrusa ne olur ?

int multiplication(int x, int y);

int addition(int x, int y);


int main()
{
   int (*func)(int,int);// bir fonksiyonu pointer olarak bu şekilde tanımalrı  func da kendimiz isim verdik orada * koyarak bunun bir pointer fonksiyon oldığunu belirttim
   //int (*func)(int,int); satırıyla sen diyorsun ki: "Ben öyle bir kurye yaratıyorum ki, bu kurye düz bir sayı adresi tutmayacak. Bu kurye, girişinde iki tane int parametre isteyen ve çıkışında int fırlatan fonksiyonların RAM'deki fabrika adresini tutacak!"
   func=multiplication;
   cout<<"x*y= "<<func(7,11)<<"\n";
   func=&addition;
   cout<<"x+y= "<<func(5,4)<<"\n";
   cout<<"x+y= "<<(*func)(19,2)<<"\n";


 return 0;
}


int multiplication(int x, int y)
{
    return x*y;
}

int addition(int x, int y)
{
    return x+y;
}



================================================================================
                    ŞANTİYE KAPANIŞ - BAŞARI RAPORU MÜHÜRÜ
================================================================================





================================================================================
          DİZİ - POINTER AKRABALIĞI KUTSAL ANAYASASI
================================================================================
1. Dizinin ismi tek başına yazılırsa (numbers), dizinin İLK ELEMANININ adresidir.
2. numbers        ile  &numbers[0]  RAM'de AYNI KAPALIDIR (Aynı adrestir).
3. *numbers       ile  numbers[0]   AYNI DEĞERDİR (İlk eleman olan 7'dir).
4. *(numbers + i) ile  numbers[i]   AYNI ELEMANDIR ( RAM'de i adım zıplamaktır).
================================================================================
// Pointerları Dizilerle Kullanmak
int main()
{
    int numbers[5]={7,19,70,4,12};
    cout<<&numbers[0]<<"\n";//bizim dizimin adresi number[0] ın tutulduğu yerdeki adrestir
// normalde değişkenler ram de nerede boşluk bulursa oraya gelir ancak dizilerde bu olmuyor dizilerin özelliği ardı ardınca sıralanıyor yani number 0 ın ardından numbers1, numbers2 diye böyle ardı ardınca RAM de depolanıyor bölye bir avantajı var

    cout<<*(numbers+1)<<"\n";// bu şekilde sadece dizinin ismini verirsem number[0] adresini getirmiş oluruz bu da şunu ortaya çıkarıyor sadece ismini yazıyorum baan ilk dizimin  adresini getiriyor yani aslında diziler birer pointer oluyo çünkü bir pointer gibi adresi kendinde tutuyor.
    // *numbers yaptığımda ise bana 7 değerini getirir yani ilk dizimin değerini
    // *(numbers+1) yaptığımda ise 1. indeksin değerini veriyor yani 19 u
    // aynı şekilde *(numbers+2) yaptığımda ise 2. indeksin değerini veriyor yani 70 i



    return 0;
}

================================================================================
                    RAM ADRES VE DEĞER EŞLEŞME PROTOKOLÜ
================================================================================
* numbers + i   -> RAM şantiyesindeki ardışık parsellerin AÇIK ADRESİDİR.
                   (int olduğu için her döngüde otomatik 4 byte ileri zıplar).

* *(numbers + i)-> O açık adresli parselin içine girildiğinde okunan GERÇEK VERİDİR.
================================================================================


// Çok önemli bir örnektir mantığını iyi kavra
int main()

{
    int numbers[5]={7,19,70,4,12};


    for(int i=0;i<5;i++)
    {
        cout<<"numbers["<<i<<"]="<<*(numbers+i)<<"\n";// burada *(numbers+i) yaptığımız için diyorki direkt çıktı olarak değerlerini yazdırıopyoruz 0. indeksten sırayla
        cout<<"numbers address["<<i<<"]="<<numbers+i<<"\n";//burada da (numbers+i) yaptığımız için 0. indeksten sırayla adreslerini yazdırıoyruz
        cout<<"\n";


    }


    return  0;
}



================================================================================
                    VERİ TİPLERİNE GÖRE ADIM ATMA PROTOKOLÜ
================================================================================
* (numbers + i) -> int dizisinde HER ADIMDA adresi 4 BYTE öteye fırlatır.
* (letters + i) -> char dizisinde HER ADIMDA adresi 1 BYTE öteye fırlatır.

Altın Kural     -> Pointer aritmetiği zekidir. Sen "+ i" dersin, o arka planda
                   "i * Veri_Tipinin_Boyutu" kadar byte zıplar!
================================================================================


int main()
{
         char letters[6]={'a','b','c','d','e','f'};
        int arraySize=sizeof(letters)/sizeof(letters[0]);


    for(int i=0;i<arraySize;i++)
        cout<<"letters["<<i<<"]="<<*(letters+i)<<"\n";


    return 0;
}

================================================================================
                      VOID POINTER OKUMA PROTOKOLÜ
================================================================================
     *((int*)ptr)  ---> "ptr adresini 'int pointer' yap, sonra adrese GİT!"
     *((char*)ptr) ---> "ptr adresini 'char pointer' yap, sonra adrese GİT!"

Altın Kural       ---> void* adreslerin içi direkt yıldızla (*) OKUNAMAZ!
                       Önce parantez içinde tipi söylenmeli, sonra okunmalıdır.
================================================================================

// void pointer yani türü belli olamyan pointer dır

// 1. TABELA: Tipi belli olmayan joker bir adres (void*) ve o adresi okutacak bir el feneri tüyor (char type) alır.
void showMe(void* ptr, char type);

int main()
{
    // RAM şantiyesinde farklı veri tiplerinde 4 tane oda açıyoruz
    int number = 70;             // 4 byte'lık tam sayı odası
    float number2 = 3.14;        // 4 byte'lık ondalıklı sayı odası
    double number3 = 70.19354;   // 8 byte'lık yüksek hassasiyetli ondalıklı sayı odası
    char letter = 'F';           // 1 byte'lık karakter odası

    // JOKER OPERASYONLAR BAŞLIYOR:
    // showMe fonksiyonuna değişkenlerin sayısal değerlerini değil, RAM ADRESLERİNİ fırlatıyoruz!
    // Yanına da bilgisayarın içeride gözü açılsın diye 'i', 'f', 'd', 'c' gibi harfli tüyolar koyuyoruz.

    showMe(&number, 'i');   // int odasının adresini ve 'i' tüyosunu fırlattık
    showMe(&number2, 'f');  // float odasının adresini ve 'f' tüyosunu fırlattık
    showMe(&number3, 'd');  // double odasının adresini ve 'd' tüyosunu fırlattık
    showMe(&letter, 'c');   // char odasının adresini ve 'c' tüyosunu fırlattık

    return 0;
}

// 2. GÖVDE: Joker kurye (void* ptr) gelen adresi kucağına aldı ama şu an kör, tipini bilmiyor!
void showMe(void* ptr, char type)
{
    // Kapıdan gelen harfli tüyoya göre şantiyede hangi odaya gireceğimizi seçiyoruz
    switch(type)
    {
        // Eğer tüyo 'i' (int) ise:
        case 'i':
            // (int*)ptr    -> Kör void pointer'ı "int pointer" tipine dönüştür (gözünü aç, burası int de!)
            // *((int*)ptr) -> Başındaki yıldızla o adrese GİT ve içerideki 70 yükünü sök getir!
            cout << *((int*)ptr) << "\n";
            break;

        // Eğer tüyo 'c' (char) ise:
        case 'c':
            // (char*)ptr    -> Kör void pointer'ı "char pointer" yap (burası 1 byte'lık char odası de!)
            // *((char*)ptr) -> O adrese GİT ve içerideki 'F' harfini ekrana bas!
            cout << *((char*)ptr) << "\n";
            break;

        // Eğer tüyo 'f' (float) ise:
        case 'f':
            // (float*)ptr    -> Adresi "float pointer" tipine kast et (çevir)
            // *((float*)ptr) -> O adrese GİT ve içerideki 3.14 değerini sök getir!
            cout << *((float*)ptr) << "\n";
            break;

        // Eğer tüyo 'd' (double) ise:
        case 'd':
            // (double*)ptr    -> Adresi "double pointer" tipine çevir
            // *((double*)ptr) -> O adrese GİT ve içerideki 70.19354 değerini bas!
            cout << *((double*)ptr) << "\n";
            break;
    }
}












int main() {
    int hackerA = 10;
    int hackerB = 20;

    // Pointer vanalarımızı adreslere bağlıyoruz
    int* ptrA = &hackerA;
    int* ptrB = &hackerB;

    int temp; // Boş bardak hazır!

    // --- TAKAS OPERASYONU BAŞLIYOR (Kelimeler yasak, sadece pointerlar!) ---
    temp = *ptrA;   // 1. Adım: A'daki değeri temp'e sakla
    *ptrA = *ptrB;  // 2. Adım: B'deki değeri A'ya yaz
    *ptrB = temp;   // 3. Adım: temp'teki değeri B'ye yaz
    // -----------------------------------------------------------------------

    // Bakalım uzaktan hackleme başarılı olmuş mu?
    cout << "Operasyon Sonrasi Hacker A: " << hackerA << endl; // Ekrana 20 basacak!
    cout << "Operasyon Sonrasi Hacker B: " << hackerB << endl; // Ekrana 10 basacak!

    return 0;
}







*/






/*NOT
Ekranındaki o number1 kelimelerini tek seferde jilet gibi weight yapmak için şu adımları takip et çırak:

Fareyle (veya klavyeyle) kodunun en yukarısındaki (5. satırdaki) number1 kelimesinin üzerine gel ve onu çift tıklayarak seç (mavi/gri boyalı hale getir).

Klavyeden şu sihirli kombinasyona aynı anda bas: Ctrl + R (Eğer bu kısayol senin Code::Blocks sürümünde aktif değilse, en üst menüden Edit -> Replace seçeneğine tıkla).

Karşına küçük bir kutu (Replace Penceresi) açılacak:

Find (Bulunacak): Kısmında zaten otomatik olarak number1 yazar.

Replace with (Yeni Değer): Kısmına git, jilet gibi weight yaz.

O kutunun altındaki "Replace All" (Tümünü Değiştir) butonuna tek bir kere bas!

BUM! Bilgisayar şantiyedeki tüm kod sayfasını bir milisaniyede tarar; 5. satırdaki, 15. satırdaki, 20. satırdaki, 25. satırdaki ve 30. satırdaki tüm o number1 kelimelerini aynı anda, milimetrik olarak weight haline getirir.
*/


/* NESNE YÖNELİMLİ PROGRAMLAMA

Kısa özet: mantık şu aslında kodlarımızı sınıflandırıyoruz bir derli toplu bir kümede toplmaya çalışıyoruz yeni bir yazılım değil yani bazı şeylere farklı isimler veriyoruz sadece

NOT: Nesne yönelimli programlama çok farklı bir şey değildir sadece bir yazılıma yaklaşım mantığıdır bir sınıflandırmadır


================================================================================
                    OOP İLK ADIM KUTSAL REÇETESİ
================================================================================
* Class (DortIslem)    -> Mimari projedir, hafızada yer kaplamaz, sadece taslaktır.
* Object (myObject)    -> Projeden üretilen gerçek varlıktır, RAM'de yer kaplar.
* Attribute (number1)  -> Nesnenin sahip olduğu fiziksel özelliklerdir (Çekmeceler).
* Nokta (.) İşareti    -> Nesne kutusunun içindeki o çekmecelere sızma anahtarıdır.
================================================================================


================================================================================
                    NESNE İZOLASYONU ALTIN KURALI
================================================================================
* Bir Class'tan sınırsız sayıda Nesne (Object) üretebiliriz.
* Her nesne RAM'de kendine ait bağımsız bir çelik kasa açar.
* Nesnelerin attribute isimleri aynı olsa bile, değerleri birbirine asla KARIŞMAZ!
================================================================================


BU ÖRNEK ÇOK ÇOK ÖNEMLİ ÖĞRETİCİ:
class DortIslem
{
    public:// public şu demek benim yukarıda ki class ımın içerisinde oluşturacağım değişkenler olsun fonksiyonlar olsun buna main in içersinde ulaşabilme imkanı sağlıyor mantığı anla.
        // yani kısaca şu public koyarak diyoruz ki bu class dışarı açılabilir.
        // ve eğer public: yazmazsak direkt private olarak algılar yani dışarı çıkamaz

    int number1;// class içinde bunlara değişken denmiyor biraz süslü bir kelime olan attribute denir türkçesi de özellik yada nitelik anlamına geliyor  yani artık biz class ların içinceki variable lere attribute diyecez
    int number2;
    string myName;// bu da bir attribute dir

//Gerçek hayat örneği: mesela ben meyve diye bir class oluşturup nesne olarak  elme  muz mango yapabilirim veya bir araba classı oluşturup  volvo audi toyota gibi neseneler yapabilirim MANTIĞI ANLA.

//NOT: classların içinde oluşturduğumuz variablelere(değişkenelere) attribute diyoruz / funcition(fonkiyonalar) da method diyoruz


};// burada ; zorunlu

int main()
{

    DortIslem myObject;//burada yukarıdaki classı çağırıyoruz yani özetle ben burada myObject diye bir nesne oluşturdum sistemde bana dedi ki tamam da kardeşim bu nesne neye danaıyor bende ondan onde DortISlem yazarak dedim ki DortIslem classına dayanıyor bu nesne
    //yani yukarıdaki DortIslem class ının bir nesnesini oluşturmuş oldum. tıpkı bir araba gibi bir ev gibi bir nesne oluşturdum yani bu bir yaklaşım aslında  yani önce classımızn ismini yazıp sonra kendimize bir nesne yapıyoruz

    myObject.number1=7;// şimdi yukarıda bir nesne oluşturdum orası tamam şimdi de diyorum ki ben bu oluşturduğum  nesne içerisindeki variablelere(değişkenlere) ulaşmak istiyorum bu arada bu variableler artık attribute olarak isimlendiriliyor. myObject. dan sonra number1 diyerek yani myObject.number1 olunca diyorum git oradaki attribute ulaş ve ona değer ver değer ney =7 yaparak 7 değerini ver diyorum MANTIĞI KAVRA
    myObject.number2=10;// şu da çok önemki aradaki o . işareti nesnelerin içine girmek için bir anahtardır yani attribuların içine giriyoruz . ile
    myObject.myName="LYN";//3. attribute string di unutma

    // yukarının özeti şu; artık ben nesnemin attributlerine ulaşıp onlara değerler yükledim sıradaki işlem de onları cout ile ekrana yazdırmak

    cout<<myObject.myName<<"\n";
    cout<<myObject.number1<<"\n";
    cout<<myObject.number2<<"\n";


    DortIslem myObject2;
    myObject2.number1=15;
    myObject2.number2=19;
    myObject2.myName="Sercan";
    // yukarıda şunu yaptım ben bir nesneyi farklı değerler vererek ve tekrar tekrar kullanabilirim myObject2 diyerek ilk yaptıklarımdan ayırdım
    // bunlarıda nesne yönelimli programa sayesinde bu kolaylığı yapabiliyoruz  yani bir attribute çok sayıda farklı değer verebilirim ve sanki her biri farklı attribute miş gibi olur çünkü her biri farklı bir nesne oluyor

    cout<<myObject2.myName<<"\n";
    cout<<myObject2.number1<<"\n";
    cout<<myObject2.number2<<"\n";

    return 0;
}





class Car
{
public:
    int weight;
    string myColar;
    string myName;


};

int main()
{

    Car toyota;
    toyota.weight=70;
    toyota.myColar="Blue";
    toyota.myName="Toyota";

    cout<<"---CAR GALLERY---"<<"\n\n";
    cout<<"weight:"<<toyota.weight<<" kg\n";
    cout<<"color:"<<toyota.myColar<<"\n";
    cout<<"name:"<<toyota.myName<<"\n\n";

    Car skoda;
    skoda.weight=150;
    skoda.myColar="Black";
    skoda.myName="Skoda";

    cout<<"weight:"<<skoda.weight<<" kg\n";
    cout<<"color:"<<skoda.myColar<<"\n";
    cout<<"name:"<<skoda.myName<<"\n";

    return 0;
}



// nesne yönelimli programda function kullanmak
class Car
{
 public:

    string brand;// brand marka demek
    string model;
    int year;


    void message()//method
    {
        cout<<"Hello C++ OOP!\n";
    }
    int speed(int mySpeed)
    {
        return mySpeed;
    }

};



int main()
{
    Car c1;
    c1.brand="Skoda";
    c1.model="Superb";
    c1.year=2001;

    Car c2;
    c2.brand="Nissan";
    c2.model="Juke";
    c2.year=2003;

    c1.message();
    cout<<c1.brand<<"-"<<c1.model<<"-"<<c1.year<<"-"<<c1.speed(180)<<"\n";
    cout<<c2.brand<<"-"<<c2.model<<"-"<<c2.year<<"-"<<c2.speed(140)<<"\n";







    return 0;
}

================================================================================
                    CONSTRUCTOR (YAPICI METOT) ANAYASASI
================================================================================
1. İsmi, Class ismi ile BİREBİR AYNI olmak zorundadır (Car ise Car()).
2. Önüne asla "int", "void", "string" gibi bir dönüş tipi YAZILMAZ!
3. Sen elinle çağırmazsın; "Car c1;" dediğin an bilgisayar otomatik tetikler.
4. En büyük amacı: Nesne doğarken çekmeceleri (attribute) boş veya çöp değerle
   bırakmamak, ilk değer atamalarını (initialization) güvenle yapmaktır.
================================================================================
================================================================================
                        MÜLAKAT REÇETESİ: CONSTRUCTOR
================================================================================
* SORU  : Constructor nedir, ne işe yarar?
* CEVAP : Fonksiyon gibidir ama çağırılmadan, nesne doğduğu an otomatik çalışır.
          Amacı, nesnenin çekmecelerine (attribute) daha ilk saniyede güvenli
          değerler yüklemektir.
================================================================================


// nesne yönelimli programda constructor kullanımı



class Car
{
 public:

    string brand;// brand marka demek
    string model;
    int year;

    Car()//Burası Constructor biz bunu çağırmasak bile çağırmışız gibi kabul edip otomatikman çalışıcak yani çağırmama gerek kalamdan çalışmasını istediğim durumlarda benim Constructor kullanmam daha mantıklı olur. bir method dur aslında
    {
       cout<<"Wow interesting\n";
    }


    void message()//method
    {
        cout<<"Hello C++ OOP!\n";
    }
    int speed(int mySpeed)
    {
        return mySpeed;
    }

};



int main()
{
    Car c1;
    c1.brand="Skoda";
    c1.model="Superb";
    c1.year=2001;

    Car c2;
    c2.brand="Nissan";
    c2.model="Juke";
    c2.year=2003;


    cout<<c1.brand<<"-"<<c1.model<<"-"<<c1.year<<"-"<<c1.speed(180)<<"\n";
    cout<<c2.brand<<"-"<<c2.model<<"-"<<c2.year<<"-"<<c2.speed(140)<<"\n";







    return 0;
}



class Car {
public:
    string brand;
    string model;
    int year;

    // JANTİ CONSTRUCTOR: Nesne doğarken değerleri direkt parantezden alır!
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << brand << " nesnesi RAM'de aslanlar gibi doğdu!\n";
    }
};

int main() {
    // 3 satır amelelik bitti! Nesne tek satırda, değerleriyle beraber doğuyor!
    Car c1("Skoda", "Superb", 2001);
    Car c2("Nissan", "Juke", 2003);

    return 0;
}

================================================================================
                    DİNAMİK NESNE VE MERKEZİ YÖNETİM PROTOKOLÜ
================================================================================
* MathOperations myObj(10,5); -> Nesneyi doğururken parametreyle ilk ayarını yap.
* getData()                   -> Ameleliği bitiren, işi tek merkezden yöneten
                                 ve main fonksiyonunu tertemiz tutan METOT'tur.
* Geleceğe Yatırım            -> Sınıf içinde yapılan tek bir güncelleme, o sınıftan
                                 üretilen TÜM nesnelere otomatik olarak yansır!
================================================================================

// matamatik işlemleri nesne yöenlimli programlama

class MathOperations
{
public:
    int number1, number2;
    MathOperations(int x, int y)
    {
        number1=x;
        number2=y;
    }
    int addition()
    {
        return number1+number2;
    }
    int subtraction()
    {
        return number1-number2;
    }
    int multiplication()
    {
        return number1*number2;
    }
    int divison()
    {
        return number1/number2;
    }
    void getData()// bu method sayessinde in main içinde tek tek işlem yapmaktan kurtulmuş oluyoruz daha az kodla daha çok şey yapmamızı sağlıyor
                  // önemini şöyle anlatıyım mesela bir şirkette çalışıyorsunuz ve size  bu programı yaptıktan 6 ay sonra diyor ki ben mod da almasını istiyorum sadece mat classsına girip orada yapıyorsun uğraşmaan gerek yok
    {
        cout<<addition()<<"\n";
        cout<<subtraction()<<"\n";
        cout<<multiplication()<<"\n";
        cout<<divison()<<"\n";

    }


};


   int main()
   {
       MathOperations myObj(10,5);
       myObj.getData();

       cout<<"\n\n\n";

       MathOperations myObj2(20,4);
       myObj2.getData();




       return 0;
   }

================================================================================
                    DESTRUCTOR (YIKICI METOT) ANAYASASI
================================================================================
1. İsmi, Class ismi ile birebir aynıdır ama başına Tilde (~) işareti alır.
2. Constructor gibi bunun da önüne asla "int", "void" gibi bir dönüş tipi yazılmaz.
3. En büyük farkı: Constructor PARAMETRE alabilir, ama Destructor ASLA parametre alamaz!
4. Nesne RAM'den silinirken otomatik tetiklenir. En büyük görevi; açılmış dosyaları
   kapatmak, internet bağlantılarını kesmek ve dinamik hafızayı (Heap) temizlemektir.
================================================================================

// destractors bunun contructor dan farkı; contructorsların otomatikmen bir sınıfı çağırdığımızda çalışan method olduğunu biliyoruz destructorlar ise bizim nesnemiz oluşup bittikten sonra otomatik çağrılan methoddur
// yani biri bizim nesnemiz çağrıldığında derleyici tarafından bize ilk otomatik olarak çalıştırılan method ken diğeri ise nesnemiz görevini tamamladığı zaman artık bittiğini anlatan otomatikman çağrılan methoddur



class MyClass
{
public:
    int x=7;
    int y=19;
    MyClass()// contructor
    {
        cout<<"Everything has just begun\n";
    }
     ~MyClass()// destractors  başındaki simge alt gr ü ile yapılıyor
     {
        cout<<"Everything is over\n";
     }


};



int main()
{
    MyClass myObj;
    cout<<myObj.x<<"\n";
    cout<<myObj.y<<"\n";


    return 0;
}


================================================================================
                    ERİŞİM BELİRLEYİCİLER YETKİ MATRİSİ
================================================================================
* public    -> Her yerden erişilebilir (Sınır yok, nizamiyedir).
* private   -> SADECE Class içinden erişilebilir (main'den ulaşılamaz, kasadır).
* protected -> Class içinden ve ondan MİRAS ALAN çocuk sınıflardan erişilebilir.

Altın Kural -> Verilerini her zaman private odasında sakla, dış dünyaya kapıyı
               sadece güvenli public metotlar üzerinden aç!
================================================================================




// Access Specifiers(public,private,protected) bunlar bi classın üyelerine nasıl erişilebilieceğine tanımlamak için kullanılır


class MyClass
{
    private:// class dışında kullanamıyoruz bunu yani burada x ve y private olduğu için int main de kullanamayız
        //ben diyorum ki mesela benim x değerime private olduğu için sadece bu classın içinden ulaşabilirsin int main den fln dışarıdan ulaşamazsın güvemlik için önemli
        int x=7;

    protected://başka bir class yazıdğımızda miras almasını sağlıyor yani kısaca bir classın özellikleirni başka bir classın kullanabilmesini sağlıyor
        int y=19;


    public:
        void message()
        {
            cout<<"x="<<x<<"\n";
        }



};




int main()
{

    MyClass myObj;

    myObj.message();// x e direkt myObj.x diyio ulaşamıyorum çünkü private ondan dolayı yukarıdaki class dan message methoduna ulaıp oradan x i çekiyorum




    return 0;
}


================================================================================
                    ENCAPSULATION (KAPSÜLLEME) PROTOKOLÜ
================================================================================
* Kural 1 -> Attribute'ları her zaman private odasına kilitle (Veri Güvenliği).
* Kural 2 -> Dışarıdan değer GÜNCELLEMEK için "set" metodu yaz (Veri Kontrolü).
* Kural 3 -> İçerideki değeri dışarıya OKUTMAK için "get" metodu yaz (Veri İzleme).

Mühendislik -> Bu sayede değişkenler başıboş kalmaz, ekip arkadaşların veya siber
               tehditler sisteme kafasına göre hatalı veri enjekte edemez!
================================================================================

// Encapsulation mantığı
//Encapsulation  herhani private ı  public kısmından set ve get methodu yazarak ulaşmaya değiştirmeye veya çekip ekrana göstermeye denir

class Employee
{
private:// yazılım dünyasında böyle güvenlikli haraketler daha başarılı kabul edilir yani mesela bu örnekten misal verirsem ekip arkadaşım gelip de kafasına göre salary nin değerini değiştiremez
    int salary;//salary maaş demek
public:
    void setSalary(int x)//set
    {
        salary=x;
    }
 int getSalary()//get
 {
     return salary;
 }

};

int main()
{
      Employee em;
      em.setSalary(30000);// Employee bize prive içinde ulaşamadığımız yerlere ulaşmamamızı sağlıyor aslında veri güvenliği ilgili bir şey burada içeriye 30000 yazdığımız için artık işçimizin maaşı 30k oldu
      cout<<em.getSalary()<<"TL maasi"<<"\n";



    return 0;
}





================================================================================
                MULTILEVEL INHERITANCE (ÇOK DÜZEYLİ MİRAS) NOTLARI
================================================================================
* Tanım        -> Bir sınıfın başka bir çocuk sınıftan miras almasıyla oluşan
                  zincirleme (Dede -> Baba -> Torun) miras yapısıdır.
* Geçişlilik   -> C++ dilinde miras "geçişlidir". A, B'ye miras verir; B de C'ye
                  miras verirse; C sınıfı otomatikman A'nın da mirasına konar!
* Sınav Tüyosu -> Hoca "public/private yok" dediği için sınavda böyle bir hiyerarşi
                  sorarsa, tüm sınıfları ve mirasları direkt "public" yapıp geç!
================================================================================

//  Inheritance(miras) Kullanımı yani kısaca miras alma işlemi yapıcaz MANTIĞINI ANLA!


class Vehicle
{
private:
    int number=7;

    public:
    string brand="Skoda";
    void message()
    {
        cout<<"My car is ";
    }

};

class Car:public Vehicle //diyorum ki ben Vehicle diye bir class açıyorum ve Car classı içinde private olanlar hariç tüm özellikleri miras almak istiyorum buna Inheritance olayı deniyor
{
public:
    string model="Octavia";



};

  int main()
  {

       Car myCar;
       myCar.message();   // şimdi burada Car classın içinde myCar. koyunca model e ulaşabiliyorum  brand ve message ye de ulaşabiliyorum modele ulaşmam normal ama brand ve message ye ulaşmam  Inheritance sayesinde Vehicle classın içindeki private hariç olan özellikleri miras aldım çünkü
                // ama private olanları kullanamıyoruz dedik peki number ı protected yapsaydık ozmn da şu olurdu bu sefer class vehicher ve onu miraz alan class içinde sen number ı kullanabilirdin ancak yine int main içinde kullanamazdım kornuyordu çünkü
      cout<<myCar.brand+" "+myCar.model<<"\n"; // bunuda yazdıktan sonra çıktı olarak " My car is Skoda Octavia "alıcaksın


      return 0;
  }


// Multilevel inheritance(çok düzeyli miras)

class Father
{
    public:
        void myMethod()
        {
            cout<<"This is unbelievable\n";
        }

};

class Son:public Father// burada Father classını inheritance yaptım miras aldım yani
{
    private:
    int number=7;

};

class GrandChild:public Son//burada da Son classsını miras aldım yani otoamtikmen Father ı da miras almış oldum buna da  Multilevel inheritance(çok düzeyli miras) denir
{
    private:
    string name="Fehmi UYAR";

};




int main()
{
    GrandChild myObj;
    myObj.myMethod();




    return 0;
}


// Mantığı anla   inheritance(çok düzeyli miras) örneği
class Vehicle
{
public:
    double speed;
    int wheels;
    void go()
    {
        cout<<"This vehicle is moving\n";
    }
    void stop()
    {
        cout<<"This vehicle is stopped\n";
    }


};

class Car:public Vehicle
{
public:
    int doors=4;
};
class Bicycle:public Vehicle
{
public:
    int pedals=2;

};
class Bus:public Vehicle
{
public:
    int seat=60;
};


int main()
{
    Bus b1;
    b1.speed=100;
    b1.wheels=6;
    b1.go();
    cout<<"bus speed:"<<b1.speed<<"\n";
    cout<<"but wheels:"<<b1.wheels<<"\n";
    cout<<"but seat:"<<b1.seat<<"\n";
    b1.stop();

    cout<<"\n\n";

    Car c1;
    c1.speed=90;
    c1.wheels=4;
    c1.go();
    cout<<"car speed:"<<c1.speed<<"\n";
    cout<<"car wheels:"<<c1.wheels<<"\n";
    cout<<"car door:"<<c1.doors<<"\n";
    c1.stop();





    return 0;
}


FUNKCİTON OVERLODAİNG (AŞIRI YÜJLEM

================================================================================
                    FUNCTION OVERLOADING (AŞIRI YÜKLEME) PROTOKOLÜ
================================================================================
* Özü          -> Aynı isimdeki fonksiyonun, farklı veri tipleriyle çalışabilecek
                  şekilde birden fazla versiyonunun yazılmasıdır.
* Amacı        -> Yazılımcıyı "printInt()", "printDouble()", "printString()" diye
                  50 tane ayrı isim ezberleme ameleliğinden kurtarır. Tek isim yeter!
* Seçim Motoru -> Derleyici, senin main içinde fırlattığın değerin tipine göre
                  arkada hangi fonksiyonu çalıştıracağını tık diye kendisi seçer.


ınav Tüyosu: Altın Kurallar (Hoca Nereden Vurmaya Çalışır?)
Hoca sınavda "Overloading kuralları nedir?" veya "Bu kod neden hata veriyor?" diye sinsi bir soru sorarsa, şu iki altın kuralı mermere kazır gibi zihnine kazı çırak:

Kural 1 (Şart): Fonksiyonların isimleri birebir AYNI olmak zorundadır (Senin kodundaki print kelimeleri gibi).

Kural 2 (Şart): Parantezin içindeki parametrelerin TİPLERİ veya ADETLERİ mutlaka FARKLI olmak zorundadır! (Seninkiler sırayla int, double, string olduğu için sistem tıkır tıkır çalıştı).
================================================================================

//Overloading Olayı


// Class içinde methodlarla overloading

class PrintData
{
public:
    void print(int valueInt)
    {
        cout<<"Printing int:"<<valueInt<<"\n";
    }
       void print(double valueDouble)
    {
        cout<<"Printing double:"<<valueDouble<<"\n";
    }
       void print(string valueString)
    {
        cout<<"Printing string:"<<valueString<<"\n";
    }


};


int main()
{
    PrintData pd;
    pd.print(7);
    pd.print(190.219);
    pd.print("Hello Overloading");


    return 0;
}

================================================================================
                CONSTRUCTOR OVERLOADING VE EŞLEŞME MANTIĞI
================================================================================

1. CONSTRUCTOR OVERLOADING NEDİR? (Aşırı Yükleme)
--------------------------------------------------------------------------------
* Bir sınıfın (Class) içinde, ismi AYNI olan ama parantez içindeki parametreleri
  (sayısı, veri tipleri veya sırası) FARKLI olan birden fazla doğum fonksiyonu
  tanımlama işlemine denir.
* Amaç: Şirkete veya sisteme giren nesneleri (personel, robot, sensör vb.) farklı
  giriş senaryolarına göre tek bir kalıpta (Class) ağırlayabilmektir.


2. NESNELER HANGİ KAPIDAN GİRECEĞİNİ NASIL ANLAR? (Sırayla mı?)
--------------------------------------------------------------------------------
* KESİNLİKLE SIRAYLA GİTMEZLER! Bilgisayar "em1 birinci sırada, o yüzden birinci
  constructor'a gitsin" demez. main içindeki yazım sırasının hiçbir önemi yoktur.
* Sihirli Mekanizma: "FUNCTION SIGNATURE" (Fonksiyon İmzası / Anahtar-Kilit Uyumu)
* Derleyici, senin main içinde nesneyi yaratırken parantez içine koyduğun
  mermilerin (parametrelerin) ADEDİNE ve VERİ TİPİ SIRASINA bakar.


3. CANLI RAM ŞANTİYESİ TRAFİK ANALİZİ (Anahtar-Kilit Örneği)
--------------------------------------------------------------------------------

A) Employee em;
   --> Parantezin içi BOMBOŞ (Sıfır parametre).
   --> Derleyici gider, parametre istemeyen Default Constructor'ı tetikler.

B) Employee em2(55000);
   --> Parantezde sadece 1 adet "int" (tam sayı) var.
   --> Derleyici gider, parantezinde sadece "int" bekleyen constructor'ı tetikler.

C) Employee em3(45000, 19.345, "Yusuf SERCAN");
   --> Parantezde sırasıyla: [int, double, string] var (Tam 3 parametre).
   --> Derleyici gider, bu 3'lü kombinasyonu imza olarak taşıyan constructor'ı tetikler.


4. SINAVDA HAYAT KURTARAN KRİTİK UYARILAR (Hocanın Tuzakları)
--------------------------------------------------------------------------------
* Tuzak 1: Eğer main içinde "Employee em(45000, 19.345);" yazarsan ve yukarıda
  [int, double] alan bir constructor tanımlamadıysan kod DERLENMEZ, patlar!
  Hata Mesajı: "no matching function for call to..." (Eşleşen fonksiyon bulunamadı)

* Tuzak 2: Değişkenlerin adının x veya y olması derleyicinin umurunda değildir.
  Employee(int x) ile Employee(int y) yan yana yazılamaz, derleyici "ikisi de int"
  der ve çıldırır. Derleyici sadece VERİ TİPİNE bakar!

================================================================================
                    BU DÜKKANDA EZBERE YER YOKTUR! - USTA
================================================================================
// Constructorlarda Over


class Employee
{
private:
    // Kapsüllenmiş (Encapsulated) gizli niteliklerimiz (Attribute)
    string name;
    int salary;
    double code;

public:
    // 1. VERSİYON: Parametresiz (Default) Constructor
    // main içinde "Employee em;" dendiğinde burası otomatik tetiklenir.
    Employee()
    {
        name = "Fehmi UYAR";
        salary = 40000;
        code = 1.27;
    }

    // 2. VERSİYON: Tek parametreli (int) Constructor
    // main içinde "Employee em2(55000);" dendiğinde burası tetiklenir.
    Employee(int s)
    {
        name = "Nazli UYAR";
        salary = s; // Dışarıdan gelen 55000 değerini salary çekmecesine çaktık
        code = 7.19;
    }

    // 3. VERSİYON: Üç parametreli (int, double, string) Constructor
    // İşte o meşhur 3'lü motor! Sıralama: Önce int, sonra double, en son string!
    Employee(int s, double c, string n)
    {
        name = n;
        salary = s;
        code = c;
    }

    // Ekrana yazdırma motorumuz (Metot)
    void print()
    {
        cout << "name: " << name << "\n";
        cout << "salary: " << salary << "\n";
        cout << "code: " << code << "\n";
        cout << "---------------------\n";
    }
};

int main()
{
    // 🟢 em nesnesi: Parametresiz constructor'ı tetikler (Fehmi UYAR değerlerini alır)
    Employee em;

    // 🟢 em2 nesnesi: Sadece int alan 2. versiyonu tetikler (Nazli UYAR olur)
    Employee em2(55000);

    // 🛠️ DOĞRU HALİ (em3): Az önce (45000, 19.345) yazıp string'i unuttuğumuz için patlayan yer!
    // Sonuna "Yusuf SERCAN" string mermisini de ekledik. Artık 3 parametreli motorla tam eşleşti!
    Employee em3(45000, 19.345, "Yusuf SERCAN");

    // 🟢 em4 nesnesi: Zaten 3 parametreliydi, tıkır tıkır çalışmaya devam ediyor
    Employee em4(45000, 19.345, "Emrullah OZCAN");

    // Şimdi sırayla tüm nesnelerin içindeki o bağımsız çelik kasaları ekrana bastırıyoruz
    em.print();
    em2.print();
    em3.print(); // Artık bu satır hatasız bir şekilde jilet gibi ekrana basılacak!
    em4.print();

    return 0;
}












// polymorphism olayı.


// base class , ana classımız yani
class Animal
{
public:
    void animalSound()
    {
        cout<<"The animal makes a sound-->\n";
    }


};


// derived claass , miras alan classlar
class Cat:public Animal
{
public:
    void animalSound()
    {
        cout<<"The cat says:miyav miyav\n";
    }


};

//NOT: miras almama rağmen benim de miras aldığım classdaki method ile aynı isimde bir methodum olabilir buna  polymorphism diyoruz bazen bu olabilir.

// derived claass
class Dog:public Animal
{
public:
    void animalSound()
    {
        cout<<"The dog says:hav hav\n";
    }




};



int main()
{
    Cat myCat;
    Dog myDog;
    Animal myAnimal;

    myAnimal.animalSound();// kendi içindeki animalSound() u gösterir
    myCat.animalSound(); // kendi içindeki animalSound() u gösterir
    myDog.animalSound();// kendi içindeki animalSound() u gösterir


    return 0;
}




================================================================================
                    THIS ANAHTAR KELİMESİ PROTOKOLÜ
================================================================================
* Özü           -> C++ dilinde "this", o an üzerinde çalışılan NESNENİN RAM'deki
                   adresini tutan gizli ve otomatik bir POINTER'dır.
* Ne Zaman Şart?-> Fonksiyona gelen parametre ismi ile Class'ın içindeki attribute
                   ismi tıpatıp AYNI olduğunda şarttır (Örn: salary = salary).
* Çözüm Sihri   -> "this->salary = salary;" yazarak; sol taraftaki "this->" ile
                   sınıfın öz evladını, sağ taraftaki isimle de dışarıdan gelen
                   geçici parametreyi kastedip isim çakışmasını (shadowing) çözeriz.
================================================================================



// This sözcüğü nedir ve ne zmn nerede kullanılır


class Employee
{
private:
    string name;
    int salary;
public:
    void setName(string name)// şimdi burada neyi neye eşitlediğim karıştığı için çünkü göründğü üzere name ler hava uçuşuyor ve programın kafası karışıyor aşağıdaki methodlarda da durum benzer
                            // bundan dolayı this kullanıyoruz
    {
        this->name=name;
    }
    void setSalary(int salary)
    {
       this-> salary=salary;// diyorum ki burada artık benim şu classıma ait attribute yükle
    }
    int getSalary()
    {
        return salary;
    }
    string getName()
    {
        return name;
    }



};


 int main()
 {
     Employee em;
     em.setName("Fehmi UYAR");
     em.setSalary(20000);
     cout<<"name:"<<em.getName()<<"\n";
     cout<<"salary:"<<em.getSalary()<<"\n";




     return 0;
 }

================================================================================
                    NEW ANAHTAR KELİMESİ KUTSAL PROTOKOLÜ
================================================================================
* Özü           -> C++ dilinde "new", RAM'in HEAP (Serbest Arsa) bölgesinden
                   dinamik olarak yer kiralayan iş makinesidir.
* Görevi        -> Heap'te nesneyi yaratır, constructor'ı tetikler ve o nesnenin
                   RAM adresini geri döndürerek sol taraftaki Pointer'a teslim eder.
* Ayrılmaz İkili-> "new" kelimesinin olduğu her kodun sonunda, kiralanan arsayı
                   RAM'e geri iade etmek için MUTLAKA "delete" kullanılmalıdır!
================================================================================

======================================================================================
                    NESNELERİ POINTER İLE KULLANMA PROTOKOLÜ
======================================================================================
* Nesne Tanımı  -> "Employee* em = new Employee();"
* RAM Arkası    -> Kasa, RAM'in HEAP (serbest) bölgesinde açılır. em ise sadece
                   o kasanın adresini (uzaktan kumandasını) tutan bir POINTER'dır.
* Ok İşareti    -> Eğer bir nesneye pointer (adres) üzerinden erişiyorsan, nokta (.)
  ( -> )           yerine MUTLAKA ok (->) işareti kullanmak zorundasın!
* Formül Eşitliği-> em->setName("Fehmi");  <== BİREBİR EŞİTTİR ==>  (*em).setName("Fehmi");
==========================================================================================

// Nesneleri Pointerlarla Kullanmak

class Employee
{
private:
    string name;
    int salary;
public:
    void setSalary(int s)
    {
        salary=s;
    }
    void setName(string n)
    {
        name=n;
    }
    int getSalary()
    {
        return salary;
    }
    string getName()
    {
        return name;
    }



};

 int main()
 {

     Employee* em=new Employee();// nesneyi bir pointer olarak tanımlarken new anahtar sözcüğünü kullanırız
     em->setName("Fehmi");(//*em).setName("Fehmi"); // em->setName("Fehmi"); satırı ile MİLİMETRİK OLARAK AYNI ŞEYDİR!
     em->setSalary(15000);
     cout<<"Name:"<<em->getName()<<"\n";
     cout<<"Salary:"<<em->getSalary()<<"\n";
     return 0;

 }

================================================================================
                    POINTER DEĞER VS ADRES ATAMA PROTOKOLÜ
================================================================================
*  *name = "Nazli";  -> Başına YILDIZ koyarsan; Adresteki kutunun İÇİNE sızarsın
                        ve kutunun içindeki VERİYİ (yükü) değiştirirsin.

*  name = 0x7ffee;   -> Başına YILDIZ KOYMAZSAN; Kutunun içine dokunmazsın, direkt
                        pointer'ın elindeki ADRES numarasını değiştirirsin.

*  Sınav Tüyosu       -> Pointer bir değişkene düz bir değer (int, string vb.)
                        atamak istiyorsan, başına MUTLAKA yıldız (*) koymalısın!
================================================================================

================================================================================
                SINIF İÇİNDE DİNAMİK BELLEK VE POINTER KULLANIMI
================================================================================
* Kural 1 -> Sınıfın içinde "string* name;" gibi pointer varsa, constructor
             içinde mutlaka "name = new string;" diyerek hafıza ayrılmalıdır!
* Kural 2 -> Hafıza ayrılmamış bir pointer'ın başına yıldız koyup değer atamaya
             çalışmak (*salary = s;) sistemi çökertir (Segmentation Fault).
* Kural 3 -> Sınıfın içinde "new" kullanıldıysa, o sınıfın Destructor (~ olan)
             metodunun içinde MUTLAKA "delete" yapılarak RAM temizlenmelidir!
================================================================================

NOT:int* salary; // salary bir int adresi tutabilir demektir.
NOT:*salary = s;  // Hah, şimdi o adresteki evin içine girip s değerini çaktık!


class Employee
{
public:
    // Sınıfın içindeki değişkenler düz değil, birer POINTER (Adres Tutucu)!
    // Yani bu kasaların içinde veri yok, verilerin RAM'deki adresleri saklanacak.
    string* name;
    int* salary;

    // PARAMETRELİ CONSTRUCTOR (Doğum Odası)
    Employee(string n, int s)
    {
        // 1. ADIM: İsim için Heap (serbest bölge) bölgesinden arsa kiralıyoruz.
        name = new string;
        // Kiraladığımız o adrese gidip, dışarıdan gelen "Nazli" yazısını yazıyoruz.
        *name = n;

        // 2. ADIM (HAYATİ DÜZELTME): Maaş için de Heap bölgesinden yer kiralıyoruz!
        // Eski kodda bu satır olmadığı için hafıza bombası patlıyordu.
        salary = new int;
        // Şimdi kiraladığımız o güvenli adrese gidip 1300 değerini çakıyoruz.
        *salary = s;
    }

    // DESTRUCTOR (Yıkıcı Metot / Şantiye Temizlikçisi)
    // main içinde "delete em;" dendiğinde, nesne ölmeden hemen önce burası çalışır.
    ~Employee()
    {
        // Sınıf içinde "new" ile kiraladığımız arsaları devlete iade ediyoruz.
        // Eğer bunları yazmazsak RAM şişer, siber güvenlik açığı (Memory Leak) olur!
        delete name;
        delete salary;

        cout << "Heap bolgesindeki dinamik alanlar temizlendi, guvenlik saglandi!\n";
    }

    // Bilgileri ekrana basan motorumuz
    void showInfo()
    {
        // name ve salary pointer olduğu için, içindeki DEĞERE ulaşmak için
        // başlarına yıldız (*) koyarak ekrana yazdırıyoruz.
        cout << "Name:" << *name << "\n";
        cout << "Salary:" << *salary << "\n";
    }
};

int main()
{
    // 1. Kepçe: Heap bölgesinde dinamik bir Employee nesnesi yaratıp adresini "em" pointer'ına verdik.
    Employee* em = new Employee("Nazli", 1300);

    // Nesnemiz bir pointer olduğu için nokta (.) yerine ok (->) işaretiyle fonksiyonu tetikledik.
    em->showInfo();

    // 2. Kepçe: İşimiz bitti! Heap'teki o devasa nesneyi RAM'den siliyoruz.
    // Bu komut tetiklendiği an yukarıdaki Destructor (~Employee) otomatik çalışır ve içini de temizler!
    delete em;

    return 0;
}


================================================================================
                    TEMPLATE (ŞABLON) VE REFERANS PROTOKOLÜ
================================================================================
* Template Nedir? -> Fonksiyonları veri tipinden bağımsız, genel bir kalıp (T)
                     halinde yazma sanatıdır. Kod tekrarını kökten bitirir.
* T Harfi Nedir?  -> "Type" kelimesinin kısaltmasıdır. main'den ne gönderilirse
                     (int, double, string) derleyici arkada T'yi ona dönüştürür.
* Neden & Var?    -> Referans işaretidir. Fonksiyona kopyalama yapmadan direkt
                     değişkenin aslı üzerinde işlem yaptırmak için ŞARTTIR!
================================================================================

================================================================================
                    SINSI TEMPLATE TUZAĞI REÇETESİ=== BURA ÖNEMLİ MANTIĞINI ANLA!!!!
================================================================================

int mermi1 = 7;       // mermi1 bir tam sayıdır (int)
double mermi2 = 19.5; // mermi2 bir ondalıklı sayıdır (double)

Replace(mermi1, mermi2); // 🚨 TETİĞE BASTIĞIMIZ AN!
Sen tetiğe bastığın an, derleyici yukarıdaki şablona gider ve sırayla eşleştirme yapmaya başlar:

Birinci parametreye bakar (mermi1): "Bakıyorum, Yusuf bana ilk parametre olarak bir int fırlatmış. Harika! O zaman yukarıdaki gizli T harfinin kimliğini bu fonksiyon için int olarak mühürlüyorum!" der. (Artık derleyicinin gözünde T = int olmuştur).

Hemen yanındaki ikinci parametreye geçer (mermi2): Derleyici ikinci parametreye bir bakar ki, o da ne? Karşısına double bir değer çıkmış!

Derleyicinin Beyni Yanar: Derleyici kendi kendine feryat eder: "Ulan daha bir milisaniye önce ilk parametre yüzünden T harfini int yapmak zorunda kaldım. Ama Yusuf şimdi bana ikinci parametrede double yolladı. Bu şablona göre ikisinin de tipi aynı T olmak zorundaydı! Ben şimdi bu tek bir T harfini int mi yapayım, yoksa double mı yapayım? İkisini birden aynı harfe sığdıramam!" der.




* KURAL       -> template <typename T> yazarsan, o fonksiyonun parantezindeki
                 bütün "T" harfli değişkenler main'den çağrılırken AYNI veri
                 tipinde olmak ZORUNDADIR. (int-int veya double-double gibi).

* PATLAMA ANIL -> Birine int, diğerine double fırlatırsan; derleyici tek bir "T"
                 harfini aynı anda hem int hem double yapamayacağı için kod patlar!

* ÇÖZÜMÜ      -> Ya gönderilen değişkenlerin tipleri eşitlenir (A Planı),
                 Ya da şablon "template <typename T1, typename T2>" şeklinde
                 iki farklı harfle esnetilir (B Planı).
================================================================================







// Fonksiyonlarla Template(şablon) Kullanımı

//şimdi neden şablon niye kullandığımızı açıklayacam diyelim biz bi fonksiyon yaptık int main in üstünde  bu fonksiyonumuz int olarak tanımladık ve toplama yapmayı sağlayan bi fonksiyon olsun return x+2; gibi
// int mainin içinde de bu sayıyı 7 yazıp 7+2 = 9 yazdırıyoruz ekrana peki int mainin içindeki o yere ondalıklı bir sayı yazarsak bu sefer bir tane daha fonkisyorun kurmamamız lazım o da double cinsinden olucak
// ve program eğer ondalıklı bir sayı girdiğimizi görünce otomatikman double olarak tanımladığımız fonksiyona gidip toplama işlemini orada yaptırıcak bu biraz uğraştırıcı bir işlem hepsine ayrı fonksiyon yazmak


template<typename T>
void Replace(T&x,T&y)
{
    T z=x;//burada artık normalde int koyucağımız yere T koyuyoruz bu da işimize yarıyor int main e diyorki kardeşim sen bana int gönderirsen int olarak double gönderirsen double olarak kabul edeyim türe ben karar veririm diyor

    x=y;
    y=z;
}

int main()
{

    int x=7;
    int y=19;
    cout<<x<<"\t"<<y<<"\n";
    Replace(x,y);
    cout<<x<<"\t"<<y<<"\n";
    cout<<"--------------------\n";

    char letter1='F';
    char letter2='E';
    cout<<letter1<<"\t"<<letter2<<"\n";
    Replace(letter1,letter2);
    cout<<letter1<<"\t"<<letter2<<"\n";
    cout<<"--------------------\n";

    double a=7.19;
    double b=19.5;
    cout<<a<<"\t"<<b<<"\n";
    Replace(a,b);
    cout<<a<<"\t"<<b<<"\n";
    cout<<"--------------------\n";





    return 0;
}

================================================================================
                    SINIFLARDA TEMPLATE (ŞABLON) PROTOKOLÜ
================================================================================
* Özü           -> Bir sınıfın (Class) içindeki değişkenlerin ve constructor
                   parametrelerinin veri tipinden bağımsız hale getirilmesidir.

* KLASİK TUZAK  -> Fonksiyon şablonlarında derleyici tipi gönderilen veriden
                   otomatik çözer. AMA Sınıf şablonlarında nesne yaratırken
                   veri tipini "<int>", "<char>" şeklinde açıkça yazmak ŞARTTIR!

* Sebebi        -> Derleyicinin, nesne RAM'de doğarken (Stack bölgesinde) kaç
                   byte yer kaplayacağını önceden bilmek zorunda olmasıdır.
================================================================================

// Classlarda Template(şablon) Kullanımı.



template<class T>
class Employee
{
public:
    T myVariable;
    Employee(T x)
    {
        myVariable=x;
    }


};


int main()
{
    Employee<int> myObj(7);// burada int olarak belirtiyoruz çünkü consturutar olduğu için hangi türü aldığını ona söylüyoruz fonksiyon templatlerde bunu yapmadık çünkü int=... diye belirtiyorduk
    Employee<char> myObj2('F');
    Employee<double> myObj3(7.19);

    cout<<myObj.myVariable<<"\n";
    cout<<myObj2.myVariable<<"\n";
    cout<<myObj3.myVariable<<"\n";



    return 0;
}





*/


/* DİNAMİK BELLEK YÖNETİMİ

KAT 1: STACK (Disiplinli Küçük Ofis)
Şantiyedeki Karşılığı: Burası senin şantiyedeki küçük, mütevazı ofis masandır çırak. Masanın boyutu sabittir, ne büyür ne küçülür.

Nasıl Çalışır? Kodun içinde int x = 5; veya Employee em; yazdığında, derleyici anında masanın üzerinde küçük bir yer ayırır. Burası "Managed automatically by compiler" yani derleyici tarafından otomatik yönetilir.

Ömrü Nedir? Fonksiyonun süslü parantezi kapandığı an (}), derleyici masanın üzerindeki her şeyi fırlatır atar, tertemiz yapar. Senin ekstra bir şey silmene gerek yoktur.

Sıkıntısı Nedir? Alanı çok dardır (Stack Overflow hatasını duymuşsundur, masa taşınca olur). En önemlisi: Program çalışırken boyutunu değiştiremezsin! Sınavda hoca "Kullanıcıdan bir sayı alıp o boyutta bir dizi oluştur" dediğinde statik dizilerle bunu Stack'te yapamazsın, patlarsın!



KAT 2: HEAP / DYNAMIC DATA (Ucu Bucağı Olmayan Büyük Arsa)
Şantiyedeki Karşılığı: Burası şantiyenin hemen arkasındaki ucu bucağı olmayan devasa boş arazidir!

Nasıl Çalışır? İşte dün geceden beri konuştuğumuz o sihirli kelime: new. Sen kodda new kepçesini vurduğun an, Stack'teki o daracık masadan çıkarsın, bu devasa arsaya gidip istediğin büyüklükte bir yer parsellersin.

"Managed by programmer" (Yazılımcı tarafından yönetilir): Bu arsanın tapusu tamamen senin ellerindedir çırak! Derleyici buraya asla elini sürmez. Sen delete komutuyla o arsayı temizleyip iade edene kadar, o veri program açık olduğu sürece RAM'de yaşamaya devam eder!

Siber Güvenlik Açığı (Memory Leak): Eğer sen new ile arsa kapıp işin bittiğinde delete ile temizlemezsen, o arsa işgal edilmiş olarak kalır. Programı her çalıştırdığında RAM biraz daha şişer ve en sonunda bilgisayarın nefesi kesilir. Bir siber güvenlikçi olarak bu sızıntıları avlamak senin en büyük görevin olacak!




Ekrandaki Diğer Katlar Ne İşe Yarıyor? (Genel Kültür / Sınav Citası)
Hoca burayı da slayta koymuş, sınavda test sorusu olarak gelirse kulağına küpe olsun çırak:

Static Data (3.KAT)(Yeşil Kat): Kodun içinde static int veya global (fonksiyonların dışında) tanımladığın değişkenler burada durur. Program ilk açıldığında doğarlar, program tamamen kapanana kadar RAM'de sabit kalırlar.

Literals (4.KAT)(Sarı Kat): Kodun içine direkt yazdığın sabit yazılar ("Fehmi UYAR", "Nazli" gibi) veya const ile kilitlediğin değiştirilemez veriler burada salt okunur (Read-only) olarak saklanır.

Instructions (5.KAT) (Mavi Kat): Burası senin yazdığın C++ kodlarının derlenip makine diline (0 ve 1'lere) dönüştürülmüş halinin durduğu yerdir. Bilgisayarın işlemcisi (CPU) ne yapacağını buradaki emir satırlarını sırayla okuyarak anlar. Burası da değiştirilemez, sadece çalıştırılabilir (Read-only; executable).



================================================================================
                    RAM ŞANTİYESİ: STACK VS HEAP PROTOKOLÜ
================================================================================
* STACK MANTIĞI -> * Derleyici otomatik yönetir (Amelelik yoktur).
                   * Alanı dardır, program çalışırken boyutu büyütülemez.
                   * Süslü parantez ( } ) kapanınca içindeki her şey otomatik ölür.

* HEAP MANTIĞI  -> * Yönetim TAMAMEN yazılımcıdadır (Mühendislik disiplini ister).
   (Dynamic)       * "new" kelimesiyle Heap'ten dinamik olarak yer kiralanır.
                   * Çok geniştir, program çalışırken boyutu esnekçe değiştirilebilir.
                   * İş bittiğinde "delete" ile temizlenmezse BELLEK SIZINTISI olur!
================================================================================





================================================================================
                    NEW VE DELETE ANAHTAR SÖZCÜKLERİ PROTOKOLÜ
================================================================================
* new           -> RAM'in HEAP bölgesinden dinamik olarak yer kiralayan kepçedir.
* delete        -> new ile kiralanan arsayı program kapanmadan RAM'e iade eder.
* KRİTİK NOT    -> delete komutu pointer'ın içindeki adres numarasını SİLMEZ!
                   Sadece o adresteki arsayı boşaltır.
* TUZAKTAN KAÇIŞ-> delete işleminden sonra pointer'ın serseri mayına (Dangling)
                   dönüşmemesi için sonuna "x = nullptr;" çakılması şarttır!
================================================================================

================================================================================
           DİNAMİK BELLEK YÖNETİMİ VE RAM ŞANTİYESİ (NEW / DELETE)
================================================================================

1. KLASİK DEĞİŞKEN (Stack Bölgesi)
--------------------------------------------------------------------------------
* Örnek: "int x = 7;"
* Kurallar:
  - RAM'in STACK (Ofis Masası) bölgesinde yerleşir.
  - Derleyici tarafından otomatik olarak yönetilir (Ameleliği yoktur).
  - Programın kapanmasını BEKLEMEZ! İçinde bulunduğu süslü parantez ( } )
    kapandığı an derleyici tarafından otomatik olarak RAM'den silinir.
  - Alanı dardır, program çalışırken (runtime) boyutu esnetilemez/büyütülemez.


2. DİNAMİK DEĞİŞKEN (Heap Bölgesi)
--------------------------------------------------------------------------------
* Örnek: "int* x = new int;"
* Kurallar:
  - "new int" kepçesi gider, RAM'in devasa HEAP (Büyük Arsa) bölgesinden yer kiralar.
  - "int* x" pointer'ı ise Stack'te durur ve Heap'teki o arsanın adresini tutar.
  - Yönetim TAMAMEN yazılımcıdadır (Managed by programmer).
  - RAM'i boşaltmak için programın kapanmasını veya parantezin bitmesini BEKLEMEZ!
    Yazılımcı ne zaman "delete" derse, o an RAM'de yer açılır.


3. AMELİYAT MASASI: KODUN ADIM ADIM ANLAMI
--------------------------------------------------------------------------------
int* x = new int;  --> Heap'ten 4 byte yer kirala, adresini x pointer'ına ver.
*x = 7;            --> x'in elindeki adrese git, o kutunun İÇİNE 7 değerini çak!
cout << *x;        --> x'in gösterdiği adresteki kutunun içini ekrana bas.
delete x;          --> x'in elindeki adresteki arsayı boşalt, devlete iade et!


4. SINAVDA HAYAT KURTARAN SİBER GÜVENLİK MUHAFIZ NOTLARI
--------------------------------------------------------------------------------
⚠️ TUZAK 1 (Bellek Sızıntısı - Memory Leak):
   "new" ile yer açıp "delete" ile silmezsen, o arsa RAM'de işgal edilmiş kalır.
   Program kapansa bile RAM temizlenmez, şişer. "delete x;" mühendislik namusudur!

⚠️ TUZAK 2 (Başıboş Pointer - Dangling Pointer):
   "delete x;" komutu pointer'ın içindeki adres numarasını SİLMEZ! Sadece o
   adresteki kutunun içini boşaltır. Eğer delete yaptıktan sonra "cout << *x;"
   yazarsan kod patlar (Segmentation Fault) veya çöp sayı basar!

🛠️ TUZAK BOZUCU:
   delete işleminden hemen sonra pointer'ın serseri mayına dönüşmemesi için
   altına MUTLAKA "x = nullptr;" yazarak kuryenin elindeki adresi yakmalıyız!

================================================================================
                  YUSUF SERCAN İŞÇİ - SİBER VATAN ARŞİVİ
================================================================================


//new ve delete anahtar sözcükleri ve işlevleri
int main()
{
    //int x=7; burası stack oluyor ben programı çalıştırdıktan sonra yerleştiği bölgeyi işagal ediyor ama dinamik bellekde heap katında yapsaydık bunu new ile yeri ayırıcaktık  delete ile de serbest bırakıcaktık yani yerini boşaltmak için programı kapatmamızı beklemicekti

    int* x=new int;//heap
    *x=7;
    cout<<*x<<"\n";
    delete x;// burada ram i boşaltıyorum artık x le işim kalmadı diyorum oraya başka şeyler gelebilir artık



    return 0;
}

//ÇOK ÖNEMLİ BİR ÖRNEK MANTIĞINI ANLA
int main()
{
    // STACK BÖLGESİ: Öğrenci sayısını tutacağımız geçici tam sayı çekmecesi.
    int number = 0;

    // Kullanıcıdan şantiyede kaç öğrenci olacağının bilgisini istiyoruz.
    cout << "Enter the number of the students:";
    cin >> number; // Kullanıcı örneğin 5 girdi.

    // HEAP BÖLGESİ (DİNAMİK DİZİ OLUŞTURMA):
    // "new int[number]" komutuyla Heap (Arsa) bölgesine gidip tam kullanıcıdan gelen "number"
    // adedinde (örn: 5 adet yan yana) int kutusu kiralıyoruz.
    // "int* myNotes" pointer'ı ise Stack'te durur ve bu 5'li dinamik arsanın ilk kutusunun adresini tutar!
    int* myNotes = new int[number];

    // VERİ ALMA MOTORU:
    cout << "Enter the notes of students:\n";
    for(int i = 0; i < number; i++)
    {
        // Klasik dizi ameleliği gibi, Heap'teki o kiraladığımız arsaların
        // içini sırayla (0., 1., 2. indeks) kullanıcının girdiği notlarla dolduruyoruz.
        cin >> myNotes[i];
    }

    // VERİ YAZDIRMA MOTORU:
    for(int i = 0; i < number; i++)
    {
        // Girilen notları "(i+1)" hilesiyle ekrana "Note 1, Note 2..." diye jilet gibi bastırıyoruz.
        cout << "Note " << (i + 1) << ":" << myNotes[i] << "\n";
    }

    // HEAP BÖLGESİNİ TEMİZLEME (MÜHENDİSLİK NAMUSU):
    // "delete[]" kullanarak derleyiciye diyoruz ki: "Şef, myNotes pointer'ının gösterdiği
    // o Heap bölgesindeki DİZİNİN (yan yana kiraladığımız tüm arsaların) tapusunu iptal et, RAM'i tamamen boşalt!"
    delete[] myNotes;

    return 0; // Şantiye hatasız kapatıldı!
}

class Employee
{
public:
    Employee()
    {
       cout<<"Started\n";
    }
    ~Employee()
    {
        cout<<"Deleted\n";
    }



};


int main()
{
    Employee* em=new Employee;
    delete em;
    cout<<"Hello Dynamic Memory\n";

    return 0;
}



================================================================================
                    DOUBLÉ FREE (ÇİFT SİLME) GÜVENLİK PROTOKOLÜ
================================================================================
* ALTIN KURAL   -> Kodda kaç tane "new" varsa, tam o adette "delete" olmalıdır.
                   Asla new sayısından fazla delete YAZILAMAZ!

* TUZAK SENARYO -> İki farklı pointer aynı RAM adresini gösteriyorsa (int* y = x;),
                   biriyle "delete" yapmak arsayı temizlemek için YETERLİDİR.
                   İkincisiyle de delete yapmaya çalışmak kodun çökmesine (Double Free)
                   sebep olur.


NOT:Çırak, pointer dersinin en başında seninle bir kural konuşmuştuk, hatırla: "delete kelimesi pointer'ı silmez! delete kelimesi,
pointer'ın elindeki adrese ait olan HEAP BÖLGESİNDEKİ ARSAYI devlete iade eder!"


Şantiyede kural nettir çırak: Kaç tane new kepçesi vurduysan, tam o adette delete baltası vuracaksın! Bu kodda yukarıda sadece tek bir yerde new dedin (Sadece bir tane arsa kiraladın). O yüzden o arsayı tek bir delete x; ile silmen YETERLİDİR!
y için ekstra bir delete yapamazsın, çünkü y yeni bir arsa kiralamadı, sadece x'in arsasına ortak oldu.




// Dangling Pointer = silinen bir bellek konumunu gösteren pointer a denir.


int main()
{
    // 1. ADIM: Heap (Arsa) bölgesinde yeni bir int alanı kiralıyoruz.
    // x pointer'ı Stack'te doğuyor ve eline bu arsanın adresini (örn: 0x01) alıyor.
    int* x = new int;

    // 2. ADIM: x'in elindeki adrese (0x01 nolu parseldeki kutunun içine) 7 değerini yerleştiriyoruz.
    *x = 7;

    // 3. ADIM: y adında ikinci bir pointer açıp, içine x'in elindeki o "0x01" adresini kopyalıyoruz.
    // Artık hem x hem de y pointer'ı RAM'de tıpatıp AYNI adresi (aynı evi) gösteriyor!
    int* y = x;

    // 4. ADIM: y'nin başına yıldız koyup "içindeki değere git" diyoruz.
    // y elindeki haritayla 0x01 nolu eve gidiyor ve içerideki 7 değerini ekrana jilet gibi yazdırıyor.
    cout << *y << "\n";

    // 5. ADIM (BÜYÜK TEMİZLİK): x pointer'ının elindeki adrese (0x01) gidip,
    // Heap bölgesinde kiraladığımız o tek arsayı tamamen boşaltıyor ve devlete iade ediyoruz.
    // RAM'de boşa yer kaplamasın diye açtığımız alanı kapatıyoruz.
    delete x;

    // 🚨 SİBER GÜVENLİK VE USTA AYARI:
    // Yukarıda tek bir "new" ile tek bir arsa kiraladığımız için, tek bir "delete" YETERLİDİR!
    // Eğer buraya bir de "delete y;" yazsaydık, zaten silinmiş olan 0x01 nolu arsayı
    // ikinci kez silmeye çalışacağımız için kod çökerdi (Double Free Hatası).
    // O yüzden y'yi delete etmiyoruz; sadece ikisinin de elindeki adres kağıtlarını sıfırlıyoruz:

    x = nullptr; // x serseri mayına (Dangling Pointer) dönüşmesin diye haritasını yaktık.
    y = nullptr; // y de boşa çıkan adresi gösteriyordu, onun da haritasını yaktık. Güvenlik sağlandı!


    return 0; // Şantiye sıfır hata, maksimum güvenlikle kapatıldı!
}


================================================================================





------------------------------------------------------------------------------------------------------------------------

/* nulptr komutu

================================================================================
                    YUSUF SERCAN İŞÇİ - NULLPTR MANTIĞI
================================================================================

"Ben diyorum ki; 'int* x = nullptr;' yazarak RAM'de boş bir pointer oluşturuyorum.
Onun bölgesini sıfıra eşitleyerek diyorum ki: 'Kardeşim burası temiz, RAM'de
rastgele dolaşan o tehlikeli çöp sayılardan falan yok, güvenli bölgedesin,
boşta bekle.'

ONDAN SONRA; 'x = new int;' diyerek Heap'ten gerçek bir arsa kiralayıp pointer'a
o adresi veriyorum.

EN SONUNDA DA; '*x = 7;' diyerek o kiraladığım temiz ve güvenli alanın İÇİNE
7 sayısını jilet gibi yerleştiriyorum."

================================================================================================================================================================
                    NULLPTR (BOŞ POINTER) GÜVENLİK PROTOKOLÜ
================================================================================
* Amacı         -> Pointer ilk açıldığında veya delete edildikten sonra RAM'de
                   başboş gezip serseri mayına (Wild/Dangling Pointer) dönüşmesini
                   engellemek için eline "GÜVENLİ SIFIR ADRESİ" vermektir.

* Büyük Hatat   -> nullptr yapılmayan pointer'lar RAM'deki rastgele çöp adresleri
                   gösterir. Kazara içlerine değer yazmaya çalışmak programı
                   anında çökertir (Segmentation Fault).

* Elzem mi?     -> EVET! Büyük projelerde "if (x != nullptr)" kontrolü yaparak
                   pointer'ın içi dolu mu boş mu, RAM'de yeri var mı yok mu
                   anlamamızın TEK GÜVENLİ YOLUDUR. Mühendislik namusudur!
================================================================================


int main()
{
    int* x=nullptr;//nullptr diyerek aslında diyorum ki boş bir pointer oluştur yani herhangi bir bytle ık bir yer ayırma onu sonradan ayarlarsın
    // nullptr kullanarak diyorum ki ben senin bölgeni sıfıra eşitledim yani burası temiz öyle ram de rastgele dolaşan sayılardan fln yok güvenle gelebilirsin diyorum ondan sonra da *x=7 diyerek buraya 7 sayısını yerleştiriyorum
    x=new int;// ne kadar yer ayıracağını burada ayarladım
    *x=7;
    cout<<*x<<"\n";
    delete x;


    return 0;
}


---------------------------------------------------------------------------------------------------------


*/


/* NOT ÖNEMLİ MANTIĞIN ANLA

================================================================================
                CONSTRUCTOR & DESTRUCTOR YAŞAM DÖNGÜSÜ
================================================================================
* Constructor   -> Nesne RAM'de doğduğu an BİZ ÇAĞIRMASAK DA ilk çalışan fonksiyondur.
  (Yapıcı)         Görevi: Çekmecelerin ilk ayarlarını yapmaktır.

* Destructor    -> Nesne RAM'den silineceği an BİZ ÇAĞIRMASAK DA çalışan fonksiyondur.
  (Yıkıcı / ~)     Görevi: Nesne ölürken arkada bıraktığı çöpleri temizlemektir.

* KRİTİK FARK   -> * Eğer nesne normal açıldıysa (Stack'teyse), süslü parantez ( } )
                     kapandığı an Destructor OTOMATİK çalışır.
                   * Eğer nesne "new" ile açıldıysa (Heap'teyse), sen "delete"
                     yazmadığın sürece Destructor ASLA çalışmaz, RAM şişer!
================================================================================

class Employee
{
public:
    Employee()// Constructor  , çıktı da ilk başta bulunmasının sebebi Constructor her şeyden önce ilk çalışır biz çağırsak da çağırmasak da
    {
        cout<<"Started\n";
    }
    ~Employee()//Destructor   , çıktı da en altta bulunmasının sebebi Destructor her şey bittikten sonra çalışır biz çağırsak da çağırmasak da
    {
        cout<<"Deleted\n";
    }


};

int main()
{
    Employee em;
    cout<<"Hello Dynamic Memory\n";





    return 0;
}



*/


/* Bellek sızıntısı önleme örneği


================================================================================
          YUSUF SERCAN İŞÇİ - SINIFLARDA BELLEK SIZINTISI MUHAFIZI
================================================================================

* KODUN GERÇEK MANTIĞI VE AMACI:
--------------------------------------------------------------------------------
Eğer bir sınıfın (Class) içinde "new" anahtar sözcüğüyle dinamik hafıza kiralanıyorsa,
bu sınıfın nesnesi main içinde "delete ptr;" ile silindiğinde, sınıfın İÇİNDEKİ
o dinamik kiralanan uzak alanlar otomatik olarak SİLİNMEZ! Nesne silinir ama
o uzak alanlar RAM'de serseri ve ulaşılamaz olarak kalır. Buna BELLEK SIZINTISI denir.


* DESTRUCTOR (~myMath) BURADA NE İŞE YARIYOR?
--------------------------------------------------------------------------------
"delete ptr;" komutu büyük nesneyi RAM'den kaldırmadan tam bir milisaniye önce
Destructor (~myMath) otomatik olarak uyanır. Büyük nesne yok olup gitmeden önce,
kendi elleriyle içindeki pointer'ların gösterdiği o uzak Heap alanlarını
(number1 ve number2'nin kiraladığı yerleri) "delete" ile temizler. Böylece
arkasında tek bir byte bile çöp bırakmaz, bellek sızıntısını %100 önler!

================================================================================

class myMath
{
private:
    // Sınıfın içindeki bu iki kurye (pointer) ilk doğduklarında RAM'de başboş gezip
    // serseri mayına (Wild Pointer) dönüşmesinler diye kafadan "nullptr" (0) ile kilitliyoruz.
    int* number1 = nullptr;
    int* number2 = nullptr;

public:
    // PARAMETRELİ CONSTRUCTOR (Doğum Odası / Nesne Yapıcı Motor)
    myMath(int x, int y)
    {
        // 1. ADIM: "new int" kepçeleri çalışıyor! RAM'in devasa HEAP (Arsa) bölgesinin
        // bambaşka, uzak iki köşesinden bağımsız iki tane "int" odacığı kiralıyoruz.
        number1 = new int;
        number2 = new int;

        // 2. ADIM: Başına yıldız (*) koyarak o uzak odacıkların İÇİNE sızıyoruz
        // ve dışarıdan gelen (7 ve 12) değerlerini o kutuların içine jilet gibi çakıyoruz.
        *number1 = x;
        *number2 = y;

        // Ekranda toplama işlemini yapıp fırlatıyoruz.
        cout << "Sum: " << (*number1 + *number2) << "\n";
    }

    // DESTRUCTOR (Yıkıcı Metot / Şantiye Temizlikçisi / Nesnenin Vasiyeti)
    // main içinde "delete ptr;" baltası vurulduğu an, büyük kasa yok olmadan TAM BİR MİLİSANİYE ÖNCE burası çalışır!
    ~myMath()
    {
        // 🚨 BELLEK SIZINTISI (MEMORY LEAK) KALKANI:
        // Eğer buraya bu delete komutlarını yazmazsak; main içindeki "delete ptr;" komutu
        // sadece büyük nesne kasasını silerdi. Heap'in uzak köşesinde kiraladığımız o içinde
        // 7 ve 12 yazan küçük odacıklar RAM'de YETİM (sahipsiz) kalırdı ve RAM şişerdi!
        // İşte nesne tamamen ölmeden önce, kendi elleriyle o uzak arsaları temizleyip devlete iade ediyor:
        delete number1;
        delete number2;

        // Serseri mayın kalıntısı kalmasın diye kuryelerin elindeki adres haritalarını da yakıyoruz.
        number1 = nullptr;
        number2 = nullptr;

        cout << "Succsessful: Heap katindaki tum gizli odaciklar temizlendi, s瀕inti onlendi!\n";
    }
};

int main()
{
    // 1. KEPÇE: Heap (Arsa) bölgesinde devasa bir "myMath Nesne Kasası" kiralıyoruz.
    // Stack (Masa) bölgesindeki "ptr" pointer'ı ise bu büyük kasanın adresini elinde tutuyor.
    myMath* ptr = new myMath(7, 12);

    // 2. KEPÇE: İşimiz bitti! Mühendislik namusunu yerine getiriyoruz.
    // Bu balta vurulduğu an, yukarıdaki Destructor (~myMath) otomatik olarak uyanır,
    // önce içindeki o gizli yetim odacıkları siler, en son bu büyük nesne kasası RAM'den kalkar!
    delete ptr;

    // ptr pointer'ı boşa çıkan eski adresi gösterip serseri mayına dönüşmesin diye haritasını sıfırlıyoruz.
    ptr = nullptr;

    return 0; // Şantiye sıfır hata, maksimum siber güvenlikle kapatıldı!
}






*/


/* Vektör Kullanımı

=> Vektörleri kullanıyoruz çünkü array lerden farklı olarak çalışma sırasında boyutunu değiştirebiliyoruz dinamikleştirebliyoruz ayrıca array ın boyutunu belirtmek zorundayız ancak vektörün boyutunu belirtmek zorunda değiliz
=> bir array gibi bizim RAM mimizde bir veri organizasyonu yapıyoruz verileri organize ediyoruz ve tıpku array ler gibi bitişik bellek konumlarını kullanıyor

int main()
{
    vector<int> numbers(10);// ben bir veri yapısı oluşturmama rağmen onun kaç elemanlı olucağını belirtmedim array lerde bu zorunluydu yoksa hata verirdi vectorlerde array lerin bir türüdür. özellikle belirtmem gerekirse eleman sayısını vektörlerde   vector<int> numbers(7); derim mesela 7 elemanlı olduğunu göstermek için
    // vector<int> number(10,7) burada diyorum ki benim 10 elemanım olsun her bir 10 elemanada her birinede 7 elemanını eklesin MANTIĞINI ANLA bu arada bu dinamik olduğu için başlangıçta belirttiğiniz alanıda genişleyip aşabilir
    numbers={1,2,3,4,5,6,7,8,9};

    for(int x:numbers)
    {
        cout<<x<<"\n";
    }
    cout<<"\n";

    return 0;
}


================================================================================
                    C++ VEKTÖR (VECTOR) KULLANIM PROTOKOLÜ
================================================================================

* NEDEN VEKTÖR KULLANIYORUZ?
--------------------------------------------------------------------------------
1. Klasik array'lerden farklı olarak boyutu sabit değildir; program çalışırken
   (runtime) canlı canlı büyüyüp küçülebilir, tamamen dinamiktir.
2. RAM mimarisinde tıpkı array'ler gibi VERİLERİ YAN YANA (bitişik bellek) saklar.
   Bu yüzden verilere erişim ışık hızındadır.
3. "new" ve "delete" ameleliği yoktur, işi bittiğinde RAM'i otomatik temizler!


* TANIMLAMA ÇEŞİTLERİ VE RAM ARKASINDAKİ ANLAMLARI:
--------------------------------------------------------------------------------
vector<int> numbers;        --> Tamamen BOMBOŞ, 0 elemanlı akıllı bir dizi açar.
vector<int> numbers(10);    --> Heap'te yan yana 10 tane kutu açar, içlerini 0 yapar.
vector<int> numbers(10, 7); --> Heap'te 10 tane kutu açar, her birinin içine 7 yazar.


* KODDAKİ SİNSİ DETAY (numbers = {1,2,3...}):
--------------------------------------------------------------------------------
Başta numbers(10) diyerek 10 elemanlı yer açsak bile, altına gelip süslü parantezle
9 tane sayı atadığımız an vektör o eski 10'luk alanı RAM'den siler, tık diye
9 elemanlık yepyeni bir boyuta bürünür. Dinamik esneklik tam olarak budur!

================================================================================

1. Ders 117: Vektörlerde Element Erişimi ve Fonksiyonlar
Vektörün içindeki verilere ulaşmanın veya o verileri sorgulamanın 4 janti mühendislik yolu vardır çırak. Hoca sınavda bunları kesinlikle karşılaştırır:


vector<int> v = {10, 20, 30, 40};



1-)v[i] ameleliği (Köşeli Parantez): Klasik dizilerdeki gibidir. v[2] dersen tık diye 30 gelir. Işık hızındadır ama sinsi bir yönü vardır: Eğer kazara v[100] yazarsan, derleyici sınır kontrolü yapmaz; RAM'in korumasız başka bir hücresine sızmaya çalışır ve kod patlar (Undefined Behavior).

2-)v.at(i) Jilet Fonksiyonu: İşte mühendis disiplini! v.at(2) yazarsan yine 30 gelir. Ama kazara sınırı aşarsan (v.at(100)), kod serseri mayın gibi patlamak yerine sana kibarca "out_of_range" (Sınır Aşıldı) istisnası fırlatır. Sınavda hoca güvenli kodlama için bunu görmek ister!

3-)v.front() ve v.back() Muhafızları: v.front() sana dizinin en başındaki ilk elemanı (10), v.back() ise dizinin en sonundaki son elemanı (40) cımbızla çeker getirir. İndeks hesaplama ameleliğini bitirir.


int main()
{
    vector<int> v = {10, 20, 30, 40};
    cout<<v.at(2)<<"\n";



    return 0;
}









2. Ders 118: Vektörlerde Değiştiriciler (Manipülatörler)
Vektörü asıl "akıllı dinamik canavar" yapan, boyutunu canlı canlı değiştiren o meşhur silahlar burasıdır çırak:

.push_back(değer) (Şantiyeye Tuğla Ekleme): Vektörün en arkasına canlı canlı yeni bir eleman fırlatır ve boyutu otomatik 1 artırır.

.pop_back() (Son Tuğlayı Vurma): Vektörün en arkasındaki son elemanı tık diye RAM'den siler ve boyutu 1 küçültür. İçine parametre yazılmaz, sadece en arkadakini vurur!

.clear() (Sahayı Dümdüz Etme): Tek hamlede vektörün içindeki tüm elemanları RAM'den süpürür, vektörü bomboş (0 elemanlı) bırakır.

.empty() (Nizamiye Kontrolü): Vektörün içi boş mu dolu mu diye bakar. Eğer boşsa true (1), doluysa false (0) döndürür. if(v.empty()) kontrolü mühendislik standardıdır.




3. Sınavda Kesin Çıkacak O Sinsi "Size vs Capacity" Tuzağı!
Fehmi hoca sınavda kod çıktısı sorularında 100 öğrenciden 90'ını tam buradan eler çırak, can kulağıyla dinle! RAM şantiyesinde Size (Boyut) ve Capacity (Kapasite) tamamen farklı iki kavramdır!

.size() (O Anki Tuğla Sayısı): Vektörün içinde o an aktif olarak kaç tane eleman saklandığını gösterir.

.capacity() (Kiralanan Toplam Arsa Büyüklüğü): Vektörün arkada çaktırmadan işletim sisteminden kiraladığı maksimum taşıma alanıdır.






RAM Arkasındaki Sinsi "Kapasite Katlama" Mekanizması:
Bilgisayar sürekli Heap arsasından yeni yer kiralamakla vakit kaybetmesin diye, vektör her dolduğunda arkada kapasitesini 2 katına çıkarır! Canlı canlı RAM trafiğini izle:

vector<int> v; // Size = 0, Capacity = 0 (Bomboş doğdu)

v.push_back(5);
// Size = 1, Capacity = 1 (1 kişilik yer kiralandı)

v.push_back(12);
// Size = 2, Capacity = 2 (Yer doldu, kapasite 2 katına çıktı)

v.push_back(19);
// 🚨 DIKKAT! Size = 3 oldu. Ama Capacity tık diye 4'e fırladı!
// Vektör dedi ki: "Bu çocuk 3. elemanı ekledi, arkasından 4'ü de ekler.
// Ben arsayı şimdiden 2 katına (4 kişilik) çıkarayım" dedi!





================================================================================
                    VEKTÖR MASTER PROTOKOLÜ (DERS 116-117-118)
================================================================================
* .at(i)        -> Sınır kontrolü yapan en güvenli eleman erişim silahıdır.
* .push_back()  -> Vektörün en arkasına yeni eleman ekler, boyutu büyütür.
* .pop_back()   -> En arkadaki elemanı RAM'den siler, parametre almaz.
* SIZE          -> Vektörün içindeki aktif eleman sayısıdır (.size()).
* CAPACITY      -> Arka planda kiralanan toplam arsa alanıdır (.capacity()).
                   Eleman eklendikçe otomatik olarak 2'nin katları şeklinde büyür.
================================================================================



int main()
{

    vector<int> numbers(10,7);

    numbers={1,2,3,4,5,6,7,8,9,10,11,12,13};

    cout<<"at():"<<numbers.at(6)<<"\n";// ekrana 6. indeksi getirir
    cout<<"front():"<<numbers.front()<<"\n";// ilk indeksi getirir
    cout<<"back():"<<numbers.back()<<"\n";// son indeksi getirir


    return 0;
}


int main()
{
   vector<int> numbers(15);

   numbers={1,2,3,4,5,6,7,8,9,10};

   cout<<"numbers[8]:"<<numbers[8]<<"\n";
   cout<<"at(4):"<<numbers.at(4)<<"\n";
   cout<<"front:"<<numbers.front()<<"\n";
   cout<<"back:"<<numbers.back()<<"\n";

   int* ptr=numbers.data();// ben data yı çağırdığım zaman vektörlerde şunu demiş oluyorum ben burada bir pointer oluşturdum ve benil ilk pointerıma numbers.data(); buradaki adresi ata.
    cout<<*ptr<<"\n";//pointer da ilk elemanı almak için *ptr yaparız HATIRLA

   return 0;


}


/// VEKTÖRLERDE ÇOĞU ARACI KULLANDIĞIMIZ BİR ÖRNEK MANTIĞINI ANLA
int main()
{
   vector<int> numbers(15);

   numbers={1,2,3,4,5,6,7,8,9,10};

   cout<<"numbers[8]:"<<numbers[8]<<"\n";
   cout<<"at(4):"<<numbers.at(4)<<"\n";
   cout<<"front:"<<numbers.front()<<"\n";
   cout<<"back:"<<numbers.back()<<"\n";
   cout<<"size:"<<numbers.size()<<"\n";// içersinde 10 eleman var diyorum
   cout<<"capacity:"<<numbers.capacity()<<"\n";// başta number(15) diyerek kapasiteyi ayırdık
   cout<<"max_size:"<<numbers.max_size()<<"\n";//
   numbers.resize(5);// resize zaten boyutlandırmak demek burada da diyorum ki ben numbers ımı 5 elemanlı olucak şekilde tekrardan boyutlandırıcam.  yani eski size 10 iken artık 5
   cout<<"new size:"<<numbers.size()<<"\n";// artık 5 oldu
   if(numbers.empty()==true)// burada adında anlaşıldığı üzere empty vekötürümüz boş mu değil mi onu kontrol etmek için kullanıcağımız bir yapı
   {
       cout<<"vector is empty\n";
   }
   else
    {
        cout<<"vector is not empty\n";
    }

   int* ptr=numbers.data();// ben data yı çağırdığım zaman vektörlerde şunu demiş oluyorum ben burada bir pointer oluşturdum ve benil ilk pointerıma numbers.data(); buradaki adresi ata.
    cout<<*ptr<<"\n";//pointer da ilk elemanı almak için *ptr yaparız HATIRLA

   return 0;


}

/// Vektörlerde Değiştiriceler


// assign metodu - push_back - pop_bacck - insert

int main()
{
    vector<int> numbers;

    numbers.assign(5,7);

    cout<<"1.(assign):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }
    numbers.push_back(19);// verileri ite ite ram e yerleştiricem önden arkaya doğru push_back iticek
    numbers.push_back(34);// arkadan arkadan eklemeye devam edicek yani aslında burada vektörlerin dinamik olarak genişliyebiliceğini kanıtlamış olduk.

     cout<<"\n\n 2.(push_back):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }

    numbers.pop_back();//arka kısmından eleman çıkarmak için kullanılır mesela burada 34 ü sildi en arkada o vardı çünku
    cout<<"\n\n 3.(pop_back):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }

    numbers.insert(numbers.begin(),46);//  insert belirtilen konumdaki öğeden önce yeni öğeler eklemen için kullanılır   numbers.insert(numbers.begin(),46); burada bu kod sayesinde 46 sayısını sıralamada başa ekledi mesela
    numbers.insert(numbers.end(),20);// bu sefer sona ekledim 20 yi
    cout<<"\n\n 4.(pop_back):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }


    numbers.erase(numbers.end());// adı üzerinde erase silme işine yarıyor burada number.end dediğim için sondan siliyor begin deseydim end yerine baştan silerdi
    cout<<"\n\n 5.(erase):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";

    }


    numbers.clear();// adı üzerinde uzatmaya gerek yok
    cout<<"\n\n 6.(clear):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";

    }







    cout<<"\n";





    return 0;
}










*/


/* MODERN FOR DÖNGÜSÜ

================================================================================
           MODERN FOR DÖNGÜSÜ (RANGE-BASED FOR LOOP) REÇETESİ
================================================================================

1. LOGO VE MANTIK: PARANTEZİN İÇİNDEKİ İKİ NOKTANIN ( : ) SIRRI
--------------------------------------------------------------------------------
Yazım Şekli ->  for ( VeriTipi x : Kolinin_Adı )

* [Kolinin_Adı] -> Sağ tarafa, üzerinde döneceğimiz, başı ve sonu belli olan
                   toplu veri yapısını (Vektör, Dizi veya String) yazarız.
* [ : ]          -> Ortadaki iki noktanın Türkçe meali tam olarak şudur:
                   "İÇİNDEKİ HER BİR ELEMAN İÇİN SIRAYLA DÖN."
* [VeriTipi x]   -> Sol tarafa ise, her turda kolinin içinden sırayla çekilen
                   verinin kopyalanıp konulacağı geçici çekmeceyi (kuryeyi) yazarız.

Amelelik Yok! -> "i = 0", "i < boyut", "i++" sayacı yoktur. Bilgisayar listenin
                 başından girer, sonundan otomatik olarak jilet gibi çıkar.


2. GERÇEK DÜNYADAN 3 JANTİ ÖRNEK (Kullanım Alanları)
--------------------------------------------------------------------------------

A) VEKTÖRLERDE KULLANIMI:
   vector<int> numbers = {10, 20, 30};
   for (int x : numbers) {
       cout << x << " "; // Ekrana sırayla basar: 10 20 30
   }

B) KLASİK SABİT DİZİLERDE (ARRAY) KULLANIMI:
   int myNotes[4] = {85, 100, 90, 75};
   for (int note : myNotes) {
       cout << "Not: " << note << "\n"; // Boyut ölçmeden 4 notu da ekrana basar.
   }

C) YAZILARDA (STRING) HARF HARF TARAMA KULLANIMI:
   string name = "YUSUF";
   for (char harf : name) {
       cout << harf << "-"; // Harf harf ameliyat eder: Y-U-S-U-F-
   }


3. 🚨 SINAVDA HAYAT KURTARAN "HOCANIN SINSI KOPYA TUZAĞI" 🚨
--------------------------------------------------------------------------------
Hoca sınavda döngünün içinde elemanları değiştirmeyi dener ve çıktısını sorar:

   for (int x : numbers) {
       x = x + 10; // Sinsi Tuzak!
   }

❌ YANILGI: "Vektörün içindeki sayılar 10 artar." -> SIFIR PUAN!
🟢 DOĞRU  : "Vektörün içi ASLA değişmez!" Çünkü yukarıdaki döngüde sayıların
            sadece birer KOPYASI 'x' çekmecesine gelir. Sen 'x'i değiştirirsin
            ama Heap arsasındaki asıl verilere dokunamazsın.

🛠️ TUZAK BOZUCU REÇETE (Referans Sihri):
Eğer döngü içinde vektörün veya dizinin Orijinal Ciğerini (içindeki verileri)
kalıcı olarak değiştirmek istiyorsan, kuryenin yanına REFERANS (&) çakmalısın!

   for (int &x : numbers) { // x artık kopya değil, o hücrenin LAKABIDIR!
       x = x + 10;          // İşte şimdi veriler kalıcı olarak 10 arttı!
   }


4. ÖZET MÜHENDİSLİK KANUNU
--------------------------------------------------------------------------------
* Bu döngü SADECE vektörlere özel değildir; başı sonu belli olan HER toplu
  veri yapısında (Dizi, String, List vb.) tıkır tıkır çalışır.
* Sadece okuma/yazdırma yapacaksan düz kullan ("int x : ...").
* İçerideki veriyi kalıcı güncelleyeceksen REFERANS kullan ("int &x : ...").
================================================================================
                    YUSUF SERCAN İŞÇİ - SİBER VATAN ARŞİVİ
================================================================================


================================================================================
                RANGE-BASED FOR LOOP (MODERN FOR DÖNGÜSÜ)
================================================================================
* Yazımı     -> for (int x : numbers)
* Anlamı     -> "numbers vektörünün içindeki HER BİR elemanı sırayla x'e at ve dön."
* Avantajı   -> İndeks (i) ameleliği, boyut ölçme derdi ve hata riski sıfırdır.
* UNUTMA     -> "for (int x : numbers)" yazarsan elemanların sadece KOPYASI gelir.
                Vektörün içini kalıcı DEĞİŞTİRMEK için "for (int &x : numbers)"
                şeklinde Referans (&) kullanılması ŞARTTIR!
================================================================================


int main()
{
    vector<int> numbers(10);// ben bir veri yapısı oluşturmama rağmen onun kaç elemanlı olucağını belirtmedim array lerde bu zorunluydu yoksa hata verirdi vectorlerde array lerin bir türüdür. özellikle belirtmem gerekirse eleman sayısını vektörlerde   vector<int> numbers(7); derim mesela 7 elemanlı olduğunu göstermek için
    // vector<int> number(10,7) burada diyorum ki benim 10 elemanım olsun her bir 10 elemanada her birinede 7 elemanını eklesin MANTIĞINI ANLA bu arada bu dinamik olduğu için başlangıçta belirttiğiniz alanıda genişleyip aşabilir
    numbers={1,2,3,4,5,6,7,8,9};


    for(int x:numbers)
    {
        cout<<x<<"\n";
    }
    cout<<"\n";

    return 0;
}



*/











/* PRATİK

class Test {
public:
    Test() { cout << "A"; }
    ~Test() {
        // 🟢 Destructor'ın görevi kendi kendini silmek DEĞİLDİR!
        // Onun görevi, kendisi silinirken İÇİNDEKİ başka çöpleri temizlemektir.
        // Bu sınıfta içeride new ile açılan başka bir veri olmadığı için içi BOŞ kalır.
        cout << "B";
    }
};

int main() {
    Test* t = new Test; // Heap'te yer açtın (A basıldı)
    cout << "C";        // Selam çaktın (C basıldı)

    delete t;           // 🛠️ BALTAYI BURAYA VURACAKSIN!
                        // Bu komut gider Heap'teki nesneyi siler,
                        // silerken otomatik ~Test() uyanır ve B basılır!

    t = nullptr;        // Kuryenin elindeki adres haritasını da yaktık, jilet!
    return 0;
}


================================================================================
                    YUSUF SERCAN İŞÇİ - RAM MÜHENDİSLİK KANUNU
================================================================================
* "Test t;" dersen       -> Yer Stack'tedir. Derleyici otomatik siler.
                            Destructor KENDİLİĞİNDEN uyanır (Çıktı: ACB).

* "new Test" dersen      -> Yer Heap'tedir (Boş Arsa). Derleyici dokunamaz.
                            Destructor'ı UYANDIRMAK İÇİN "delete t;" satırını
                            kendi ellerinle main içine yazman ŞARTTIR (Çıktı: ACB).

* delete'i unutursan     -> Destructor uyanmaz, nesne RAM'de yetim kalır (Sızıntı),
                            ekranda sadece "AC" yazar!
================================================================================


================================================================================
                    MOTORLARIN ÇALIŞMA VE TABELA KANUNU
================================================================================
* OTOMATİK ÇAĞRILMA -> Constructor (new anında) ve Destructor (delete anında)
                       her zaman bilgisayar tarafından OTOMATİK ÇAĞRILIR.

* COUT YOKSA        -> Motor otomatik çağrılsa bile, içinde "cout" komutu yoksa
                       arkada sessizce çalışır, ekrana hiçbir tabela (yazı) ASMAZ!

* COUT VARSA        -> Motor otomatik çağrıldığı an, içindeki "cout" emrini yerine
                       getirir ve ekrana o yazıyı jilet gibi çakar!
================================================================================




*/




/*REFERANS ( & ) MANTIĞI ÖZETİ




================================================================================
                        REFERANS ( & ) MANTIĞI ÖZETİ
================================================================================
* Özü           -> Var olan bir değişkenin RAM'deki adresine verilen ikinci bir
                   isim, yani bir LAKAPTIR. Yeni bir hafıza alanı kaplamaz!
* Amacı         -> Fonksiyonlara parametre gönderirken, verinin kopyasını değil
                   DİREKT KENDİSİNİ göndermemizi sağlar.
* Pointer Farkı -> Pointer'lar gibi yıldız (*) veya ok (->) ameleliği gerektirmez,
                   düz değişkenmiş gibi jilet gibi temiz yazılır!


Şantiyede gerçek adı "Yusuf Sercan" olan bir usta olduğunu düşün. Arkadaşları ona kısaca "Usta" diye hitap ediyor olsun. Sen "Yusuf Sercan" dediğinde de aynı adama sesleniyorsun, "Usta" dediğinde de aynı adama sesleniyorsun değil mi? "Usta"ya bir bardak çay verirsen, aslında Yusuf Sercan çay içmiş olur. Çünkü ortada iki farklı insan yok, tek bir insan ve onun iki farklı ismi var!

İşte C++ dünyasında Referans (&), var olan bir değişkenin yanına koyduğun ikinci bir isim, yani bir LAKAPTIR çırak!


int main()
{
    int asilSayi = 10; // RAM'de bir kutu açıldı, içine 10 kondu.

    // 🟢 İŞTE REFERANS TANIMLAMASI:
    int &lakap = asilSayi; // asilSayi'nın yanına "lakap" adında bir ikiz kardeş koyduk.

    // Artık ikisi de RAM'deki AYNI KUTUYU (aynı hafıza hücresini) gösteriyor!

    lakap = 20; // Biz lakap değişkenini 20 yaptık.

    // Şimdi ekrana asilSayi'yı basarsak ne görürüz?
    cout << asilSayi; // Ekrana 20 basar çırak!
}



1. Değer İle Çağırma (Pass by Value - Referanssız)
Eğer fonksiyonu yazarken parantezin içine & koymazsan, main içindeki sayının sadece bir kopyası fonksiyona gider:


void arttir(int x)
{
    x = x + 5; // Sadece içerideki kopya artar!
}



2. Referans İle Çağırma (Pass by Reference - & Kullanarak)
Ama fonksiyonun parantezine o sihirli & işaretini çakarsan:


void arttir(int &x) // x artık main'den gelecek değişkenin LAKABI oldu!
{
    x = x + 5;
}


Sen main içinde arttir(asilSayi); dediğin an; fonksiyonun içindeki o x harfi, main'deki asilSayi'nın direkt kendisi (lakabı) olur. x = x + 5;
satırı çalıştığı an, main içindeki asıl sayı tık diye 15'e fırlayacaktır!














*/







/* STRUCTURES (Yapılar)

NOT: Structurler bir çok variableyi tek bir yerde toplar


struct // structer in arrayden farkı  farklı tipte veri tutmasına izin veriyor örnek olarak aşağıda hem int hem string hem de double şeklinde veri tiplerini tutuyoruz
{
    int age;
    string name;
    double salary;

}myStructure;  // burada tanımladığımıı };  nın arasına yazıoyurz birden fazla da tanımlıyabilirz


int main()
{
    myStructure.name="Fehmi";
    myStructure.age=56;
    myStructure.salary=7245.12;

    cout<<"Name: "<<myStructure.name<<"\n";
    cout<<"Age: "<<myStructure.age<<"\n";
    cout<<"Salary: "<<myStructure.salary<<"\n";




    return 0;
}
C++ Şantiyesinde struct ile class Arasındaki Gerçek Tek Fark!
Yarın büt sınavında hoca kağıda kesin yazar: "Çırak, bana struct ile class arasındaki farkı söyle." Birçok amele öğrenci gidip "Struct içinde sadece özellik (attribute) olur, class içinde fonksiyon da olur" der ve SIFIR PUAN alır! Çünkü C++ dilinde struct içine de bal gibi fonksiyon, constructor ve destructor yazabilirsin çırak!

Aralarındaki tek ve mutlak fark Erişim Belirteçleridir (Access Specifiers - public/private):

-class Kuralı (Varsayılan Gizlidir): Bir sınıf açıp içine hiçbir şey yazmazsan, o özellikler otomatik olarak private (gizli odada) doğar. main içinden doğrudan erişemezsin.

-struct Kuralı (Varsayılan Açıktır): Bir struct açıp içine hiçbir şey yazmazsan (tıpkı senin kodundaki gibi), o özellikler otomatik olarak public (meydanda) doğar!


================================================================================
            KTÜ YAZILIM MÜHENDİSLİĞİ - BÜTÜNLEME TAARRUZU REÇETESİ
                     C++ STRUCT (YAPI) AKADEMİK NOTLARI
================================================================================
Geliştirici / Çırak : Yusuf Sercan İşçi
Eğitmen / Usta       : Gemini
Ders Kodu / Konu     : C++ OOP - Veri Paketleme ve Struct Mimarisi (Ders 91+)
Sistem Durumu        : Büt Kuşatması - %100 Hazırlık Modu
================================================================================

--------------------------------------------------------------------------------
1. BÖLÜM: STRUCT (YAPI) NEDİR VE NİÇİN KULLANILIR?
--------------------------------------------------------------------------------
Klasik programlamada her değişken tek bir veriyi tutar (int, string, double vb.).
Ancak gerçek hayattaki veya mühendislik projelerindeki nesneler tek bir veriyle
ifade edilemez.

Örnek: Bir "Araba" nesnesinin markası (string), modeli (string), yılı (int) ve
motor hacmi (double) vardır. Bunları ayrı ayrı değişkenlerde tutmak, siber
güvenlik mimarisinde ve bellek yönetiminde tam bir kaos yaratır.

STRUCT: Farklı veri tiplerindeki değişkenleri tek bir janti çatı altında
toplayarak "Yeni bir Veri Tipi" oluşturmamızı sağlayan paketleme mekanizmasıdır.

--------------------------------------------------------------------------------
2. BÖLÜM: RAM ŞANTİYESİNDE STRUCT VS CLASS KARŞILAŞTIRMASI
--------------------------------------------------------------------------------
KTÜ'deki hocaların büt sınavında en çok sevdiği sinsi soru:
"Struct ile Class arasındaki fark nedir?"

Amele Öğrenci Cevabı: "Struct içinde fonksiyon olmaz, class'ta olur." (SIFIR PUAN!)
Mühendisçe Gerçek Cevap: C++ mimarisinde iki yapı arasında sadece TEK BİR FARK
vardır; o da VARSAYILAN ERİŞİM BELİRTECİDİR (Access Specifier).

+----------------------------------+----------------------------------+
|          STRUCT MIMARISI         |          CLASS MIMARISI          |
+----------------------------------+----------------------------------+
| İçindeki her şey varsayılan      | İçindeki her şey varsayılan      |
| olarak PUBLIC'tir (Meydandadır). | olarak PRIVATE'tır (Gizlidir).   |
| Dışarıdan doğrudan erişilir.     | Dışarıdan erişmek için public    |
|                                  | kapsülleme yapılması şarttır.    |
+----------------------------------+----------------------------------+

DİKKAT: C++ dilinde Struct içine de fonksiyon, Constructor (Yapıcı) ve
Destructor (Yıkıcı) BAL GİBİ YAZILIR! C dilinde yazılamazdı, ama C++ bu sınırı
yıktı!

--------------------------------------------------------------------------------
3. BÖLÜM: SÖZDIZIMI (SYNTAX) VE TANIMLAMA PROTOKOLLERİ
--------------------------------------------------------------------------------

A) EN NİZAMİ VE ESNEK YAZIM ŞEKLİ (Kalıba İsim Verme):
Bu yöntem şantiyede esneklik sağlar. Kalıbı bir kez oluşturup, main içinde
istediğimiz kadar nesne üretebiliriz.

    struct Car {
        string brand;
        string model;
        int year;
    }; // <-- Unutma! Bu noktalı virgül şantiyenin kapısıdır, konulması şarttır!

    // main içinde kullanımı:
    Car myCar1; // Nesne 1 doğdu
    Car myCar2; // Nesne 2 doğdu

B) İSİMSİZ / ANONİM YAZIM ŞEKLİ (Senin İlk Yazdığın Tarz):
Kalıba bir isim verilmez. Sadece o an süslü parantezin kapanışında belirtilen
nesneler doğar.

    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // Sadece bu iki nesne var olabilir!

    // TEHLİKE: Kalıbın adı olmadığı için main içinde ilerleyen satırlarda
    // "Car myCar3;" diyerek yeni bir araba doğuramazsın! Esneklik sıfırdır!

--------------------------------------------------------------------------------
4. BÖLÜM: STRUCT İÇİNDE FONKSİYON VE CONSTRUCTOR KULLANIMI
--------------------------------------------------------------------------------
Hocanın karşısına çıkıp fark yaratacağın janti mühendislik seviyesi burasıdır.
Bak bir struct içine constructor ve fonksiyon nasıl çakılıyor:

#include <iostream>
using namespace std;

struct Sensor {
    int id;
    double sicaklik;

    // JANTİ CONSTRUCTOR: Struct nesnesi doğduğu an otomatik çalışır!
    Sensor(int _id, double _sicaklik) {
        id = _id;
        sicaklik = _sicaklik;
    }

    // STRUCT İÇİNDEKİ FONKSİYON:
    void veriBas() {
        cout << "Sensor ID: " << id << " | Sicaklik: " << sicaklik << "C\n";
    }
};

int main() {
    // Constructor sayesinde nesneyi tek satırda, mermi gibi doğuruyoruz:
    Sensor s1(101, 24.5);
    Sensor s2(102, 19.8);

    s1.veriBas(); // Çıktı: Sensor ID: 101 | Sicaklik: 24.5C
    s2.veriBas(); // Çıktı: Sensor ID: 102 | Sicaklik: 19.8C

    return 0;
}

--------------------------------------------------------------------------------
5. BÖLÜM: SİNSİ BÜT TUZAKLARI VE KRİTİK UYARILAR
--------------------------------------------------------------------------------

🚨 TUZAK 1: Noktalı Virgül Unutulması
Struct tanımının sonundaki '};' işaretindeki noktalı virgülü unutursan derleyici
sayfanın tamamında anlamsız hatalar fırlatır. O mühür oraya çakılacak!

🚨 TUZAK 2: Miras Alma (Inheritance) Durumu
Struct'lar da birbirlerinden miras alabilirler. Klasik sınıflarda miras alma
varsayılan olarak private iken, struct yapılarda varsayılan miras alma PUBLIC'tir!
Örn: "struct YarışArabası : Car" yazıldığında miras otomatik olarak public geçer.

🚨 TUZAK 3: Bellek Boyutu (Padding) İllüzyonu
Bir struct'ın RAM'de kapladığı alan, içindeki değişkenlerin toplam boyutundan
bazen daha büyük çıkabilir! Bilgisayar mimarisi verileri RAM'e dizerken hizalama
(Memory Alignment / Padding) yapar.
Örn: sizeof(Car) hesabı tam matematiksel toplamı vermeyebilir, hoca "Neden?"
derse "Hizalamadan dolayı usta!" diyeceksin.

================================================================================
                   MÜHENDİSLİK MOTTOSU (KAFANA KAZI!)
"Struct her şeyi açıkta (public) başlatır; amele verileri paketlemek için birebirdir.
Ama işin içine siber güvenlik, gizli odalar (private) ve ağır kapsülleme
girecekse, şantiyenin hakimi her zaman CLASS mimarisidir!"
================================================================================



// 1. Kalıba "Car" adını verdik. Artık bu bizim yeni veri tipimiz!
struct Car {  // struct un hemen yanına class gibi Car yazman }; bu ikisi arasına yazmaktan daha iyidir.
    string brand;
    string model;
    int year;
}; // Kalıp bitti, burayı boş bıraktık ki esnek olsun.

int main()
{
    // 2. İstediğimiz yerde, istediğimiz kadar nesneyi rahatça doğurabiliyoruz!
    Car myCar1;
    Car myCar2;
    Car myCar3; // Bak kalıbın adı olduğu için artık 3'ü de doğurabildim!

    // Veri atamaları (Struct olduğu için public, tıkır tıkır çalışır)
    myCar1.brand = "BMW";
    myCar1.model = "X6";
    myCar1.year = 1999;

    cout << "Brand: " << myCar1.brand << " | Model: " << myCar1.model << " | Year: " << myCar1.year << "\n";

     // NOT: yukarıda ztn myCar2, myCar3 adlı nesneler oluşturduğumuzdan istersen yine onların da modellerini fln cout ile yazdıırabilirz

    return 0;
}






*/

/*Pointerlarda struct kullanımı
================================================================================
                    POINTER İLE STRUCT YÖNETİM PROTOKOLÜ
================================================================================
* NOKTA ( . )   -> Sadece elinde nesnenin KENDİSİ varsa çekmeceye ulaşır.
  KURALI           Örn: myCar1.brand

* OK ( -> )     -> Elinde nesnenin kendisi değil de ADRESİ (pointer) varsa,
  KURALI           o adrese gidip içerideki çekmeceyi açmanı sağlar.
                   Örn: ptr->brand

* AKADEMİK MEAL = "ptr->brand" ifadesi, arka planda "(*ptr).brand" amelelik
                  yazımının janti ve modern halidir!
================================================================================



================================================================================
                    YUSUF SERCAN İŞÇİ - POINTER VE OK KANUNU
================================================================================
* "ptr" artik bir araba degil, icinde "x123aa" gibi adres tutan bir kuryedir.

* Kuryenin elindeki adrese gidip, o adresteki yapinin icini acmak icin
  nokta (.) DEGIL, janti OK (->) isareti kullanilir.

* "ptr->brand" demek = "x123aa adresindeki eve git ve brand cekmecesini ac" demektir!
================================================================================


struct Car
{
    string brand;
    string model;
    int year;
};

int main()
{
    Car myCar1={"BMW","X6",1999};


    Car* ptr=&myCar1;//şimdi burada Car structu adıyla ptr adında bir pointer oluşturdurk bu pointer ın yanı artık ptr bir pointer olduğu için ptr nin için &myCar1 diyerek myCar1 aderesimi ptr nin içine attım örnek x123aa fln gibi bir şey sonra ptr--> brand diyerek myCar1 adresimdeki brand ın değerini çağırdım . işlevi gibi düşün gidip o çekmecenin içini açıyor

    cout<<ptr->brand<<"\n";
    cout<<ptr->model<<"\n";
    cout<<ptr->year<<"\n";//-> işareti . mantığında çalışıtr gidip o çekmeceyi açmamızı sağlar



    return 0;
}





*/

/* funcitonlarda structlar
struct Car
{
    string brand;
    string model;
    int year;

};

void showMe(Car c)
{
   cout<<"Brand: "<<c.brand<<"\n";
   cout<<"Model: "<<c.model<<"\n";
   cout<<"Year: "<<c.year<<"\n";
}

int main()
{
    Car myCar1={"BMW","X6",1999};
    showMe(myCar1);
    return 0;
}


*/


/* Arraylerde Struct kullanımı

struct Employee
{
    string name;
    string lastname;
    string task;
    int workerno;
};


int main()
{
    Employee myCar[]={"Fehmi","Uyar","Programmer",1,"Nazli","UYAR","Saleswoman",2,"Murat","BASTUG","Manager",3};
    cout<<"list of workers\n\n";
    for(int i=0;i<3;i++)
    {
        cout<<"Name:"<<myCar[i].name<<"\n";
        cout<<"Lastname:"<<myCar[i].lastname<<"\n";
        cout<<"Task:"<<myCar[i].task<<"\n";
        cout<<"WorkerNo:"<<myCar[i].workerno<<"\n";
        cout<<"------------------------------\n";
    }


    return 0;
}

*/



/* iç içe struct kullanımı

================================================================================
                    İÇ İÇE STRUCT (COMPOSITION) KANUNU
================================================================================
* AMAÇ          -> Kod tekrarını önlemek, her şeyi kendi bağımsız paketi (Adres,
                   Tarih, Motor vb.) halinde tasarlayıp birleştirmektir.

* RAM DÜZENİ     -> Büyük nesne kasasının içinde, küçük nesne kutuları gömülü
                   olarak (Matruşka gibi) ardışık sırayla yer kaplar.

* ERİŞİM SIRASI  -> İçerideki en uç veriye ulaşmak için hiyerarşik olarak
                   "BüyükNesne.IçNesne.Cekmece" (em.add.cityName) kuralı uygulanır!
================================================================================


================================================================================
                    YUSUF SERCAN İŞÇİ - "ADD" DEĞİŞKEN KANUNU
================================================================================
* STRUCT İÇİNDE -> "Address add;" satırındaki "add", C++ komutu DEĞİLDİR. Sadece
                   o iç kutuya yazılımcının verdiği bir isimdir (değişken adıdır).

* NOKTA ZİNCİRİ -> "em.add.cityName" yazarken ortadaki o "add", büyük kutunun
                   içindeki küçük kutunun adını temsil eder.

* ÖZET          -> add = İç kutunun kapı kilididir! Oraya basmadan en içerideki
                         veriye (cityName, district) ASLA ulaşılamaz!
================================================================================


// --------------------------------------------------------------------------------
// 1. BAĞIMSIZ PAKET: ADRES KALIBI (Address Struct)
// --------------------------------------------------------------------------------
// Adres verilerini kendi başına bağımsız bir modül olarak tasarlıyoruz.
// Amacımız kod tekrarını önlemek; ileride "Musteri" veya "Sirket" sınıfları açarsak
// onlarda da bu hazır kalıbı el el üstüne koyup kullanabileceğiz.
struct Address
{
    string cityName; // Şehir adı (Örn: Van)
    string district; // Mahalle/Semt adı (Örn: Vali Mithat Bey)
    int no;          // Kapı numarası (Örn: 19)
}; // <-- Bu noktalı virgül şantiyenin ilk kapısıdır, mühürlenecek!

// --------------------------------------------------------------------------------
// 2. ANA KALIP: ÇALIŞAN KALIBI (Employee Struct) - İLİŞKİ KURMA ANI
// --------------------------------------------------------------------------------
struct Employee
{
    string name;     // Çalışanın adı
    string lastname; // Çalışanın soyadı
    int workerno;    // Çalışanın sicil numarası

    // İŞTE MÜHENDİSLİK SİHİRİ: "Composition / Has-A" İlişkisi!
    // Yukarıda tasarladığımız o bağımsız "Address" kalıbını, bu çalışan kalıbının
    // kalbine "add" isminde küçük bir İÇ KUTU (özellik) olarak gömüyoruz.
    // Meal: "Her çalışanın bir ADRESİ VARDIR (Employee HAS AN Address)."
    Address add;
};

// --------------------------------------------------------------------------------
// ANA ŞANTİYE (MAIN FONKSİYONU)
// --------------------------------------------------------------------------------
int main()
{
    // 1. ADIM: MATRUŞKA DÜZENİNDE NESNE DOĞURMA
    // Stack (Masa) katında kocaman bir "em" çalışan kasası doğuruyoruz.
    // Dikkat et çırak: İlk üç veri (Fehmi, UYAR, 1) ana kasaya giderken;
    // o sinsi iç içe süslü parantez {"Van", "Vali Mithat Bey", 19} o içerideki
    // küçük "add" kutusunun çekmecelerine jilet gibi yerleşir!
    Employee em = {"Fehmi", "UYAR", 1, {"Van", "Vali Mithat Bey", 19}};

    // 2. ADIM: ANA KASANIN ÇEKMECELERİNİ DOĞRUDAN OKUMA
    // Bu değişkenler direkt Employee sınıfının meydanında (public) olduğu için
    // tek bir nokta (.) ile doğrudan içlerini açıp okuyoruz.
    cout << "Name:" << em.name << "\n";
    cout << "Lastname:" << em.lastname << "\n";
    cout << "Worker No:" << em.workerno << "\n";

    // 3. ADIM (BÜYÜK OPERASYON): İKİ NOKTALI SİBER GEÇİŞLER
    // Neden iki kere nokta koyduk çırak? Çünkü hiyerarşiyi sırayla çözüyoruz:
    // "em."     -> Büyük Çalışan kasasının kapısını aç!
    // "add."    -> İçindeki o küçük gömülü Adres kutusuna dokun!
    // "cityName"-> O küçük kutunun da içindekicityName çekmecesini çek ve "Van"ı bas!
    cout << "City Name:" << em.add.cityName << "\n"; // BüyükKutu.IçKutu.Cekmece
    cout << "District:" << em.add.district << "\n";  // BüyükKutu.IçKutu.Cekmece
    cout << "No:" << em.add.no << "\n";              // BüyükKutu.IçKutu.Cekmece

    return 0;
}











*/





/* bugünün tarihi ve doğum tarihimizi girdiğimizde kaç ay ve kaç yıldır hayatta olduğumuzu bize söyliyen bir struct programı yazalaım

================================================================================
                    KALIP (STRUCT) VE NESNE (VARIABLE) KANUNU
================================================================================
* DIŞARIDAKİ TANIM -> RAM'de yer kaplamaz. Sadece bilgisayara "Date kalıbı
  (Şema)               böyle bir şeydir" diye şemayı öğretir.

* MAİN İÇİNDEKİ    -> O fabrikasyon kalıptan gerçek nesneler üretir. RAM'de
  TANIM (Nesne)        fiziksel odalar açar ve içlerine veri koymamızı sağlar.

* ÖZET             -> Tıpkı "int x;" yazar gibi, "struct Date today;" yazarak
                       Date kalıbından gerçek bir 'today' nesnesi doğururuz!
================================================================================

================================================================================
                    NESNE TANIMLAMA VE İSİMLENDİRME KANUNU
================================================================================
* İSİM ESNEKTİR -> "result" yerine "sonuc" yazmak sadece bir etikettir. Kodun
                   çalışmasını zerre etkilemez. Yeter ki içerideki her yerde
                   aynı ismi (sonuc.day, sonuc.month) kullan aslanım!

* SATIR ŞARTTIR -> "struct Date sonuc = {0,0,0};" satırını komple silmek ise
                   cinayettir. Çünkü o satır çıkarma sonuçlarını koyacağımız
                   HAFIZA ODASINI kiralar ve içini temizler ({0,0,0}).

* RETURN KURALI -> En sondaki "return sonuc;" komutu, içeride doldurduğumuz o
                   odanın anahtarını main'e teslim etme anıdır!
================================================================================

================================================================================
                    YUSUF SERCAN İŞÇİ - STRUCT NİHAİ ÇALIŞMA NOTU
================================================================================
1. KALIP VS NESNE -> "struct Date { ... };" ifadesi sadece boş bir şemadır (RAM = 0 byte).
                     "Date today;" ifadesi ise o şemadan üretilen gerçek binadır!

2. MODERN NİZAM   -> Modern C++ şantiyesinde nesne üretirken başa "struct" yazmak
                     ŞART DEĞİLDİR. Direkt "Date today;" yazmak en janti mühendisliktir.

3. SONUC / RESULT -> Fonksiyon içinde açtığımız "Date sonuc = {0,0,0};" satırı
                     çıkarma verilerini yazacağımız HAFIZA ODASIDIR. İsmi esnektir
                     ama RAM'de o alanı kiralamak %100 ZORUNLUDUR!

4. RETURN MANTIĞI -> "return sonuc;" demek, fonksiyonun içeride doldurduğu o 3
                     çekmeceli paketi tek hamlede main'e fırlatması demektir.
================================================================================


// ÖNEMLİ ÖRNEK
// --------------------------------------------------------------------------------
// 1. BÖLÜM: FABRİKA KALIBI (Date Struct) - ŞEMA ANI
// --------------------------------------------------------------------------------
// Burası sadece mimarın çizdiği projedir çırak. RAM'de henüz yer kiralanmaz!
// Sadece bilgisayara "Date kalıbının içinde 3 tane int çekmecesi var" diyoruz.
struct Date
{
    int day;   // Gün çekmecesi
    int month; // Ay çekmecesi
    int year;  // Yıl çekmecesi
}; // <-- Bu noktalı virgül şantiyenin mührüdür, ÇAKILACAK!

// --------------------------------------------------------------------------------
// FONKSİYON PROTOTİPİ (MODERN NİZAM)
// --------------------------------------------------------------------------------
// Bak çırak! Başına eski C'deki gibi "struct Date" yazmadım. Direkt "Date" yazdım!
// Çünkü modern C++'ta struct ismi artık bağımsız, janti bir veri tipidir (Class gibi!).
Date age(Date x, Date y);

// --------------------------------------------------------------------------------
// ANA ŞANTİYE (MAIN FONKSİYONU)
// --------------------------------------------------------------------------------
int main()
{
    // ============================================================================
    // İŞTE SENİN O BÜYÜK AYDINLANMA ANIN! NESNE ÜRETİMİ (VARIABLE DECLARATION)
    // ============================================================================
    // Başına "struct" kelimesini koyma ameleliğini çöpe attık! Tıpkı "int x, y, z;"
    // yazar gibi, direkt "Date" veri tipini kullanarak RAM'de (Stack katında)
    // 3 tane kanlı canlı çelik kasa doğuruyoruz: today, birth ve result!
    Date today, birth, result;

    // 1. ADIM: Kullanıcıdan bugünün tarihlerini alıp çekmecelere dolduruyoruz.
    cout << "Bu gunun tarihini girin(gun,ay,yil):";
    cin >> today.day >> today.month >> today.year;

    // 2. ADIM: Kullanıcıdan doğum tarihlerini alıp çekmecelere dolduruyoruz.
    cout << "Dogum tarihini girin(gun,ay,yil):";
    cin >> birth.day >> birth.month >> birth.year;

    // 3. ADIM (BÜYÜK TAARRUZ): Fonksiyonu çağırıp paketleri fırlatıyoruz!
    // Geriye dönen 3 çekmeceli sonucu da bizim "result" kasasının içine eşitliyoruz.
    result = age(today, birth);

    // 4. ADIM: Sonucu ekrana mermi gibi çakıyoruz.
    cout << "\n=========================================\n";
    cout << " SONUÇ: " << result.year << " yil " << result.month << " ay " << result.day << " gun dur hayattasin!\n";
    cout << "=========================================\n";

    return 0;
}

// --------------------------------------------------------------------------------
// MÜHENDİSLİK MOTORU: YAŞ HESAPLAMA ALGORİTMASI
// --------------------------------------------------------------------------------
// x = bugünün tarihi (today), y = doğum tarihin (birth)
Date age(Date x, Date y)
{
    // Sorduğun o sinsi "sonuc" kutusu! RAM'de çıkarma sonuçlarını yazacağımız
    // içi temiz {0,0,0} dolu geçici bir hafıza odası (kasa) kiralıyoruz.
    // İsmi ister "result" olsun, ister "sonuc", makine için sadece bir etikettir!
    Date sonuc = {0, 0, 0};

    // 🟢 GÜNLERİN SAVAŞI: Küçük günden büyük gün çıkmazsa komşudan 30 gün borç al!
    if(x.day < y.day)
    {
        x.month -= 1;                  // Ay komşusundan 1 ay eksilttik.
        sonuc.day = 30 + x.day - y.day; // O 1 ayı 30 gün olarak bizim güne ekleyip çıkarma yaptık.
    }
    else // Günümüz zaten büyükse borçsuz harçsız düz çıkarma yap.
    {
       sonuc.day = x.day - y.day;
    }

    // 🟢 AYLARIN SAVAŞI: Küçük aydan büyük ay çıkmazsa (Örn: 6. aydan 11. ay!) üst komşudan 12 ay borç al!
    if(x.month < y.month)
    {
        x.year -= 1;                    // Yıl komşusundan 1 yıl eksilttik.
        sonuc.month = 12 + x.month - y.month; // O 1 yılı 12 ay olarak bizim aya ekleyip (12+6=18) çıkarma yaptık.
    }
    else // Ayımız büyükse düz çıkarma yap.
    {
        sonuc.month = x.month - y.month;
    }

    // 🟢 YILLARIN SAVAŞI: En son yılları çıkarıyoruz. Yukarıda aya borç verildiyse x.year zaten eksildi!
    sonuc.year = x.year - y.year;

    // İçi mermi gibi doldurulmuş o "sonuc" paketini main nizamiyesine geri fırlatıyoruz!
    return sonuc;
}


*/







/* typedef komutu , veri türlerine farklı adlar vermemeizi sağlıyor yani herhangi bir takma isim verebiliyorum.


================================================================================
                    TYPEDEF VE STRUCT KANUNU - DERS 92
================================================================================
* TYPEDEF AMACI -> Karmaşık veri tiplerine kısa ve janti bir "Takma Ad" (Alias)
                   vermek için kullanılır.

* C++ DURUMU    -> Modern C++'ta struct'lar için typedef kullanmak GEREKSİZDİR.
                   Çünkü C++ zaten struct ismini doğrudan bir veri tipi yapar.

* SINAV SIRRI   -> Hoca bütte eski C tarzı kod sorarsa veya "typedef ne işe yarar"
                   derse: "Her seferinde 'struct Car' yazma ameleliğini bitirip,
                   direkt 'araba' yazabilmek için C'den kalan bir vasiyettir usta!"
                   diyeceksin!
================================================================================



int main()
{
    typedef int tamsayi; // derleyici tamsayi gördüğü yere aslında int i basıyor.
    typedef char karakter;// derleyici karakter gördüğü yere aslında char ı basıyor.

    tamsayi x=7;
    karakter ch='F';

    cout<<"x:"<<x<<"\n";
    cout<<"ch:"<<ch<<"\n";



    return 0;
}


// --------------------------------------------------------------------------------
// TYPEDEF ILE STRUCT TANIMLAMA PROTOKOLÜ
// --------------------------------------------------------------------------------
// "typedef" bilgisayara şu emri verir: "Şef, sana aşağıda tasarladığım bu yapıyı
// bundan sonra en altta yazan o janti takma adla (araba) çağırma lüksü veriyorum!"
typedef struct Car
{
    string brand; // Arabanın markası (Özellik / Attribute)
    string model; // Arabanın modeli (Özellik / Attribute)
    int year;     // Arabanın üretim yılı (Özellik / Attribute)
} araba; // <-- İŞTE TAKMA AD (ALIAS)! Artık bu yapının piyasadaki adı "araba" oldu.

// --------------------------------------------------------------------------------
// JANTİ FONKSİYON: DIŞARIDAN STRUCT POINTER'I (ADRESİ) ALAN MOTOR
// --------------------------------------------------------------------------------
// Bak çırak! Yukarıda takma adı "araba" yaptığımız için, fonksiyonun parametresine
// "araba* ptr" yazmak mühendislik nizamına daha uygundur (Eski C'de "Car*" yazsaydın patlardı).
// İçeriye nesnenin kendisi değil, adresi (kuryesi) geldiği için de "." yerine "->" kullandık!
void showMe(araba* ptr)
{
    // "ptr->brand" demek = "Kuryenin elindeki adrese git ve brand çekmecesini aç" demektir!
    cout << "Brand:" << ptr->brand << "\n";
    cout << "Model:" << ptr->model << "\n";
    cout << "Year:" << ptr->year << "\n";
}

// --------------------------------------------------------------------------------
// ANA ŞANTİYE (MAIN FONKSİYONU)
// --------------------------------------------------------------------------------
int main()
{
    // 1. ADIM: "typedef" sayesinde "struct Car myCar1" yazma ameleliğinden kurtuluyoruz!
    // Direkt o janti takma adı (araba) kullanarak nesnemizi mermi gibi doğuruyoruz:
    araba myCar1 = {"BMW", "X6", 1999};

    // 2. ADIM: Düz listeleme yapıyoruz (Elimizde adres değil bizzat nesnenin kendisi
    // olduğu için elini kolunu sallayarak Nokta '.' işaretini kullanabiliyorsun).
    cout << "--- Main Icinden Dogrudan Okuma ---\n";
    cout<<"Brand:"<<myCar.1
    cout << "Brand:" << myCar1.brand << "\n";
    cout << "Model:" << myCar1.model << "\n";
    cout << "Year:" << myCar1.year << "\n";
    cout << "---------------------------------\n";

    // 3. ADIM (BÜYÜK OPERASYON): Yukarıdaki janti fonksiyonu çağırıyoruz!
    // Fonksiyon bizden pointer (adres) beklediği için, arabamızın başına "&" tapu
    // işaretini koyarak adresini (&myCar1) kuryeye teslim ediyoruz!
    cout << "--- Fonksiyon Icinden Pointer Ile Okuma ---\n";
    showMe(&myCar1);

    return 0;
}






*/






/* C++ da istisnalar(try, catch,  throw) ÖNEMLİDİ İLERİSİ İÇİN SİBER İLE ALAKLAI
// C++ da öngörülmeyen bazı hatalara karşı bazı hata yakalama araçları mevcut bunun için yukarıdaki 3 tane anahtar sözcüğü kullanıcaz.

================================================================================
                    C++ ISTISNA (EXCEPTION) YÖNETİM PROTOKOLÜ
================================================================================
* TRY BLOKU     -> Tehlikeli kodların yazıldığı, derleyicinin gözünü dört açıp
                   izlediği siber mayın tarlasıdır.

* THROW KOMUTU  -> Hata fark edildiği an normal kod akışını kesip, acil durum
                   verisini (pimi çekilmiş bombayı) havaya fırlatma anıdır.

* CATCH BLOKU   -> Fırlatılan veriyi TİPİNE GÖRE (int ise int, char ise char)
                   havada yakalayıp programın çökmesini (crash) engelleyen imha ekibidir.

* CATCH(...)    -> Tipi ne olursa olsun fırlatılan her şeyi yakalayan, şantiyenin
                   en son fedai siber kalkanıdır!
================================================================================

int main()
{
    // --------------------------------------------------------------------------------
    // TRY: GÜVENLİ İZLEME BÖLGESİ
    // --------------------------------------------------------------------------------
    try
    {
        int age;
        cout << "Enter your age: ";
        cin >> age;

        if (age >= 18)
        {
            cout << "Access granted: You are old enough\n";
        }
        else
        {
            // İŞLER SARPA SARDI! Yaş küçükse siber bombayı fırlatıyoruz!
            // Senin dediğin gibi buraya janti bir hata kodu (Örn: 505) çakıyoruz.
            // Bu "throw" komutu çalıştığı an, altındaki hiçbir satır çalışmaz, kod anında catch'e ışınlanır!
            throw 505;
        }

        // EĞER THROW ÇALIŞIRSA, BİLGİSAYAR BU SATIRA ASLA UĞRAMAZ!
        cout << "Bu satır sadece her şey yolundaysa çalışır çırak!\n";
    }
    // --------------------------------------------------------------------------------
    // CATCH: BOMBA İMHA EKİBİ (Sadece int Hata Kodlarını Yakalar)
    // --------------------------------------------------------------------------------
    catch (int errNum)
    {
        // Havada uçan o 505 sayısını "errNum" değişkeniyle yakaladık!
        cout << "\n[SİBER ALARM] Access denied: You must be at least 18 years old!\n";
        cout << "Error Code: " << errNum << " (Yaş Sınırı İhlali)\n";
    }
    // --------------------------------------------------------------------------------
    // CATCH(...): YEDEK GÜVENLİK KALKANI (Catch-All)
    // --------------------------------------------------------------------------------
    catch (...)
    {
        // Eğer yukarıdaki int haricinde sinsi bir double veya string fırlatılsaydı,
        // programın çökmesini bu fedai üç nokta kurtaracaktı!
        cout << "Bilinmeyen bir istisna tipi yakalandı, şantiye güvende!\n";
    }

    cout << "\nProgram çökmeden, jilet gibi normal akışına devam etti ve bitti.\n";
    return 0;
}




int main()
{

    try
    {



        int x,y;
        cout<<"Enter the first number:"
        cin>>x;
        cout<<"Enter the second number:";
        cin>>y;
        if(y==0)
        {
            throw -1;

        }
        else
        {
            cout<<x/y<<"\n";
        }
      }
        catch(...)
        {
            cout<<"Warning! A number cannot be divided by zero\n";
        }




    return 0;
}










*/






/* SMART POİNTERLAR

-Smart pointerlarda amaç hatalara neden olan new ve delete operetörleriyle açıktan açığa bellek tahsisini kodumuzda yapmamamızı sağlamak



================================================================================
            KTÜ YAZILIM MÜHENDİSLİĞİ - BÜTÜNLEME TAARRUZU REÇETESİ
                C++ SMART POINTER (AKILLI POINTER) KANUNLARI
================================================================================
Geliştirici / Çırak : Yusuf Sercan İşçi
Eğitmen / Usta       : Gemini
Ders Kodu / Konu     : C++ OOP - Modern Bellek Yönetimi (Ders 95+)
================================================================================

--------------------------------------------------------------------------------
1. BÖLÜM: ESKİ DÜZENİN REZİLLİĞİ (NEDEN SMART POINTER?)
--------------------------------------------------------------------------------
Klasik C++ şantiyesinde Heap'ten (Boş Arsa) yer kiralamak için "new", o arsayı
belediyeye iade etmek için "delete" baltasını kullanıyorduk. Buna "Raw Pointer"
(Ham / Amele Pointer) denir.

Bu amele nizamında iki tane devasa siber güvenlik faciası yaşanıyordu:

🚨 REZİLLİK A) Bellek Sızıntısı (Memory Leak):
Yazılımcı "new" ile arsayı kiralıyor ama aşağıda "delete" yazmayı UNUTUYOR! Program
çalıştıkça RAM'i şişiriyor ve en sonunda sistem kilitleniyor.

🚨 REZİLLİK B) Serseri Pointer (Dangling Pointer):
Yazılımcı "delete x;" diyerek arsayı siliyor. Ama "x" kuryesinin avucunda hala
o eski arsanın adresi yazıyor. Silinmiş adrese gidip "cout << *x;" diyerek veri
okumaya çalışınca program siber krize giriyor (Undefined Behavior).

--------------------------------------------------------------------------------
2. BÖLÜM: AKILLI POINTER (SMART POINTER) DEVRİMİ NEDİR?
--------------------------------------------------------------------------------
Smart Pointer'lar, ham pointer'ları (kuryeleri) sarmalayan janti birer "Kapsayıcı Sınıftır"
(Wrapper Class).

MANTIĞI: Bizim dünden beri ilmek ilmek işlediğimiz o meşhur DESTRUCTOR (~Yıkıcı Motor)
mekanizmasını arkada otomatik kullanırlar!

Akıllı pointer nesnesi, içinde bulunduğu süslü parantezin (};) sonuna geldiği an (yani
ömrü bittiğinde), kendi içindeki Destructor motorunu tetikler ve kimseye eyvallahı
olmadan "delete" komutunu arkada otomatik çalıştırır!

Yazılımcının "delete" yazma zorunluluğu KÖKTEN BİTER! Bellek sızıntısı ve serseri
pointer faciaları tarihe karışır.

--------------------------------------------------------------------------------
3. BÖLÜM: ŞANTİYEDEKİ REALİTE (KOD ANALİZİ)
--------------------------------------------------------------------------------

A) ESKİ VE TEHLİKELİ TARZ (Ham Pointer):
    int main() {
        int* x = new int;
        *x = 7;
        delete x; // Baltayı elle vurmak zorundasın! Unutursan şantiye patlar.
        return 0;
    }

B) MODERN VE GÜVENLİ TARZ (Smart Pointer - unique_ptr):
    #include <memory> // <-- Akıllı pointer silahları bu kütüphanede saklıdır!

    int main() {
        // "new" yok, "make_unique" motoru bizim yerimize arsayı kiralar:
        unique_ptr<int> x = make_unique<int>();

        *x = 7; // Kullanım mantığı ham pointer ile tıpatıp aynıdır.

        cout << *x;

        // "delete x;" SATIRI YOK!
        // Bu süslü parantez kapandığı an RAM kendi kendini jilet gibi temizler!
        return 0;
    }

--------------------------------------------------------------------------------
4. BÖLÜM: BÜT SINAVINDA HOCANIN SORACAĞI SMART POINTER TÜRLERİ
--------------------------------------------------------------------------------
Hoca bütte "Bana akıllı pointer türlerini say çırak" derse 3 janti silahı masaya koyacaksın:

1. `unique_ptr` (Eşsiz Kurye):
Arsanın tapusu sadece ve sadece TEK BİR pointer'a aittir. Klonlanamaz, kopyalanamaz!
"Bu arsa sadece benim, başka kurye buraya bakamaz" der. En hızlı ve en az yer
kaplayan akıllı pointer'dır.

2. `shared_ptr` (Ortak Kurye):
Aynı arsayı birden fazla pointer ortaklaşa yönetebilir. Arkada sinsi bir "Referans
Sayacı" (Reference Counter) tutar. Arsayı kaç kurye tutuyorsa sayar. Ne zaman ki
o arsayı tutan EN SON kuryenin de işi biter (Sayaç 0 olur), arsa o zaman otomatik silinir.

3. `weak_ptr` (Zayıf/Gözlemci Kurye):
`shared_ptr`'ların RAM'de oluşturabileceği o sinsi kısır döngüleri (Circular Dependency)
kırmak için kullanılan, referans sayacını artırmayan sadece uzaktan izleyen gözlemci kuryedir.

================================================================================
                   MÜHENDİSLİK MOTTOSU (KAFANA KAZI!)
"Modern C++ şantiyesinde 'new' ve 'delete' kelimelerini açıktan yazmak amatörlüktür.
Akıllı mühendis bellek yönetimini otomatiğe bağlar, 'smart pointer' kullanır;
böylece siber güvenlik açıklarına ve bellek sızıntılarına kapıyı ebediyen kapatır!"
================================================================================




1. Bölüm: Geleneksel (Hatalı/Tehlikeli)
int main()
{
    // Heap'ten (Boş Arsa) 7 elemanlık bir int dizisi kiralıyoruz.
    // ptr kuryesi bu arsanın başlangıç adresini (Örn: 0x99) avucunda tutuyor.
    int* ptr = new int[7];
    int number, i;
    int j = 5; // Orijinal kodda j'nin içi boş kalmıştı, sinsi bir çöp değer basmasın diye 5 çaktık.

    cout << "Enter a number less than 10: ";
    cin >> number;

    // --------------------------------------------------------------------------------
    // TRY: GÜVENLİ İZLEME BÖLGESİ
    // --------------------------------------------------------------------------------
    try
    {
        if (number <= 10)
        {
            cout << "Correct\n";
            for (i = 0; i < 7; i++) {
                ptr[i] = j; // Dizinin içini dolduruyoruz.
            }

            // HER ŞEY YOLUNDAYSA: Arsayı temizleyip kuryeyi boşa çıkarıyoruz.
            delete[] ptr;
            ptr = nullptr;
            cout << "Arsa basariyla silindi, bellek temiz.\n";
        }
        else
        {
            // 🚨 SİNSİ TUZAK ANIDIR!
            // Kullanıcı 10'dan büyük girerse, bu "throw" komutu çalıştığı an
            // kod altındaki hiçbir satıra bakmadan DIREKT catch bloğuna ışınlanır!
            // Yukarıdaki "delete[] ptr;" satırı ASLA ÇALIŞMAZ!
            throw 505;
        }
    } // <-- try bloğunun kapısı burada jilet gibi kapandı!
    // --------------------------------------------------------------------------------
    // CATCH: BOMBA İMHA EKİBİ
    // --------------------------------------------------------------------------------
    catch (int ex)
    {
        // Program çökmedi, buradaki uyarıyı bastı ama Heap'teki o 7 odalı arsa
        // silinmeden RAM'de asılı kaldı! Al sana BELLEK SIZINTISI (Memory Leak)!
        cout << "Warning! Please enter a number less than 10. Error Code: " << ex << "\n";
    }

    return 0;
}



2. Bölüm: Aynı Kodun Modern "Smart Pointer" (unique_ptr) Hali

int main()
{
    // ============================================================================
    // MODERN MÜHENDİSLİK NİZAMI: UNIQUE_PTR (Eşsiz Akıllı Pointer)
    // ============================================================================
    // 1. Ne "new" dedik ne de aşağıda "delete" ameleliği yapacağız!
    // 2. "make_unique<int[]>(7)" komutu Heap'ten 7 odalı arsayı bizim yerimize kiralar.
    unique_ptr<int[]> ptr = make_unique<int[]>(7);

    int number, i;
    int j = 5;

    cout << "Enter a number less than 10: ";
    cin >> number;

    try
    {
        if (number <= 10)
        {
            cout << "Correct\n";
            for (i = 0; i < 7; i++) {
                ptr[i] = j; // Kullanım mimarisi ham pointer ile birebir aynıdır!
            }

            // 🚨 DİKKAT: "delete[] ptr;" YAZMIYORUZ! GEREK YOK!
            cout << "Normal sartlarda blok bitince otomatik silinecek.\n";
        }
        else
        {
            // Kullanıcı 20 girdi ve throw 505 fırlatıldı! Kod anında catch'e kaçıyor.
            // AMA DUR! Kod bu try süslü parantezinden dışarı fırlayıp kaçarken,
            // ptr akıllı pointer'ı "Hooop nereye? Benim ömrüm bu blokta bitti!" der,
            // arkadaki o meşhur DESTRUCTOR (~Yıkıcı Motor) otomatik tetiklenir
            // ve Heap'teki o 7 odalı arsayı saniyede RAM'e iade eder!
            throw 505;
        }
    }
    catch (int ex)
    {
        // Kod catch'e geldiğinde arsa arkada çoktan tertemiz silinmiş durumdadır çırak!
        cout << "Warning! Please enter a number less than 10. Error Code: " << ex << "\n";
    }

    return 0;
}


================================================================================
            KTÜ YAZILIM MÜHENDİSLİĞİ - BÜTÜNLEME TAARRUZU REÇETESİ
             HAM POINTER VS SMART POINTER KARŞILAŞTIRMA RAPORU
================================================================================

--------------------------------------------------------------------------------
Kriter 1: Bellek Yönetimi Sorumluluğu (Kim Silecek?)
--------------------------------------------------------------------------------
* HAM POINTER   : Bütün yük yazılımcının omuzlarındadır. "new[]" dediysen, elinle
                  "delete[]" yazmak zorundasın. Unuttuğun an şantiye patlar.
* SMART POINTER : Sorumluluk bilgisayardadır. Akıllı pointer nesnesinin süslü
                  parantezi (ömrü) bittiği an, arkadaki Yıkıcı Motor (~Destructor)
                  arsayı RAM'e otomatik iade eder.

--------------------------------------------------------------------------------
Kriter 2: "try-catch" Esnasındaki Güvenlik (Exception Safety)
--------------------------------------------------------------------------------
* HAM POINTER   : Tam bir siber fiyaskodur! "throw" fırlatıldığı an kod alt satırdaki
                  "delete[] ptr;" temizlik emrini görmeden doğrudan catch'e kaçar.
                  Bu yüzden her throw durumunda RAM'de bir "Bellek Sızıntısı"
                  (Memory Leak) bombası kalır.
* SMART POINTER : "İstisna Güvenliği" (%100 Exception Safety) sağlar. throw ile
                  kod hangi saniyede catch'e kaçarsa kaçsın, bloktan çıkıldığı an
                  akıllı pointer otomatik imha mekanizmasını çalıştırır. Sızıntı sıfırdır!

--------------------------------------------------------------------------------
Kriter 3: Serseri Pointer (Dangling Pointer) Engellemesi
--------------------------------------------------------------------------------
* HAM POINTER   : "delete[] ptr;" dedikten sonra bile ptr kuryesi hala eski silinmiş
                  adresi tutmaya devam eder (Serseri Pointer). ptr=nullptr; yazmayı
                  unutursan siber saldırganlar o eski adrese sızabilir.
* SMART POINTER : Kendisi imha olurken adresi de tamamen yok ettiği için serseri
                  pointer açıklarına kapıyı ebediyen kapatır.

================================================================================
                       USTA ÖZETİ (SINAVDA HAYAT KURTARIR)
"Geleneksel pointer'lar try-catch mimarisiyle birleştiğinde sinsi birer bellek
düşmanına dönüşür; çünkü throw komutu temizlik satırlarını atlar. Smart pointer'lar
ise nesne yönelimli programlamanın (OOP) Destructor gücünü arkasına alarak,
hata çıksa bile RAM'i jilet gibi temiz tutar!"
================================================================================

//unique_ptr (Eşsiz Kurye)
// Classlarla smart pointer kullanmak


class Employee
{
public:
    string name="Fehmi";
    int salary=7000;
    Employee()
    {
        cout<<"Constructor invoked\n";

    }
    ~Employee()
    {
       cout<<"Destructor invoked\n";
    }

};

int main()
{
    // Akıllı kuryemiz nesneyi Heap'te var etti
    unique_ptr<Employee> ugPtr = make_unique<Employee>();

    // İÇERİDEKİ ATTRIBUTELERİ ÇAĞIRMA ANI:
    // "ugPtr->name" demek = "Kuryenin elindeki adrese git, o nesnenin içindeki 'name' çekmecesini aç!" demektir.
    cout << "Calisan Adi: " << ugPtr->name << "\n";     // Ekrana Fehmi basar!
    cout << "Calisan Maasi: " << ugPtr->salary << "\n"; // Ekrana 7000 basar!

    // İstersek değerleri değiştirebiliriz de:
    ugPtr->salary = 9500;
    cout << "Yeni Maas: " << ugPtr->salary << "\n";

    // 🚨 BÜYÜK SİBER MUCİZE ANIDIR!
    // Kod tam "return 0;" satırına geldiğinde main'in süslü parantezi kapanır.
    // ugPtr akıllı pointer'ı imha olurken, gider Heap'teki o Employee nesnesini de otomatik siler!
    // Nesne silindiği için Class'ın içindeki DESTRUCTOR (~Yıkıcı Motor) otomatik tetiklenir
    // ve ekrana o şanlı "Destructor invoked" yazısı basılır! Senin "delete" yazmana gerek kalmaz!

    return 0;
}

================================================================================
                CLASS’LARDA SMART POINTER YÖNETİM KANUNU
================================================================================
* NESNE ÜRETİMİ -> "make_unique<Class_Adi>()" satırı Heap'ten yer kapar ve
                   sınıfın CONSTRUCTOR'ını otomatik tetikler.

* ÖZELLİK ÇAĞIR -> Elimizdeki yapı bir pointer (kurye) olduğu için, içerideki
                   değişkenlere (name, salary) janti OK (->) işaretiyle ulaşılır!
                   Örn: ugPtr->name

* OTOMATİK İMHA -> "main" fonksiyonu bittiğinde akıllı pointer hafızadan silinirken,
                   nesnenin DESTRUCTOR (~Yıkıcı) motorunu arkada otomatik çalıştırır!
                   Yazılımcı bellek temizliğini takip etmek zorunda kalmaz!
================================================================================


================================================================================
                    SHARED_PTR (ORTAK POINTER) ANAYASASI
================================================================================
* PAYLAŞIM      -> unique_ptr'ın aksine kopyalanabilir. Aynı Heap arsasına birden
                   fazla shared_ptr kuryesi aynı anda jilet gibi bakabilir.

* KONTROL ODASI -> Arkada görünmez bir "Referans Sayacı" (Use Count) tutulur.
                   Arsayı tutan kurye sayısı burada saniye saniye sayılır.

* SİLİNME ANI   -> Arsa, kuryelerden biri silindiğinde DEĞİL; o arsayı tutan EN SON
                   kuryenin de ömrü bittiğinde (Sayaç = 0 olduğunda) otomatik silinir!
================================================================================


================================================================================
                SHARED_PTR İÇİN NOKTA (.) VE OK (->) KANUNU
================================================================================
* NOKTA (.)     -> Kuryenin KENDİSİNE dokunur.
                   "shPtr.use_count()" ve "shPtr.get()" kuryenin kendi üzerindeki
                   akıllı yönetim düğmeleridir. Heap'teki nesneyle ilgisi yoktur.

* OK (->)       -> Kuryenin tuttuğu HEDEFE (Heap'e) ışınlar.
                   "shPtr->getName()" kuryeyi aşarak doğrudan Heap'teki Employee
                   nesnesinin içindeki fonksiyonu tetikler.

* ALTIN KURAL   -> Kuryeye emir verirken NOKTA (.),
                   Kuryenin baktığı nesneye emir verirken OK (->) kullanılır!
================================================================================

================================================================================
                    YUSUF SERCAN İŞÇİ - NOKTA VE OK KESİN KANUNU
================================================================================
* shPtr->getName() -> Kuryeyi aşar, HEAP'teki binaya gider ve getName() odasını açar.
                      (Ok işareti her zaman hedefteki nesneye hizmet eder!)

* shPtr.get()      -> Heap'e gitmez! STACK'teki kuryenin üzerindeki düğmeye basar.
                      Kuryenin avucunda tuttuğu o hedef adres kodunu basar.

* NEDEN HATA?      -> "shPtr->get()" yazarsak, Heap'teki Employee sınıfının içinde
                      "get()" fonksiyonu arar. Sınıfta böyle bir fonksiyon
                      olmadığı için derleyici şantiyeyi durdurur!
================================================================================


// Shared(paylaşılmış) Pointerlar

class Employee
{
    // Erişim belirteci yazmadığımız için bu iki değişken varsayılan olarak PRIVATE (Gizli)!
    string name = "Fehmi";
    int salary = 7000;

public:
    Employee()
    {
        cout << "Constructor invoked (Insaat basladi, nesne dogdu)\n";
    }
    ~Employee()
    {
        cout << "Destructor invoked (Ortaklar bitti, arsa RAM'den silindi)\n";
    }

    // Kapsülleme (Encapsulation) Fonksiyonları: Private verilere dışarıdan güvenli erişim sağlar.
    int getSalary() { return salary; }
    string getName() { return name; }
};

int main()
{
    // 1. ADIM: Heap'te bir nesne kurup ilk shared_ptr ortak kuryesini (shPtr) doğuruyoruz. (Sayaç = 1)
    shared_ptr<Employee> shPtr = make_shared<Employee>();

    // 2. ADIM: Aynı adresi shPtr2 ve shPtr3 kuryelerine de kopyalıyoruz.
    // Her kopyalamada arkadaki sinsi referans sayacı otomatik olarak tırmanır!
    auto shPtr2 = shPtr; // Sayaç = 2 oldu
    auto shPtr3 = shPtr; // Sayaç = 3 oldu

    // Ok (->) işaretiyle adresteki nesnenin içindeki public fonksiyonları tetikliyoruz.
    cout << "Name:" << shPtr->getName() << "\n";
    cout << "Salary:" << shPtr->getSalary() << "\n";

    // Nokta (.) işaretiyle shared_ptr'ın kendi ham RAM adres haritasını okuyoruz.
    // Göreceksin ki shPtr.get(), shPtr2.get() ve shPtr3.get() Hepsi AYNI adresi basacak!
        cout << "Address:" << shPtr.get() << "\n"; // burada niye . kullanılıp yularıda neden -> kullanlıyor mantığı şu aslında  shPtr->getName diyince diyorsunki bellekteki name i bana getir -> bu işe yarıyor sana bellekteki yeri  getirmesi istiyor  shPtr.get() de ise sana diyorki bana direkt tutuğun adresi getir yani shPtr nin adresini bana ver . yı ü yüzden kullanıyoruz eğer burada -> kullansaydık hata alırdık

    // use_count() komutu şu an o gizli odada kaç tane ortağın nöbet tuttuğunu söyler.
    cout << "Use Count:" << shPtr.use_count() << "\n"; // Ekrana 3 basar!

    // main'in kapısından (};) çıkarken sayaç sıfırlanacak ve Destructor otomatik tetiklenecek!
    return 0;
}



*/




/* Enum (Numaralandırma) Sistemi Kullanımı


================================================================================
                    YUSUF SERCAN İŞÇİ - ENUM GERÇEK KANUNU
================================================================================
* MASKEDİR      -> Enum içindeki monday, sunday gibi kelimeler sadece yazılımcı
                   için bir maskedir. Makine onları direkt 0, 1, 6 diye okur.

* POINTER DEĞİL -> "Days d;" satırıyla açılan d değişkeni bir pointer DEĞİLDİR!
                   İçinde direkt sayı tutan düz bir int kutusudur.

* NEDEN HATA?   -> d bir pointer olmadığı için başına yıldız (*d) koyulamaz!
                   Kutunun içinde adres değil direkt sayı (6) olduğu için, cout
                   hiçbir takla atmadan o sayıyı ekrana basar!
================================================================================

enum Days
{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

int main()
{
   Days d;      // Tipi Days (yani arkada int) olan "d" adında düz bir hafıza kutusu açtın.
d = sunday;  // d kutusunun içine "sunday" maskesini, yani 6 sayısını  koydun.
cout << d;   // Ekrana d kutusunun içindeki değeri bastın. indeks numarası oluyor o da

HATA Deneme 1: cout << &d;
Bu komut hata vermez aslanım, ama ekrana 6 da basmaz. &d demek, o d kutusunun Stack (Masa) katında durduğu evin ham RAM adresini (Örn: 0x7ffe...) söker getirir.
Sen adres kutusunu açmadın, sadece kutunun adresini ekrana bastın.


HATA Deneme 2: cout << *d; (Büyük Hatanın Sebebi)
İşte derleyicinin şantiyeyi durdurduğu an burasıdır çırak! Yıldız (*) işareti (Dereference) sadece ve sadece içinde adres tutan pointer'ların başına konur! Bilgisayar bakar: "Yusuf Sercan bu d değişkeninin başına yıldız koymuş. d bir pointer mı? Hayır, d düz bir enum (int) değişkeni.
Düz sayının başına yıldız koyup hangi adrese ışınlanmamı bekliyor bu çocuk?" der ve kod derlenmeden canlı yayında hatayı fırlatır!



    switch(d)
    {
        case monday:cout<<"Monday\n";break;
        case tuesday:cout<<"Tuesday\n";break;
        case wednesday:cout<<"Wednesday\n";break;
        case thursday:cout<<"Thursday\n";break;
        case friday:cout<<"Friday\n";break;
        case saturday:cout<<"Saturday\n";break;
        case sunday:cout<<"Sunday\n";break;

    }





    return 0;
}

enum  fuel
{
    gas,
    diesal,
    lpg,
    hybird,
    electric
};

int main()
{
    fuel f;
    f=fuel::gas;
    if(f==fuel::gas)
    {
        cout<<"Gas\n";

    }



    return 0;
}





fuel::gas Mühendisçe Meali: "Şef, doğrudan 'gas' yazıp ortalığı bulandırmıyorum.
Git, o yukarıda tasarladığım fuel isimli enum paketinin içindeki o janti gas maskesini (yani 0 sayısını) bana getir!"


*/





//OTEL UYGULMASI ÖNEMLİ ÖRNEK!!!
// Ode rezervasyonu
// Oda boşaltma
// Dolu oda sayısı
// Oda raporu
// Toplam gelir





/* PREPROCESSOR (ÖNİŞLEMCİ KOMUTLARI)


================================================================================
                    YUSUF SERCAN İŞÇİ - ÖNİŞLEMCİ (PREPROCESSOR) KANUNU
================================================================================
* KİMLİĞİ       -> Kod derlenmeden (pişirilmeden) önce çalışan, kod üzerinde
                   metinsel hazırlık ve düzenleme yapan gizli şantiye ustasıdır.

* SİNSİ KURAL   -> Başına "#" işareti gelen hiçbir komutun sonuna NOKTALI VİRGÜL
                   (;) KONMAZ, araya EŞİTTİR (=) YAZILMAZ!

* GÜÇ ÇARPANIZ  -> #define ile yapılan tanımlamalar RAM bellek bölgesini asla
                   işgal etmez, doğrudan kod seviyesinde değişim sağlar!
================================================================================


Önişlemci (Preprocessor) Nedir? (Şantiyenin Ön Hazırlık Ustası)
Amatörler zanneder ki biz derle butonuna bastığımızda derleyici direkt bizim yazdığımız kodu okur. YALANDIR ÇIRAK! C++ şantiyesinde derleyiciden (Compiler) önce sahaya giren, adı gizli bir usta vardır: Önişlemci (Preprocessor).
Başında kare işareti (#) olan tüm satırlar bu ustanın emirleridir.


NOT: yani kodlarımız derlenmeden önce bu önişlemci komutlarımız çalışıyor örnek olarak #includeler

================================================================================
                    YUSUF SERCAN İŞÇİ - MAKRO VE DİZİ KANUNU
================================================================================
* DOĞRU MANTIK  -> #define ARR_SIZE RAM'de yer kaplamaz, büyük projelerde tek
                   merkezden (en üstten) tüm kodun boyutunu yönetmeyi sağlar.

* SİNSİ GERÇEK  -> C++'ta normal değişkenler (int n=7;) standart dizilerin içine
                   boyut olarak doğrudan yazılamaz. #define ise ham sayı bastığı
                   için derleyicinin kurallarına %100 uyum sağlar.

* ALTIN KURAL   -> Makro tanımlandıktan sonra kodun gövdesinde bir daha asla
                   elle "7", "10" gibi sabit sayılar yazılmaz; her yere ARR_SIZE
                   çakılır ki sistem tek merkezden kusursuzca güncellenebilsin!
================================================================================

================================================================================
          C++ ÖNİŞLEMCİ (PREPROCESSOR) KOMUTLARI ARŞİVİ - YUSUF SERCAN İŞÇİ
================================================================================
* BÜTÜNLEME NOTU: Başına "#" gelen bu komutlar derleyiciden (Compiler) önce çalışan
  Önişlemci Ustası'nın emirleridir. Kod seviyesinde metinsel düzenleme yaparlar.
  Asla sonlarına NOKTALI VİRGÜL (;) KONMAZ, araya EŞİTTİR (=) YAZILMAZ!
================================================================================

1. KÜTÜPHANE VE DOSYA DAHİL ETME KOMUTU
--------------------------------------------------------------------------------
#include : Dışarıdaki bir dosyanın veya kütüphanenin içeriğini, yazıldığı satıra
           jilet gibi kopyalayıp yapıştırır.
    * Kullanım 1: #include <iostream>  -> Sistem/Standart kütüphaneleri çağırırken (Açılı ayraç).
    * Kullanım 2: #include "class_hotel.h" -> Kendi yazdığımız yerel dosyaları çağırırken (Tırnak).

2. MAKRO TANIMLAMA VE İPTAL ETME KOMUTLARI
--------------------------------------------------------------------------------
#define : Siber "Bul-Değiştir" komutudur. Belirtilen kelimeyi kod derlenmeden önce
          ham değere dönüştürür. RAM'de asla yer kaplamaz!
    * Örnek: #define ARR_SIZE 7  -> Kodda görülen her ARR_SIZE artık 7'dir.
    * Örnek (Fonksiyon Makrosu): #define KAREAL(x) ((x)*(x)) -> Kod seviyesinde hızlı hesaplama yapar.

#undef  : Daha önce #define ile tanımlanmış bir makroyu siber hafızadan siler/iptal eder.
    * Örnek: #undef ARR_SIZE -> Bu satırdan sonra ARR_SIZE kelimesi derleyici için anlamsızlaşır.

3. SİBER SİGORTA VE KOŞULLU DERLEME KOMUTLARI (MÜHENDİSLİK ZIRHLARI)
--------------------------------------------------------------------------------
#ifdef  : "If defined" (Eğer tanımlandıysa) anlamına gelir. Belirtilen makro daha
          önce #define ile tanımlandıysa altındaki kod bloklarını derleme sürecine sokar.
    * Örnek:
        #ifdef DEBUG
            cout << "Şu an test modundayız, siber loglar basılıyor.\n";
        #endif

#ifndef : "If not defined" (Eğer tanımlanmadıysa) anlamına gelir. Projede çoklu dosya
          çakışmalarını engellemek için kullanılan en eski ve şanlı siber sigortadır.
    * Örnek (Header Guard):
        #ifndef CLASS_HOTEL_H
        #define CLASS_HOTEL_H
        // Sınıf şeması buraya yazılır, böylece dosya üst üste iki kez yüklenmez!
        #endif

#if     : Bildiğimiz "if" şartının derleme öncesi versiyonudur. Belirli bir matematiksel
          veya mantıksal şarta göre kodun o bölümünün derlenip derlenmeyeceğine karar verir.
    * Örnek:
        #if VERSION == 2
            // Sadece versiyon 2 ise buradaki kodlar makine diline çevrilir.
        #endif

#elif   : "Else if" şartının önişlemci halidir. #if şartı doğru değilse bu şarta bakılır.

#else   : "Else" ifadesinin önişlemci halidir. Yukarıdaki hiçbir #if veya #elif şartı
          doğru değilse devreye girecek olan son koddur.

#endif  : Başlatılan tüm #if, #ifdef, #ifndef koşullu derleme bloklarını kapatan
          zorunlu mühürdür! Sonu kapatmazsan şantiye havaya uçar.

4. DERLEYİCİYE ÖZEL TALİMATLAR VE HATA KOMUTLARI
--------------------------------------------------------------------------------
#pragma : Derleyicinin (Compiler) kendisine özel talimatlar vermek için kullanılır.
          En janti kullanımı bütte hayat kurtaran tek satırlık zırhtır:
    * Örnek: #pragma once -> Dosyanın projeye sadece BİR KERE dahil edilmesini garanti eder.
                            (#ifndef zırhının modern ve kısa halidir).

#error  : Derleme anında önişlemcinin bilerek ve isteyerek kırmızı hata fırlatmasını sağlar.
          Genellikle kritik sistem gereksinimleri karşılanmadığında derlemeyi sabote etmek için kullanılır.
    * Örnek:
        #if ARR_SIZE < 5
            #error "Çırak, dizi boyutu 5'ten küçük olamaz, şantiyeyi kilitliyorum!"
        #endif

#line   : Derleyicinin hata verirken gösterdiği satır numaralarını ve dosya isimlerini
          manüel olarak değiştirmeye yarar (Çok nadir kullanılır, siber hile gibidir).

================================================================================
* BÜT STRATEJİSİ: Makrolar RAM dostudur, koşullu derlemeler (#ifndef) ise büyük
  projelerin çakışmasını önleyen beton gibi kolonlardır. Bu rehber Yusuf Sercan
  İşçi'nin büt sınavında tam puan alması için usta nizamıyla mühürlenmiştir!
================================================================================




#define PI 3.14159 // tanımlamak demek ingilizcede diyelim bizim bi PI sayımız var bunu gelip burada tanımlıyabiliriz fark şudur RAM de hiçbir yer kaplamaz
#define ARR_SIZE 7 // şimdi akıllara şu soru gelebilir tmm da biz normal int main içinde dizi tanımlarız dizinin kaç elemanlı olucağını int main içinde de tanımlıyabiliroyuz yani niye uğraşalım
//bunun sebebleri 1. önişlemci komutları RAM de yer kaplamaz 2. ise en önemlisi diyelim büyük bir proje var o dizinin elaman sayısını değiştirmemiz gerekti tek tek kodda onu aramak yerine direkt en üstte #define nın yanından hemen değiştricez
#define P cout // şimdi bu çok ilgimi çekti ben #define P cout dedim ya aşağıda artık cout dememe gerek yok onun yerine P yazasam yetiyor  mesela P<<myArray[i]<<"\n"; gibi ama mühendislikte temiz kod yazarken ad değiştirilmez.
#undef P // bunu dediğim zaman da diyorum P yi kaldır artık ben cout yerine P yazmak istemiyorum


int main()
{


    int myArray[ARR_SIZE];

    for(int i=0;i<ARR_SIZE;i++)
    {
        myArray[i]=(i+1);
    }
    for(int i=0;i<ARR_SIZE;i++)
    {
        cout<<myArray[i]<<"\n";
    }



    return 0;
}

int main()
{
   #ifdef PI // diyor ki önce bir senin PI sayın tanımlı mı diye bakıyım tanmılıysa bloğun içine girip kodları çalıştırıcak
       int r;
       cout<<"Enter the raidus of the circle:";
       cout>>r;
       cout<<"\n Area of the circle:"<<PI*r*r<<"\n";

   #endif // PI




    return 0;
}



*/



/*Iostream Nesneleri ("Giriş-Çıkış Akışı kütüphanesi")ÖNEMLİ!!!


================================================================================
                    YUSUF SERCAN İŞÇİ - BÜYÜK AYDINLANMA MÜHRÜ
================================================================================
* BÜYÜK GERÇEK  -> cout ve cin sıradan komutlar değildir! iostream kütüphanesinin
                   içinden doğan, veriyi su gibi akıtan siber vanalardır.

* #include ÖZÜ  -> En tepeye #include <iostream> yazmamızın tek sebebi; cin, cout,
                   cerr ve clog vanalarını derleyiciye resmen tanıtıp şantiyeye
                   indirmektir!

* SİBER AYRAÇ   -> <iostream> sistemi, "class_hotel.h" ise yerel projeyi temsil
                   eder. Sistem kütüphaneleri < > ile, yerel dosyalar " " ile çağrılır!
================================================================================


================================================================================
                    YUSUF SERCAN İŞÇİ - IOSTREAM'İN ÖZÜ KANUNU
================================================================================
* PRENSİP       -> Veri, bilgisayarda bir yerden bir yere akan bir sudur (Stream).
                   iostream bu suyun giriş-çıkış tesisat kütüphanesidir.

* GÖREVLER      -> cin: Klavyeden gelen borunun vanasıdır.
                   cout: Ekrana giden borunun vanasıdır.

* MÜHENDİSLİK   -> En büyük kolaylığı "Tip Güvenliği"dir. C dilindeki gibi %d, %f
  KOLAYLIĞI        ameleliği yoktur; vanalar akan verinin tipini kendi tanır!
================================================================================





cout (Standard Output - Tamponlu Akış):
Mantığı: Normal program çıktılarını taşır. Sen cout ile bir şey yazdığında, veri şak diye ekrana basılmaz; önce RAM'deki tampon bellekte (buffer) biriktirilir, sonra topluca gönderilir.

Siber/Mühendislik Kullanımı: Kullanıcıya gösterilecek normal menüler, otel oda listeleri buraya yazılır.


cerr (Standard Error - Tamponsuz / Jilet Akış):
Mantığı: Hata mesajlarını taşır. En büyük sırrı şudur: TAMPONSUZDUR! Yani cerr çalıştığı an, RAM'de bir milisaniye bile beklemeden, sistem çökse dahi o hata mesajını anında ekrana fırlatır.
Finaldeki Can Alıcı Nokta: Diyelim ki siber vatan projesinde kritik bir bellek sızıntısı veya hacker saldırısı tespit ettin. Program patlamadan hemen önce o hatayı ekrana veya log nizamiyesine basmak zorundasın. İşte orada cout kullanırsan, veri tampon bellekte beklerken program çökebilir ve hatanın ne olduğunu asla öğrenemezsin!
Ama cerr yazarsan, anında o siber çıktıyı kurtarırsın.


clog (Standard Log - Tamponlu Günlük Akış):
Mantığı: cerr ile aynı nizamiyeye bağlıdır ama TAMPONLUDUR. Programın arka planda yaptığı normal işlerin (Mesela: "Kullanıcı giriş yaptı", "Veritabanına bağlanıldı") günlüğünü tutar. Acelesi olmadığı için RAM'de biriktirilip diske öyle yazılır.


Peki o Başındaki w Harfi Nedir? (wcout, wcin, wcerr, wclog)
Tablonun alt yarısında duran o w takılı nesneler tamamen "Karakter Boyutu ve Dil" meselesidir çırak.

Normal cout ve cin, 1 byte (8-bit) boyutundaki standart char verilerini işler. Bu İngilizce karakterler için (A, B, C, 1, 2, 3) biçilmiş kaftandır.

Ama yarın bir gün siber güvenlikte küresel bir projede çalışırken veya Japonya'daki şirketlere iş yaparken karşına Japonca (Kanji/Hiragana) karakterler çıkacak. Bu dillerdeki karakterler 1 byte'a sığmaz!

İşte orada devreye wchar_t (Wide Character - Geniş Karakter / Genelde 2 veya 4 byte) girer. Başında w olan nesneler, bu geniş karakterleri konsoldan okumak ve yazdırmak için kullanılır.


int main() {
    // 1. Normal Çıktı
    cout << "Bu normal program ciktisidir (Tamponlu)." << endl;

    // 2. Kritik Hata Çıktısı
    cerr << "KRITIK HATA: Sistem nizamiyesi kilitlendi (Tamponsuz)!" << endl;

    // 3. Arka Plan Günlüğü
    clog << "LOG: Kullanici odayi bosaltti (Tamponlu Gunluk)." << endl;

    return 0;
}

3. Farklı Bakış Açısı: #include "class_hotel.h" İle #include <iostream> Arasındaki Janti Fark
Madem bu işin felsefesini söktün, bütte hocanın sınav kağıdında seni asla ters köşeye yatıramayacağı o gizli teknik farkı da fihristine mühürleyeyim:

Fark ettin mi, otel projesini yazarken kendi dosyalarımızı çağırırken çift tırnak (" ") kullandık: #include "class_hotel.h"

Ama bu sistem kütüphanelerini çağırırken açılı ayraç (< >) kullanıyoruz: #include <iostream>

Neden mi çırak?

Açılı ayraç (< >) kullandığında derleyiciye dersin ki: "Bu dosya benim masaüstümde değil. Git bunu C++'ın kendi fabrikasyon kütüphanelerinin kurulu olduğu o kutsal sistem klasörünün (MinGW kütüphanelerinin) içinde ara!"

Çift tırnak (" ") kullandığında ise dersin ki: "Bu benim kendi döktüğüm şantiye harcı. Önce benim şu masaüstündeki proje klasörümün içine bak, orada bulamazsan sistem klasörlerine gidersin."


ÖNEMLİ!!!
================================================================================
                    YUSUF SERCAN İŞÇİ - COUT VS CERR KANUNU
================================================================================
* COUT          -> Normal çıktılar içindir. TAMPONLUDUR (RAM'de bekler). Performans
                   odaklıdır. Dosyalara yönlendirildiğinde ekranda görünmez olur.

* CERR          -> Kritik hatalar içindir. TAMPONSUZDUR (Asla beklemez). Güvenlik
                   odaklıdır. Sistem çökse bile hatayı ekranda kurtarmanı sağlar.

* MÜHENDİSÇESİ  -> İkisinin de ekrana yazması bir illüzyondur. Arka planda donanım
                   ve RAM'i yönetme biçimleri tamamen taban tabana zıttır!
================================================================================
// cerr komutu
int main()
{
   int x=17;
   int y=0;
   if(y==0)
   {
       cerr<<"This number cannot be divided by zero\n";// couttan ziyade ram de daha hızlıdır ve tamponsuzdur
   }
   else
   {
       cout<<x/y;
   }


    return 0;
}


*/



/*WCHAR_T VE L KANUNU

================================================================================
                    YUSUF SERCAN İŞÇİ - WCHAR_T VE L KANUNU
================================================================================
* GÖREVİ        -> wchar_t, standart char veri tipinin sığdıramadığı yabancı ve
                   özel karakterleri (π, Ω, Japonca karakterler vb.) tutan geniş veri tipidir.

* L GİZEMİ      -> Karakterin başına konan 'L' harfi, derleyiciye o karakteri
                   Unicode (geniş) formatta işlemesi gerektiğini bildiren siber işarettir.

* SİZİN FARKINIZ-> cout << pi yazılırsa ekrana sembol değil sayı basılır. Karakteri
                   kurtarmak için "wcout << pi;" yazılması ŞARTTIR!
================================================================================

================================================================================
                YUSUF SERCAN İŞÇİ - İLERİ DÜZEY KARAKTER MİMARİSİ
================================================================================
1. RAM FARKI    -> char = 1 Byte (ASCII - 256 Karakter Sınırı).
                   wchar_t = 2 veya 4 Byte (Unicode - Sınırsız Dünya Dilleri).

2. "L" EMRE     -> Karakter sabitinin başına konan 'L' takısı, derleyicinin veriyi
                   daha ilk saniyede Unicode (geniş) olarak işlemesini zorunlu kılar.

3. VANALAR      -> cout dar borudur, wchar_t verisini karakter olarak BASAMAZ (Sayı basar).
                   Geniş karakterleri ekranda canlandırmak için "wcout" vanası ŞARTTIR!

4. SİBER BAKIŞ  -> Yarın bir gün siber güvenlikte log analizi yaparken yabancı dilde
                   bir hacker saldırısı geldiğinde veri kaybı yaşamamak için
                   arka planda hep bu wchar_t mimarisi dönmek zorundadır!
================================================================================


*/




/* Programlarda Cout Manipülatörleri

// setw() komutu = bir sonraki çıktının olması gereken minumum karakter sayısını belirtir.
// çıktı yeterince geniş değilse kalan alanı doldurmak için dolgu eklenir. Kütüphane gerektirir <iomanip>
int main()
{
    int x=70;
    cout<<setw(10)<<x<<"\n";// çıktıda ilk 10 yer boş gözükücek sanki boşkuk bırakıp uzağa 70 yazmışız gibi



    return 0;
}


 NOT ÖNEMLİ

================================================================================
                    YUSUF SERCAN İŞÇİ - :: OPERATÖRÜ KANUNU
================================================================================
* DOĞRU MANTIK  -> "::" işareti bir komutun veya şalterin HANGİ SINIFIN İÇİNDE
                   olduğunu gösteren siber adrestir.

* AKADEMİK GERÇEK-> "ios" bir kütüphane değil, giriş-çıkış ayarlarını tutan köklü
                   bir "Sınıftır" (Class).

* SİNSİ TUZAK   -> ios::boolalpha yazarken o "ios::" takısını kazara unutursan,
                   derleyici şalteri bulamaz ve projeyi kilitler!
================================================================================


int main()
{
    cout<<"Booleans\n";
    cout<<false<<"\n";
    cout.setf(ios::boolalpha);
    cout<<false<<"\n";



    return 0;
}



*/


/* Dosyaya Yazma Ve Okuma İşlemleri


// time komutu ve ctime kütüphanesi direk tarihi ve saati göstericek çıktı olarak.
int main()
{
    time_t t;
    time(&t);
    cout<<ctime(&t)<<"\n";



    return 0;
}


ofstream;
Programdan (RAM) çıkıp sabit diskteki dosyaya doğru yazmaya giden çıkış vanasıdır. (Veri yazar).

ifstream;
Sabit diskteki dosyadan çıkıp senin programa (RAM) doğru akan giriş vanasıdır. (Veri okur).

fstream;
Hem yazma hem okuma yapabilen çift taraflı, janti usta vanasıdır.

================================================================================
                    YUSUF SERCAN İŞÇİ - DOSYALAMA TEMELLERİ KANUNU
================================================================================
* AMAÇ          -> RAM'deki geçici verileri sabit diske (.txt) yazarak kalıcı
                   hale getirmek veya diskteki verileri RAM'e çekmektir.

* KÜTÜPHANE     -> Bu vanaları şantiyeye indirmek için en tepeye şu mühür ŞARTTIR:
                   #include <fstream>

* ÜÇ BÜYÜK SİLAH-> 1. ofstream: Dosyaya VERİ YAZMA vanasıdır (Çıktı).
                   2. ifstream: Dosyadan VERİ OKUMA vanasıdır (Giriş).
                   3. fstream : Hem yazma hem okuma yapan hibrit vanadır.

* ALTIN KURAL   -> Bir dosya vanası açıldıysa ( .open() ), operasyon bittiğinde
                   o vana kesinlikle kapatılmalıdır ( .close() )! Kapatmazsan
                   veri sızar, dosya kilitlenir, bütte hoca fena puan kırar!
================================================================================


================================================================================
                    YUSUF SERCAN İŞÇİ - OFSTREAM İLK KANUNU
================================================================================
* VARSAYILAN MOD-> ofstream MyFile("ad.txt"); yazımı dosyayı her seferinde
                   SIFIRLAR, eski verileri silip yenisini yazar.

* KORUMA KODU   -> Eskileri silmeden altına ekleme yapmak için "ios::app" (Append)
                   şalteriyle birlikte açılması şarttır!

* CLOSE SIRRI   -> .close() sadece hafızayı boşaltmaz; tamponda bekleyen veriyi
                   diske güvenle çakar ve Windows'un dosya kilidini çözer!
================================================================================


int main()
{
    ofstream MyFile("filename.txt");// burada diyorum ki filename.txt şeklinde bir dosya oluşturmanı istiyorum
    // yukarıdaki ofstream hem dosyamızı oluşturdu hem de dosyaımızı yazdı yani oluşturma-yazma
    if(!MyFile)// diyorum ki MyFile dosyam açılamadıysa bana göster
    {
        cerr<<"File not found\n";//cerr hata iostream komutu kullanıyoruz burada
        exit(1);
    }
    MyFile<<"files can be tricky,but it is fun enough!";//yukarıda oluşturduğumuz dosayanın içerisine yazı yazıyoruz
    MyFile.close();//şimdi yukarıda dosyaımızı açtık içine bir şeyler yazdık şimdide kapatmamız gerekiyor çünkü hafıza alanında gereksiz yer işgalini önlemek amacıyla
    //NOT: ben bu kodu çalıştrıdığım zaman artık pc de filename.txt şeklinde bir dosyam olucak içerisinde yazdığımız yazı da durur halde


    return 0;
}



int main()
{
    ofstream MyFile("files/filename.txt");// şimdi burada diyorum ki ben ayrı bir dosayının içerisine filename.txt şeklinde dosya açmak istiyorum ancak bunun için daha önceden benim manuel olarak o klasörü açmam lazım ofstream bir dosya yoksa onu oluşturup yazabilir ama bir klasör yoksa onu oluşturamaz
    if(MyFile.is_open())
    {
         MyFile<<"files can be tricky, but it is fun enough!\n";
         MyFile<<"I love c++\n";
         MyFile<<"file operation is easy";
         MyFile.close();
    }
    else
    {
        cerr<<"there is no such file\n";
    }

    return 0;
}



// dosya okuma işlemleri

int main()
{
    // 🚚 1. ADIM: Sabit diskteki dosyadan programa doğru akan bir GİRİŞ VANASI (ifstream) tanımlıyoruz ve adresi veriyoruz.
    ifstream MyReadFile("files/filename.txt");

    // 🔍 2. ADIM: SİBER KONTROL! Vana dosyaya başarıyla bağlandı mı, dosya adreste var mı diye kontrol ediyoruz.
    if(MyReadFile.is_open())
    {
        string myText; // 📦 Dosyadan okuyacağımız her bir satırı geçici olarak RAM'de tutacak kutumuz (değişkenimiz).

        // 🔄 3. ADIM: SİNSİ DÖNGÜ! getline fonksiyonu dosyayı satır satır okur.
        // Okunacak yeni satır DURDUĞU sürece döngü döner. Dosya bitince döngü tık diye kırılır.
        while(getline(MyReadFile, myText))
        {
            cout << myText << "\n"; // 🖥️ RAM'deki myText kutusuna dolan o satırı siyah konsol ekranına üflüyoruz.
        }

        // 🔒 4. ADIM: TEMİZLİK! Dosyayla işimiz bitti. İşletim sisteminin dosya kilidini çözmek için vanayı kapatıyoruz.
        MyReadFile.close();
    }
    else // 🚨 SİBER ALARM: Eğer .is_open() başarısız olduysa (dosya adreste yoksa veya adı yanlışsa) buraya düşer.
    {
        cerr << "There is no such file\n"; // ⚡ Tamponsuz hata vanasıyla (cerr) ekrana jilet gibi uyarı basıyoruz!
    }

    return 0;
}





MyReadFile.is_open() Neden Hayati?
ofstream (yazma) yaparken dosya bilgisayarda yoksa C++ o dosyayı sıfırdan kendi oluşturur. Ama ifstream (okuma) yaparken bilgisayarda olmayan bir dosyayı okuyamazsın aslanım! Olmayan bir şeyi okumaya çalışırsan program arka planda çöker, bellek sızıntısı olur.
İşte if(MyReadFile.is_open()) satırı bizim siber zırhımızdır. "Dosya gerçekten orada varsa ve açıldıysa içeri gir, yoksa sakın okumaya çalışıp şantiyeyi patlatma, direkt else bloğuna zıpla" emridir.


while(getline(MyReadFile, myText)) Sihri Nasıl Çalışıyor?
Bu döngü C++'ın en pırlanta kalıplarından biridir. getline() fonksiyonu dosyaya gider, ilk satırı alır, myText içine atar ve döngünün içine girer. Döngü bitince tekrar başa döner, ikinci satırı alır.
Peki bu döngü ne zaman duruyor? getline fonksiyonu dosyanın en sonuna (EOF - End of File nizamiyesine) geldiğinde, artık okunacak satır bulamaz ve geriye false (sıfır) sinyali döndürür. while döngüsü de "Aha dosya bitti" der ve tık diye durur çırak!
Böylece 10 satırlık dosya da olsa, 10 bin satırlık dosya da olsa programın RAM'i taşırmadan saat gibi çalışır.

================================================================================
                    YUSUF SERCAN İŞÇİ - IFSTREAM OKUMA MANİFESTOSU
================================================================================
* TEMEL GÖREV   -> Sabit diskteki kalıcı veriyi (.txt) satır satır RAM'e çekmektir.

* SİNSİ ŞART    -> Okuma işleminden önce kesinlikle ".is_open()" ile dosyanın
                   adreste var olduğu kontrol edilmelidir (Güvenlik Kuralı!).

* DÖNGÜ SIRRI   -> while(getline(MyReadFile, myText)) kalıbı, dosya kaç satır
                   olursa olsun dosya sonuna (EOF) kadar güvenle okuma sağlar!
================================================================================

// dosya silme işlemleri

int main()
{
    int silme=remove("filename.txt");
    if(silme==0)
    {
        cout<<"File deleted\n";
    }
    else
    {
        cerr<<"File could not be deleted\n";
    }



    return 0;
}


// DOSYA MODLARI
//ios::app = Yazma amacıyla açılan bir dosyaya gönderilen tüm verilerin dosyanın sonuna eklenmesini sağlar.Dosyaya yapılan her yazma işleminde,dosya konum göstergesi dosyanın sonunu gösterecek şekilde ayarlanır. sonradan yazı ekliyoruz kısaca
//ios::ate = Dosya açılışında, dosya konum göstergesini dosya sonuna ayarlar. dosya konum göstergesi farklı bir konuma ayarlanabilir app den farı burada
//ios::binary =  Dosyanın ikili modda açılmasını sağlar
//ios::in = Dosyayı veri okuma amacıyla açar
//ios::out = Dosyayı veri yazma amacıyla açar
//ios::trunc =  Önceden var olan aynı isme sahip bir dosya içeriğini tamamen silinmesini ve dosya uzunluğunu sıfır değerine getirilmesini sağlar





// ÖNEMLİ ÖRNEK
int main()
{
    ofstream myFile; // 📦 Önce sadece vanayı şantiyeye indirdik (Nesne oluşturuldu).

    // 🛠️ FARKLI KULLANIM: Dosyayı iki farklı şalteri BİRLEŞTİREREK açıyoruz!
    // ios::out -> "Bu dosyaya veri yazacağım" der.
    // ios::app -> "Eski verileri silme, her yeni kaydı dosyanın EN ALTINA (Append) ekle" der.
    // | işareti-> İki modu tek bir boru hattında birleştiren siber kelepçedir!
    myFile.open("files/person.txt", ios::app | ios::out);

    // 🚨 SİNSİ HATA UYARISI: Çırak, kodda "myFile.is.open" yazmışsın.
    // Bu bir fonksiyon olduğu için bütte hoca "Parantezleri unutmuşsun" diye puanını kırar!
    // DOĞRUSU: if(myFile.is_open()) şeklinde parantezli olmalıdır!
    if(myFile.is_open())
    {
        string name, lastname;
        int age;

        // 📥 Kullanıcıdan (RAM tezgâhına) verileri tıkır tıkır alıyoruz:
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your lastname:";
        cin >> lastname;
        cout << "Enter your age:";
        cin >> age;

        // 📝 DOSYALAMA VE NİZAM:
        // Önce "\n" ile alt satıra geçiyoruz ki eski kayıtların yanına yapışmasın.
        // setw(20) ile soyisim ve yaş arasına 20 karakterlik jilet gibi bir boşluk (sütun) açıyoruz!
        myFile << "\n" << name << setw(20) << lastname << setw(20) << age;

        myFile.close(); // 🔒 Güvenlik kilidini çakıp vanayı kapatıyoruz.
    }
    else
    {
        cerr << "There is no such file\n";
    }

    return 0;
}



*/










/* DEFTERE YAZILACAKLAR

// Çok önemli bir örnektir mantığını iyi kavra
int main()

{
    int numbers[5]={7,19,70,4,12};


    for(int i=0;i<5;i++)
    {
        cout<<"numbers["<<i<<"]="<<*(numbers+i)<<"\n";// burada *(numbers+i) yaptığımız için diyorki direkt çıktı olarak değerlerini yazdırıopyoruz 0. indeksten sırayla
        cout<<"numbers address["<<i<<"]="<<numbers+i<<"\n";//burada da (numbers+i) yaptığımız için 0. indeksten sırayla adreslerini yazdırıoyruz
        cout<<"\n";


    }


    return  0;
}


// pointer sız hali
void replaceValue(int x);

int main()
{
    int x=70;
    cout<<"value of variable x is "<<x<<"\n";
    replaceValue(x);
    cout<<"value of variable x after the funciton is "<<x<<"\n";

    return 0;
/*
Eğer senin amacın sadece buysa: Yani "Usta ben main'deki asıl değere dokunmasam da olur, fonksiyon kendi odasında o sayıyı alsın, 19 yapsın, ekrana bassın ve ölsün" diyorsan  Pointer KESİNLİKLE GEREKSİZ. Şu an yazdığın kod mükemmel bir çözümdür.

Eğer senin amacın hocanın videodaki amacıysa: Yani "Usta ben öyle bir kod yazacağım ki, fonksiyon bittikten sonra bile main'deki o asıl x değişkeni kalıcı olarak 19'a dönüşmüş olacak" diyorsan  Pointer KESİNLİKLE ŞART! Çünkü fonksiyona adres (&x) vermediğin sürece, o fonksiyonun main'in içindeki dünyaya gücü hayatta yetmez.

yani kısaca pointer kullanmadığımız için kalıcı olmuyor yani artık programa x=19 la devam etmiyor geçici oluyor program yazdırdıktan sonra tekrar x=70 ile devam ediyor ama pointer kullansaydık kalıcı olucakatı program artık x=19 ile devam edicekti


//Sen bu kodda pointer kullanmadın, evet; ama fonksiyonun içinde yaptığın o x = 19; hamlesi, main'deki asıl x değişkenini DEĞİŞTİREMEDİ! Fonksiyon sadece kendi odasındaki fotokopiyle oynadı, asıl x o beton duvarın arkasında 70 olarak çakılı kaldı.
}
void replaceValue(int x)
{
    x=19;
    cout<<"value of variable x inside the funciton is "<<x<<"\n";
}







// pointer lı hali artık kalıcı olarak değiştirioyruz x değişkenini

void replaceValue(int* ptr);

int main()
{
    int x=70;
    cout<<"value of variable x is "<<x<<"\n";
    replaceValue(&x);
    cout<<"value of variable x after the funciton is "<<x<<"\n";
    return 0;
}
void replaceValue(int* ptr)
{
    *ptr=19;
    cout<<"value of variable x inside the function is "<<*ptr<<"\n";
}


  // pointer fonksiyonlar / yani buradaki amaç fonksiyonun kendisi pointer olrusa ne olur ?

int multiplication(int x, int y);

int addition(int x, int y);


int main()
{
   int (*func)(int,int);// bir fonksiyonu pointer olarak bu şekilde tanımalrı  func da kendimiz isim verdik orada * koyarak bunun bir pointer fonksiyon oldığunu belirttim
   //int (*func)(int,int); satırıyla sen diyorsun ki: "Ben öyle bir kurye yaratıyorum ki, bu kurye düz bir sayı adresi tutmayacak. Bu kurye, girişinde iki tane int parametre isteyen ve çıkışında int fırlatan fonksiyonların RAM'deki fabrika adresini tutacak!"
   func=multiplication;
   cout<<"x*y= "<<func(7,11)<<"\n";
   func=&addition;
   cout<<"x+y= "<<func(5,4)<<"\n";
   cout<<"x+y= "<<(*func)(19,2)<<"\n";


 return 0;
}


int multiplication(int x, int y)
{
    return x*y;
}

int addition(int x, int y)
{
    return x+y;
}




class Car
{
 public:

    string brand;// brand marka demek
    string model;
    int year;

    Car()//Burası Constructor biz bunu çağırmasak bile çağırmışız gibi kabul edip otomatikman çalışıcak yani çağırmama gerek kalamdan çalışmasını istediğim durumlarda benim Constructor kullanmam daha mantıklı olur. bir method dur aslında
    {
       cout<<"Wow interesting\n";
    }


    void message()//method
    {
        cout<<"Hello C++ OOP!\n";
    }
    int speed(int mySpeed)
    {
        return mySpeed;
    }

};



int main()
{
    Car c1;
    c1.brand="Skoda";
    c1.model="Superb";
    c1.year=2001;

    Car c2;
    c2.brand="Nissan";
    c2.model="Juke";
    c2.year=2003;


    cout<<c1.brand<<"-"<<c1.model<<"-"<<c1.year<<"-"<<c1.speed(180)<<"\n";
    cout<<c2.brand<<"-"<<c2.model<<"-"<<c2.year<<"-"<<c2.speed(140)<<"\n";


    return 0;
}


class Car {
public:
    string brand;
    string model;
    int year;

    // JANTİ CONSTRUCTOR: Nesne doğarken değerleri direkt parantezden alır!
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << brand << " nesnesi RAM'de aslanlar gibi doğdu!\n";
    }
};

int main() {
    // 3 satır amelelik bitti! Nesne tek satırda, değerleriyle beraber doğuyor!
    Car c1("Skoda", "Superb", 2001);
    Car c2("Nissan", "Juke", 2003);

    return 0;
}

// matamatik işlemleri nesne yöenlimli programlama

class MathOperations
{
public:
    int number1, number2;
    MathOperations(int x, int y)
    {
        number1=x;
        number2=y;
    }
    int addition()
    {
        return number1+number2;
    }
    int subtraction()
    {
        return number1-number2;
    }
    int multiplication()
    {
        return number1*number2;
    }
    int divison()
    {
        return number1/number2;
    }
    void getData()// bu method sayessinde int main içinde tek tek işlem yapmaktan kurtulmuş oluyoruz daha az kodla daha çok şey yapmamızı sağlıyor
                  // önemini şöyle anlatıyım mesela bir şirkette çalışıyorsunuz ve size  bu programı yaptıktan 6 ay sonra diyor ki ben mod da almasını istiyorum sadece mat classsına girip orada yapıyorsun uğraşmaan gerek yok
    {
        cout<<addition()<<"\n";
        cout<<subtraction()<<"\n";
        cout<<multiplication()<<"\n";
        cout<<divison()<<"\n";

    }


};


   int main()
   {
       MathOperations myObj(10,5);
       myObj.getData();

       cout<<"\n\n\n";

       MathOperations myObj2(20,4);
       myObj2.getData();




       return 0;
   }


// Nesneleri Pointerlarla Kullanmak

class Employee
{
private:
    string name;
    int salary;
public:
    void setSalary(int s)
    {
        salary=s;
    }
    void setName(string n)
    {
        name=n;
    }
    int getSalary()
    {
        return salary;
    }
    string getName()
    {
        return name;
    }



};

 int main()
 {

     Employee* em=new Employee();// nesneyi bir pointer olarak tanımlarken new anahtar sözcüğünü kullanırız
     em->setName("Fehmi");//(*em).setName("Fehmi"); // em->setName("Fehmi"); satırı ile MİLİMETRİK OLARAK AYNI ŞEYDİR!
     em->setSalary(15000);
     cout<<"Name:"<<em->getName()<<"\n";
     cout<<"Salary:"<<em->getSalary()<<"\n";
     return 0;

 }
 NOT:int* salary; // salary bir int adresi tutabilir demektir.
NOT:*salary = s;  // Hah, şimdi o adresteki evin içine girip s değerini çaktık!

 class Employee
{
public:
    // Sınıfın içindeki değişkenler düz değil, birer POINTER (Adres Tutucu)!
    // Yani bu kasaların içinde veri yok, verilerin RAM'deki adresleri saklanacak.
    string* name;
    int* salary;

    // PARAMETRELİ CONSTRUCTOR (Doğum Odası)
    Employee(string n, int s)
    {
        // 1. ADIM: İsim için Heap (serbest bölge) bölgesinden arsa kiralıyoruz.
        name = new string;
        // Kiraladığımız o adrese gidip, dışarıdan gelen "Nazli" yazısını yazıyoruz.
        *name = n;

        // 2. ADIM (HAYATİ DÜZELTME): Maaş için de Heap bölgesinden yer kiralıyoruz!
        // Eski kodda bu satır olmadığı için hafıza bombası patlıyordu.
        salary = new int;
        // Şimdi kiraladığımız o güvenli adrese gidip 1300 değerini çakıyoruz.
        *salary = s;
    }

    // DESTRUCTOR (Yıkıcı Metot / Şantiye Temizlikçisi)
    // main içinde "delete em;" dendiğinde, nesne ölmeden hemen önce burası çalışır.
    ~Employee()
    {
        // Sınıf içinde "new" ile kiraladığımız arsaları devlete iade ediyoruz.
        // Eğer bunları yazmazsak RAM şişer, siber güvenlik açığı (Memory Leak) olur!
        delete name;
        delete salary;

        cout << "Heap bolgesindeki dinamik alanlar temizlendi, guvenlik saglandi!\n";
    }

    // Bilgileri ekrana basan motorumuz
    void showInfo()
    {
        // name ve salary pointer olduğu için, içindeki DEĞERE ulaşmak için
        // başlarına yıldız (*) koyarak ekrana yazdırıyoruz.
        cout << "Name:" << *name << "\n";
        cout << "Salary:" << *salary << "\n";
    }
};

int main()
{
    // 1. Kepçe: Heap bölgesinde dinamik bir Employee nesnesi yaratıp adresini "em" pointer'ına verdik.
    Employee* em = new Employee("Nazli", 1300);

    // Nesnemiz bir pointer olduğu için nokta (.) yerine ok (->) işaretiyle fonksiyonu tetikledik.
    em->showInfo();

    // 2. Kepçe: İşimiz bitti! Heap'teki o devasa nesneyi RAM'den siliyoruz.
    // Bu komut tetiklendiği an yukarıdaki Destructor (~Employee) otomatik çalışır ve içini de temizler!
    delete em;

    return 0;
}




template<typename T>
void Replace(T&x,T&y)
{
    T z=x;//burada artık normalde int koyucağımız yere T koyuyoruz bu da işimize yarıyor int main e diyorki kardeşim sen bana int gönderirsen int olarak double gönderirsen double olarak kabul edeyim türe ben karar veririm diyor

    x=y;
    y=z;
}

int main()
{

    int x=7;x
    int y=19;
    cout<<x<<"\t"<<y<<"\n";
    Replace(x,y);
    cout<<x<<"\t"<<y<<"\n";
    cout<<"--------------------\n";

    char letter1='F';
    char letter2='E';
    cout<<letter1<<"\t"<<letter2<<"\n";
    Replace(letter1,letter2);
    cout<<letter1<<"\t"<<letter2<<"\n";
    cout<<"--------------------\n";

    double a=7.19;
    double b=19.5;
    cout<<a<<"\t"<<b<<"\n";
    Replace(a,b);
    cout<<a<<"\t"<<b<<"\n";
    cout<<"--------------------\n";





    return 0;
}



// Classlarda Template(şablon) Kullanımı.



template<class T>
class Employee
{
public:
    T myVariable;
    Employee(T x)
    {
        myVariable=x;
    }


};


int main()
{
    Employee<int> myObj(7);// burada int olarak belirtiyoruz çünkü consturutar olduğu için hangi türü aldığını ona söylüyoruz fonksiyon templatlerde bunu yapmadık çünkü int=... diye belirtiyorduk
    Employee<char> myObj2('F');
    Employee<double> myObj3(7.19);

    cout<<myObj.myVariable<<"\n";
    cout<<myObj2.myVariable<<"\n";
    cout<<myObj3.myVariable<<"\n";



    return 0;
}

class Test {
public:
    Test() { cout << "A"; }
    ~Test() {
        // 🟢 Destructor'ın görevi kendi kendini silmek DEĞİLDİR!
        // Onun görevi, kendisi silinirken İÇİNDEKİ başka çöpleri temizlemektir.
        // Bu sınıfta içeride new ile açılan başka bir veri olmadığı için içi BOŞ kalır.
        cout << "B";
    }
};

int main() {
    Test* t = new Test; // Heap'te yer açtın (A basıldı)
    cout << "C";        // Selam çaktın (C basıldı)

    delete t;           // 🛠️ BALTAYI BURAYA VURACAKSIN!
                        // Bu komut gider Heap'teki nesneyi siler,
                        // silerken otomatik ~Test() uyanır ve B basılır!

    t = nullptr;        // Kuryenin elindeki adres haritasını da yaktık, jilet!
    return 0;
}


int main()
{
    vector<int> numbers(10);// ben bir veri yapısı oluşturmama rağmen onun kaç elemanlı olucağını belirtmedim array lerde bu zorunluydu yoksa hata verirdi vectorlerde array lerin bir türüdür. özellikle belirtmem gerekirse eleman sayısını vektörlerde   vector<int> numbers(7); derim mesela 7 elemanlı olduğunu göstermek için
    // vector<int> number(10,7) burada diyorum ki benim 10 elemanım olsun her bir 10 elemanada her birinede 7 elemanını eklesin MANTIĞINI ANLA bu arada bu dinamik olduğu için başlangıçta belirttiğiniz alanıda genişleyip aşabilir
    numbers={1,2,3,4,5,6,7,8,9};

    for(int x:numbers)
    {
        cout<<x<<"\n";
    }
    cout<<"\n";

    return 0;
}
int main()
{

    vector<int> numbers(10,7);

    numbers={1,2,3,4,5,6,7,8,9,10,11,12,13};

    cout<<"at():"<<numbers.at(6)<<"\n";// ekrana 6. indeksi getirir
    cout<<"front():"<<numbers.front()<<"\n";// ilk indeksi getirir
    cout<<"back():"<<numbers.back()<<"\n";// son indeksi getirir


    return 0;
}


int main()
{
   vector<int> numbers(15);

   numbers={1,2,3,4,5,6,7,8,9,10};

   cout<<"numbers[8]:"<<numbers[8]<<"\n";
   cout<<"at(4):"<<numbers.at(4)<<"\n";
   cout<<"front:"<<numbers.front()<<"\n";
   cout<<"back:"<<numbers.back()<<"\n";

   int* ptr=numbers.data();// ben data yı çağırdığım zaman vektörlerde şunu demiş oluyorum ben burada bir pointer oluşturdum ve benil ilk pointerıma numbers.data(); buradaki adresi ata.
    cout<<*ptr<<"\n";//pointer da ilk elemanı almak için *ptr yaparız HATIRLA

   return 0;


}

/// Vektörlerde Değiştiriceler


// assign metodu - push_back - pop_bacck - insert

int main()
{
    vector<int> numbers;

    numbers.assign(5,7);

    cout<<"1.(assign):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }
    numbers.push_back(19);// verileri ite ite ram e yerleştiricem önden arkaya doğru push_back iticek
    numbers.push_back(34);// arkadan arkadan eklemeye devam edicek yani aslında burada vektörlerin dinamik olarak genişliyebiliceğini kanıtlamış olduk.

     cout<<"\n\n 2.(push_back):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }

    numbers.pop_back();//arka kısmından eleman çıkarmak için kullanılır mesela burada 34 ü sildi en arkada o vardı çünku
    cout<<"\n\n 3.(pop_back):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }

    numbers.insert(numbers.begin(),46);//  insert belirtilen konumdaki öğeden önce yeni öğeler eklemen için kullanılır   numbers.insert(numbers.begin(),46); burada bu kod sayesinde 46 sayısını sıralamada başa ekledi mesela
    numbers.insert(numbers.end(),20);// bu sefer sona ekledim 20 yi
    cout<<"\n\n 4.(pop_back):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }


    numbers.erase(numbers.end());// adı üzerinde erase silme işine yarıyor burada number.end dediğim için sondan siliyor begin deseydim end yerine baştan silerdi
    cout<<"\n\n 5.(erase):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";

    }


    numbers.clear();// adı üzerinde uzatmaya gerek yok
    cout<<"\n\n 6.(clear):";
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";

    }







    cout<<"\n";





    return 0;
}



// 1. Kalıba "Car" adını verdik. Artık bu bizim yeni veri tipimiz!
struct Car {  // struct un hemen yanına class gibi Car yazman }; bu ikisi arasına yazmaktan daha iyidir.
    string brand;
    string model;
    int year;
}; // Kalıp bitti, burayı boş bıraktık ki esnek olsun.

int main()
{
    // 2. İstediğimiz yerde, istediğimiz kadar nesneyi rahatça doğurabiliyoruz!
    Car myCar1;
    Car myCar2;
    Car myCar3; // Bak kalıbın adı olduğu için artık 3'ü de doğurabildim!

    // Veri atamaları (Struct olduğu için public, tıkır tıkır çalışır)
    myCar1.brand = "BMW";
    myCar1.model = "X6";
    myCar1.year = 1999;

    cout << "Brand: " << myCar1.brand << " | Model: " << myCar1.model << " | Year: " << myCar1.year << "\n";

     // NOT: yukarıda ztn myCar2, myCar3 adlı nesneler oluşturduğumuzdan istersen yine onların da modellerini fln cout ile yazdıırabilirz

    return 0;
}



struct Car
{
    string brand;
    string model;
    int year;
};

int main()
{
    Car myCar1={"BMW","X6",1999};


    Car* ptr=&myCar1;//şimdi burada Car structu adıyla ptr adında bir pointer oluşturdurk bu pointer ın yanı artık ptr bir pointer olduğu için ptr nin için &myCar1 diyerek myCar1 aderesimi ptr nin içine attım örnek x123aa fln gibi bir şey sonra ptr--> brand diyerek myCar1 adresimdeki brand ın değerini çağırdım . işlevi gibi düşün gidip o çekmecenin içini açıyor

    cout<<ptr->brand<<"\n";
    cout<<ptr->model<<"\n";
    cout<<ptr->year<<"\n";//-> işareti . mantığında çalışıtr gidip o çekmeceyi açmamızı sağlar



    return 0;
}



struct Car
{
    string brand;
    string model;
    int year;

};

void showMe(Car c)
{
   cout<<"Brand: "<<c.brand<<"\n";
   cout<<"Model: "<<c.model<<"\n";
   cout<<"Year: "<<c.year<<"\n";
}

int main()
{
    Car myCar1={"BMW","X6",1999};
    showMe(myCar1);
    return 0;
}

// --------------------------------------------------------------------------------
// 1. BAĞIMSIZ PAKET: ADRES KALIBI (Address Struct)
// --------------------------------------------------------------------------------
// Adres verilerini kendi başına bağımsız bir modül olarak tasarlıyoruz.
// Amacımız kod tekrarını önlemek; ileride "Musteri" veya "Sirket" sınıfları açarsak
// onlarda da bu hazır kalıbı el el üstüne koyup kullanabileceğiz.
struct Address
{
    string cityName; // Şehir adı (Örn: Van)
    string district; // Mahalle/Semt adı (Örn: Vali Mithat Bey)
    int no;          // Kapı numarası (Örn: 19)
}; // <-- Bu noktalı virgül şantiyenin ilk kapısıdır, mühürlenecek!

// --------------------------------------------------------------------------------
// 2. ANA KALIP: ÇALIŞAN KALIBI (Employee Struct) - İLİŞKİ KURMA ANI
// --------------------------------------------------------------------------------
struct Employee
{
    string name;     // Çalışanın adı
    string lastname; // Çalışanın soyadı
    int workerno;    // Çalışanın sicil numarası

    // İŞTE MÜHENDİSLİK SİHİRİ: "Composition / Has-A" İlişkisi!
    // Yukarıda tasarladığımız o bağımsız "Address" kalıbını, bu çalışan kalıbının
    // kalbine "add" isminde küçük bir İÇ KUTU (özellik) olarak gömüyoruz.
    // Meal: "Her çalışanın bir ADRESİ VARDIR (Employee HAS AN Address)."
    Address add;
};

// --------------------------------------------------------------------------------
// ANA ŞANTİYE (MAIN FONKSİYONU)
// --------------------------------------------------------------------------------
int main()
{
    // 1. ADIM: MATRUŞKA DÜZENİNDE NESNE DOĞURMA
    // Stack (Masa) katında kocaman bir "em" çalışan kasası doğuruyoruz.
    // Dikkat et çırak: İlk üç veri (Fehmi, UYAR, 1) ana kasaya giderken;
    // o sinsi iç içe süslü parantez {"Van", "Vali Mithat Bey", 19} o içerideki
    // küçük "add" kutusunun çekmecelerine jilet gibi yerleşir!
    Employee em = {"Fehmi", "UYAR", 1, {"Van", "Vali Mithat Bey", 19}};

    // 2. ADIM: ANA KASANIN ÇEKMECELERİNİ DOĞRUDAN OKUMA
    // Bu değişkenler direkt Employee sınıfının meydanında (public) olduğu için
    // tek bir nokta (.) ile doğrudan içlerini açıp okuyoruz.
    cout << "Name:" << em.name << "\n";
    cout << "Lastname:" << em.lastname << "\n";
    cout << "Worker No:" << em.workerno << "\n";

    // 3. ADIM (BÜYÜK OPERASYON): İKİ NOKTALI SİBER GEÇİŞLER
    // Neden iki kere nokta koyduk çırak? Çünkü hiyerarşiyi sırayla çözüyoruz:
    // "em."     -> Büyük Çalışan kasasının kapısını aç!
    // "add."    -> İçindeki o küçük gömülü Adres kutusuna dokun!
    // "cityName"-> O küçük kutunun da içindekicityName çekmecesini çek ve "Van"ı bas!
    cout << "City Name:" << em.add.cityName << "\n"; // BüyükKutu.IçKutu.Cekmece
    cout << "District:" << em.add.district << "\n";  // BüyükKutu.IçKutu.Cekmece
    cout << "No:" << em.add.no << "\n";              // BüyükKutu.IçKutu.Cekmece

    return 0;
}


// dinamik dizi oluşturma
// dinamik dizinin çalışma süresi boyunca boyutunu değiştirebiliyoruz ancak statik olarak dizilerde boyutu değiştiremiyoruz
int main()
{
    int sizeArr;
    cout<<"Enter the size:";
    cin>>sizeArr;
    int* myArray= new int[sizeArr];

    for(int i=0;i<sizeArr;i++)
    {
        cout<<"myArray["<<i<<"]=";
        cin>>myArray[i];
    }
    for(int i=0;i<sizeArr;i++)
    {
        cout<<myArray[i]<<" "; // dizimiz bir pointer olduğu için  myArray[i] bunun yerine *(myArray+i) diye de yazabilirdik aynı mantık a gelirdi
    }
    delete[]myArray;// kapanmadan önce diziyi temizliyoruz
    myArray=NULL;// dizimi hafızada yer işagel etmesin diye NULL komutuna eşitliyorum



    return 0;
}



enum Days
{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

int main()
{
   Days d;      // Tipi Days (yani arkada int) olan "d" adında düz bir hafıza kutusu açtın.
d = sunday;  // d kutusunun içine "sunday" maskesini, yani 6 sayısını  koydun.
cout << d;   // Ekrana d kutusunun içindeki değeri bastın. indeks numarası oluyor o da

HATA Deneme 1: cout << &d;
Bu komut hata vermez aslanım, ama ekrana 6 da basmaz. &d demek, o d kutusunun Stack (Masa) katında durduğu evin ham RAM adresini (Örn: 0x7ffe...) söker getirir.
Sen adres kutusunu açmadın, sadece kutunun adresini ekrana bastın.


HATA Deneme 2: cout << *d; (Büyük Hatanın Sebebi)
İşte derleyicinin şantiyeyi durdurduğu an burasıdır çırak! Yıldız (*) işareti (Dereference) sadece ve sadece içinde adres tutan pointer'ların başına konur! Bilgisayar bakar: "Yusuf Sercan bu d değişkeninin başına yıldız koymuş. d bir pointer mı? Hayır, d düz bir enum (int) değişkeni.
Düz sayının başına yıldız koyup hangi adrese ışınlanmamı bekliyor bu çocuk?" der ve kod derlenmeden canlı yayında hatayı fırlatır!



    switch(d)
    {
        case monday:cout<<"Monday\n";break;
        case tuesday:cout<<"Tuesday\n";break;
        case wednesday:cout<<"Wednesday\n";break;
        case thursday:cout<<"Thursday\n";break;
        case friday:cout<<"Friday\n";break;
        case saturday:cout<<"Saturday\n";break;
        case sunday:cout<<"Sunday\n";break;

    }





    return 0;
}

enum  fuel
{
    gas,
    diesal,
    lpg,
    hybird,
    electric
};

int main()
{
    fuel f;
    f=fuel::gas;
    if(f==fuel::gas)
    {
        cout<<"Gas\n";

    }



    return 0;
}





fuel::gas Mühendisçe Meali: "Şef, doğrudan 'gas' yazıp ortalığı bulandırmıyorum.
Git, o yukarıda tasarladığım fuel isimli enum paketinin içindeki o janti gas maskesini (yani 0 sayısını) bana getir!"



int main() {
    // 1. Normal Çıktı
    cout << "Bu normal program ciktisidir (Tamponlu)." << endl;

    // 2. Kritik Hata Çıktısı
    cerr << "KRITIK HATA: Sistem nizamiyesi kilitlendi (Tamponsuz)!" << endl;

    // 3. Arka Plan Günlüğü
    clog << "LOG: Kullanici odayi bosaltti (Tamponlu Gunluk)." << endl;

    return 0;
}



*/



/* dairenin alanını ve çevresini hesaplayan program */
using namespace std;
int main() {
    const float PI = 3.14f;
    float yariCap, cevre, alan;

    cout << "Dairenin yaricapini giriniz: ";
    cin >> yariCap;

    alan = PI * yariCap * yariCap;
    cevre = 2 * PI * yariCap;

    cout << "Dairenin alani = " << alan <<endl;
    cout << "Dairenin cevresi = " << cevre <<endl;

    return 0;
}


















