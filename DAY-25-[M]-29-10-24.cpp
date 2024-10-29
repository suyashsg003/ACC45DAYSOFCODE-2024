#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T;
    cin >> T;  
    
    while (T--) {
        int N, K;
        cin >> N >> K;  
        
        vector<int> distances(N);
        for (int i = 0; i < N; i++) {
            cin >> distances[i];  
        }
        
        string result = ""; 
        for (int i = 0; i < N; i++) {
            if (distances[i] % K == 0) {
                result += "1";  
            } else {
                result += "0";  
            }
        }
        
        cout << result << endl;  
    }
    
    return 0;
}
