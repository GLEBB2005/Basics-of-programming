#include <iostream>
#include <vector>
#include<string>
#include <algorithm>
int main()
{
    int max;
    int min;
    int i;
    int n;
    int d;
    std::string str;
    std::vector <int>ivec;
    std::vector <int>indexes;
    std::vector<int>numbers;
    std::vector<int>roots;
    int max_max;
    numbers.push_back(8);
    numbers.push_back(8);
    std::cout << "Please enter sequence of an integers (to quit press q):\n";
    while (std::cin >> str)
    {
        if (str == "q") {
            break;
        };
        try {
            int i = std::stoi(str);
            ivec.push_back(i);
        }
        catch (...) {
            ivec.push_back(0);
            indexes.push_back(ivec.size() - 1);
        }
    };
    n = 0;
    for (i = 1; i < ivec.size(); i++) {
        if (std::find(indexes.begin(), indexes.end(), n) != indexes.end()) {
            bool found = std::find(indexes.begin(), indexes.end(), n) != indexes.end();
            while (found == true) {
                n = n + 1;
                found = std::find(indexes.begin(), indexes.end(), n) != indexes.end();
            }
        }
        if (n == numbers[numbers.size() - 2]) {
            n = n + 1;
            bool found = std::find(indexes.begin(), indexes.end(), n) != indexes.end();
            while (found == true) {
                n = n + 1;
                found = std::find(indexes.begin(), indexes.end(), n) != indexes.end();

            };
            numbers.push_back(n);
        }
        else {
            numbers.push_back(n);
        }

    }
    numbers.erase(std::next(numbers.begin()));
    std::cout << "\nThis is optimal root: ";
    while (ivec.size() > 1) {
        d = ivec.size() - 1;
        max = std::max(ivec[d], ivec[d - 1]);
        min = std::min(ivec[d], ivec[d - 1]);
        if (max < 0) {
            max = 0;
            min = 0;
        }
        if (ivec[numbers[d]] < 0) {
            roots.push_back(max);
        }
        ivec[numbers[d]] = ivec[numbers[d]] + max;
        if ((min > ivec[numbers[numbers[d]]] && ivec.size() > 3) || (ivec.size() == 3)) {
            roots.push_back(ivec[numbers[d]] + min);
        }
        ivec.pop_back();
        ivec.pop_back();
    }
    int g;
    int maxx;
    maxx = roots[0];
    for (g = 0; g < roots.size(); g++) {
        if (maxx < roots[g]) {
            maxx = roots[g];
        }
    }
    max_max = maxx;
    max_max = std::max(max_max, ivec[0]);
    std::cout << max_max;
    return 0;
}
