#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 0,b = 0,c = 0,D = 0;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    D = b^2 - 4*a*c;
    if(D > 0)
    {
      cout << "your first root = " << ((-b + sqrt(D))/2*a) << endl;
      cout << "your second root = " << ((-b - sqrt(D))/2*a);
    }
    if(D < 0)
    {
        cout << "There are no roots here.";
    }
    if(D == 0)
    {
        cout << "your root is " << ((-b + sqrt(D))/2*a);
    }
    return 0;
}
