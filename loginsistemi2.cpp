#include <iostream>
#include <string>
using namespace std;
int main()
{
string sys_username = "kullanici";
string sys_password= "sifre";
string username;
string password;
int hak=1;
while (hak<4)
{
cout<<"Kullanici adini giriniz"<<endl;
cin>>username;
cout<<"sifre giriniz"<<endl;
cin>>password;
if (sys_username==username && sys_password==password)
{
    cout<<"Giris Basarili"<<endl;
    break;
}

else 
{
cout<<"Hatali giris yaptiniz"<<endl;

if (hak==3)
{
    cout<<"3 hakkin bitti sistem bloke edildi"<<endl;
}
else 
{
    cout<<"Bir daha deneyiniz"<<endl;
}
hak++;
}
}

return 0;

}









