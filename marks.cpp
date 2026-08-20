#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;   // number of subjects

    for(int i = 0; i < n; i++) {

        int m;
        cin >> m;   // number of students

        int arr[m];

        for(int j = 0; j < m; j++) {
            cin >> arr[j];
        }

        int sum = accumulate(arr, arr + m, 0);
        int maximum = *max_element(arr, arr + m);

        cout << "Sum = " << sum << endl;
        cout << "Max = " << maximum << endl;
    }

    return 0;
}