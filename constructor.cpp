#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Constructor called!" << endl;
    }
};

int main() {
    Student s1;    // অবজেক্ট তৈরি হওয়া মাত্র Constructor স্বয়ংক্রিয়ভাবে কল হবে
    cout << s1.name << " " << s1.age << endl;
    return 0;
}