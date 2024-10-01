#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, num, max_freq = 0;
        cin >> N;
        unordered_map<int, int> freq;
        for (int i = 0; i < N; i++) {
            cin >> num;
            max_freq = max(max_freq, ++freq[num]);
        }
        cout << N - max_freq << endl;
    }
    return 0;
}
