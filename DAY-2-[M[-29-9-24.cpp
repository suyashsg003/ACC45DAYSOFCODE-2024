#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int dsa_dragon, toc_dragon, dm_dragon;
        int dsa_sloth, toc_sloth, dm_sloth;

        // Reading Dragon's scores
        cin >> dsa_dragon >> toc_dragon >> dm_dragon;
        
        // Reading Sloth's scores
        cin >> dsa_sloth >> toc_sloth >> dm_sloth;
        
        // Calculate total scores
        int total_dragon = dsa_dragon + toc_dragon + dm_dragon;
        int total_sloth = dsa_sloth + toc_sloth + dm_sloth;
        
        // Determine the rank based on the criteria
        if (total_dragon > total_sloth) {
            cout << "Dragon" << endl;
        } else if (total_sloth > total_dragon) {
            cout << "Sloth" << endl;
        } else {
            // Total scores are tied, compare DSA scores
            if (dsa_dragon > dsa_sloth) {
                cout << "Dragon" << endl;
            } else if (dsa_sloth > dsa_dragon) {
                cout << "Sloth" << endl;
            } else {
                // DSA scores are tied, compare TOC scores
                if (toc_dragon > toc_sloth) {
                    cout << "Dragon" << endl;
                } else if (toc_sloth > toc_dragon) {
                    cout << "Sloth" << endl;
                } else {
                    // All scores are tied
                    cout << "Tie" << endl;
                }
            }
        }
    }

    return 0;
}
