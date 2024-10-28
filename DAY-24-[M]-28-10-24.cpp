#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T; 
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        
        unordered_map<char, int> frequency;
        for (char jewel : S) {
            frequency[jewel]++;
        }
        
        int cost = 0;

        for (auto& entry : frequency) {
            int count = entry.second;
            cost += (count + 1) / 2; 
        }
        
        cout << cost << endl;
    }
    return 0;
}
