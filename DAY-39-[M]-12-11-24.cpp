#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;  

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;  

        int horizontal = N - 1;
        int vertical = N - 1;

        int diag1 = min(X - 1, Y - 1);          
        int diag2 = min(N - X, N - Y);          
        int diag3 = min(N - X, Y - 1);          
        int diag4 = min(X - 1, N - Y);         

        int totalUnderAttack = horizontal + vertical + diag1 + diag2 + diag3 + diag4;

        cout << totalUnderAttack << endl;  
    }

    return 0;
}
