#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;  

    while (T--) {
        int n;
        cin >> n;  

        vector<int> L(n), R(n);
        for (int i = 0; i < n; ++i) {
            cin >> L[i];  
        }
        for (int i = 0; i < n; ++i) {
            cin >> R[i];  
        }

        int bestIndex = 0;
        int maxProduct = 0;
        int maxRating = 0;

        for (int i = 0; i < n; ++i) {
            int product = L[i] * R[i];
            if (product > maxProduct || (product == maxProduct && R[i] > maxRating)) {
                bestIndex = i;
                maxProduct = product;
                maxRating = R[i];
            }
        }

        cout << (bestIndex + 1) << endl;
    }

    return 0;
}
