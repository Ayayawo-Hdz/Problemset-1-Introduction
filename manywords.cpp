#include <iostream>
#include <cstring>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word;
    int x = 0;
    int longo = 0;
    int length = 0;

    cin >> x;
    if (x >= 1 && x <= 100) {
        do {
            cin >> word;
            longo = word.length();
            if (longo > 10) {
                length = longo - 2;
                cout << word[0] << length << word[word.length()-1] << endl;
            } else {
                cout << word << endl;
            }
            x--;
        } while (x > 0);
    } else {
        return 0;
    }
    return 0;
}
