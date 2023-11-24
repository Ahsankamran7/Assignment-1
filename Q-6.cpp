#include <iostream>
using namespace std;
int main() {
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    int quotient = 0;
    int remainder = dividend;
    while (remainder >= divisor) {
            remainder -= divisor;
    quotient++;
    }
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    return 0;
}
