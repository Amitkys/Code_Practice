#include <iostream>
using namespace std;
int addTwoNumber(int a, int b){
    return a+b;
}
int main(){
    int a = 10;
    int b = 20;
    int ans = addTwoNumber(a, b);
    cout << ans << endl;
    return 0;
}