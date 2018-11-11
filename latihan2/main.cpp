#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Masukan nilai ke 1:";
    cin>>a;
    cout<<"Masukan nilai ke 2:";
    cin>>b;
    cout<<"Masukan nilai ke 3:";
    cin>>c;

    if( (a+b==c) || (a+c==b) )
    {
        cout<<"BENAR";
    }
    else if((b+c==a))
    {
        cout<<"BENAR";
    }
    else
        {
        cout<< "SALAH";
        }
}
