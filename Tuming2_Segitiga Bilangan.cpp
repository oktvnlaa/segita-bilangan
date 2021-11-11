#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    cout << "";
    
    if (n>0 && n<10){
        for (int i=n; i>=1; i--){
            for (int j=1; j<=i; j++){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << "Bilangan tidak sesuai!";
    }
    return 0;
}
