#include <iostream>
using namespace std;

int main(){
    int N, K; cin >> N >> K;
    int giliran = K, hidup = N;

    bool astronot[N]; for(int i=0; i<N; i++) astronot[i] = true;

    while(hidup > 1){
        for(int i=0; i<N; i++){
            if(astronot[i] == 0) continue;
            if(giliran == 1){
                astronot[i] = 0;
                if((i+1) % 2 == 0) K += 2;
                else K--;
                if (K<2) K=2; giliran = K;
                hidup--;
            }else giliran--;
        }
    }
    
    for(int i=0; i<N; i++) if(astronot[i] == 1){
        cout << i+1 << endl; break;
    }

    return 0;
}
