#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    vector<int> A(N);
        unordered_map<int, int> freq;  

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            freq[A[i]]++;
        }

        int max_freq = 0;
        for (const auto& entry : freq) {
            max_freq = max(max_freq, entry.second);
        }

        int result = N - max_freq;
        cout << result << endl;
	    }
	
return 0;
}
