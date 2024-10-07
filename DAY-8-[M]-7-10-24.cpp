#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, A;
        cin >> N >> A; // Read total people (N) and infected people (A)
        
        // The minimum of either infected people (A) or uninfected people (N - A)
        cout << min(A, N - A) << endl;
    }
    
    return 0;
}
