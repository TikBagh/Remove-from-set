#include <iostream>
#include <set>

void removeLessThanN(std::set<int>& mySet, int n) {
    auto it = mySet.begin();
    while (it != mySet.end()) {
        if (*it < n) {
            it = mySet.erase(it);
        }
        else {
            ++it;
        }
    }
}

int main() {
    std::set<int> mySet = { 10, 5, 8, 3, 12, 7 };
    int n = 7;

    removeLessThanN(mySet, n);

    for (int element : mySet) {
        std::cout << element << " ";
    }

    return 0;
}
