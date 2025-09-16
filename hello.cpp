#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 2, 4, 2};
    int key1 = 2;
    vector<int> result1 = findIndices(arr1, key1);
    cout << "Indices of " << key1 << " in arr1: ";
    for(int idx : result1) {
        cout << idx << " ";
    }
    cout << endl;
    vector<int> arr2 = {1, 3, 5, 7};
    int key2 = 4;
    vector<int> result2 = findIndices(arr2, key2);
    cout << "Indices of " << key2 << " in arr2: ";
    for(int idx : result2) {
        cout << idx << " ";
    }
    cout << endl;
    vector<int> arr3;
    int key3 = 1;
    vector<int> result3 = findIndices(arr3, key3);
    cout << "Indices of " << key3 << " in arr3: ";
    for(int idx : result3) {
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}
