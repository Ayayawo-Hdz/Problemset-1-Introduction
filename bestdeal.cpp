#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int input = 0, x = 0, counter = 0, total = 0, sum = 0, singletotal = 0;
    vector<int> price;
    vector<int> sumprice;
    vector<int> minprice;

    std::string priceInput;

    std::getline(std::cin >> std::ws, priceInput);
    std::istringstream iss(priceInput);

    while (x < 3 && (iss >> input)) {
        if (input >= 1 && input <= 1000) {
            price.push_back(input);
            x++;
        } else { return 0; }
    }
    sort(price.begin(), price.end());
    for (int i = 0; i < x; i++) {
        if (i == 0 || i == 1) {
            // sum 1 + 2, 2 + 3
            sum = price[i] + price[i + 1];
            if (i == 0) {
                if (sum >= 500) {
                    sum -= 100;
                    sum += price[2];
                    if (price[2] >= 500) {
                        sum -= 100;
                    }
                } else {
                    sum += price[2];
                    if (sum >= 500) {
                        sum -= 100;
                    }
                }
                sumprice.push_back(sum);
                sum = 0;
            } else if (i == 1) {
                if (sum >= 500) {
                    sum -= 100;
                    sum += price[0];
                    if (price[0] >= 500) {
                        sum -= 100;
                    }
                } else {
                    sum += price[0];
                    if (sum >= 500) {
                        sum -= 100;
                    }
                }
                sumprice.push_back(sum);
                sum = 0;
            }
        } else {
            // sum 1 + 3
            sum = price[i] + price[0];
            if (sum >= 500) {
                sum -= 100;
                sum += price[1];
                if (price[1] >= 500) {
                    sum -= 100;
                }
            } else {
                sum += price[1];
                if (sum >= 500) {
                    sum -= 100;
                }
            }
            sumprice.push_back(sum);
        }
    }

    auto min_sumprice = *min_element(sumprice.begin(), sumprice.end());
    minprice.push_back(min_sumprice);

    for (int i = 0; i < x; i++) {
        singletotal += price[i];
    }
    if (singletotal >= 500) {
        singletotal -= 100;
    }
    minprice.push_back(singletotal);

    for (int i = 0; i < x; i++) {
        if (price[i] >= 500) {
            price[i] -= 100;
            total += price[i];
        } else {
            total += price[i];
        }
    }

    minprice.push_back(total);

    auto mintotal = *min_element(minprice.begin(), minprice.end());

    cout << mintotal << endl;

    return 0;
}
