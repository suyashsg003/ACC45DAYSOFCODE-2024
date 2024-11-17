#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T; 
    cin >> T;
    
    while (T--) {
        int N, X; 
        cin >> N >> X;

        vector<int> H(N); 
        for (int i = 0; i < N; i++) {
            cin >> H[i];
        }

        long long time_single_target = 0;
        for (int i = 0; i < N; i++) {
            time_single_target += (H[i] + X - 1) / X; 
        }

        int time_multi_target = *max_element(H.begin(), H.end());

        cout << min(time_single_target, (long long)time_multi_target) << endl;
    }
    
    return 0;
}
