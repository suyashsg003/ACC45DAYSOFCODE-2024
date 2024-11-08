#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int T;
    cin >> T;
    
    while (T--) {
        int N, X, S;
        cin >> N >> X >> S;
        
        int coin_position = X;  
        
        for (int i = 0; i < S; i++) {
            int A, B;
            cin >> A >> B;
            
            if (coin_position == A) {
                coin_position = B;
            } else if (coin_position == B) {
                coin_position = A;
            }
        }
        
        cout << coin_position << endl;
    }
    
    return 0;
}
