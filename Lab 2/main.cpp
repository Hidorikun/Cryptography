#include <iostream>
#include <string>

using namespace std;

int readInt(string msg) {
    cout << msg;
    int result;
    cin >> result;
    return result;
}
int gcd(int a, int b) {

    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }

    return a;
}

int modInverse(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
        if ((a*x) % m == 1)
            return x;
}

bool inRange(int a, int min, int max) {
    return ( min <= a && a < max );
}

int main() {

    int a, b, n;

    a = readInt("a = ");
    b = readInt("b = ");
    n = readInt("n = ");

    b = b % n;

    if (!inRange(a, 0, n) || !inRange(b, 0, n)) {
        cout << "a and b must be in range [0, n)";
        return 0;
    }

    while (true) {

        int d = gcd(a, n);

        if (d == 1) {
            cout << "xg = " << (modInverse(a, n) * b) % n << " ( mod " << n << " )" ;
            return 0;
        }

        if (b % d != 0) {
            cout << "does not have solution";
            return 0;
        }

        a = a / d;
        b = b / d;
        n = n / d;
    }

}