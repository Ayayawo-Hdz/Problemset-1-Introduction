#include <iostream>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int ans;
    int x = 0;
    int i = 0;
    string res;

    cin >> ans;

    if (ans >= 1 && ans <= 150) {
        while (i < ans) {
            cin >> res;
            if (res == "X++" || res == "++X") {
                x += 1;
            } else if (res == "X--" || res == "--X"){
                x -= 1;
            } else {
                return 0;
            }
            i++;
        }
        cout << x;
    } else {
        return 0;
    }

    return 0;
}
