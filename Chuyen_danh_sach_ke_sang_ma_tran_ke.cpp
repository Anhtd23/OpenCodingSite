#include <bits/stdc++.h>
using namespace std;

int d[1005][1005];
int main (){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin.ignore();
    vector<int> ke[1005];

    for (int i = 1 ;i <= n;i++){
        getline(cin, s);
        s += " ";

        int so = 0; 
        int j = 0;

        while (j < s.size()){
            if (s[j] >= '0' && s[j] <= '9')
                so = 10*so + (int)(s[j] - '0');
            else if (so > 0){
                ke[i].push_back(so);
                so = 0;
            }
            j++;
        }
    }

   
    
    memset (d,0,sizeof(d));
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < ke[i].size();j++){
            d[i][ke[i][j]] = d[ke[i][j]][i] = 1;
        }
    }
    for (int i = 1 ; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}