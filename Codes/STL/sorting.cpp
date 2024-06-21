#include <iostream>
using namespace std;

// Function to count the number of interesting numbers <= n
int count_interesting_numbers(long long n) {
    int count = 0;
    long long x = 9;
    while (x <= n) {
        count++;
        x = x * 10 + 9;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        cout << count_interesting_numbers(n) << endl;
    }
    
    return 0;
}