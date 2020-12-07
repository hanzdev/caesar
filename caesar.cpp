#include <iostream>
using namespace std;

int main()
{
    system("cat src/banner.txt");

    int i, y;
    char str[100];

    cout << "enter plain-text:\t";
    cin >> str;

    cout << "enter slide value" << endl;
    cin >> y;
         
    if (y < 14)
    {
    	for(i = 0; (i < 100 && str[i] != '\0'); i++)
    	str[i] = str[i] + y; 
    	cout << "\nEncrypted string: " << str << endl;
    }
    else
    {
	cout << "Slide value should not be higher than 13." << endl;
    }    


    return 0;
}
