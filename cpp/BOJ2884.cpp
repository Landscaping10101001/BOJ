#include <iostream>
using namespace std;

int main(void)
{
    int H , M;
    cin >> H >> M;
    if (M > 44){
        cout << H << " " << M - 45;
    }
    else if (H == 0){
        cout << 23 << " " << M + 15;
    }
    else{
        cout << H - 1 << " " << M + 15;
    }
    return 0;
}