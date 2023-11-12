#include<iostream>
using namespace std;


int main ()
{
    string s;
    int flag = 0;
    cout<<"Give input : ";
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' || s[i] == '.')
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        cout<<"Numerical."<<endl;
    }
    else
    {
        cout<<"Not Numerical."<<endl;
    }
    cout<<endl;

}

