// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int sum = 0;
//     cin >> n;

//     int array[n];

//       for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         sum += array[i];
        
//     }
//     cout << "sum is:" << sum;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxi = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > maxi) {
//             maxi = arr[i];
//         }
//     }

//     cout << maxi;
//     return 0;
// }






#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < maxi) {
            maxi = arr[i];
        }
    }

    cout << maxi;
    return 0;
}
// Modify the max program so it prints the minimum element instead.

