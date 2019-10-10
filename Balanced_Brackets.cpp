#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main() {

    int n = 0;

    std::cin >> n;
    std::string s;

    map<char, char> brac = { {'[',']'},{'(',')'},{'{','}'} };

    while (n--) {
        std::cin >> s;
        std::vector<char> stk;
        for (char c : s) {
            if (!stk.empty() && brac[stk.back()] == c) {
                stk.pop_back();
                continue;
            }
            stk.push_back(c);
        }
        std::cout << (stk.empty() ? "YES\n" : "NO\n");

    }

    return 0;
}
