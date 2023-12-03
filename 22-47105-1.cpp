#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int j=1;
int k=1;
int a , b, c, d, e, sum;

void functions(string s)
{
    for(int i=0; i<s.size(); i++)
      {

          if(s[i] == '(' && s[i-1] != 'n' && s[i-2] != 'i' && s[i-4] != 'm' && s[i+1] == 'i')
          {
              cout<<"Function-"<<j<<": "<<s[i-3]<<s[i-2]<<s[i-1]<<endl;
              j++;
          }

      }


}


void operators(string s)
{
    for(int i=0; i<s.size(); i++)
      {
            if(s[i] == '+')
            {
                  a++;

            }
           else if(s[i] == '-')
            {
                  b++;

            }
             else if(s[i] == '*')
            {
                  c++;

            }
             else if(s[i] == '/')
            {
                  d++;

            }
             else if(s[i] == '=')
            {
                  e++;

            }
      }

      //------------------------------------------------------------------


            if(a > 0)
            {
                 a=1;

            }

             if(b > 0)
            {
                 b=1;

            }
             if(c > 0)
            {
                 c=1;

            }
             if(d > 0)
            {
                 d=1;

            }
             if(e > 0)
            {
                 e=1;

            }


        sum=a+b+c+d+e;


}



int main ()
{

  fstream myfile;
  myfile.open ("program.cpp");
  string s;
  myfile.close();



  myfile.open ("program.cpp");
  while (getline(myfile, s))
  {
      functions(s);
  }
  myfile.close();
  cout<<"Total number of the user defined function: "<<j-1<<endl;



    myfile.open ("program.cpp");
    while (getline(myfile, s))
    {
        operators(s);
    }
    myfile.close();




    for(int i=0; i<sum; i++)
    {
            if(a > 0)
            {
                 cout<<"Operator-"<<k<<": addition"<<endl;
                k++;

            }

              if(b > 0)
            {
                 cout<<"Operator-"<<k<<": subtraction"<<endl;
                k++;


            }
              if(c > 0)
            {
                 cout<<"Operator-"<<k<<": multiplication"<<endl;
                k++;


            }
             if(d > 0)
            {
                 cout<<"Operator-"<<k<<": division"<<endl;
                k++;


            }
             if(e > 0)
            {
                 cout<<"Operator-"<<k<<": assignment"<<endl;
                k++;

            }
            break;
    }
    cout<<"Total number of the operators: "<<sum<<endl;


  return 0;
}
