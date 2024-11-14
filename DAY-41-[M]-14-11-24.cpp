#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T;
    cin >> T;  
    
    while (T--) {
        long long N;
        cin >> N;

        long long count_odd = (N + 1) / 2;  
        long long count_even = N / 2;        

        long long odd_pairs = 2 * count_odd * count_even;

        cout << odd_pairs << endl;
    }
    
    return 0;

}
