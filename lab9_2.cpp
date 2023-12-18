#include<iostream>
using namespace std;

void printO(int N,int M){
    if(M > 0 && N > 0){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cout << "O";
            }
            cout << "\n";
        }
    }else{
        cout << "Invalid input";
    }
}