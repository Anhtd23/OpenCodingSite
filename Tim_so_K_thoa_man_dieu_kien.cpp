#include<iostream>

using namespace std;
int count;
int Cal(int n, int m)
{
    for(int i = n; i <= m; i++)
    {
        bool visited[10] = {false};
        int number = i;
        while(number)
        {
            if(visited[number % 10] || (number % 10) > 5)
                break;
            visited[number%10] = true;
            number /=10;
        }
        if(number == 0)
            count++;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        count = 0;
        int l, r;
        cin >> l >> r;
        cout << Cal(l, r) << endl;
    }
    return 0;
}