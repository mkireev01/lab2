#include <iostream>
using namespace std;
int main ()
{
    int low;
    int hight;
    float even;
    cout << "Enter 2 numbers: " << endl;
    cin >> low >> hight;
    even=(hight-low)/2;
    if (low <= even <= hight) {
        cout << "Even numbers: " << even << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    system("pause");
    return 0;
}
