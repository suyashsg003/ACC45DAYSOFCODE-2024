#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T; 
    cin >> T;

    while (T--) {
        int A, B; 
        cin >> A >> B;

        int candies = 1; 
        bool limakTurn = true; 

        while (true) {
            if (limakTurn) {
                if (A >= candies) {
                    A -= candies; 
                } else {
                    cout << "Bob" << endl; 
                    break;
                }
            } else {
               
                if (B >= candies) {
                    B -= candies; 
                } else {
                    cout << "Limak" << endl; 
                    break;
                }
            }
            candies++; 
            limakTurn = !limakTurn; 
        }
    }

    return 0;
}
