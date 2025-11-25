#include <iostream>
using namespace std;

void moveDisk(int disk, int from, int to) {
    if ((from == 1 && to == 3) || (from == 3 && to == 1))
        return;
    cout << "Move disk " << disk << " from " << from << " to " << to << "\n";
}

void hanoi(int n, int from, int to, int aux) {
    if (n == 0) return;

    if (from == 1 && to == 3) {
        hanoi(n, 1, 2, 3);
        hanoi(n, 2, 3, 1);
        return;
    }

    if (from == 3 && to == 1) {
        hanoi(n, 3, 2, 1);
        hanoi(n, 2, 1, 3);
        return;
    }

    hanoi(n - 1, from, aux, to);
    moveDisk(n, from, to);  // 加入 disk 編號
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
}
