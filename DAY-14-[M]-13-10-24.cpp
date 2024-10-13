#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        string S;
        cin >> N >> S;  

        
        for (int i = 0; i < N - 1; i += 2) {
            swap(S[i], S[i + 1]);
        }

        
        for (int i = 0; i < N; ++i) {
            S[i] = 'z' - (S[i] - 'a');  
        }

     
        cout << S << endl;
    }

    return 0;
}
