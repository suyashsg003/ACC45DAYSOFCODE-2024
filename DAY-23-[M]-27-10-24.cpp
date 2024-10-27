#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;  
    while (T--) {
        int N;
        cin >> N;  
        vector<int> strings(N);
        for (int i = 0; i < N; i++) {
            cin >> strings[i];  
        }
        
        int totalSkips = 0;
        for (int i = 1; i < N; i++) {
            totalSkips += abs(strings[i] - strings[i - 1]) - 1;
        }
        
        cout << totalSkips << endl;
    }
    return 0;
}
