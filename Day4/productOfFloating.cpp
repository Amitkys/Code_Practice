#include <iostream>
using namespace std;
float product(float a, float b){
    return a*b;
}
int main(){
    float a = 10.2, b = 23.6, ans;
    ans = product(a, b);
    cout << ans << endl;
}