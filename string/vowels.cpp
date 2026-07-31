#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string result = "";

    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
        {
            result += ch;
        }
    }

    cout << result;

    return 0;
}