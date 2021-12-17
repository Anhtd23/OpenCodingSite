#include <iostream>
using namespace std;

// Hàm trả về số bước biến đổi nhỏ nhất
int soBuocBienDoi(int s, int t) {
 
    // Nếu s = t thì không cần biến đổi
    if (s == t)
        return 0;
 
    // Trường hợp mà không kiểm tra được
    if (s <= 0 && t > 0)
        return -1;
 
    // Nếu s lớn hơn t thì tăng t lên 1
    // trả về kết quả 
    if (s > t)
        return s - t;
 
    // Nếu bit cuối cùng là số lẻ
    // tăng dần t
    if (t & 1)
        return 1 + soBuocBienDoi(s, t + 1);
 
    // Nếu t là số chẵn thì chia nó cho 2 để gần bằng s
    else
        return 1 + soBuocBienDoi(s, t / 2);
}
 
int main() {
    int t;
    cin >> t;
    while (t--){
        int S, T;
        cin >> S >> T;
        cout << soBuocBienDoi(S, T) << endl;
    }
    return 0;
}