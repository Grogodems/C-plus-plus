#include <iostream>
#include <cstdlib> // ??? system
using namespace std;
int main() {
    int A[3][4] =
    {
        {  1, 2, 3,4 },
        { 12,  13, 14,  15  },
        { 23, 24,  25,  26 }
    };
    for (int i = 0; i < 3; ++i) {  // ??????? ?? ????? ?????? i
        for (int j = 0; j < 4; ++j) {

          cout << A[i][j] << " ";
        }
        cout << endl; // ?????? ??????????? ???????? ???????? ?? ????? ??????
    }
}