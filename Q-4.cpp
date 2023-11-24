#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    if(s1 == s2) {
            cout << "Strings are equal";
    cout<<endl;
    reverse(s1.begin(), s1.end());
    cout << "Rotating first string: " << s1 << endl;
    } else {
        cout << "Strings are not equal";
        cout<<endl;
    }
    return 0;}
