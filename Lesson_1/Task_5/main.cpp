#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 0,b = 0,c = 0,D = 0;
    float x1 = 0,x2 = 0;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    D = b^2 - 4*a*c;
    if(D > 0)
    {
      x2 = ((-b - sqrt(D))/2*a);
      x1 = ((-b + sqrt(D))/2*a);
      cout << "your first root = " << x1 << endl;
      cout << "your second root = " << x2;
    }
    if(D < 0)
    {
        cout << "There are no roots here.";
    }
    if(D == 0)
    {
        x1 = ((-b + sqrt(D))/2*a);
        cout << "your root is " << x1;
    }
    return 0;
}
