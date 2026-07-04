#include <iostream>
using namespace std;

class Calculator {
public:
    // ১. দুটি int যোগ
    int add(int a, int b) {
        cout<<"Two parameters function is called"<<endl;
        return a + b;
    }

    // ২. তিনটি int যোগ (প্যারামিটার সংখ্যা ভিন্ন)
    int add(int a, int b, int c) {
        cout<<"Three parameters function is called"<<endl;
        return a + b + c;
    }

    // ৩. দুটি double যোগ (প্যারামিটারের টাইপ ভিন্ন)
    double add(double a, double b) {
        cout<<"Double type parameters function is called"<<endl;
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << calc.add(5, 10) << endl;          // কল হবে ১ নং ফাংশন → 15
    cout << calc.add(5, 10, 15) << endl;       // কল হবে ২ নং ফাংশন → 30
    cout << calc.add(2.5, 3.5) << endl;        // কল হবে ৩ নং ফাংশন → 6.0

    return 0;
}