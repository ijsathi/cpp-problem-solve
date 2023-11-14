#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char latter;
    cin >> latter;
    if (latter >= 'A' && latter <= 'Z')
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else if (latter >= 'a' && latter <= 'z')
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }
    else if (latter >= '0' && latter <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}