#include <iostream>
using namespace std;

int main(){
    char c, d; bool taken=false;

    while(cin.get(c)){
        if(taken){
            short tungtungtungsahur = (c+d-129)%26+65; cout << (char) tungtungtungsahur;
        }else{
            cout << c; taken = true;
        }
        d = c;
    }
    return 0;
}