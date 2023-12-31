#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

bool isSeparator(char ch)
{
    string value = " ,;(){}[]";
    for(int i=0;i<value.length();i++)
        if(ch==value[i])
            return true;
        return false;
}

bool isOperator(char ch)
{
    string value = "+-*/<>=!";
    for(int i=0;i<value.length();i++)
        if(ch==value[i])
            return true;
        return false;
}

bool isKeyword(string s)
{
    string keyword[]={"if","else","int","for","float","return","while","static","char","continue","sizeof"};
    for(int i=0;i<(sizeof(keyword)/sizeof(string));i++)
        if(s==keyword[i])
        return true;
    return false;
}

bool isIdentifier(string s)
{
    bool valid = true;
    if(isKeyword(s))
        valid = false ;
    if(valid)
        if((s[0] >= '0')&&(s[0]<='9'))
          valid =false;
    if(valid)
        for(int i=0;i<s.length();i++)
        if(((s[i]>='a')&&(s[i]<='z')) || ((s[i]>='A')&&(s[i]<='Z')) || ((s[i]>='0')&&(s[i]<='9')) ||(s[i]=='_'))
            continue;
            else
            {
                valid=false;
                break;
            }

     return valid;
}

bool isNumber(string s)
{
    bool valid =true;
    for(int i=0; i<s.length();i++)
        if((s[i]>='0')&&(s[i]<='9') || (s[i]=='.'))
            continue;
    else{
        valid =false;
        break;
    }
    return valid;
}

void parse(string s)
{
    vector<string> tokens;
    string token="";

    for(int i=0; i<s.length(); i++)
    {
        if(isSeparator(s[i]))
        {
            if(token!="")
                tokens.push_back(token);
                token="";
        }
        else if (isOperator(s[i]))
        {
            if(token!="")
            {
                tokens.push_back(token);
                token="";
            }
        token.push_back(s[i]);
        tokens.push_back(token);
        token="";
        }
        else
            token.push_back(s[i]);
    }
    if(token!="")
    {
        tokens.push_back(token);
        token="";
    }

    //output

    for(int i=0; i<tokens.size();i++)
    {
        if(isKeyword(tokens[i]))
            cout<<'\"'<<tokens[i]<<"\" is a Keyword "<<endl;
        else if(isIdentifier(tokens[i]))
            cout<<'\"'<<tokens[i]<<"\" is a Identifier "<<endl;
         else if(isNumber(tokens[i]))
            cout<<'\"'<<tokens[i]<<"\" is a Number "<<endl;
         else if(isOperator(tokens[i][0]))
            cout<<'\"'<<tokens[i]<<"\" is a Operator "<<endl;
        else
          cout<<'\"'<<tokens[i]<<"\" is an Invalid Identifier "<<endl;
    }
}

int main()
{
    fstream file;
    string line;
    file.open("demo.txt");
    while(file)
    {
        getline(file,line);
        parse(line);
    }
    file.close();
    return 0;
}
