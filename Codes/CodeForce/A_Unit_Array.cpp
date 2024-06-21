#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<int> results(t);
    
    for (int i = 0; i < t; ++i) {
        int n, x;
        cin >> n >> x;
        
        if (n <= 2) {
            results[i] = 1;
        } else {
            int effective_n = n - 2;
            int floor_number = (effective_n + x - 1) / x;
            results[i] = floor_number + 1;
        }
    }
    
    for (int i = 0; i < t; ++i) {
        cout << results[i] << endl;
    }
    
    return 0;
}
