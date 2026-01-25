#include <iostream>
#include <string>
using namespace std;
int main()
{
int elmastok=20;
int secim=0;
while(secim!=4)
{
cout<<"islem seciniz;stok görüntüleme için 1, stok eklemek için 2, stok düşürme icin 3, çikmak için 4"<<endl;
cin>>secim;
switch(secim){
case 1:
cout<<"elinizdeki stoğunuz"<<elmastok<<endl;
break;
case 2:
int eklenecekstok;
cout<<"Eklemek istediğiniz miktari seciniz"<<endl;
cin>>eklenecekstok;
elmastok=elmastok+eklenecekstok;
break;
case 3:
int eksistok;
cout<<"Düşürelecek miktari giriniz"<<endl;
cin>>eksistok;
if (eksistok<=elmastok)
{elmastok=elmastok-eksistok;
cout<<"yeni stok:"<<elmastok<<endl;
}
else 
{
    cout<<"Stoğumuzda o kadar elma yok"<<endl;
}
break;
case 4:
cout<<"programdan ayriliyorsunuz"<<endl;
break;



}
}
    return 0;
}