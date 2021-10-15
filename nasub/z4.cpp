#include <iostream>
using namespace std;
int main ()
{
    int n1;
    int n2;
    int n3;
    cout << "Enter 3 numbers: " << endl;
    cin >> n1 >> n2 >> n3;
    if (n1>n2 && n2>n3)
    {
        cout << "In ascending order: " << n3 << endl << n2 << endl << n1 << endl;
    }
    else if (n2>n1 && n1>n3)
    {
        cout << "In ascending order:  " << n3 << endl << n1 << endl << n2 << endl;
    }
    else if (n3>n1 && n1>n2)
    {
        cout << "In ascending order:  " << n2 << endl << n1 << endl << n3 << endl;
    }
    else if (n3>n2 && n2>n1)
    {
        cout << "In ascending order: " << n1 << endl << n2 << endl << n3 << endl;
    }
    system("pause");
    return 0;
}
