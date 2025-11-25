// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;

int gcb(int a,int b){
    if(b == 0){
        return a;
    }else{
        return gcb(b,a%b);
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << gcb(a,b) << endl;
    return 0;
}
