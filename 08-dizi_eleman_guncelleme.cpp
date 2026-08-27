#include <iostream>
using namespace std;
int main()
{
int sayilar[5];
for (int i=0 ; i<5; i++)
{
    cout<<"sayilari giriniz"<<endl;
    cin>>sayilar[i];
}
for (int i=0; i<5; i++)
{
    if (sayilar[i]%2==0)
    {
        sayilar[i]=sayilar[i]*2;
    }
 else if (sayilar[i]%2!=0)
 {
sayilar [i]=sayilar[i]+1;
 }

}

cout << "Yeni sayi diziniz: ";
    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;



    return 0;
}