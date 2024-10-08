#include <iostream>
using namespace std;
void sapXepTangDan(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
double tinhDiemTrungBinh(int *arr, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    return (double)tong / n;
}
int main() {
    int n;
    cout << "Nhap so luong diem kiem tra: ";
    cin >> n;
    while (n <= 0) {
        cout << "So luong diem phai lon hon 0. Nhap lai: ";
        cin >> n;
    }
    int *diem = new int[n];
    cout << "Nhap cac diem kiem tra: ";
    for (int i = 0; i < n; i++) {
        cin >> diem[i];
        while (diem[i] < 0) {
            cout << "Diem phai lon hon hoac bang 0. Nhap lai: ";
            cin >> diem[i];
        }
    }
    sapXepTangDan(diem, n);
    double diemTrungBinh = tinhDiemTrungBinh(diem, n);
    cout << "\nDanh sach diem da sap xep:\n";
    for (int i = 0; i < n; i++) {
        cout << diem[i] << " ";
    }
    cout << endl;
    cout << "Diem trung binh: " << diemTrungBinh << endl;
    delete[] diem;

    return 0;
}