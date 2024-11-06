#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T; 
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;
        
        vector<int> recommendations(11, 0); 
        
        for (int i = 0; i < N; i++) {
            int Ai;
            cin >> Ai;
            recommendations[Ai]++;
        }

        int maxCount = 0;
        int laptop = -1;
        bool isConfused = false;

        for (int i = 1; i <= 10; i++) {
            if (recommendations[i] > maxCount) {
                maxCount = recommendations[i];
                laptop = i;
                isConfused = false;
            } else if (recommendations[i] == maxCount) {
                isConfused = true; 
            }
        }

        if (isConfused) {
            cout << "CONFUSED" << endl;
        } else {
            cout << laptop << endl;
        }
    }

    return 0;
}
