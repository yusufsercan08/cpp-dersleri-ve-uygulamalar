//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//#include <conio.h>
//#include <string.h>






//int main()
//{

    /* \n If we  don't put it, it will print side  by side in the  output
    printf("My first\t   c code\n ");
    printf(" testing c code ýt is very diffrent \b code\n");
    //printf("My second c code\n");
    return 0; //this here program  fınsh
    */



//  char myLetter = 'C'; // tek bir karakter harf sayı  deðerlerini saklar
//  unsigned int myNumber = 4145878769;
//  int myNumber =57; // tüm tam sayılar
//  long long int myNumber = 4123543531;
//  float myNumber2 =2.54; // bir veya  daha fazla ondalýk içeren  kesirli sayýlarý saklar 7 basamak max
//  double myNumber3 = 212.368; // floatýn yetiişemediği yerleri halleder

//
//  int myNumber,myNumber2,myNumber3,mySum,myExtraction,myDivision,myMultiplication ;
//  myNumber = 30;
//  myNumber2 = 2;
//  mySum=myNumber + myNumber2;
//  myExtraction=myNumber - myNumber2;
//  myMultiplication=myNumber * myNumber2;
//  myDivision=myNumber / myNumber2;
//
//  printf("Sum: %d\n",mySum);
//  printf("Extraction: %d\n",myExtraction);
//  printf("Multiplication: %d\n",myMultiplication);
//  printf("Division: %d\n",myDivision);




//  printf("size char:%d\n", sizeof(char)); // bellekte kapladıkları byte sayılarını gösteriyor
//  printf("size int: %d\n", sizeof(int));
//  printf("size float:%d\n",sizeof(float));
//  printf("size double:%d\n",sizeof(double));





//    printf("My lucky number is:%d\n",myNumber);
//    printf("%c\n",myLetter);
//    printf("%lld \n",myNumber);
//    printf("%f\n",myNumber2);
//    printf("%s \n","where are you been");



//int myNumber, myNumber2;
//printf("Enter two  number:");
//scanf("%d %d",&myNumber,&myNumber2); // Kullanıcının ekrana bir sayı girmesini sağlıyor girilen sayının tam sayı olduğunu belirtmek için %d ifadesini kullanıyorum
//printf("The number you entered is: %d and %d",myNumber, myNumber2);





/* dairenin çevresini ve alanını bulan program

1- ihtiyacımız olan  variables bul ve tanımla
2- variables type bul
3- formülü tanımla ALAN = pi*r*r , çevre= 2*pi*r
4- kullanıcıdan verileri al
5- işlem yap
6- çıktı ver



float r,circumference, area;
const float PI = 3.1415; // Not C dünyasında virgül  nokta demektir -- başına const yazmamızın sebebi ileriki aşamalarda PI sayısının değişmemesi için const sabit anlamına geliyor
printf("Dairenin yarıçapını girin:");
scanf("%f",&r);
circumference = 2* PI * r;
area = PI*r*r;
printf("circumference of circle: %f\n",circumference);
printf("area of circle: %f",area);

*/

/*  4 adet sayı alıp bunların karesini ve küpünü alan program

1- ihtiyacımız olan  variables bul ve tanımla
2- variables type bul
3- formülü tanımla kare= sayı1*sayı2 , küp = sayı1*sayı2*sayı3
4- kullanıcıdan verileri al
5- işlem yap
6- çıktı ver



float  myNumber1, myNumber2, myNumber3, myNumber4;
   myNumber1 = 0.0;
   myNumber2 = 0.0;
   myNumber3 = 0.0;
   myNumber4 = 0.0;

  printf("Enter four numbers:");
 scanf("%f %f %f %f", &myNumber1, &myNumber2, &myNumber3, &myNumber4);

   printf("The number \t\t"); // iki tane \t yaparak boşluk oluşturuyoruz daha düzenli gözüksün diye
   printf ("Square of number\t\t");
   printf ("Cube of number \t\t\n");

   printf("----------\t\t");
   printf("----------\t\t\t");
   printf("----------\t\t\n");

   printf("%f\t\t",myNumber1);
   printf("%f\t\t\t",myNumber1 * myNumber1);
   printf("%f\t\t\n",myNumber1*myNumber1*myNumber1);


   printf("%f\t\t",myNumber2);
   printf("%f\t\t",myNumber2*myNumber2);
   printf("%f\t\t\n",myNumber2*myNumber2*myNumber2);


   printf("%f\t\t",myNumber3);
   printf("%f\t\t\t",myNumber3*myNumber3);
   printf("%f\t\t\n",myNumber3*myNumber3*myNumber3);



   printf("%f\t\t",myNumber4);
   printf("%f\t\t\t",myNumber4*myNumber4);
   printf("%f\t\t\n",myNumber4*myNumber4*myNumber4);


   printf("\n\n");
 */


//char myNumber = 49;// 49 un ASCII tablosunda bir karşılığı var makineye o komutu göndererek o komut karşılığında tabloda hangi değer varsa ekrana onu yazdırıyor
//printf("Karakterimizin sayısal degeri:%d\n",myNumber);
//printf("Karakterimizin ASCII degeri:%c\n",myNumber);
//printf("\n\n");




//char myCity[20];
//printf("Enter a city:");
//scanf("%s",&myCity); // not: scanf e iki kelimeli bir veri girmek istediğimiz zaman boşluktan sonrasını okumaz
//printf("Your city is: %s",myCity);
//printf("\n\n");


//
//int myNumber,myNumber2,myNumber3;
//myNumber= 7+12;
//myNumber2=myNumber+1;
//myNumber3=myNumber+myNumber2;// myNumber ve myNumber2 değişkeni + operatörü ile myNumber3 değişkenine atıyoruz
//printf("My Number is %d\n",myNumber);
//printf("My Number2 is %d\n",myNumber2);
//printf("My Number3 is %d\n",myNumber3);





//int x,y,sum,sub,div,multi,mod;
//x=5;
//y=2;
//sum=x+y;
//sub=x-y;
//multi=x*y;
//div=x/y;
//mod=x%y;
//printf("Sum:%d\n",sum);
//printf("Subtraction %d\n",sub);
//printf("Multiplication: %d\n",multi);
//printf("Division: %d\n",div);
//printf("Mod x % y:%d\n",mod);


//
//int myNumber;
//myNumber=7;
//printf("myNumber:%d\n",myNumber);
//printf("++myNumber:%d\n",++myNumber);
//printf("++myNumber:%d\n",++myNumber);
//printf("++myNumber:%d\n",++myNumber);
//printf("myNumber:%d\n",myNumber*3);


//int myNumber;
//myNumber=7;
//printf("myNumber:%d\n",myNumber);
//printf("--myNumber:%d\n",--myNumber);
//printf("--myNumber:%d\n",--myNumber);
//printf("--myNumber:%d\n",--myNumber);// -- veya ++ yı başa koyunca direkt o sayıyı azaltıp veya arttırıp ekrana öyle yazdı
//printf("myNumber--:%d\n",myNumber--);// -- veya ++ yı sona koyunca önce normal sayıyı yazdırıyor sonra o sayıyı azaltıyor veya arttırıyor
//printf("myNumber:%d\n",myNumber);


 /*arttırma azaltma ile ilgili alıştırma

int x,y,z;
x=5;
y=2;
z=9;
x++;
//6
++y;//3
z--;
// 8
x=y++;
// x=4=y
x=++y; //x=5=y
z=++x; //z=6=x
z=y--;
//z=4=y
z=--y;//z=3=y
printf("x:%d\n",x);
printf("y:%d\n",y);
printf("z:%d\n",z);
*/


//
//int myNumber;
//myNumber=7;
//myNumber &=12; // cevap 4 buradaki mantığını unutursan ders 8 , dk 13:17 yi aç
//printf("My Number is %d\n",myNumber);

//
//int myNumber;
//myNumber=7;
//myNumber |=3;// cevap 7 buradaki mantığı unutursan ders 8 ,dk 16:58 i aç
//printf("My Number is %d\n",myNumber);
//


//
//int myNumber;
//myNumber=7;
//myNumber^=3;//xor, cevap = 4
//printf("My Number is: %d\n",myNumber);




//int myNumber;
//myNumber=7; // not: burayı anlamazsan ders 8, dk 24:35 i aç
//myNumber <<=2;// bilgisayar dilince yazdığımız bitleri sola 2 adet kaydırıyor ve yeniden işlem yapıp ekrana yazdırıyor
//printf("My Number is %d\n",myNumber);



/*kullanıcıdan 4 basamaklı bir sayı alıp
bu sayının rakamlarını toplayan program


int number, toplam,kalan, bolum;
toplam=0;
printf("4 basamakli bir sayi giriniz:",number);
scanf("%d",&number);
bolum = number/1000;
toplam+=bolum;
kalan=number%1000;

bolum=kalan/100;
toplam+=bolum;
kalan=kalan%100;

bolum=kalan/10;
toplam+=bolum;
kalan=kalan%10;

toplam+=kalan;
printf("gidiginiz 4 basamakli sayini rakamlari toplami:%d",toplam);



int myNumber,bolum,kalan,sum;
sum=0;
printf("Enter a 4-digit number:",myNumber);
scanf("%d",&myNumber);
// 4.basamağı bul
bolum = myNumber / 1000;//9
sum+=bolum;// 0+9=9
kalan=myNumber % 1000;//871

// 3.basamağı bul
bolum =kalan/100;//8
sum+=bolum;//9+8=17
kalan=kalan%100;//71

// 2.basamağı bul
bolum=kalan/10;//7
sum+=bolum;//17+7=24
kalan=kalan%10;//1

// 1.basamağı bul
sum+=kalan;
printf("The sum of the digits of the number you entered: %d",sum);

*/





/* Karşılaştrıma operatörleri

int x,y;
x=7;
y=7;
printf("result x=y:%d\n",x==y);
printf("result x!=y:%d\n",x!=y); // diyorki x değişkeni y değişkenine eşit değil ,  eşit değilse gerçekten ekrana 1 yazar eşitse 0 yazar
printf("result x<y:%d\n",x<y);
printf("result x>y:%d\n",x>y);

printf("\n\n");

*/



/* mantıksal operatörler


 int x,y;
 x=12;
 y=2;
 printf("result: %d\n",(x>5 && x<10));
 printf("result: %d\n",(y>1 && y<5));
 printf("result: %d\n",(x>5 || x<y));
 printf("result: %d\n",(y>5 || y>x));
 printf("result: %d\n",!(x>5 && x<10)); // 0 sa 1 , 1 se 0 yapıyor kısaca değili gibi düşün
 printf("\n\n");

*/



/* kapalı bir kaptaki gazın basıncını hesaplayan program
   basınç=(mol sayısı * R sabiti * sıcaklık)/ haciö kısaca pv=nrt



float pressure,constantR;
int numberOfMoles,volume,heat;
constantR=0.82;
printf("Kabin hacmini giriniz:");
scanf("%d",&volume);
printf("kabtaki mol sayisini giriniz:");
scanf("%d",&numberOfMoles);
printf("Ortam sicakligini giriniz:");
scanf("%d",&heat);
pressure=(numberOfMoles*constantR*heat)/volume;
printf("%d hacimli kaptaki gazin basinci:%f\n\n\n",volume,pressure);




float constantR, basınc;
int hacim,sıcaklık,mol;
constantR=0.82;

printf("kabin hacmini giriniz:",hacim);
scanf("%d",&hacim);

printf("kabin sicakligini giriniz:",sıcaklık);
scanf("%d",&sıcaklık);

printf("kabin mol degerini giriniz:",mol);
scanf("%d",&mol);

basınc = (constantR*mol*sıcaklık)/hacim;

printf("%dV hacimli kaptaki gazin basinci:%f",hacim,basınc);
*/




/* Bir elektirik dağıtım şirketi verdikleri hizmet karşılığında müşterilerinden aylık olarak harcanan toplam
kilowatt saat miktarınca ve belirli bir abonelik ücreti talep etmemektedir birim kilowatt saat ücreti ve
abonelik ücreti her ay yıllık enflasyon oranında artmaktadır buna göre müşterinin bir aya ait ödeyeceği
elektirik faturasının miktarını hesaplayan program / fatura miktarı=harcanan elektirik*birim fiyat + abone ücreti


  NOT: Önemli bir örnek tekarar edilmesi gerekiyor.


float odenecekFatura,eskiBirimFiyat,yeniBirimFiyat;
float enflasyon,eskiAboneUcreti,yeniAboneUcreti;
int yeniOkuma,eskiOkuma,toplamHarcananElektirik;
printf("enflasyon oranini girin:");
scanf("%f",&enflasyon);
printf("Onceki aya ait birim fiyat miktarini girin:");
scanf("%f",&eskiBirimFiyat);
printf("Onceki aya ait abonelik ucretini girin:");
scanf("%f",&eskiAboneUcreti);
printf("Bir önceki aya ait okuma degerini girin:");
scanf("%d",&eskiOkuma);
printf("Bu aya ait okuma degerini girin:");
scanf("%d",&yeniOkuma);
toplamHarcananElektirik=yeniOkuma-eskiOkuma;
yeniBirimFiyat=eskiBirimFiyat*(1+enflasyon/100);
yeniAboneUcreti=eskiAboneUcreti*(1+enflasyon/100);
odenecekFatura=toplamHarcananElektirik*yeniBirimFiyat+yeniAboneUcreti;
printf("\n odeyeceginiz fatura tutari: %f\n\n",odenecekFatura);


*/

/* 1-)girilen sayıların onlar ve birler basamağını bulan program
   2-)girilen sayıların aritmetik ortalamasını bulan program


NOT: herhangi bir sayının 10 ile bölümünden kalan bize birler basamağını verir.
NOT: herhangi bir sayının  100 ile  bölümünden bölümü 10 bölersek kalan rakam bize başta girilen sayının onlar basamağını veriri



int x,y,z,t,k, ort,toplam;

printf("1. sayinizi giriniz:");
scanf("%d",&x);
printf("2. sayinizi giriniz:");
scanf("%d",&y);
printf("3. sayinizi giriniz:");
scanf("%d",&z);
printf("4. sayinizi giriniz:");
scanf("%d",&t);
printf("5. sayinizi giriniz:");
scanf("%d",&k);
toplam= x+y+z+t+k;
ort = toplam/5;
printf("aritmetik ortalamaniz:%d",ort);




int myNumber,first,second;

printf("Pozitif bir sayi giriniz:");
scanf("%d",&myNumber);
first=myNumber%10;
second=(myNumber%100)/10;
printf("girilen sayinin birler basamagi:%d\n",first);
printf("girilen sayinin onlar basamagi:%d\n",second);



*/



/* Koşullu ifadeler


NOT: Koşulların içerisinde koşul tanımlayabiliriz.

int number1, number2;
printf("1. sayinizi giriniz:",number1);
scanf("%d",&number1);
printf("2. sayinizi giriniz:",number2);
scanf("%d",&number2);

if  (number1>number2)
{
  printf("1. sayiniz 2. sayinizden buyuktur");
}
else
{

    printf("1. sayiniz 2.sayinizdan kucuktur");
}





int score;
printf("Enter a score");
scanf("%d",&score);
if(score>=60)
{
    printf("Congratulations you passed the exam\n");
    printf("Your score:%d\n\n",score);
}

 else
 {
     printf("Unfortunately you did not pass the exam\n\n");
 }




int score;  // bu yazdığımız kod kısa bir if else örneği böylede yapılabiliyor ekstra bilgi olsun
score=59;
(score>=60)? printf("You passed the exam\n"): printf("you failed the exam\n"); // buradaki ? ise anlamı katıyor , : ise else görevi görüyor





int number1, number2;
number1=0;
number2=0;
printf("Enter two number:");
scanf("%d %d",&number1,&number2);
if(number1>number2)
{
    printf("number 1 is a bigger than number2\n");
}
else if(number1<number2)
{
    printf("number2 is a bigger than number1x"x \n");
}
else
{
    printf("number1 = number2\n");
}







// basit bir kitap sipariş ve indirim programı

// indirim mantığı şöyle olucak--- miktar >=60  indirim %30 / 30<miktar<60 indirim %20/ 10<miktar<30 indirim %12/ miktar<10 indirim %0.1

    int bookPrice,orderQuanity;//kitabın sipariş fiyatını ve sipariş miktarını tutuyoruz
    float discountRate,nodiscountPrice,discountPrice,sum;
    //  indirim oranı, indirimsiz  fiyat, kitabın indirimli fiyatı, toplam

    bookPrice=20;//kitabın fiyatı
    orderQuanity=0;//sipariş miktarı
    printf("Kac adet kitap siparis etmek istiyorsunuz:");
    scanf("%d",&orderQuanity);
    if(orderQuanity>=60)
    {
      discountRate=0.30;
    }
    else
    {
        if(orderQuanity>=30 && orderQuanity<60 )
        {
            discountRate=0.20;
        }
        else if(orderQuanity >=10 && orderQuanity <30)
        {
            discountRate=0.12;
        }
        else
        {
            discountRate=0.01;
        }
    }

    nodiscountPrice=orderQuanity*bookPrice;
    printf("Kitabin indirimsiz fiyati:%f TL \n",nodiscountPrice);
    discountPrice=orderQuanity *bookPrice*discountRate;
    printf("indirimli tutariniz: %f TL \n",discountPrice);
    sum=nodiscountPrice- discountPrice;
    printf("Siparislerinizin toplam tutari:%f TL \n",sum);





// 1-)TBMM'inde toplantı yeter sayısının sağlanıp sağlanmadığını kontrol eden program

int partyA,partyB,partyC,currentCouncilor;
const int sumCouncilor=600;


printf("Meclisteki partilerin milletvekili sayilarini girin:");
scanf("%d%d%d",&partyA,&partyB,&partyC);
currentCouncilor=partyA+partyB+partyC;
if(currentCouncilor<200)
{
    printf("gerekli toplanti yeter sayisi bulunmadigindan ");
    printf("toplantiya ara verildi\n");
    printf("Toplanti yeter sayisi 200'dur \n");

}
else
{
    printf("Meclis toplantiya hazir\n");
}



// girilen sayının tek mi çift mi oludğunu  bulan program

int sayi;

printf("bir sayi giriniz:");
scanf("%d",&sayi);

if(sayi%2==0)
{
    printf("girdiginiz sayi cifttir");
}

else if (sayi%2!=0)
{
    printf("girdiginiz sayi tektir");
}



// kullanıcıdan alınan üç sayının en büyüğünü ve en küçüğünü koşullu ifadelerle tespit eden program

int number1,number2,number3,max,min;
printf("Enter three numbers:");
scanf("%d%d%d",&number1,&number2,&number3);
if(number1>number2 && number1>number3)
{
    max=number1;
}
else if(number2>number1 && number2>number3)
{
    max=number2;
}
else
{
    max=number3;
}
if(number1<number2 && number1<number3)
{
    min=number1;
}
else if(number2<number1&&number2<number3)
{
    min=number2;
}
else
{
    min=number3;
}
printf("The Largest Number:%d\n",max);
printf("The Least Number:%d\n",min);




// kenar uzunlukları alınan bir üçgenin hangi tür olduğunu tespit eden program

int a,b,c;
char longestSide;

printf("Enter the side lengths of the triangle:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
    longestSide='a';
}
else if(b>a&&b>c)
{
    longestSide='b';
}
else
{
    longestSide='c';
}
//------------------------
if  (longestSide=='a')
{
    if(a*a == b*b+c*c)
    {
        printf("dik acili bir ucgen\n");
    }
    else if(a*a>b*b+c*c)
    {
        printf("genis acili ucgen\n");
    }
    else if(a*a<b*b+c*c)
    {
        printf("dar acili ucgen\n");
    }
    else
    {
        printf("girilen kenarlar bir ucgen olusturmaz\n");
    }
}
else if(longestSide=='b')
{

    if(b*b == a*a+c*c)
    {
        printf("dik acili bir ucgen\n");
    }
    else if(b*b>a*a+c*c)
    {
        printf("genis acili ucgen\n");
    }
    else if(b*b<a*a+c*c)
    {
        printf("dar acili ucgen\n");
    }
    else
    {
        printf("girilen kenarlar bir ucgen olusturmaz\n");
    }
}
else
{

    if(c*c == b*b+a*a)
    {
        printf("dik acili bir ucgen\n");
    }
    else if(c*c>b*b+a*a)
    {
        printf("genis acili ucgen\n");
    }
    else if(c*c<b*b+a*a)
    {
        printf("dar acili ucgen\n");
    }
    else
    {
        printf("girilen kenarlar bir ucgen olusturmaz\n");
    }
}






// girilen 4 basamaklı sayının özel sayı olup olmadığını tespit eden program

// özel sayı şu --- abcd=(ab+cd)^2  --- buradaki ab ve cd yi bulurken girilen 4 basamaklı sayıyı 100 e böleriz kalan bize cd yi bölüm is ab yi verir

int  number,newNumber, part1,part2;
printf("Enter a positive number:\n");
scanf("%d",&number);
//abcd
part1=number/100;//ab
part2=number%100;//cd
newNumber=(part1+part2)*(part1+part2);
if(newNumber==number)
{
    printf("%d girilen sayiniz ozel sayidir",number);
}
else
{
    printf("%d girilen sayiniz ozel sayi degildir",number);
}











// girilen sayının karekökünün bir tam sayı olup olmadığını bulan program

int number,squareRoot;
printf("Enter a positive number:");
scanf("%d",&number);
if(number<0)
{
    printf("please do not do this\n");
}
else
{
    squareRoot=sqrt(number);// buradaki sqrt bir karekök fonkisiyonu işlevi görür bunu buraya eklememiz için ayrı bir kütüphane ekledik
    if(squareRoot*squareRoot==number)
    {
        printf("square root of %d is an integer\n");
        printf("square root of %d\n",squareRoot);
    }
    else
    {
        printf("No it is not\n");
    }
}








// bir gsm operatörü 4 dk kadar konuşma ücretini 0.30TL olarak belirlemiştir
// ancak konuşma süresi 4 dakikayı aşarsa bundan sonraki her dakika için ek olarak
// 0.07TL almaktadır. telefon görüşmesinin süresini dakika cinsinden girdi olarak alan
// ve konuşmanın ücretini hesaplayan C programını yazalım


float talkTime,fee;
printf("Phone Talk Time:");
scanf("%f",&talkTime);

if(talkTime<=4.0)
{
     fee=0.30;
}
else
{
   fee=0.30+(talkTime-4)*0.07;
}
printf("Fee:%.3f TL\n",fee);









// bir üçgenin açılarını girdi olarak alan ve bu üçgenin eş kenar, ikiz kenar veya çeşit kenar üçgen olup olmadığını belirleyen
// programı yazalım

int a1,a2,a3,toplam;
printf("lutfen  ucgenin acilarini  giriniz:\n");
scanf("%d%d%d",&a1,&a2,&a3);
printf("Ucgeninizin acilari bunlar:%d-%d-%d\n",a1,a2,a3);
toplam=a1+a2+a3;

if(a1==60&&a2==60&&a3==60&&toplam==180)
{
    printf("ucgeninin eskenar ucgendir");

}
else if(a1==a2&&a1!=a3&&toplam==180)
{
    printf("ucgeninin ikizkenar ucgendir");
}
if(a1!=a2&&a1!=a3&&toplam==180)
{
    printf("ucgenin cesitkenar ucgendir");
}











// Herhangi bir karakteri girdi olarak alan ve bu karakterlerin bir harf olup olmadığını ve küçük harf mi
// büyük harf mi olduğunu bulan programı yazalım

char myCharacter;
printf("Enter a character:");
scanf("%c",&myCharacter);

if((myCharacter>='A')&&(myCharacter<='Z'))
{
   printf(">%c is an uppercase letter\n",myCharacter);
}
else if((myCharacter>='a')&&(myCharacter<='z'))
{
    printf("%c is an lowercase letter\n",myCharacter);
}
else
{
    printf("%c is not a letter\n");
}











*/





/*Switch Case Yapısı


int day=5;
switch(day)
{
    case 1:printf("Monday\n");
    break;//yukarıdaki case çalıştırdıksan sonra buraya geldiğinde duruyor yani mola veriyor gibi düşün switch den çıkıyor yani break koymazsak sırayla case1 case2 case3 diye gezer

    case 2:printf("Tuesday\n");
    break;

    case 3:printf("Wednesday\n");
    break;

    case 4:printf("Thursday\n");
    break;

    case 5:printf("Friday\n");
    break;

    case 6:printf("Saturday\n");
    break;

    case 7:printf("Sunday\n");
    break; // burası son satır olduğu için break dememize gerek yok aslında isteğe bağlı yani
    default:printf("There is no such day\n");//bu mantığı if else gibi düşün eğer yukarıdaki komutların hiçbiri çalışmazsa bu komut çalışır
    break;
}





// x==7 ? 19:(y==12?10:-90); aşağıda bunun switch case ile yapılmış hali var
// kısaca bu program şöyle çalışıyor biz x ve y değerlernini ztn girdik  diyor ki x değeri 7 ye eşitse
// z yerine 19 yazdır değilse y ye bak eğer y 12 ye eşitse z yerine 10 yazdır değilse z yerine -90 yazdır
int x,y,z;
x=3;
y=12;
switch(x)
{
    case 7: z=19;
    break;
    default:switch(y)
    {
        case 12:z=10;
        break;
        default: z=-90;
        break;
    }
}
printf("%d\n",z);









// bir saatış elemanı haftanın hangi günü kaç ürün satmış onun tablosu yapan program
// pzt=2 , salı=5,çrş=7,prş=10,cuma=15,cmt=19,pzr=25 tane ürün satmış olsun


int numberOfProducts,day;
char *dayName;
numberOfProducts=0;
day=0;
printf("Enter a number of day (1-7):");
scanf("%d",&day);
if(day<1|| day>7)
{
    printf("hatali gun sayisi girdinin\n");
    return 0; // eğer hatalı sayı girerse benim istediğimi yapmadığı için programı burada sonlandırsın
}

switch(day)
{

// not: case leri aşağıdan yukarı doğru artarak sıralamamın sebebi mesela 5 giriik case 1 den başlayarak aşağıdan yukarı doğru
//      okuyup toplıyarak yazdırması bunun mantığını unutursan 26 videoya bi göz at

    case 7:numberOfProducts+=25;
         if(day==7){dayName="Pazar";}


    case 6:numberOfProducts+=19;
         if(day==6){dayName="Cumartesi";}


    case 5:numberOfProducts+=15;
         if(day== 5){dayName="Cuma";}


    case 4:numberOfProducts+=10;
         if(day== 4){dayName="Persembe";}


    case 3:numberOfProducts+=7;
         if(day == 3){dayName="Carsamba";}

    case 2:numberOfProducts+=5;
         if(day == 2){dayName="Sali";} // yapısının kendisi bir kontrol yapısıdır. Bu yapı, koşul doğruysa içerideki bloğu çalıştırmayı yönetir.
                                      //  Bu kontrol yapısının parantezden sonra noktalı virgülle sonlandırılması gerekmez.

    case 1:numberOfProducts+=2;
         if(day==1){dayName="Pazartesi";}

}

printf("%s gunu sonunda toplam %d urun satisi yapildi\n\n",dayName,numberOfProducts);







// tek sayı ve çift sayıyı bulan program swtich case ile
int number;
printf("Enter a Number:\n");
scanf("%d",&number);

switch(number%2)
{
    case 0: printf("%d is an even number\n",number); break;
    case 1: printf("%d is an odd number\n",number); break;


}







//programlarda sesli veya sessiz harf bulma uygulaması (ingilizceye göre ve swtich case ile)



char letter;
printf("Enter a letter:\n");
scanf("%c",&letter);

switch(letter)
{
    // Not: burada case lerin karşısında tekrar tekrar kod yazmamak için hemen break ile kapatmıyorum en son
    // case den sonra sonra printf ve break yazıyoruz diğerlerine tek tek uğraşmamak için yazılım kolaylığı
    case 'a':
    case 'e':
    case 'u':
    case 'o':
    case 'i':printf("%c is a vowel\n",letter);break;
    default:printf("%c is a consonant\n",letter);
    printf("or not a letter \n\n");

}






// programda girilen ayın kaç günden oluştuğunu bulan programı swtich case ile yap


int MonthNumber;
printf("Which month:");
scanf("%d",&MonthNumber);

switch(MonthNumber)
{
    case 4:
    case 6:
    case 9:
    case 11: printf("There are 30 days in the %dth month\n",MonthNumber);
    break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("There are 31 days in the %dth month\n",MonthNumber);
    break;

    case 2:printf("There are 28 or 29 days in the %dth month\n",MonthNumber);
    break;

    default:printf("There is no %dth month\n",MonthNumber);


}













*/




/*kısa yolanda if-else

x==7 ? 19:(y==12?10:-90); ===>  x değerim 7 ye eşitse  19 (burada eşiteseyi ? olarak gösteriyoruz)
                                değilse (:) parantez içindeki işlemi yap diyorum ki  y değerim 12 ye eşitese
                                10 değerini ekrana bas değilse -90 ı ekrana bas




*/





/*Döngü Mantığı (While-For-Do)

// 1. BAŞLANGIÇ (Döngüden önce)
int i = 1;

while ( 2. DURMA KOŞULU ) { // Sadece koşul burada
    // ... yapılacak işler ...

    // 3. GÜNCELLEME (Döngünün içinde, genelde en sonda)
    // Eğer unutursan, SONSUZ DÖNGÜ olur!
    i++;
}




do {
    // 1. ÖNCE BURASI ÇALIŞIR

    // 3. GÜNCELLEME DE BURADA

} while ( 2. DURMA KOŞULU ); // KONTROL EN SONDA YAPILIR


Not: Sadece döngüyü kırıp çıkmak için break, tüm programı kırıp çıkmak için return ü kullanırız
Not: nerede tekrarlı yapı varsa orada döngü vardır diye düşün c dilinde

// NOT: Koşulun doğru olup olmadığını kontrol etmeden önce döngü 1 kez çalıştırılsın ardından koşul doğru olduğu sürece döngüyü tekrarlasın

int  i=3; // increment / increase   neden i kullandığmızın sebebi baş harflerini almışlar

do
{
    printf("%d\n",i);
    i++;
}
while (i<=7);






    int i;
    // Toplamı tutmak için yeni bir değişken tanımlıyoruz ve başlangıç değerini 0 yapıyoruz.
    long long toplam = 1; // Toplam 2 milyondan büyük olacağı için 'long long' kullanmak daha güvenli.

    // i=2000'den başlar ve i > 5 olduğu sürece i'yi 1 azaltarak döngü devam eder.
    for(i = 20; i > 5; i--)
    {
        // Her adımda i'nin mevcut değerini toplam değişkenine ekle.
        toplam = toplam + i;

        // (İsteğe bağlı) Hangi sayıların eklendiğini görmek isterseniz, bu satırı kullanabilirsiniz.
        // printf("Eklenen sayi: %d, Anlik Toplam: %lld\n", i, toplam);
    }

    // Döngü bittikten sonra nihai toplamı ekrana yazdır.
    printf("2000'den 6'ya kadar olan tum sayilarin toplami: %lld\n", toplam);







int i;
for(i=0;i<10;i++)
{
    if(i==7)
    {
        break; // 7 yi gördükten sonra direkt döngüden çıkıyor 10 dan küçük desek bile 8 e 9 a fln hiç bakmıyor
    }
    printf("%d\n",i);
}





int i=0;
while(i<=10)
{
    if(i==5)
    {
        break;
    }
    printf("%d\n",i);
    i++;
}





int i;
for(i=0;i<10;i++)
{
    if(i==7)
    {
        continue; // bu atlama anlamına geliyor yani döngümüz 0 dan 9 a kadar teker teker yazdırırken 7 ye gelince orayı continue ediyor yani atlayıp diğerlerini
                  // yazdırmaya devam ediyor
    }
    printf("%d\n",i);
}





int i=0;
while(i<=10)
{
    if(i==6)
    {
           i++;// i++ ı buradaya koymamın sebebi  contine ile atlattığım zaman aşağıda bulunan i++ ı da atlar  yani i 6 ya kadar gelri ama ben burayada koyduğum zaman
              //  sayıları arttırmaya devam edicek ve 10 a kadar gelicek
        continue;
    }
    printf("%d\n",i);
    i++;
}


// While döngüsünü kullanarak basit bir çarpım tablosu

int i,number;
number =0;
i=1;
printf("Enter a number from 1 to 10:");
scanf("%d",&number);

if(number <1 || number >10)
{
    printf("Please don't do that\n");
    return 0;// burada retrun 0; demeseydim ben ekrana 100 yazsam bile uyarı veriri ama çalıştırmaya devam ederdi böyle bir güvenlik açığı olurdu
}
while(i<=10)
{
    printf("%d x %d = %d \n",number,i,number*i);
    i++;
}




// asal sayı bulan program While ile
//Not: bir sayı eğer kendisinin yarısına kadar olan sayılardan herhangi birine bölünmüyorsa
// yarısından sonraki sayılara bölünme ihtimali de sıfırdır.

int number, i;
number=0;
i=2;
printf("Enter a positive number:\n");
scanf("%d",&number);
if(number<0)
{
    printf("Please enter a positive number\n");
    return 0;
}
while(i<number/2)// burada number ın yarısına kadar olan sayılar numbera bölünüyor mu diye kontrol ediyoruz
                // eğer bölünüyorsa asal değildir ama bölünmüyorsa asaldır tek tek i yi arttırarak deniyorz
                // ta ki bizim i değeri number değerine büyük veya eşit olana kadar buradan sonra direkt
                // döngüden çıkıp sayınız bir asal sayıdır diyor
{
    if(number%i==0)
    {
        printf("\n%d divided by %d so it can't be a prime number",number,i);
        return 0;
    }
    i++;
}
printf("%d is a prime number\n",number);





// asal sayı bulan program For ile

int number, i;
number=0;
printf("Enter a positive number:\n");
scanf("%d",&number);
if(number<0)
{
    printf("Please enter a positive number\n");
    return 0;
}
for(i=2;i<=number/2;i++)

{
    if(number%i==0)
    {
        printf("\n%d divided by %d so it can't be a prime number",number,i);
        return 0;
    }

}
printf("%d is a prime number\n",number);








// programda  girilen sayıya kadar olan tüm asal sayıları ekrana yazdırma iç içe döngü ile
//Çok önemli bir örnek algoritma mantığını iyi anlamak gerek

int number,i,j,control;
printf("Enter a Number:");
scanf("%d",&number);
for (i=2;i<=number;i++)
{
    control=1;
    for(j=2;j<=i/2;j++)// bir sayının yarısına kadar olan sayılara eğer bölünmüyorsa
                        // ztn yarısından sonraki sayılara bölünmez. mantığı böyle, bu bir matamatik kuraldır
    {
        if(i%j==0)
        {
            control=0;
            break;
        }
    }//iç for bitti
    if(control !=0)
    {
        printf("%d ",i);
    }
}// dış for bitti






//C Programlamada Girilen Notları Toplayıp Ortalamasını Alan Program do while ile


int i;
float examGrade,sumGrade,average;

i=1;
examGrade=0.0;
sumGrade=0.0;
average=0.0;




do // manatığı şöyle önce gidip while bakma diyoruz sen önce diyoruz şu döngüye bir gir o döngünün içerisindeki kodlarımı bir kez olsun çalıştır daha sonra
    // gel koşulu takip et yani whileı while nediyorsa ozmn onu yap  bunu yapmamız sayesinde programı başlattığımız gibi ekrana ilk olarak 1. sınav notunu giriniz ifadesi
    // geliyor eğer do nun içindeki döngüyü 1 kez olsun çalıştırmasyadı ekrana o gelmezdi işte do while bu işe yarıyor
{
   printf("%dth exam grade:",i);
   scanf("%f",&examGrade);
   if(examGrade==0)
{
    break;
}
if(examGrade<0)
{
    printf("Please enter a positive number\n");
    continue; // bunu burada kullanmamızın sebebi bu uyarıyı verdikten sonra bu uyarı yokmuş gibi tekrar  aynı soruyu ekrana yazdırması
}
else
{
    sumGrade+=examGrade;

}
i++;// bu sayacın artmasının sebebi  1486. satırdaki %d yerine 1. notu , 2.notu, 3.notu diye girin diye arttırarak girmesi için

}
while(examGrade!=0);
if((i-1)==0)
{
    average=0.0;
}
else
{
    average=sumGrade/(i-1);
}
printf("\nyou entered %d exam grades\n",i-1);// kişinin girdiği son sayı 0 olduğu için (programdan çıkmak için 0 girmesi gerekiyor) o yüzden
                                             // diğer i değerlerine sıfırı katmamamız gerekiyor çünkü sıfır bir not  değil
printf("avarage:%f\n",average);









int i;
double bugday=1;
double toplamBugday=0;

for(i=1;i<=64;i++)
{
    printf("%d. kare icin bilgine verilecek bugday sayisi:%20.0f\n",i,bugday);
    toplamBugday += bugday;
    bugday  *=2;
}
printf("\nbilgine verilecek toplam bugday sayisi:%20.0f\n",toplamBugday);





// faktöriyel hesaplama for ile


int i, factoriel,number;
factoriel=1;
printf("Enter a Number:\n");
scanf("%d",&number);

for(i=number;i>=1;i--)
{
    factoriel *=i;
}
printf("%d!=%d\n",number,factoriel);












int i;

printf("3 un kati olan sayilari atliyarak  1 den 100 e kadar olan sayilar:\n");

for(i=1;i<=100;i++)
{

    if(i%3==0)
    {
        continue;
    }

    printf(" %d",i);
}
printf("\n");









    int i, j;

    for (i = 1; i <= 10; i++)
        {
           for (j = 1; j <= i; j++)
        {

            printf("%d x %d = %d \t", j, i, i * j);

        }

        printf("\n");
    }











//Not: sharp= #
//C Programlamada Dik Üçgen Desen (Şekil) Algoritması iç içeç döngü ile

int i,j,sharp;

printf("Enter the number of sharps:");
scanf("%d",&sharp);

for(i=1;i<=sharp;i++)

{

    for(j=1; j<=i;j++)
    {
        printf("*");
    }

    printf("\n");
}

for(i=1;i<=sharp;i++)

{

    for(j=sharp; j>i;j--)
    {
        printf("*");
    }

    printf("\n");
}









*/




/*Ön İşlemci Komutları





NOT:DEBUG kelimesi İngilizce'de "Hata Ayıklama" anlamına gelir. (Bug = Hata, Debug = Hatayı Ayıklamak)
DEBUG yerine TEST_MODU veya KONTROL_ET ya da X yazsaydınız da programınız birebir aynı şekilde çalışırdı.




-------------------------------------------------------------------------------------------------


-DEFİNE (Simgesel sabit veya makro tanımlar)-

Not: Başlık dosyalarının önceden derlenmiş olması nedeni ile derleyici sadece program içinde yazılan kodları
derler ve böylece derleme zamanından tasarruf sağlar.

#define PI 3.14
#define KARE(x)(x*x)

printf("PI=%.2f\n",PI);
printf("3'in karesi=%d\n",KARE(3));
-------------------------------------------------------------------------------------------------
-UNDEF(tanımı kaldırma)

Not: Daha önce yapılan bir #define tanımını iptal eder.
#define MESAJ "MERHABA!"
#undef MESAJ
#define MESAJ "Selam!"

printf("%s\n",MESAJ);

-------------------------------------------------------------------------------------------------

-İNCLUDE (Başka dosyayı ekleme)-

Not:Standart veya kullanıcı tanımlı başlık dosyalarını programa ekler.
   < > → sistem kütüphaneleri
   " " → kullanıcı dosyaları
   ===========================================================
// #include "yardimci.h" // kendi oluşturduğun dosya
//
// int main() {
//     printf("Merhaba Dünya!\n");
//     return 0;
// }
-------------------------------------------------------------------------------------------------
-İFDEF-DEBUG-DEFİNE-

NOT:#define DEBUG sadece bir anahtardır. #ifdef ise o anahtarın açık olup olmadığını kontrol eden kapıdır. Normal programlarınızda buna ihtiyacınız yoktur;
sadece büyük ve karmaşık programlarda hata ayıklamayı kolaylaştırmak için kullanılır.
// Hata ayıklayacağım için BU ANAHTARI AÇIYORUM
#define DEBUG

    int gun;

    printf("Lutfen bir gun numarasi (1-7) girin: ");
    scanf("%d", &gun);

    // HATA AYIKLAMA KODU: Acaba 'gun' değişkenine doğru değer geldi mi?
    #ifdef DEBUG
    printf("[DEBUG] 'gun' degiskeninin degeri: %d\n", gun);
    #endif

    switch (gun) {
        case 1:
            printf("Pazartesi\n");
            break;
        // ... (diğer günler) ...
        default:
            printf("Hatali giris!\n");
            break;
    }

  -------------------------------------------------------------------------------------------------
-#ifndef-

-#ifndef, "If Not Defined" (Eğer Tanımlı Değilse) anlamına gelir ve #ifdef'in tam tersi mantıkla çalışır.

#ifdef DEBUG

Anlamı: "Eğer DEBUG anahtarı varsa (tanımlıysa) bu kapıdan geç."

#ifndef DEBUG

Anlamı: "Eğer DEBUG anahtarı yoksa (tanımlı değilse) bu kapıdan geç."

not:#ifndef en çok .h uzantılı başlık dosyalarını "tekrarlı dahil edilme" hatalarından korumak için kullanılır.


#include <stdio.h>

// Anahtar KAPALI (yoruma alındı veya silindi)
// #define DEBUG  mesela şu yorum satırında olduğu için debug modu kapalı

int main() {

    #ifdef DEBUG
        // DEBUG tanımlı OLMADIĞI için bu kod ÇALIŞMAZ
        printf("Debug modu ACIK.\n");
    #endif

    #ifndef DEBUG
        // DEBUG tanımlı OLMADIĞI için bu kod ÇALIŞIR
        printf("Debug modu KAPALI. Program yayina hazir.\n");
    #endif

    return 0;
}

-------------------------------------------------------------------------------------------------

-#error(Derleme hatası oluşturma)-

1. `#error` Nedir? Ne İşe Yarar?
--------------------------------------------------------------------------------

`#error`, adından da anlaşılacağı gibi, **bilinçli olarak bir derleme hatası** oluşturmak için kullanılır.

Ön işlemci (Preprocessor), bu komut satırını gördüğü anda **derlemeyi (build)
anında durdurur** ve tırnak içinde yazdığınız mesajı programcıya bir hata
olarak gösterir.

* **Temel Amaç:** Programın, istenmeyen veya yanlış bir konfigürasyon (ayar)
  ile derlenmesini **engellemektir**.
* **Farkı Nedir?** `printf` program çalışırken hata verir (Runtime Error).
  `#error` ise program daha hiç çalıştırılabilir hale gelmeden, derleme
  aşamasında (Compile-time Error) hata verir.


NOT:#error, bir programcının "Bu ayar yanlışsa, programın hiç oluşturulmasına izin verme!" demesinin en net yoludur.

Koşul sağlanmazsa derleme sırasında hata mesajı verir.
   ===========================================================
// #ifndef DEBUG
// #error "DEBUG tanımlanmalı!"
// #endif
//
// int main() {
//     printf("Program başladı.\n");
//     return 0;
// }
-------------------------------------------------------------------------------------------------










*/



/*
    const char SABIT_SIFRE[] = "Giris123";
    char cikis_kontrol;
    int sayi;
    while (1)
    {
        printf("--- GUVENLIK GIRIS SISTEMI ANA MENUSU---\n");
        printf("Programdan cikmak icin 'q' tusuna basin, devam etmek icin herhangi bir tusa basin: ");
        scanf(" %c", &cikis_kontrol);

        if (cikis_kontrol == 'q')
        {
            printf("Cikis talimati alindi. Program kapatiliyor...\n");
            break;
        }


        int sayi_x, sayi_y;
        printf("\n[Asama 1: Matematiksel Dogrulama]\n");
        printf("Lutfen iki adet tam sayi girin (sayi_x ve sayi_y): \n");
        printf("sayi_x: ");
        scanf("%d", &sayi_x);
        printf("sayi_y: ");
        scanf("%d", &sayi_y);
        if ((sayi_x * sayi_y > 100) && (sayi_x + sayi_y < 50))
        {
            printf("\n>>> Matematiksel Dogrulama BASARILI! Sifre Kontrolune Geciliyor.\n");
            char girilen_sifre[20];
            int basarili_giris = 0;

            printf("\n[Asama 2: Sifre Kontrolu]\n");
            for (int deneme = 1; deneme <= 3; deneme++)
            {
                printf("Sifrenizi girin (Deneme %d/%d): ", deneme, 3);
                scanf("%s", girilen_sifre);
                if (strcmp(girilen_sifre, SABIT_SIFRE) == 0)
                {
                    printf("\n*** Giris Tamamlandi! Sisteme HOS GELDINIZ! ***\n");
                    basarili_giris = 1;
                    return 0;
                }
            else
                {
                    printf("Hatali sifre. Kalan deneme: %d\n", 3 - deneme);
                }
            }
            if (basarili_giris == 0)
            {
                printf("\n!!! Sifre deneme hakkiniz bitti. Program Kapatiliyor. !!!\n");
                return 0;
            }

        }
        else
        {
            printf("\n!!! Matematiksel Dogrulama HATALI. Ana menuye donuluyor. !!!\n");
        }
    }


*/









/*

// Ortalama ondalıklı çıkabileceği için 'toplam' değişkenini double yaptık.
    double toplam = 0.0;
    int sayac = 0; // Kaç adet sayı girildiğini sayar
    int girilenSayi; // Kullanıcının girdiği sayıyı geçici olarak tutar

    // 'scanf' fonksiyonunun dönüş değerini kontrol etmek için
    int status;

    // Döngünün devam edip etmeyeceğini kontrol etmek için bir karakter
    // Başlangıçta 'q'dan farklı bir değer veriyoruz.
    char girisKontrol = ' ';

    printf("--- Sayi Ortalama Programi ---\n");
    printf("Sayilari girmeye baslayin (cikmak icin 'q' tusuna basin ve Enter'a basin):\n");

    // do-while döngüsü:
    // Koşul sonda kontrol edilir, böylece döngü en az bir kez çalışır.
    do {
        printf("%d. sayi: ", sayac + 1);

        // 1. ADIM: Sayı okumayı dene
        // scanf, başarılı bir şekilde okuduğu değişken sayısını döndürür.
        // Bir tam sayı (%d) okumayı başarırsa '1' döndürür.
        status = scanf("%d", &girilenSayi);

        // 2. ADIM: Durumu kontrol et
        if (status == 1) {
            // Başarılı! Bir sayı okundu.
            toplam += girilenSayi;
            sayac++;
        } else {
            // Başarısız! Bir sayı okunamadı (örn: 'q' girildi).
            // Girdinin 'q' olup olmadığını kontrol etmemiz lazım.
            // 'getchar()' ile okunamayan (ve 'q' olan) karakteri alıyoruz.
            girisKontrol = getchar();

            // Eğer girilen 'q' veya 'Q' değilse, kullanıcıyı uyar.
            if (girisKontrol != 'q' && girisKontrol != 'Q' && girisKontrol != '\n') {
                printf("Hatali giris! Lutfen bir sayi veya 'q' girin.\n");
            }

            // scanf ile okuma başarısız olduğunda, giriş arabelleğinde (buffer)
            // kalanları temizlememiz gerekir (özellikle Enter tuşunu).
            // Bu satır, Enter'a basılana kadar kalan tüm karakterleri "yer".
            while (getchar() != '\n');
        }

    } while (girisKontrol != 'q' && girisKontrol != 'Q'); // 'q' veya 'Q' basılmadığı sürece devam et.

    // 3. ADIM: Sonucu Yazdır
    printf("\n--- Sonuc ---\n");
    printf("Cikis yapildi.\n");

    // Hiç sayı girilmemişse (sayac == 0) sıfıra bölme hatası almamak için kontrol et.
    if (sayac > 0) {
        double ortalama = toplam / sayac;
        printf("Girilen %d adet sayinin toplami: %.2f\n", sayac, toplam);
        printf("Aritmetik ortalama: %.2f\n", ortalama);
    } else {
        printf("Hesaplama icin hic sayi girmediniz.\n");
    }

*/



/*
int i,fakt ,sonuc;
sonuc=1;

printf("faktoriyal alinacak sayiyi giriniz:");
scanf("%d",&fakt);
i=1;
while(i<=fakt)
{

    sonuc=sonuc*i;
      i++;
}
    printf("%d! = %d",fakt,sonuc);



int fakt,i,sonuc;

printf("fakt almak istediginiz sayiyi girin:");
scanf("%d",&fakt);
sonuc=1;

for(i=1;i<=fakt;i++)
{
    sonuc=sonuc*i;
}
printf("%d!=%d",fakt,sonuc);




*/




/* girilen sayının basamaklarını topla.

int sayi,kalan;
int toplam =0;

printf("bir sayi girin:");
scanf("%d",&sayi);

if(sayi<0)
{
    printf("%d bir negatif sayidir lutfen pozitif bir sayi giriniz\n",sayi);
    return 0;
}
do
{
    kalan = sayi %10;
    toplam += kalan;
    sayi = sayi /10;


}
while (sayi>0);


printf("rakamlarin toplami:%d\n",toplam);

*/





/*Kullanıcı 0'a basıp çıkış yapana kadar menüyü göstermeye devam et. OKUL

int  secim;

do
{

    printf("\n--- MENU ---\n");
    printf("1. Islem Yap\n");
    printf("2. Ayarlar\n");
    printf("0. Cikis\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);


    if (secim==1)
    {
        printf("islem yapiliyor...\n");

    }
    else if(secim==2)
    {
        printf("ayarlar gosteriliyor...\n");
    }

}


while(secim!=0);
printf("programdan cikildi");


*/


/* ÖNEMLİ ÖRNEK İÇ İÇE DÖNGÜ KESİN  BAK

int i,j;
int sayac =1;

for(i=1;i<=4;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d",sayac);
        sayac++;

    }
    printf("\n");
}



Neden i Sıfırlanmıyor da j Sıfırlanıyor?
Fark şurada: Kodun akış yönü.

1. Dış Döngü (i) İçin Durum:
Program yukarıdan aşağıya akarken for(i=1; i<=4; i++) satırına ilk kez gelir.

Bilgisayar der ki: "Ooo yeni bir döngü. Önce i=1 yapayım." (Gişeden geçer).

Sonra döngü başlar... Döner, döner...

KRİTİK NOKTA: Dış döngünün sonundaki süslü paranteze } gelindiğinde, bilgisayar i=1 yazan yere geri dönmez!

Bilgisayar, i++ (artırma) kısmına zıplar. Bilet gişesini (başlangıcı) pas geçer.

Bu yüzden i tekrar 1 olmaz, kaldığı yerden artarak (2, 3, 4...) devam eder.

2. İç Döngü (j) İçin Durum:
Dış döngünün içindeyiz. i=2 oldu diyelim.

Bilgisayar tekrar for(j=1; ...) satırına gelir.

Bilgisayar için bu satır yepyeni bir komuttur. Çünkü bir önceki turda iç döngü tamamen bitmiş ve hafızadan silinmişti.

Sanki bu kodla ilk kez karşılaşıyormuş gibi davranır: "Ooo yeni bir döngü! j=1 yapayım" der.

Bu yüzden dış döngünün her turunda, iç döngü ölür ve yeniden doğar.



*/





/* asal sayı bulan program For ile

int number, i;
number=0;
printf("Enter a positive number:\n");
scanf("%d",&number);
if(number<0)
{
    printf("Please enter a positive number\n");
    return 0;
}
for(i=2;i<=number/2;i++)

{
    if(number%i==0)
    {
        printf("\n%d divided by %d so it can't be a prime number",number,i);
        return 0;
    }

}
printf("%d is a prime number\n",number);


*/



/* 11 x  11 0

int i,j;


for(i=1; i<=12; i++)
{

    for(j=1;j<=12-i;j++)
    {
        printf("x");
    }
    printf("\n");
    for(j=1;j<=i;j++)
    {
        printf("0");
    }
    printf("\n");

}
*/


/* EN ZOR ÖRNEK
int i,j;

for(i=1;i<=12;i++)
{
    for(j=1;j<=12-i;j++)
    {
        printf("x");
    }
    printf("\n");

    for(j=1;j<=i;j++)
    {
        printf("0");
    }
    printf("\n");
}

*/



/*Klavyeden 8 adet tam sayı alan ve bu sayılardan kaç tanesinin pozitif (0'dan büyük) olduğunu bulan bir C programı yazınız. OKUL


int sayilar[8];
    int i;
    int pozitifAdet = 0;


    printf("Lutfen 8 adet tam sayi giriniz:\n");
    printf("------------------------------\n");

    for (i = 0; i < 8; i++) {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

    printf("\nGirilen Sayilar: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", sayilar[i]);


        if (sayilar[i] > 0) {
            pozitifAdet++;
        }
    }


    printf("\n\nToplam %d adet pozitif sayi girdiniz.\n", pozitifAdet);

*/


/* OKUL

float sepet[5] = {25.50, 40.00, 15.75, 60.00, 12.00};


    int i;
    float toplam = 0.0;
    float enPahali = sepet[0];
    float enUcuz = sepet[0];


    printf("Ilk urunun fiyati: %.2f TL\n", sepet[0]);
    printf("Son urunun fiyati: %.2f TL\n", sepet[4]);
    printf("--------------------------------\n");


    for (i = 0; i < 5; i++) {

        printf("%d. urun: %.2f TL\n", i + 1, sepet[i]);


        toplam += sepet[i];


        if (sepet[i] > enPahali) {
            enPahali = sepet[i];
        }


        if (sepet[i] < enUcuz) {
            enUcuz = sepet[i];
        }
    }


    printf("\n--- Ozet Bilgiler ---\n");
    printf("Toplam Tutar: %.2f TL\n", toplam);
    printf("En Pahali Urun: %.2f TL\n", enPahali);
    printf("En Ucuz Urun: %.2f TL\n", enUcuz);

    printf("\n--- %%10 Zamli Guncel Sepet ---\n");
    for (i = 0; i < 5; i++) {

        sepet[i] = sepet[i] * 1.10;

        printf("%d. urun: %.2f TL\n", i + 1, sepet[i]);
    }
*/




/*Fibonacci Dizisi Algoritması

int first,second, third,i,number;
first=1;
second=1;
third=1;
printf("Enter a number:");
scanf("%d",&number);
printf("1 1 ");
for(i=1;i<=(number-2);i++)
{
    first=second;
    second=third;
    third=first+second;
    printf("%d ",third);
}



*/



/*Üçgen Sayı Piramit Deseni Oluşturma

int i,j,number;

printf("bir sayi giriniz:");
scanf("%d",&number);

for(i=1;i<=number;i++)
{

    for(j=1;j<=i;j++)
    {

       printf("%d",i);
    }

 printf("\n");

}

for(i=number-1;i>=1;i--)
{
    for(j=1;j<=i;j++)

    {
        printf("%d",i );
    }
    printf("\n");
}



*/


/*OKUL
// Iterative (Döngüsel) Iterative (Döngüsel), Daha az hafıza kullanır. Sadece değişkenleri tutar.
//Recursive (Özyinelemeli) Bir fonksiyonun kendisini tekrar çağırmasıdır.,Daha çok hafıza kullanır. Her çağrıda fonksiyon hafızada (Stack) yeni bir yer açar.

inline int mutlak_deger(int x)





 {
    if (x < 0) {
        return -x;
    }
    return x;
}


int iterative(int taban, int us) {
    int sonuc = 1;

    for (int i = 0; i < us; i++) {
        sonuc = sonuc * taban;
    }
    return sonuc;
}


int recursive(int taban, int us) {

    if (us == 0) {
        return 1;
    }

    else {
        return taban * recursive(taban, us - 1);
    }
}



    int taban, us;

    printf("Taban degerini giriniz: ");
    scanf("%d", &taban);

    printf("Us degerini giriniz: ");
    scanf("%d", &us);


    if (us != mutlak_deger(us)) {
        printf("\nHata: Negatif us degeri girilemez! (Sonuc ondalikli cikar,int ile çalışamayız.)\n");
    }
    else {

        int sonuc_iter = iterative(taban, us);
        int sonuc_rec = recursive(taban, us);

        printf("\n--- Sonuclar ---\n");
        printf("Iterative (Dongu) Sonucu : %d\n", sonuc_iter);
        printf("Recursive (Ozyineleme) Sonucu: %d\n", sonuc_rec);


        if (sonuc_iter == sonuc_rec) {
            printf("\nBasarili: Iki yontem de ayni sonucu verdi.\n");
        }
    }

Iterative (Döngü) Kullan:

Eğer problem basit bir tekrarsa (örn: diziyi ekrana yazdırmak, basit matematiksel toplamalar).

Hafıza (RAM) kısıtlıysa (Gömülü sistemler gibi - senin alanın!).

Hız çok önemliyse.

Recursive (Özyineleme) Kullan:

Problem, parçalara bölünebilen bir yapıdaysa (örn: Ağaç yapıları, dosya klasörleri içinde arama yapmak, QuickSort gibi sıralama algoritmaları).

Kodun okunabilirliği ve kısalığı performanstan daha önemliyse.

Matematiksel tanımı recursive olan işlemlerde (Fibonacci gibi).

*/




/*   açıklayıcı bir iç içe for örneği göz atmak faydalı
int i,j,number;
printf("bir sayi giriniz:");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
    for(j=1;j<=number;j++)
    {
        printf("* ");
    }

      printf("\n");


}


Görev Dağılımı: İşçi ve Patron
printf("* "); (İşçi): Bu kodun tek bir görevi vardır: Ekrana SADECE 1 TANE yıldız basmak. Sayıdan, döngüden, dünyadan haberi yoktur. Ona sıra geldiğinde "Ben bir yıldız basarım, işim biter" der.

for Döngüleri (Patronlar): Yıldızın kaç tane basılacağını belirleyen, printf değil, onu çevreleyen döngülerdir (for).

Kod Nasıl Çalışıyor? (Adım Adım Simülasyon)
Diyelim ki number = 3 girdin. Bilgisayar şöyle çalışır:

Dış Patron (i döngüsü): "Hey! Aşağıdaki işi 3 kez tekrarla (3 satır olacak)."

İç Patron (j döngüsü): "Tamam, her satır için işçiye (printf) 3 kez emir vereceğim."

1. Tur: İç patron emreder -> İşçi 1 tane * basar.

2. Tur: İç patron emreder -> İşçi 1 tane * basar.

3. Tur: İç patron emreder -> İşçi 1 tane * basar.

(Ekranda şu an: * * * var)

İç Patron: "Benim işim bitti, 3 kere emrettim."

Dış Patron: "Tamam, şimdi printf("\n") ile alt satıra geç."

Bu süreç dış patronun emriyle tekrar başa döner ve alt satıra da aynısı yapılır.

*/





/* ÖNEMLİ  İçi Boş Kare Desen Algoritması
Neden "İki" Boşluk? ( )
Bunu da sormuştun, bu da çok önemli.

Yıldız basarken printf("* "); dedik. (Yıldız + Boşluk = 2 karakterlik yer kaplar).

Eğer boşluk basarken sadece printf(" "); (1 boşluk) deseydik, cam tuğlalar kırmızı tuğlalardan daha dar olurdu ve duvarın hizası kayardı.

Yıldız ne kadar yer kaplıyorsa (2 birim), boşluğun da o kadar yer kaplaması lazım ki (2 birim) üst satırdaki yıldızlarla hizası bozulmasın.

int i,j,number;
printf("bir sayi giriniz:");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
    for(j=1;j<=number;j++)
    {
        if(i==1||i==number||j==1||j==number)
        printf("* ");
        else
        {
            printf("  ");  // burada neden 2 birim boşluk olduğu yukarıdaki açıklamada yazıyor önemli
        }
    }

      printf("\n");


}


*/



/* ÖNEMLİ  Üçgen Piramit Deseni  3 tane for kullanıyoruz mantığını anla





    int i,j,number;

    printf("bir sayi giriniz:");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        for(j=1;j<=number-i;j++)
        {
            printf(" ");

        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");



    }



*/




/* ÖNEMLİ baklava dilimi 3 tane for kullanıyoruz mantığını anla

    int i,j,number;

    printf("bir sayi giriniz:");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        for(j=1;j<=number-i;j++)
        {
            printf(" ");

        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");



    }
    for(i=number-1;i>=1;i--)
    {
        for(j=1;j<=number-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }


*/




/*C Programlamada Fonksiyonlara Giriş



-Bir fonksiyon yalnızca  çağırıldığında çalışan bir kod bloğudur
-parametre  olarak bilinen ve rileri bir fonksiyona iletebilirsiniz
-fonksiyonlar belirli eylemleri gerçekleştrimek için kullanılır ve kodu yeniden kullanmak için önemlidir.
-Kodu bir kez tanımlayın ve bir çok kez kullanın


-int main() de bir fonksiyondur  () nin anlamı;

Mühendislikte her makinenin bir "Giriş Kapısı" (Input Interface) olmak zorundadır.

Fonksiyonun isminden sonra gelen () parantezleri, "Burası mal kabul yeridir" tabelasıdır.

Eğer parantezlerin içi boşsa (), bu şu demektir: "Ben çalışmak için dışarıdan ekstra bir malzeme (parametre) istemiyorum. Düğmeme bas, çalışayım."

Neden olmak zorunda? Bilgisayar main yazısını gördüğünde bunun bir değişken (kutu) mi yoksa bir fonksiyon (makine) mu olduğunu anlamak için o parantezlere bakar.

int main; -> Bilgisayar der ki: "Ha, bu içinde sayı tutan bir kutu."

int main(); -> Bilgisayar der ki: "Ha, bu iş yapan bir makine."




Neden string değil de int;   niye int main de string main değil

Sen kendi yazdığın fonksiyonları (karesini_al gibi) main fonksiyonunun içinden çağırırsın. Yani main, senin fonksiyonlarının patronudur.

Peki main fonksiyonunu kim çağırır? Onun da bir patronu var: İŞLETİM SİSTEMİ (Windows, Linux, MacOS).

Programın bittiğinde, main fonksiyonu kapanır ve İşletim Sistemine bir "Rapor" verir.

Neden Sayı (int)?
Windows veya Linux gibi sistemler, programlardan "Hikaye" (String) dinlemek istemez. Onlar sadece "Durum Kodu" (Status Code) ister.

Asker (Programın): "Komutanım görev tamamlandı!"

Komutan (Windows): "Bana uzun uzun anlatma asker. Başardın mı, başaramadın mı? Kod ver!"

Mühendislikte standart şudur:

0 (Sıfır): "Başarılı, her şey yolunda, sorunsuz bitti."

1 veya olmayan diğer sayılar: "Hata var, bir şeyler ters gitti."



NOT: geriye retrun ile bir şey döndürmiyeceksek void kullanırız.



 1. Pratik
void  mesajim()
{
    printf("ilk mesajim");
}

void nameList(char name[],int age)
{
    printf("ismi: %s | Yasi:%d\n",name,age);
}


int main()
{

   nameList("Sercan",20);
   nameList("Fuat",30);
   nameList("Mustafa",40);



  mesajim();





  return 0;








*/

/*

int *dizi;
    int n, m, i;


    printf("Baslangic dizi boyutunu giriniz: ");
    scanf("%d", &n);



    dizi = (int*) malloc(n * sizeof(int));


    if (dizi == NULL)
    {
        printf("Hata: Bellek ayrilamadi!\n");
        return 1;
    }


    printf("\n%d adet sayi giriniz:\n", n);
    for(i = 0; i < n; i++)
    {
        printf("%d. sayi: ", i + 1);
        scanf("%d", &dizi[i]);
    }


    printf("\n Mevcut Dizi \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", dizi[i]);
    }
    printf("\n");


    printf("\nKac eleman eklemek istersiniz? ");
    scanf("%d", &m);

    dizi = (int*) realloc(dizi, (n + m) * sizeof(int));

    if (dizi == NULL)
    {
        printf("Hata: Dizi buyutulemedi!\n");
        return 1;
    }


    printf("\nYeni %d adet sayiyi giriniz:\n", m);
    for(i = n; i < n + m; i++)
    {
        printf("%d. sayi: ", i + 1);
        scanf("%d", &dizi[i]);
    }


    printf("\n Guncellenmis Dizi \n");
    for(i = 0; i < n + m; i++)
    {
        printf("%d ", dizi[i]);
    }
    printf("\n");


    free(dizi);
    printf("\nBellek temizlendi. Program kapaniyor.\n");



*/



/*

void not_ekle() {


    static int toplam_not = 0;
    toplam_not++;
    printf("Su ana kadar toplam %d adet not sisteme islendi.\n", toplam_not);
}


float ortalamaHesapla(int *notlar_dizisi, int n) {
    int toplam = 0;
    for (int i = 0; i < n; i++) {
        toplam += *(notlar_dizisi + i);
    }
    return (float)toplam / n;
}

int main() {
    int *notlar;
    int n, i;

    printf("Kac adet not girmek istiyorsunuz? (n): ");
    scanf("%d", &n);


    notlar = (int*) malloc(n * sizeof(int));

    if (notlar == NULL) {
        printf("Hata: Bellek tahsis edilemedi!\n");
        return 1;
    }


    printf("\nNotlari giriniz:\n");
    for (i = 0; i < n; i++) {
        printf("%d. Notu girin: ", i + 1);
        scanf("%d", &notlar[i]);


        not_ekle();
    }


    float ortalama = ortalamaHesapla(notlar, n);

    printf("\nANALIZ SONUCLARI \n");
    printf("Notlarin Ortalamasi: %.2f\n", ortalama);


    free(notlar);
    printf("\nBellek temizlendi. \n");





    int alan_hesapla(int kısa_kenar,int uzun_kenar)
{
    return kısa_kenar * uzun_kenar;

}
int main()
{
   int k, u, gelem_Alan;

   printf("kisa kenari giriniz:");
   scanf("%d",&k);

   printf("uzun kenari giriniz:");
   scanf("%d",&u);

   gelem_Alan=alan_hesapla(k,u);
   printf("\nDikdortgenin Alani: %d\n",gelem_Alan);


return 0;




int showMe(int x)
{
    return 5+x;
}

int sumNumbers(int x, int y)
{
    return x+y;
}

int main()
{
    printf("Sonuc: %d\n",sumNumbers(-1,16));

    return 0;

}


}





int showMe(int x)
{
    return 5+x;
}

int sumNumbers(int x, int y)
{
    return x+y;
}

int main()
{
    printf("Sonuc: %d\n",sumNumbers(-1,16));

    return 0;

}



*/





/* OKUL ZOR
typedef struct {
    int isbn;
    char ad[50];
    char yazar[50];
    int yil;
    int sayfa;
    int raftaMi;
} Kitap;


Kitap* kitapOlustur(int isbn, char* ad, char* yazar, int yil, int sayfa, int raftaMi) {

    Kitap* yeniKitap = (Kitap*)malloc(sizeof(Kitap));


    if (yeniKitap == NULL) {
        printf("Hata: Bellek tahsis edilemedi!\n");
        return NULL;
    }

    yeniKitap->isbn = isbn;
    strcpy(yeniKitap->ad, ad);
    strcpy(yeniKitap->yazar, yazar);
    yeniKitap->yil = yil;
    yeniKitap->sayfa = sayfa;
    yeniKitap->raftaMi = raftaMi;

    return yeniKitap;
}


void kitapYazdir(Kitap* k) {
    if (k == NULL) return;
    printf("---------------\n");
    printf("ISBN: %d\n", k->isbn);
    printf("Ad: %s\n", k->ad);
    printf("Yazar: %s\n", k->yazar);
    printf("Yil: %d | Sayfa: %d\n", k->yil, k->sayfa);
    printf("Durum: %s\n", k->raftaMi ? "Rafta" : "Oduncte");
}


Kitap* kitapAra(Kitap* kitaplar[], int adet, int arananIsbn) {
    for (int i = 0; i < adet; i++) {
        if (kitaplar[i]->isbn == arananIsbn) {
            return kitaplar[i];
        }
    }
    return NULL;
}

int main() {

    Kitap* kütüphane[3];

    kütüphane[0] = kitapOlustur(101, "C Programlama", "Kernighan", 1988, 272, 1);
    kütüphane[1] = kitapOlustur(102, "Veri Yapilari", "Cormen", 2009, 1312, 0);
    kütüphane[2] = kitapOlustur(103, "Algoritmalar", "Sedgewick", 2011, 955, 1);


    printf("KUTUPHANE ENVANTERI:\n");
    for (int i = 0; i < 3; i++) {
        kitapYazdir(kütüphane[i]);
    }


    printf("\n  Arama Sonucu \n");
    Kitap* sonuc = kitapAra(kütüphane, 3, 102);
    if (sonuc != NULL) {
        kitapYazdir(sonuc);
    } else {
        printf("Kitap bulunamadi.\n");
    }


    for (int i = 0; i < 3; i++) {
        free(kütüphane[i]);
    }

    printf("\nBellek temizlendi. Sistem kapatiliyor\n");




//aşağıdaki soruda  int mainin altında kullandık voidleri üst tarafta sadece belirttik
// bu tarz  fonksiyonları böyle kullanmak daha mantıklı

int toplam(int, int);
void themessage();

int main()
{

    int sonuc=toplam(5,11);
    printf("toplam: %d \n",sonuc);
    themessage();
    return 0;


}

void themessage()
{
    printf("lula");
}


int toplam(int x, int y)
{
    return x+y;
}





*/





/* Recursion Fonksiyonlar

-Bir fonksiyonun kendi içinden kendisini tekrar çağırmasına recursion diyoruz.


Örnek:Bir matruşka bebeğini açtığında içinden daha küçük bir bebek çıkar.
Onu da açarsın, daha küçüğü çıkar. Bu işlem, artık açılmayan en küçük bebeğe ulaşana kadar devam eder.
İşte recursion tam olarak budur: Büyük bir problemi, kendisinin daha küçük bir kopyasına dönüştürerek çözmek.


int  sumNumber(int i);

int main()
{
    int result=sumNumber(4);

    printf("%d\n", result);
    return 0;

}

 int sumNumber(int i)
 {
     if(i>0)
     {
         return i+sumNumber(i-1);
     }
     else
     {
         return 0;
     }
 }




 int faktoriyel(int n);

int main()
{
    int sayi;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    if(sayi<0)
    {
        printf("pozitif sayi giriniz!");
        return 1;
    }
    printf("%d sayisinin faktoriyeli: %d\n",sayi,faktoriyel(sayi));
    return 0;
}

int faktoriyel(int n)
{

    if(n<=1)
    {
        return 1;
    }
     return n * faktoriyel(n-1);
}






float üs_alma(float x, int y);

int main ()
{
    float taban=0, sonuc=0;
    int us=0;
    printf("taban ve us degerlerini giriniz:\n");
    scanf("%f%d",&taban,&us);
      if(taban==0&&us<0)
            {
                printf("uygun olmayan islem girdiniz tekrar deneyin!");

            }
        else
            {
            sonuc=üs_alma(taban,us);
           printf("sonuc:%.2f\n",sonuc);
            }


    return 0;

}

float üs_alma(float x,int y)
{
    float sonuc=1;
    int i;
    if(y<0)
    {
        for(i=0;i<-y;i++)
        {

            sonuc *=1/x;
        }

    }
    else
    {
        for(i=0;i<y;i++)
        {
            sonuc*=x;// sonuc=sonuc*x
        }


    }
    return sonuc;





*/


#include <iostream>
#include <iomanip> // Çıktıları düzenli basmak için (setw kullanımı)

using namespace std;

// --- Fonksiyon Prototipleri ---
// Kurallar gereği, imzalarımızı main'den önce tanımlıyoruz.
double sinyalFiltrele(double hamMesafe);
void hataRaporla();
bool kritikSeviye(double mesafe);
void sistemDurumu(double ham, double filtreli);
void acilFren();

int main() {
    // Test verilerimiz: Bir otonom aracın sensöründen gelen ham veri dizisi
    double veriler[] = {25.5, -5.0, 30.2, 999.9, 4.0, 45.0};
    int veriSayisi = sizeof(veriler) / sizeof(veriler[0]);

    cout << "--- OTONOM ARAC MESAFE KONTROL SISTEMI BASLATILDI ---" << endl;
    cout << "----------------------------------------------------" << endl;

    for (int i = 0; i < veriSayisi; i++) {
        double ham = veriler[i];

        // 1. Önce ham veriyi filtreden geçiriyoruz
        double filtreli = sinyalFiltrele(ham);

        // 2. Mevcut durumu ekrana raporluyoruz
        sistemDurumu(ham, filtreli);

        // 3. Mesafe kritik mi kontrol edip gerekirse freni tetikliyoruz
        if (kritikSeviye(filtreli)) {
            acilFren();
        }

        cout << "----------------------------------------------------" << endl;
    }

    return 0;
}

// --- Fonksiyon Tanımları ---

double sinyalFiltrele(double hamMesafe) {
    // 'static' değişkenler fonksiyon bitse bile değerini korur.
    // Yani sistemin "hafızası" gibidir. Başlangıçta 0.0 kabul ediyoruz.
    static double sonGecerliMesafe = 0.0;

    // Geçerli aralık kontrolü [0, 100]
    if (hamMesafe >= 0.0 && hamMesafe <= 100.0) {
        sonGecerliMesafe = hamMesafe; // Veri sağlamsa hafızaya al
        return hamMesafe;
    } else {
        // Veri bozuksa hatayı raporla ve hafızadaki son sağlam veriyi dön
        hataRaporla();
        return sonGecerliMesafe;
    }
}

void hataRaporla() {
    // Statik sayaç sayesinde her çağrıldığında toplam hata sayısını aklında tutar
    static int hataSayaci = 0;
    hataSayaci++;
    cout << "[SISTEM]: Sensor hatasi! Toplam Hata: " << hataSayaci << endl;
}

bool kritikSeviye(double mesafe) {
    // Mesafe 5 birimin altındaysa tehlike var demektir
    if (mesafe < 5.0) {
        return true; // Fonksiyon burada anında sonlanır
    }
    return false;
}

void sistemDurumu(double ham, double filtreli) {
    // Verileri hizalı ve okunaklı basmak için ufak bir mühendislik dokunuşu
    cout << "Ham Veri: " << left << setw(7) << ham
         << " | Filtrelenmis Veri: " << filtreli << endl;
}

void acilFren() {
    cout << "!!! ACIL DURUM FRENI AKTIF !!!" << endl;
}









 // return 0;





//}
