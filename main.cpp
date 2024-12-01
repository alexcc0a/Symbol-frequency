#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::map<char, int> freq;

    for (char  c : input) {
        freq[c]++;
    }

    std::vector<std::pair<char, int>> freqVec(freq.begin(), freq.end());

    std::sort(freqVec.begin(), freqVec.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
        return a.second > b.second;
    });

for (const auto& p : freqVec) {
    std::cout << p.first << ": " << p.second << std::endl;
}
    return 0;
}