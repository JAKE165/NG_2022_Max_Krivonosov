#include <iostream>

using namespace std;

int main()
{
    int num, gamno = 0;
    cout << "Enter your number: ";
    cin >> num;
    for(int i = num; i > 0; i /= 10)
    {
        if((i%10) %2 == 0)
        {
            gamno += i%10;
        }
    }
    cout << "Sum of even numbers are: " << gamno;
    return 0;
}
