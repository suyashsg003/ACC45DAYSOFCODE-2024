#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& A) {
    int n = A.size();
    for (int i = 1; i < n; i++) {
        if (A[i - 1] > A[i]) {
            return false;
        }
    }
    return true;
}

bool canBePseudoSorted(vector<int>& A) {
    int n = A.size();
    
    // Check if already sorted
    if (isSorted(A)) {
        return true;
    }
    
    // Check for exactly one inversion
    for (int i = 0; i < n - 1; i++) {
        if (A[i] > A[i + 1]) {
            // Swap and check if the array becomes sorted
            swap(A[i], A[i + 1]);
            if (isSorted(A)) {
                return true;
            }
            // Swap back if it doesn't sort the array
            swap(A[i], A[i + 1]);
            break;  // Only one swap allowed
        }
    }
    
    return false;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        if (canBePseudoSorted(A)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
