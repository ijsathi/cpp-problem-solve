#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int max_num;
    cin >> max_num;
    for (int i = 1; i < n; i++)
    {
       long long int crrnt_num;
        cin >> crrnt_num;

        if (crrnt_num > max_num)
        {
            max_num = crrnt_num;
        }
    }
    cout<<max_num;
    return 0;
}