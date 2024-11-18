#include <iostream>
using namespace std;

bool canTakeBags(int A, int B, int C, int D, int E) {
    // Check all combinations of check-in and carry-on
    if ((A + B <= D && C <= E) || // A and B checked-in, C carried
        (A + C <= D && B <= E) || // A and C checked-in, B carried
        (B + C <= D && A <= E)) { // B and C checked-in, A carried
        return true;
    }
    return false;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int A, B, C, D, E;
        cin >> A >> B >> C >> D >> E;

        if (canTakeBags(A, B, C, D, E)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
