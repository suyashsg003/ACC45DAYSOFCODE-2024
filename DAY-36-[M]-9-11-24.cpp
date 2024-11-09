#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;  
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N);

        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        
        long long max_distance = 0;
        for (int i = 0; i < N; ++i) {
            int distance_to_1 = abs(A[i] - 1);
            int distance_to_M = abs(A[i] - M);
            max_distance += max(distance_to_1, distance_to_M);
        }

        cout << max_distance << endl;
    }

    return 0;
}
