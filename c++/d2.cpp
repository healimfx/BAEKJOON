#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a+b)%c << endl << ((a%c) + (b%c))%c << endl << (a*b)%c << endl << ((a%c) * (b%c))%c << endl;
}