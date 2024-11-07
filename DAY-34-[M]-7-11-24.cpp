#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;
    
    while (T--) {
        long long L, K;
        cin >> L >> K;
        
        long long base_length = L / K;
        long long remainder = L % K;
        
        cout << remainder << endl;
    }
    
    return 0;
}
