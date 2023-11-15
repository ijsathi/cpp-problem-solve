#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for A
    int N;
    cin >> N;
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    // for B
    int M;
    cin >> M;
    int *B = new int[M];
    // copy a
    for (int i = 0; i < N && i < M; i++)
    {
        B[i] = A[i];
    }
    // delete a
    delete[] A;
    // input b
    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }
    // print b
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    delete[] B;
    return 0;
}