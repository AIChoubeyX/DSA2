#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    stringstream ss(s);

    string word;

    string result="";

    while(ss>>word)
    {
        reverse(word.begin(),word.end());

        result += word + " ";
    }

    result.pop_back();

    cout<<result;

    return 0;
}