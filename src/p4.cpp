// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分
#include <iostream>
using namespace std;

void line(int depth){
    if(depth == 0) return;
    cout << "|--" ;
    line(depth - 1);
}

int fib(int n,int depth){
    line(depth);
    cout << "SEARCH fib(" << n << ")\n";
    if (n == 1 || n == 2) {
        line(depth);
        cout << "GET fib(" << n << ") = 1\n";
        return 1;
    }
    int x = fib(n - 1, depth + 1);
    int y = fib(n - 2, depth + 1);
    int result = x + y;

      line(depth);
    cout << "GET fib(" << n << ") = " << result << "\n";

    return result;
}

int main() {
    int n;
    cin >> n;

    int ans = fib(n, 0);
    cout << ans << "\n";
}
