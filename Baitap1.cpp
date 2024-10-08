#include <iostream>

using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr);
    cout << "Kich thuoc cua mang (so Byte): " << size << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Phan tu thu " << i << ": " << arr[i] << " tai dia chi: " << &arr[i] << endl;
    }

    return 0;
}