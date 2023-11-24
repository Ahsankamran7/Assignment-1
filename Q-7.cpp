#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
string removeDuplicates(string str)
{
    string result = "";
         unordered_set<char> seen;
    for (char ch : str) {
            if (seen.find(ch) == seen.end()) {
            result += ch;
    seen.insert(ch);
        }
    }
    return result;
}
int main()
{     string input;
cout << "Enter a string: ";
cin >> input;
string result = removeDuplicates(input);
cout << "Resultant string after removing duplicates: " << result << endl;
    return 0;
}
