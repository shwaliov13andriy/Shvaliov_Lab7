#include <iostream>
using namespace std;

void removeDuplicates(int* arr, int& size) {
    int uniqueCount = 0;
    for (int i = 0; i < size; ++i) {
        bool isDuplicate = false;
        for (int j = 0; j < uniqueCount; ++j) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[uniqueCount++] = arr[i];
        }
    }
    size = uniqueCount;
}
int main() {
    int size;
    cout << "Type size: ";
    cin >> size;
    int* arr = new int[size];

    cout << "Type elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    removeDuplicates(arr, size);
    cout << "Unique elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

