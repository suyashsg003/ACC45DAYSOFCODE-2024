#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;  

    while (T--) {
        int N, K;
        cin >> N;  

        vector<int> songs(N);
        for (int i = 0; i < N; ++i) {
            cin >> songs[i];  
        }
        cin >> K;  

        int uncleJohnyLength = songs[K - 1];

        sort(songs.begin(), songs.end());

        int position = 1;
        for (int i = 0; i < N; ++i) {
            if (songs[i] == uncleJohnyLength) {
                position = i + 1;
                break;
            }
        }

        cout << position << endl;  
    }

    return 0;
}
