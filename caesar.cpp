#include <iostream>
using namespace std;

int main()
{
    int i, y;
    char str[100];

    cout << "enter plain-text:\t";
    cin >> str;

    cout << "enter slide value" << endl;
    cin >> y;
         
    for(i = 0; (i < 100 && str[i] != '\0'); i++)
    str[i] = str[i] + y; 
    cout << "\nEncrypted string: " << str << endl;

    return 0;
}