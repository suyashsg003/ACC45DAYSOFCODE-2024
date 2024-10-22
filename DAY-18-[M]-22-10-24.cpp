#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T;  // Number of test cases
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        
        int valuation1 = 10 * A;  
        int valuation2 = 5 * B;   
        
        // Compare the valuations
        if (valuation1 > valuation2) {
            cout << "FIRST" << endl;
        } else if (valuation1 < valuation2) {
            cout << "SECOND" << endl;
        } else {
            cout << "ANY" << endl;
        }
    }
    return 0;
}
