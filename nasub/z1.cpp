#include <iostream>
using namespace std;
int main ()
{
    int number;
    cout << "Enter number: " << endl;
    cin >> number;
    {
        if (number%2==0) cout << "This number is even. " << endl;
        else
            cout << "This number is odd. ";
    }
    system("pause");
    return 0;
}

