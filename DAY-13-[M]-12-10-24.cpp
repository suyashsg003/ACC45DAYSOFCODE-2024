#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;  
    
    while (T--) {
        int N;
        cin >> N;  
        
        unordered_map<int, int> animal_count;   
        
        for (int i = 0; i < N; ++i) {
            int type;
            cin >> type;
            animal_count[type]++;  
        }
        
        bool possible = true;
        
        for (const auto &entry : animal_count) {
            if (entry.second % 2 != 0) {
                possible = false;
                break;
            }
        }
    
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
