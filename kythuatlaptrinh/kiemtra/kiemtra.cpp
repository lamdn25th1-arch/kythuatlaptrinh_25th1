

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ========== PH?N 1: M?ng v?i con tr? ==========
    cout << "===== PHAN 1: Mang voi con tro =====" << endl;

    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int* p = arr;

    cout << "In bang *(p + i):" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    cout << "In bang p[i]:" << endl;
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    // ========== PH?N 2: Vector ==========
    cout << "\n===== PHAN 2: Vector int =====" << endl;

    vector<int> v;
    int n2;

    cout << "Nhap so phan tu n: ";
    cin >> n2;

    cout << "Nhap " << n2 << " phan tu:" << endl;
    for (int i = 0; i < n2; i++) {
        int x;
        cout << "v[" << i << "] = ";
        cin >> x;
        v.push_back(x);
    }

    // In ra vector
    cout << "Vector hien tai: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Thêm ph?n t? vào cu?i
    int them;
    cout << "Nhap phan tu them vao cuoi: ";
    cin >> them;
    v.push_back(them);

    cout << "Vector sau khi them: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Xóa ph?n t? cu?i
    v.pop_back();

    cout << "Vector sau khi xoa cuoi: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}