#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    int evenc = 0;
    int oddc = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {

        if(arr[i] % 2 == 0) {
            evenc += 1;
        }
        else {
            oddc += 1;
        }
    }

    if(evenc > oddc) {
        cout << "Even";
    }
    else if(oddc > evenc) {
        cout << "Odd";
    }
    else {
        cout << "Tie";
    }

    return 0;
}