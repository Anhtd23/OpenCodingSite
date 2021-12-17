// Tổng 003: Đường đi có tổng lớn nhất
#include <bits/stdc++.h>
#define min INT_MIN
using namespace std;

void dmax(){
    int n, m;
    cin >> n >> m;
    int a[n+2][m];

    for (int i = 1; i <= n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // Khai báo thêm a[i][0], a[i][m] = 0 để chọn
    for (int j = 0; j < m; j++){
        a[0][j] = min;
        a[n+1][j] = min;
    }

    // Kết quả
    // Tính ngược từ phải sang trái, lưu giá trị tại vị trí mảng

    for (int j = 1; j < m; j++)
        for (int i = 1; i <= n; i++)
            a[i][j] += max(a[i-1][j-1], max(a[i][j-1], a[i+1][j-1]));

    int result = min;
    for (int i = 1; i <= n; i++){
        if (a[i][m-1] > result)
            result = a[i][m-1];
    }

    cout << result << endl;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        dmax();
    }
    return 0;
}