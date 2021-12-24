#include "Solution.h"


void Calculate(double X_Parametr, int k, int Accuracy) {
    double Fisrt_Elem = 1;
    double Epsilon = pow(10, -k);

    for (int Num_Of_Numbers = 1;; Num_Of_Numbers++) {
        double Factorial = 1.0;
        for (int i = Num_Of_Numbers; i > 0; i--) {
            Factorial *= i;
        }

        double Calc_Elem = (pow(X_Parametr, Num_Of_Numbers) * pow(-1, Num_Of_Numbers)) / Factorial;

        if (abs(Calc_Elem) < Epsilon) {
            double ResultExponent = exp(-X_Parametr);
            double ResultTeilor = abs(Fisrt_Elem + Calc_Elem);
            double AnswerDifference = abs(ResultTeilor - ResultExponent);

            cout << "Function answer e^(-x):";
            cout << fixed << setprecision(Accuracy) << ResultExponent << endl;
            cout << "Function answer Teilor:";
            cout << fixed << setprecision(Accuracy) << ResultTeilor << endl;
            cout << "Difference between Teilor and e^(-x)" << fixed << setprecision(Accuracy) << AnswerDifference
                 << endl;
            exit(0);
        }
        Fisrt_Elem += Calc_Elem;
    }
}


void Solution() {

    double X_Parametr, Positiveness;
    int k;
    int Accuracy;

    std::cout << "input x:";
    std::cin >> X_Parametr;

    std::cout << "input k:";
    std::cin >> k;
    assert(k > 1);

    std::cout << "input number of symbols:";
    std::cin >> Accuracy;
    assert(Accuracy >= 0);

    Calculate(X_Parametr, k, Accuracy);

}