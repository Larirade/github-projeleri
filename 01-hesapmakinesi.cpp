#include <iostream>
#include <string>
using namespace std;

int main() {
    string islem;
    cout << "Bir islem seciniz (toplama=t, carpma=c, bolme=b, cikarma=d): ";
    cin >> islem;

    double sayi1, sayi2;
    cout << "Sayi 1 giriniz: ";
    cin >> sayi1;
    cout << "Sayi 2 giriniz: ";
    cin >> sayi2;

    if (islem == "t") {
        cout << "Islem sonucu: " << sayi1 + sayi2 << endl;
    } 
    else if (islem == "c") {
        cout << "Islem sonucu: " << sayi1 * sayi2 << endl;
    } 
    else if (islem == "b") { // Bu blok süslü parantez içine alındı
        if (sayi2 == 0) {
            cout << "Hata: Payda 0 olamaz!" << endl;
        } else {
            cout << "Islem sonucu: " << sayi1 / sayi2 << endl;
        }
    } 
    else if (islem == "d") { // Bu artık bağımsız ve doğru çalışır
        cout << "Islem sonucu: " << sayi1 - sayi2 << endl;
    } 
    else {
        cout << "Gecersiz islem girdiniz." << endl;
    }

    return 0;
}
