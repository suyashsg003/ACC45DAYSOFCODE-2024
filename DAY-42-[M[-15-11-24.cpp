#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> swipes(N);
        for (int i = 0; i < N; ++i) {
            cin >> swipes[i];
        }

        unordered_set<int> inOffice;
        int maxPeople = 0;

        for (int id : swipes) {
            if (inOffice.find(id) != inOffice.end()) {
                inOffice.erase(id);
            } else {
                inOffice.insert(id);
            }
            maxPeople = max(maxPeople, (int)inOffice.size());
        }

        cout << maxPeople << endl;
    }
    return 0;
}
