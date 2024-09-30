#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        long long N, X;
        cin >> N >> X;

        // Check if X is less than N and if N and X have the same parity
        if (X < N && (N % 2 == X % 2)) {
            cout << "YES" << endl;
        } else if (X < N && X % 2 == 1) {
            // If X is odd, we can always create it from any stick with N > X
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
