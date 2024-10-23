#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        
        if (X > 2 * Y) {
           
            cout << Y << endl;
        } else {
            
            cout << max(0, X - Y) << endl;
        }
    }

    return 0;
}
