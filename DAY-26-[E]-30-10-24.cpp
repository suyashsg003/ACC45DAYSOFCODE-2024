#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T; 
    
    while (T--) {
        int A, B, K;
        cin >> A >> B >> K; 
        
        int distance = abs(A - B);
        
        int steps = (distance + K - 1) / K; 
        
        cout << steps << endl; 
    }
    
    return 0;
}
