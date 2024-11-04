
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;  

    while (T--) {
        int N;
        cin >> N;  
        vector<int> B(N);

        for (int i = 0; i < N; ++i) {
            cin >> B[i];  
        }

        int countOnes = 0;
        for (int i = 0; i < N; ++i) {
            if (B[i] == 1) {
                countOnes++;
            }
        }

        if (countOnes % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
