#include <iostream>
#include <cmath>  // for abs() function
using namespace std;

void solve() {
    int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        int X, Y;
        cin >> X >> Y;  // Read positions of the policeman and thief

        // Calculate the absolute distance between X and Y
        int distance = abs(X - Y);
        
        // Since the policeman moves faster, the time taken to catch the thief is just the distance
        // because the relative speed is 1 unit per second.
        cout << distance << endl;  // Output the time
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
