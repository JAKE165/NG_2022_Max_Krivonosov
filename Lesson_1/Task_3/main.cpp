#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Enter your age: " << endl;
    cin >> a;
    if(a >= 10)
    {
        cout << "Do you study? (1/0): ";
        cin >> b;
        if(b == 1)
        {
            cout << "You are awesome!";
        }
        if(b == 0)
        {
            cout << "Why is that?";
        }
    }
    if(a < 10)
    {
        cout << "Wow, you're already so big!";
    }
    return 0;
}
