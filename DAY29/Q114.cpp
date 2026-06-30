#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, i;

    cout << "Enter Size: ";
    cin >> n;

    cout << "Enter Elements:\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n1.Display\n2.Sum\n3.Maximum\n4.Minimum\n5.Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                for (i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2: {
                int sum = 0;
                 for (i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum;
                break;
            }

            case 3: {
                int max = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                cout << "Maximum = " << max;
                break;
            }

            case 4: {
                int min = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] < min)
                        min = arr[i];
                cout << "Minimum = " << min;
                break;
                }

            case 5: break;
            default: cout << "Invalid Choice";
        }

    } while (choice != 5);

    return 0;
}