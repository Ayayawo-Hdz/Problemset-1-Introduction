#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<double> root;
    double num;

    while (cin >> num) {
        root.push_back(num);
    }

    for (int i = root.size() - 1; i >= 0; i--) {
        cout << setprecision(4) << fixed << sqrt(root[i]) << endl;
    }

    return 0;
}
