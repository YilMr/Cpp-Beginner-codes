
#include <iostream>

using namespace std;

//int main()

/*{
    
    
    
int main()
{  
    int a=10;
    
    cout<<a<<endl;
    
    return 0;
}    
    int a = 15;
    cout<<a<<endl;
    
    float pi = 3.1415;
    cout<<pi<<endl;
    
    
    char c ='G'; // 1010101(binary) gibi bir sayıdır aslında G , onu int olarak çıkarırsak dönüşüm gerçekleşir kısaca //
    cout<<c<<endl;
    
    int cc= c;
    cout<<cc<<endl;
    
    float R=4.99;
    int abc=R;
    cout<<abc<<endl; // yuvarlama yapmıyor tam kısmını çıktı veriyor sadece //
    
    int birsayi=56;
    float fbirsayi= birsayi;
    cout<<fbirsayi<<endl;
    
    int at=64;
    char car=at;
    cout<<car<<endl; // sayınun karaktere dönüşümü bu şekilde hocam//
    cout<<char(at)<<endl; // direkt bu formatta da çevirebiliriz dost //
    cout<<char(100)<<endl;  //100 ün hangi karaktere denk geldiğini bulur ve ekrana çıktı verir.//
    
    int B=10;
    B ++;                //B'ye +1 ekler direkt postfix.//
    cout<<B<<endl;
    ++ B;                //increment bir artırır prefix.//
    cout<<B<<endl;
    
    cout<<a + B<<endl; //a + B işlemi// + - * / 4 işlem
    
    cout<<15%2<<endl; //15/2 den kalan sayıyı yazdırır.
    cout<<46%9<<endl; // buna modülo veya remainder de denir//
    B = B-1;              // çıkarma işlemi B = B + 1 toplama işlemi //
    cout<<B<<endl;
    
    
    
    return 0;
    
} */


/*int main()
{ 
    int a=10;
    cout<<a<<endl;
    
    int b= a << 2;        //sola kaydırma operatörü// normalde 10 = 1010 iki kere kayınca 101000 yani =40 olacaktır.
    cout<<b<<endl;
    int c= a >> 3;        //sağa 3 kere kaydırma komutu
    cout<<c<<endl;
                          // & and işareti logical   ,  | or işareti logical , ^ xor işareti logical...
    

    int x =13 & 22;        // 22 = 10110 13 =01101 bu ikisi andlenirse p= 00100 yani 4 gelecektir. 
    cout<< x <<endl;
    
    int y= 13 | 22;
    cout<< y <<endl;       // 22+13 = 35 olacaktır fakat binary olacak 5 bit sınırı olduğu için 31 çıkar.
    
    int z= 13 ^ 22;        //10110 xor 01101 farklı olanlar 1 olacak yani 11011
    cout<<z<<endl;
    
    int f;
    
    cin >> f;               // klavyeden girilen değer input
    cout<<"Klavyeden"<<f<<"Degerini girdiniz."<<endl;
    cout<<"f degerinin 10 fazlasi"<< f+10<<endl;       //bizden input istedi sonra 10 ile topladı çıkışa yazdı.
    
    
    
    int g;
    cin>>g;
    cout<<"klavyeden"<< g <<"sayisini girdiniz."<<endl;
    cout<< "girilen sayinin 5kati:"<< g*5<<endl;            // bi sayı girdisi ve işlemler çıktısı//
    cout<<"girilen sayinin yarisi:"<<g/2<<endl;
    cout<<"girilen sayinin karesi:"<< g*g<<endl;
    
    
    
    return 0;
}*/

/*int main()
{
    int a=30;
    if(a < 20)
    {
        cout<<"a20den kucuk"<<endl;
    }
    else if(a==20){
        cout<<"a 20ye esit"<<endl;
    }
    else 
    {   
        cout<<"a 20den buyuk"<<endl;
    }
}  */

/*int main() 
{ 
    int a;
    cout<<"Lutfen Notunuzu Giriniz:"<<endl;
    cin>>a;
    
    if(a<50){
        cout <<"Harf Notunuz F"<< endl;
        }
    else if(a<70)
        {
        cout<<"Harf Notunuz C"<<endl;
         }
    else if(a<90)
        {
        cout<<"Harf Notunuz B"<<endl;   // notuna göre harf notu puanlandırma if else yapısı
         }
    else
        {
        cout<<"Harf Notunuz A"<<endl;
         }
    
    }*/ 
    
    
/*int main()
{   
    float x;
    float a;
    float b;
    cout<<"Vizeden Alinan Notu Giriniz."<<endl;
    cin>>a;
    cout<<"Finalden Alinan Notu Giriniz."<<endl;
    cin>>b;
    
    x = a*40 / 100 + b*60 / 100;
    if(x == 50){
        cout<<"CC"<<endl;
        }
    else if(x<50){
        cout<<"FF"<<endl;             //SINAV NOTLARI İLE HARF NOTU HESAPLAMA//
        }
    else if(x<55){
        cout<<"CC"<<endl;
        }
    else if(x<65){
        cout<<"CB"<<endl;
        }
    else if(x<75){
        cout<<"BB"<<endl;
        }
    else if(x<85){
        cout<<"BA"<<endl;
        }
    else {
        cout<<"AA"<<endl;
    }
} */
    
    
/*int main()
{
    int a;
    a=1;
    switch(a) {
    case 1: cout<<'1';
        break; 
    case 2: cout<<'2';       //switch case yapısı 
        break;
    default:
        cout<<"diger durumlar"<<endl;
        
    }
    
}   */
    
    
/*int main()
{
    int x,y;
    cout<<"Birinci Sayi:"<<endl;
    cin>>x;
    cout<<"Ikinci Sayi:"<<endl;
    cin>>y;
    
    if(x == y){
        cout<<"Iki Sayi Esit"<<endl;
    }
    else{
        cout<<"Sayilar Esit degil"<<endl;
    }
    
    return 0;
}*/


/*int main()
{
    int x,y,z;
    cout<<"X'i Giriniz:"<<endl;
    cin>>x;
    cout<<"Y'yi Giriniz:"<<endl;
    cin>>y;
    cout<<"Z'i Giriniz:"<<endl;
    cin>>z;
    
    if((x>y && x<z) || (x>z && x<y)){
        
        cout<<"X ,Y ile Z arasindadir."<<endl;
    }
    else {
        cout<<"X, Y ile Z arasinda degildir."<<endl;
    }
    
    
    if((x>y || x>z)){
        
        cout<<"X, Y veya Z'den buyuktur."<<endl;
    }else{
        cout<<"X, Y veya Z'den buyuk degildir"<<endl;
    }
    
    if(x==y && x<z){
        cout<<"X, Y'ye esit ayni zamanda Z'den kucuktur."<<endl;
    }else {
        cout<<"X, Y'ye esit degil veya Z'den Kucuk degildir."<<endl;   // mantıksal İşlemler
    }
    if(x>y || x>z){
        cout<<"X, Y'den veya Z'den buyuktur."<<endl;
    }else{
     cout<<"X,Yden ve Z'den buyuk degildir."<<endl;   
    if(x==y && x==z){
        cout<<"X Y ve Z birbirine esittir."<<endl;
    }else{
        cout<<"X Y veya Z birbirine esit degildir."<<endl;
    }
    }
    return 0;
    
    
    
}*/



/*int main()
{
    float yapilacak_isin_saati;
    float a,c;
    cout<<"a = Isci Sayisini Giriniz:"<<endl;
    cin>>a;
    cout<<"c = Bir iscinin isi bitirme saati:"<<endl;    // İŞCİ PROBLEMİ //
    cin>>c;
    
    yapilacak_isin_saati = c/a;
    
    cout<<"Isin bitme Saati:" << (float)yapilacak_isin_saati<<"saattir"<<endl;
    
    return 0;
    

    }*/
    
    
/*int main(){
    
    int a;
    a=0;                            // ADIMLAR: GİRDİ ALINCAK,FONK YAZILACAK,GİRDİNİN DEĞİŞİMİ YAZILACAK,DÖNGÜ BİTECECEK
    while(a<10){                    // doğru olana kadar döngü devam edecektir.
        cout<<a<<endl;
        a = a+1;
    }
    for(int i=0;i<10;i++){
        
        cout<<"Dayyum"<<endl;   // for ile de döngü yazabiliyoruz ayrıca hepsi tek satırda halloluyor.
    }                           //önce kontrol eder sonra yapar
    int x=1;
    do{
        cout<<"Emirhan YILBAT"<<endl; //do while döngüsü x, 10'dan küçük oldukça dönecektir.
        x++;                          //önce yapar sonra kontrol eder          
    }while(x<10);
    return 0;
}
    */
    
    /*
int main()  // 1 den yüze kadar olan tek sayılar
{
    int a=1;
    while(a<100){
        cout<<a<<endl;                        
        a = a+2;
    }
    
    int b=50;  //50-70 arası çift sayılar
    while(b<=70){
        cout<<b<<endl;
        b = b+2;   
    } 
    int c=70; //70-100 arası 7'ye bölünebilen sayılar.
    while(c<=100){
        if(c % 7 ==0){
            cout<<c<<endl;
        }
        c = c+1;
    }
        
        
    
    return 0;
} */

/*int main() { //3 ve 7 ye bölünebilen sayılar
    
     for(int i=1;i<100;i++){
         if((i%3 == 0) && (i%7 ==0)){
             cout<<i<<" ";
         }
             
     }
         return 0;
}   */


/*int main(){
    float toplam = 0;
    float ortalama =0;
    for(int i=1;i<=5;i++){                    //Girilen 5 Sayinin ortalamasini alan Fonksiyon.
        float girdi;
        cout<<"Bir Sayi Giriniz."<<endl;
        cin>>girdi;
        toplam = toplam + girdi;
        ortalama = toplam / i;
    }
    cout<<"Sayilarin Ortalamasi:"<<" "<<(float)ortalama<<endl;
    
    return 0;
} */
// 1 1 2 3 5 8 13  ... -> fibonacci serisi

/*int main()
{   
    int terimsayisi;
    
    cout<<"Terim Sayisini Giriniz:";
    
    cin>>terimsayisi;
    
    if(terimsayisi == 0){
        return 0;
    }
    else if(terimsayisi ==1){
        cout<<1<<endl;
    }
    else{
    int a=1;
    int b=1;
    int c= a+b;
    cout<<a<< endl <<b<<endl;
   
    for(int i=0;i<terimsayisi-2;i++){          //Fibonacci serisi N terimli Açılımı..
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    }
    return 0;

} */



/*int main()
{
    int sutuns;
    int satirs;
    
    cout<<"Sutun Ve Satir Sayisi Giriniz : "<<endl;
    cin>>sutuns;
    cin>>satirs;
    
    for(int i=1;i<=sutuns;i++){
        
        for(int j=1;j<=satirs;j++){
            
            cout<<i<<"x"<<j<<"="<<i*j<<endl;     // iç içe döngü yapısı ++++ Kullanıcı isteğine bağlı çarpım tablosu
    }
        cout<<endl;
    }
    
    return 0;
    }
    */
    
    
/*int main()
{   
    int a;
    cout<<"Boyunu Giriniz:"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(j == i ){
                cout<<"1";
                                        // NxN birim matrix elde etme..
                                        // if i+j =a-1 dersek ters diagon elde edeceğiz. 
            }
            else{
            cout<<"0";
            }
            }
            cout<<endl;
    }
    
    return 0;
} */
 /*
int main()
{   
    int a;
    cout<<"Boyunu Giriniz:"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(j-i>=0){
                cout<<"1";
                                // NxN birim matrix elde etme..
                                // üst üçgeni 1 yapan fonk  (Alt üçgen için cout 0, cout 1 sırasıyla olacak)
            }
            else{
            cout<<"0";
            }
            }
            cout<<endl;
    }
    
    return 0;
}
 */
 /*
int faktoriyelr(int x){
     if(x==1)
         return 1;
     return x * faktoriyelr(x-1);
     
}  
     
int main(){                                                        //faktoriyel fonksiyonu
    
    cout<<faktoriyelr(8)<<endl;
    return 0;
}
     
     
 */
 
 /*int f(int x){
     cout<<x<<endl;
     return x+2;
     
 }
 
 void g(int x){
     cout<<x+5<<endl;
     
 }
 
 int main()
 {
     cout<<f(5)<<endl;                   //main fonksiyon hep ilk çalışır sonra sırayla fonklar çağırılır. 
     cout<<f(19)<<endl;
     g(10);
    
     return 0;
    
 } */
 
 
 /*
 
 float ust(float t,float u){
     
    if(u==0)
        return 1;
    return t * ust(t,u-1);
                                                // ust fonksiyonu x,y --> x^y hesabını yapar.. 
 }
 
 int main(){
    
     float x,y;
     cout<<"Sayi ve Sayinin Ussunu giriniz : "<<endl;
     cin>>x;
     cin>>y;
     
     cout<<ust(x,y)<<endl;
     return 0;
     
     
 } */
 
 
 
 /*
 
 int main(){
     
     int a[5];
     cout<<"5 adet sayi giriniz:"<<endl;
     for(int i=0;i<5;i++){
         cin>>a[i];
         
     }
     
     int eb=a[0];
     for(int i =1;i<5;i++){
         if(a[i]> eb)
             eb= a[i];
    
     }
     cout<<"En Buyuk:"<<eb<<endl;
     
     int ek= a[0];
     for(int i=1;i<5;i++){
         if(a[i]<ek)
            ek=a[i];
     }
    cout<<"En Kucuk:"<<ek<<endl;
    
    float toplam = 0;
    for(int i=0;i<5;i++){                          //diziler ve dizilerle ilgili bazı işlemler
        toplam = toplam + a[i];
        
    }
    cout<<"Toplam:"<<toplam<<endl;
    cout<<"Ortalama:"<<toplam/5<<endl;
     
     return 0;
     
 }
 */
 
 
 

 /*
 int main(){
     int toplam;
     int a[] = {160,2317,1002,170,1442,300,5114};   // beklenti = 16 + 27 + 17 = 60 olmasıdır.
     int enbuyuk = 0;
     int enbuyuk1= 0;
     int enbuyuk2= a[0];
     for(int i=1;i<7;i++){
        if(a[i]>enbuyuk)
            enbuyuk = a[i];
       }
     cout<<"En Buyuk Sayi:"<<enbuyuk<<endl;
     
     for(int i=1;i<7;i++){
         if(a[i]>enbuyuk1 && a[i]<enbuyuk){
             
             enbuyuk1 = a[i];
         }
         
     }
     cout<<"En Buyuk 2. sayi:"<<enbuyuk1<<endl;
     
     for(int i=0;i<7;i++){
         if(enbuyuk2<a[i] && a[i]<enbuyuk1){          //Dizideki ilk 3 en büyük sayıyı bulup toplamak
             enbuyuk2 = a[i];
         }
     }
     cout<<"En Buyuk 3.sayi:"<<enbuyuk2<<endl;
             
     
     toplam = enbuyuk + enbuyuk1 + enbuyuk2;
     cout<<"Toplamlar"<<toplam<<endl;
     
    return 0;
 }
 
 */
 
 
 
 /*
 int main(){
     
     int x;
     
     int c[x];
     
     int toplam = 0;
     
     cout<<"Serinizin Eleman Sayisi :"<<endl;    //Kullanıcıdan seri alıp elemanlarını toplattırmak.
     cin>>x;
     
     cout<<"Serinizin Elemanlari : "<<endl;
     for(int i=0;i<x;i++){
         cin>>c[i];
         
     }

     for(int i=0;i<x;i++){
         toplam = toplam + c[i];
     }
     
     cout<<"Elemanlar Toplami:"<<toplam<<endl;
     
     return 0;
 }
 */
 
 
 
 /*
 int main(){
     int toplam = 0;
     int a[5];
     int enbuyuk = a[3];
     int enkucuk = a[2];
     
     cout<<"Serinin elemanlarini giriniz : "<<endl;
     for(int i=0;i<5;i++){
         cin>>a[i];
     }
     
     for(int i=0;i<5;i++){
         if(a[i]>enbuyuk){
            enbuyuk = a[i];
         }
     }
     cout<<"En Buyuk Sayi : "<<enbuyuk<<endl;              
     for(int i=1;i<5;i++){
        if(a[i]<enkucuk){
            enkucuk = a[i];                                                // 4 sayının toplam min ve max kodu
            }
        }
     cout<<"En Kucuk Sayi : "<<enkucuk<<endl;
     
     for(int i=0;i<5;i++){
         toplam = toplam + a[i];
     }
     
     cout<<"4 Sayinin Toplaminin Maximum Degeri : "<<toplam - enkucuk<<endl;
     cout<<"4 Sayinin Toplaminin Minimum Degeri : "<<toplam - enbuyuk<<endl;
     
     return 0;
     
     }
  */
  
  
  
  
  /*
  int main(){
      
      int a[2]={1,2};
      int b[5]={4,3,6,1,12};
      int aboyut =2;
      int bboyut =5;
      
      for(int i =0;i<bboyut;i++){                  //2 boyutlu seri ve alt küme checkleme
          bool esit =true;
          for(int j=0;j<aboyut;j++){
              if(a[j] !=b[i+j]){
                  esit = false;
                  break;
              }
           if(esit){
                cout<<"Alt elemani vardir ve " <<i<<" 'den baslar"<<endl;
           }
           else{
                cout<<"alt elemani yoktur."<<endl;
           }
           
          }
      }
      return 0;
  } */
  
  
  
  
  
  /*
  
  int main(){
      int score=0;
      int n;
      cin>>n;      // zar atılma sayısı
      srand(time(NULL));
      for(int i=0;i<n;i++){
            int z1 =rand()%6+1;      // --->> zar atma kodu
            int z2 =rand()%6+1;
            cout<<z1<<" "<<z2<<endl;
      
            if(z1>z2){
                score ++;
       
            }else if(z2>z1){               ////zar atma oyunu kısaca
                score --;
          
      }
      if(score>0){
          cout<<"1. oyuncu kazandi"<<endl;
      }else if(score<0){
          cout<<"2. oyuncu kazandi"<<endl;
      }else
          cout<<"Durum berabere"<<endl;
      }
    
  }  */
  
  
  
  
  /*
  int main(){
      int a[2][3]={41,11,22,24,18,17};
      int b[2][3]={46,35,24,23,24,25};
      for(int i=0;i<2;i++){
          for(int j=0;j<3;j++){
              a[i][j] += b[i][j];    //2 matrixin toplama işlemi direkt a'nın üzerine b eklemek. 
          }
      }
      for(int i=0;i<2;i++){
          for(int j=0;j<3;j++){
            cout<<" "<<a[i][j];
      
      }
      cout<<endl;
      }
      return 0;
  } */
  
  
  
  
  /*
  int main(){
      
      int a=10;
      int *p;
      p =&a;
      cout<<" a: "<<a<<endl;
      cout<<" *p:"<<*p<<endl;                //&a --> a'nın adresi
      cout<<"&a : "<<&a<<endl;              //  *p --> p'nin gösterdiği parametrenin içindeki değer
      cout<<" p: "<<p<<endl;               //p --> gösterdiği değerin (ampersan a) adresi
                                          //pointers 
    return 0;
  }
  
  */
  
  
  
  
  /*
  int main(){
      
      int x[3] = {1,2,3};
      int *q;
      q= &x[0];                                    //q=x; aynı şey
      cout<<q[2]<<endl;
      q[2]=8;
      cout<<x[2]<<endl;           // --> aslında q2 yi değiştik ama x2 de değişti pointers sayesinde.
      
      return 0;
  }*/
  
  
  
  
/*  
  int f(int *p){
      *p=10;
  }
  
  int main(){
      
      int a[3];
      int *p =(int *)malloc(sizeof(int)*3);
      p[2]=6;
      cout<<p[2]<<endl;
      int *q =(int *)malloc(sizeof(int));    //pointerlar ile fonk kullanımı
      *q=50;
      f(q);
      cout<< *q <<endl;
      
  } */
  
  
  
  
  
  /*
  //pointer kullanarak 5 sayı okuma ve sırayla ekrana bastırma alıştırması
  
  int main(){
    
    cout<<"5 adet sayi giriniz."<<endl;
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){                       //Dizi kullanarak çözüm...
        cout<<a[i]<<endl;
    }  
       
    cout<<"3 adet sayi giriniz."<<endl;
    int *p;
    p=(int *)malloc(sizeof(int)*3);
    for (int i=0;i<3;i++){                        //pointers kullanarak 3 sayı girdisi ve çıktısı çözüm..
        cin>>p[i];
    }
    for(int i=0;i<3;i++){
        cout<<p[i]<<endl;
    }  
    
    cout<<"12 adet sayi giriniz."<<endl;
    int *q;
    q =(int *)malloc(sizeof(int)*12);             //pointers kullanarak 12 sayı girdisi ve çıktısı.
    for(int i=0;i<12;i++){
        cin>>q[i];
        
    }
    for(int i=0;i<12;i++){
        cout<<q[i]<<endl;
    }
    
    cout<<"5 adet sayi giriniz."<<endl;
    int *q;
    q =(int *)malloc(sizeof(int)*5);             //pointers kullanarak 12 sayı girdisi ve çıktısı.
    for(int i=0;i<5;i++){
        cin>> *(q+i);
        
    }
    for(int i=0;i<5;i++){
        cout<< *(q+i);                          //pointer aritmetiği ile (bunu çok önermiyorum.)
    
    return 0;
    }
  }
  */
  
  
  
  /*
  int topla(int *a,int boyut){
      int toplam=0;
      for(int i=0;i<boyut;i++){
          toplam = toplam + a[i];
      }
    return toplam;
      
  }
  
 int main(){
     int a[3]={1,2,3};
     cout<<"Dizi elemanlari toplami : "<<topla(a,3)<<endl;
     
 } 

*/ 
 
 
 /*
 int funcadd(int *x,int dimen){  // *x is necessery.
     int plus =0;
     for(int i=0;i<dimen;i++){    //--> Call by reference function.
         plus = plus + x[i];
         
     }
     return plus;
 }
 
 int main(){
     int b[3]={10,10,11};
     cout<<"Sum of given numbers : "<<funcadd(b,3)<<endl;      //-->We called it when we need sum operation.
     return 0;
 }
 
 */
 
 /*
  int main(){
     char *s = "evren";        // --> string diye geçer ve içeriği değiştirelemez.!!
     cout<<s<<endl;
     char c[4]= "eda";           // --> dizgidir içeriği değiştirilebilir.
     char a[4];                       // --> temel olarak karakter(dizgi) konusu
     a[0] = 'e';
     a[1] = 'd';
     a[2] = 'a';
     
     if(strcmp(c,a)==0){        //---> string karşılaştırılması şifre  tarzında kullanılabilir.
         cout<<"esitler"<<endl;
     }else{
         cout<<"esit degiller"<<endl;
     }
     cout<<c<<endl;
     cout<<a<<endl;
     
     return 0;
 }  
 */
 
 
 /*
 int main(){
     
     char sifre[4];
     char a[4]= "eda";
     cout<<"Sifreyi giriniz : "<<endl;
     cin>>sifre;
     if(strcmp(a,sifre)==0){
         cout<<"Sifreyi dogru girdiniz.."<<endl;       //-->sifre girme ve kontrol etme 
     }
     else{
         cout<<"Sifreyi yanlis girdiniz."<<endl;
     }
     return 0;
 }
 
 */
 
 
 /*
 int boyut(char *s){
     
     int b=0;
     char c= s[0];
     while (c != '\0'){
         c =s[++b];
         
     }
     return b;
     
     
 }
 
 int main(){
     
     char n[4]="eda";
     
     cout<<n<< endl;
     cout<<boyut(n)<<endl;
     cout<<strlen(n)<<endl;             //---> strlen komutu LENGHT'den gelir uzunluğunu yazar.
     if(strlen(n) == boyut(n)){
         cout<<"Boyut n'dir"<<endl;
         
     }
     else{
         cout<<"boyut n degildir."<<endl;
     }
     
     char i[4];
     strcpy(i,n);
     cout<<i<<endl;          //---> string kopyalama işlemi, strcpy komutu 
     
     return 0; 
 }
 */
 
 
 /*
 int main(){
     
     string s;               //--> böyle tanımlarsak önümüze s. diye birçok fonksiyon çıkar aşağıdakiler gibi.
     char *n= "eda";            //--> içeriği değiştirelemez string olduğu için.
     char c[4]= "eda";
     
     s=n;
     cout<< s.size()<<endl;           //--> direkt boyut bulma komutu
     s.append(" asg");               //--> sonuna string ekleme komutu
     cout<<s<<endl;
     cout<<c<<endl; 
     cout<<s.substr(0,2)<<endl;            //--> 0.'dan başlar 2.ye kadar olan harfleri basar.
     
     return 0;
 }
*/


 
 
 
 
 
 
 
 
 
 
 
 
 