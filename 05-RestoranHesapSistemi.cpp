#include <iostream>
using namespace std;
int main()
{
int toplamhesap=0;
int islem=0;
while (islem!=5)
{
cout<<"eklemek istediğiniz yemeği seciniz 1 döner 2 ayran 3 künefe 4 hesabi göster 5 çikiş"<<endl;
cin>>islem;
switch(islem) 
{
case 1:
int yenendöner;
cout<<"yediğiniz döner miktariniz yaziniz"<<endl;
cin>>yenendöner;
toplamhesap+=yenendöner*150;
break;
case 2:
int içilenayran;
cout<<"içtiğiniz ayran miktariniz yaziniz"<<endl;
cin>>içilenayran;
toplamhesap+=içilenayran*30;
break;
case 3:
int künefe;
cout<<"yediğiniz künefe miktarini yaziniz"<<endl;
cin>>künefe;
toplamhesap+=künefe*100;
break;
case 4:
cout<<"toplam hesabiniz"<<toplamhesap<<endl;
break;
case 5:
cout<<"ödeme yapiliyor ve çikiliyor"<<endl;
break;
default:
cout<<"geçersiz işlem";
}





}

return 0;
}
