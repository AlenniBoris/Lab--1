#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    double x, znak, firstslag;
    double k, slag, b;

    int t;

    firstslag = 1;

    std::cout << "input x:";
    std::cin >> x;

    std::cout << "input k:";
    std::cin >> k;
    while (k <= 1) {
        std::cout << "input k from 2 to infinity\n";
        std::cin >> k;
    }


    std::cout << "input number of symbols:";
    std::cin >> t;
    while (t <= 0) {
        std::cout << "input positive t\n";
        std::cin >> t;
    }

    b = pow(10, -k);
    int n = 1;

    for (n;; n++) {
        long double factorial = 1.0;
        double iks = pow(x, n);
        znak = pow(-1, n);


        for (int f = n; f > 0; f--) {
            factorial *= f;
        }

        slag = ((znak * iks) / factorial);


        if (abs(slag) < b) {

            double ResultExponent = exp(-x);
            double ResultTeilor = abs(firstslag + slag);
            double AnswerDifference = abs(ResultTeilor - ResultExponent);

            cout << "Function answer e^(-x):";
            cout << fixed << setprecision(t) << ResultExponent << endl;
            cout << "Function answer Teilor:";
            cout << fixed << setprecision(t) << ResultTeilor << endl;
            cout << "Difference between Teilor and e^(-x)" << fixed << setprecision(t) << AnswerDifference << endl;
            exit(0);
        }
        firstslag = firstslag + slag;

    }

    return 0;
}


