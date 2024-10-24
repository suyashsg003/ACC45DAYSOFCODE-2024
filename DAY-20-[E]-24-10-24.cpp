#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T;  
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> coefficients(N);
        // Input the coefficients
        for (int i = 0; i < N; i++) {
            cin >> coefficients[i];
        }

        int degree = -1;
        for (int i = N - 1; i >= 0; i--) {
            if (coefficients[i] != 0) {
                degree = i;
                break;
            }
        }

        cout << degree << endl;
    }

    return 0;
}
