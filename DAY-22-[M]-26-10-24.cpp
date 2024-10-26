#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int T;
    cin >> T;  
    while (T--) {
        int N;
        cin >> N;  

        vector<int> L(N), G(N);
        for (int i = 0; i < N; i++) cin >> L[i];  
        for (int i = 0; i < N; i++) cin >> G[i];  

        bool front = true, back = true;

        for (int i = 0; i < N; i++) {
            if (L[i] > G[i]) {
                front = false;
                break;
            }
        }

        for (int i = 0; i < N; i++) {
            if (L[i] > G[N - i - 1]) {
                back = false;
                break;
            }
        }

        if (front && back) cout << "both" << endl;
        else if (front) cout << "front" << endl;
        else if (back) cout << "back" << endl;
        else cout << "none" << endl;
    }

    return 0;
}
