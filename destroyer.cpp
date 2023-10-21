#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int rep = 0, i = 0, j = 0, x, robots, input = 0, space = 0, exceed = 0;
    vector<int> frobot;
    vector<int> counts;

    cin >> rep;
    bool resp[rep];

    if (rep >= 1 && rep <= 100) {
        while (i < rep) {
            robots = 0;
            x = 0;
            frobot.clear();
            counts.clear();

            cin >> robots;
            if (robots >= 1 && robots <= 100) {
                std::string robotInput;

                std::getline(std::cin >> std::ws, robotInput);
                std::istringstream iss(robotInput);

                while (x < robots && (iss >> input)) {
                    if (input >= 0 && input <= 100) {
                        frobot.push_back(input);
                        x++;
                    } else {
                        break;
                    }
                }
                sort(frobot.begin(), frobot.end());

                int count = 1;
                for (int i = 1; i < frobot.size(); i++) {
                    if (frobot[i] == frobot[i - 1]) {
                        count++;
                    } else {
                        counts.push_back(count);
                        count = 1;
                    }
                }
                counts.push_back(count);

                bool tog = true;
                if (frobot[0] == 0 && frobot.size() == 1) {
                    tog = true;
                    resp[i] = tog;
                    i++;
                    continue;;
                } else if (frobot[0] != 0){
                    tog = false;
                }
                for (int y = 0; y < frobot.size() - 1; y++) {
                    if (frobot[y + 1] > frobot[y]) {
                        space = frobot[y + 1] - frobot[y];
                        if (space > 1) {
                            tog = false;
                            break;
                        }
                    }
                }
                for (int y = 0; y < counts.size()-1; y++) {
                    if (tog == false) {
                        break;
                    }
                    if (counts[y] >= counts[y+1]) {
                        tog = true;
                    } else {
                        tog = false;
                        break;
                    }
                }
                if (tog == true || tog == false) {
                    resp[i] = tog;
                }
                i++;
            } else { return 0; }
        }
        for (i = 0; i < rep; i++) {
            if (resp[i] == true) {
                cout << "YES" << std::endl;
            } else if (resp[i] == false) {
                cout << "NO" << std::endl;
            }
        }
    }
    return 0;
}
