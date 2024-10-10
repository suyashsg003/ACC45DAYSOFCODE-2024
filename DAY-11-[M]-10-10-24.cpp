#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N;  // Number of cards
        cin >> N;
        vector<int> cards(N);

        // Read the numbers on the cards
        for (int i = 0; i < N; i++) {
            cin >> cards[i];
        }

        // Count the frequency of each number
        unordered_map<int, int> freq;
        for (int card : cards) {
            freq[card]++;
        }

        // Find the maximum frequency
        int maxFreq = 0;
        for (auto pair : freq) {
            maxFreq = max(maxFreq, pair.second);
        }

        // Minimum moves = Total number of cards - Frequency of the most common card
        int minMoves = N - maxFreq;
        cout << minMoves << endl;
    }

    return 0;
}
