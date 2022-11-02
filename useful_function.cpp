#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/*
함수 이름: swap
함수 기능: 입력된 두 정수 값이 서로 바뀜.
*/
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

/*

*/