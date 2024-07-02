#include <iostream>
using namespace std;
int main(){
    bool a = 128 < 12;
    bool b = false;
    bool c = true;
    bool d = false;

    if(a && c){
        cout << "Yes" << endl; 
    }
    else{
        cout << "No" << endl;
    }
}