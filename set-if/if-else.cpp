#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Repeat text" << endl;

    cin.get(ch);

    while (ch != '.')
    {
        if (ch == '\n')
        {
            cout << ch;
        }
        else cout << ++ch;
        
        cin.get(ch);
    }
    return 0;
}