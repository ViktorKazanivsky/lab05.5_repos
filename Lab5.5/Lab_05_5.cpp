#include <iostream>
using namespace std;

double St(double x, int n, int depth)
{
    cout << "Depth: " << depth << ", n = " << n << endl;

    if (n == 0) {
        return 1;
    }
    else if (n < 0) {
        return 1.0 / St(x, abs(n), depth + 1);
    }
    else {
        return x * St(x, n - 1, depth + 1);
    }
}

int main() {
    double x;
    int n;
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;
    cout << "St = " << St(x, n, 0) << endl;

    return 0;
}