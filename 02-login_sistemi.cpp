#include <iostream>
#include <string>
using namespace std;
int main()
{
string sys_username = "kullanici";
string sys_password = "sifre";
string username;
string password;
cout<<"Kullanici adini giriniz"<<endl;
cin>> username;
cout<< "Sifrenizi giriniz"<<endl;
cin>> password;
if(sys_username==username && sys_password==password)
{
    cout<<"Giris basarili"<<endl;
}
else if (sys_username!=username && sys_password==password)
{
    cout<<"kullanici adi hatali"<<endl;
}
else if (sys_username==username && sys_password!= password)
{
    cout<<"parola hatali"<<endl;
}
else
{
    cout<<"kullanici adi ve parola hatali"<<endl;
}

return 0;

}
