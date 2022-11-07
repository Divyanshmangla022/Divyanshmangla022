#include <iostream>
using namespace std;
int findUnique(int *arr, int n) {
    // Write your code here
    int res = 0;

    for(int i = 0; i < n; i++) {
        res ^= arr[i];
    }

    return res;
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        int siz;
        cin >> siz;
        int *input = new int[siz];

        for (int i = 0; i < siz; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, siz) << endl;
    }

    return 0;
}
