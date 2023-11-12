#include<iostream>
using namespace std;

int main ()
{
    string s;
    cout<<"Enter your input : ";
    cin>>s;

    int x = 1;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '=')
        {
            if(s[i] == '+')
            {
                cout<<"Operator "<<x<<" : "<<s[i]<<endl;
                x++;
            }

            else if(s[i] == '-')
            {
                cout<<"Operator "<<x<<" : "<<s[i]<<endl;
                x++;
            }

            else if(s[i] == '*')
            {
                cout<<"Operator "<<x<<" : "<<s[i]<<endl;
                x++;
            }

            else if(s[i] == '/')
            {
                cout<<"Operator "<<x<<" : "<<s[i]<<endl;
                x++;
            }

            else if(s[i] == '%')
            {
                cout<<"Operator "<<x<<" : "<<s[i]<<endl;
                x++;
            }
            else if(s[i] == '=')
            {
                cout<<"Operator "<<x<<" : "<<s[i]<<endl;
                x++;
            }

        }

    }
}
