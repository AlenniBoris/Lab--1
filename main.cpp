#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){
    int x, k, t;
    long double result;


    result = 1;

    std::cout << "input x:";
    std::cin >> x;

    std::cout << "input k:";
    std::cin >> k;
    while (k<=1){
        std::cout << "input k from 2 to infinity\n";
        std::cin >> k;
    }

    double b= pow(10,-k);




    std::cout << "input number of symbols:";
    std::cin >> t;
    while (t<=0){
        std::cout << "input positive t\n";
        std::cin >> t;
    }

    int n = 1;

    while (1==1){
        long double fact = 1; //Чтобы сохраняло в себе результат с большим количеством символов
        int znak = pow(-1,n);
        signed long int iks = pow(x,n);
        for (int f = n;f > 0;f--){
            fact *= f;
        }
        long double slag = (znak*iks)/fact;
        if (slag<b){
            result = result - slag;
            double znach = exp(-x);
            cout << "Function answer e^(-x): ";cout <<fixed<<setprecision(t)<<znach<<endl;
            cout << "Function answer Teilor: ";cout  <<fixed<<setprecision(t)<<result<<endl;

            double razn = abs(result-znach);
            cout << "Difference between Teilor and e^(-x) "<<fixed<<setprecision(t)<<razn<<endl;

            break;
        }

        result = result + slag;
        cout << "Function Teilor: ";cout <<fixed<<setprecision(t)<<result<<endl;

    };


    return 0;
}
