#include <iostream>
using namespace std;
int main ()
{
    int number;
    int si;
    int ei;
    cout << "Enter number: " << endl;
    cin >> number;
    cout << "Enter interval: " << endl;
    cin >> si >> ei;
    if (si < number < ei) cout << "Number is in the interval " << endl;
    else cout << "Number is not included in the interval " << endl;
    system("pause");
    return 0;
}
