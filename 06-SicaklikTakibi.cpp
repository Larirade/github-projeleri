#include <iostream>
using namespace std;
int main(){
int sicaklik[5];
for (int i=0; i<=5 ; i++)
{cout<<"sicaklik giriniz"<<endl;
cin>>sicaklik[i];
if(sicaklik[i]<0)
{
    cout<<"dikkat"<<i+1<<". gün buzlanma tehlikesi var"<<endl;
}
}






return 0;
}