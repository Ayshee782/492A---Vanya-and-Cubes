
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0;
    int cubes_used = 0;
    int i = 1;

    while (true) {
        int needed = i * (i + 1) / 2; // cubes needed for level i
        if (cubes_used + needed <= n) {
            cubes_used += needed;
            height++;
            i++;
        } else {
            break;
        }
    }

    cout << height << endl;
    return 0;
}
