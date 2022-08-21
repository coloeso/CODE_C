#include <iostream>

using namespace std;
int main(){
    // 乘法口诀表
    for (int i = 1; i < 10; i++){
        // cout << i;
        for (int j = 1; j < i; j++){
            cout << j << "*" << i << " = " << i*j << " ";
        }
        cout << endl;
    }
}