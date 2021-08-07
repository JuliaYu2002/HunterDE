#include <iostream>
using namespace std;

int main(){
    int *a = new int[5];
    for (int i = 0; i < 5; i++){
        if (i % 2 == 0){
            (a + i) = new int[4];
            for (int j = 0; j < 4; j++){
                *(a + j) = 0;
                // cout << *a << endl;
            }
        } else {
            for (int k = 0; k < 2; k++){
                *(a + k) = 0;
                // cout << *a << endl;
            }
        }
        cout << *a << endl;
    }
    delete []a;
    a = nullptr;
}