#include <iostream>
#include <vector>
using namespace std;

template<typename T>
vector<T> addVectors(const vector<T>& a, const vector<T>& b) {
    vector<T> result;
    for (size_t i = 0; i < a.size(); i++) {
        result.push_back(a[i] + b[i]);
    }
    return result;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};
    auto c = addVectors(a, b);
    cout << c;
}