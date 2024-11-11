#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;
        
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }

        int currentWins = 0;
        vector<int> votesNeeded;
        
        for (int i = 0; i < N; i++) {
            if (A[i] > B[i]) {
                currentWins++;
            } else {
                votesNeeded.push_back(B[i] - A[i] + 1);
            }
        }

        int targetWins = N / 2 + 1;
        if (currentWins >= targetWins) {
            cout << "YES" << endl;
            continue;
        }

        sort(votesNeeded.begin(), votesNeeded.end());

        for (int requiredVotes : votesNeeded) {
            if (X >= requiredVotes) {
                X -= requiredVotes;
                currentWins++;
                if (currentWins >= targetWins) {
                    cout << "YES" << endl;
                    break;
                }
            } else {
                cout << "NO" << endl;
                break;
            }
        }

        if (currentWins < targetWins) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
