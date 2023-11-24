#include <iostream>
using namespace std;
bool findTriplet(int arr[], int n, int targetSum) {
    for (int i = 0; i < n - 2; i++)
        {         for (int j = i + 1; j < n - 1; j++)
        {             for (int k = j + 1; k < n; k++)
        {                 if (arr[i] + arr[j] + arr[k] == targetSum)
        {                     return true;
                }
            }
        }
    }
    return false;
}
int main()
 {     int arr[] = {1, 4, 2, 10, 5, 3};
    int targetSum = 16;
    int size = sizeof(arr) / sizeof(arr[0]);

    if (findTriplet(arr, size, targetSum))
        {         cout << "There is a triplet in the array that sums up to " << targetSum << endl;
    } else {
        cout << "There is no triplet in the array that sums up to " << targetSum << endl;
    }

    return 0;
}
