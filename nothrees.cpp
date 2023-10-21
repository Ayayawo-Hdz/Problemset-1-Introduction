#include <iostream>

using namespace std;
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    int i = 0;
    int k = 0;
    int j = 0;
    int polynum[1000];

    for (j = 1; j <= 1666; j++) {
        if (j % 3 != 0 && j % 10 != 3) {
            polynum[i+1] = j;
            i++;
        }
    }

    cin >> ans;
    if (ans >= 1 && ans <= 100) {
        int x[ans];
        i = 0; k = 0;
        while (k < ans){
            cin >> x[i];
            if (x[i] >= 1 && x[i] <= 1000) {} else { break; }
            i++;
            k++;

        }
        for (i = 0; i <= ans-1; i++) {
            cout << polynum[x[i]] << endl;
        }
    }

    return 0;
}
