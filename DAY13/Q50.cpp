#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double avg = (double)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;

    return 0;
}