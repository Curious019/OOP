#include <iostream>
using namespace std;

class Student {
public:
    string name;

    // Normal constructor
    Student(string n) {
        name = n;
        cout << "Normal constructor called" << endl;
    }

    // Copy constructor
    Student(const Student &oldStudent) {
        name = oldStudent.name;   // পুরনো অবজেক্টের name, নতুনটাতে কপি করা হচ্ছে
        cout << "Copy constructor called" << endl;
    }
};

int main() {
    Student s1("Rakib");      // Normal constructor কল হবে, s1 তৈরি হলো

    Student s2 = s1;           // Copy constructor কল হবে, s1 থেকে কপি করে s2 তৈরি হলো

    cout << "s1 এর নাম: " << s1.name << endl;
    cout << "s2 এর নাম: " << s2.name << endl;

    return 0;
}