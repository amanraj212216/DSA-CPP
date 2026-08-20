#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[5];

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int maximum = *max_element(arr, arr + 5);

    cout << "Maximum = " << maximum;

    return 0;
}