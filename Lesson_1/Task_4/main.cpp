#include <iostream>

using namespace std;

int main()
{
    int CPUprice = 0, Mprice = 0, Vprice = 0, Discount = 0;
    cout << "CPU price: ";
    cin >> CPUprice;
    cout << "Motherboard price: ";
    cin >> Mprice;
    cout << "Videocard price: ";
    cin >> Vprice;
    cout << "Discount: ";
    cin >> Discount;
    cout << "Your PC will cost - "  << (CPUprice + Mprice + Vprice) - ((CPUprice + Mprice + Vprice)*Discount/100);
    return 0;
}
