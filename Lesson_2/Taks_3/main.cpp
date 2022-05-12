#include <iostream>

using namespace std;

int main()
{
    int num, hesh = 0, lastnum;
    cout << "VADI: ";
    cin >> num;
    lastnum = num%10;
    for(int i = num; i > 0; i /= 10)
    {
        if(i%10 == i/10%10 || i == lastnum)
        {
            hesh += i%10;
        }
    }
    cout << hesh;
    return 0;
}
