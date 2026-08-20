#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[5];

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int sum = accumulate(arr, arr + 5, 0);

    cout << "Sum = " << sum;

    return 0;
}