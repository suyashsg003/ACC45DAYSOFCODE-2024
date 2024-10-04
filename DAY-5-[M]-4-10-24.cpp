#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, K; // N is the number of people, K is the initial amount of money in the ATM
        cin >> N >> K;

        vector<int> A(N); // Array to store the amount each person wants to withdraw
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        string result = ""; // To store the result for this test case

        for (int i = 0; i < N; ++i) {
            if (K >= A[i]) {
                result += '1'; // The person can withdraw the amount
                K -= A[i];     // Deduct the withdrawn amount from the ATM
            } else {
                result += '0'; // The person cannot withdraw the amount
            }
        }

        cout << result << endl; // Output the result for this test case
    }

    return 0;
}
