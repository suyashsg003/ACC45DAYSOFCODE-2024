#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T; 
    cin >> T;
    
    while (T--) {
        int N, X; 
        cin >> N >> X;
        
        vector<int> A(N); 
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        int current_people = X; 
        int max_people = X; 

        for (int i = 0; i < N; ++i) {
            current_people += A[i]; 
            if (current_people > max_people) {
                max_people = current_people;
            }
        }
        
        cout << max_people << endl;
    }
    return 0;
}
