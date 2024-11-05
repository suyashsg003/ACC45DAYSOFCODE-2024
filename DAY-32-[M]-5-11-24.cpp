#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 

        vector<vector<int>> matrix(N, vector<int>(N));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> matrix[i][j];
            }
        }

        int maxTrace = 0;

        for (int l = 1; l <= N; ++l) {
            for (int r = 0; r <= N - l; ++r) {
                for (int c = 0; c <= N - l; ++c) {
                    int currentTrace = 0;
                    for (int i = 0; i < l; ++i) {
                        currentTrace += matrix[r + i][c + i];
                    }
                    
                    maxTrace = max(maxTrace, currentTrace);
                }
            }
        }
        cout << maxTrace << endl;
    }
    return 0;
}
