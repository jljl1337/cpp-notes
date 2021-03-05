#include <iostream>
using namespace std;

// Function
// define: type name(input) {body}
// MUST define before main function
int func1(int num) {
    return ++num;
    // the keyword "return" will give out the value when the function is called
    // please refer to the example of recalling a function below
}

void func2() {
    // recall: name(input)
    int a = 1;
    cout << func1(a) << endl;
    // noted that a will not be changed regardless of the operation inside,
    // unless it is array
}

// Default parameters
// all default parameters must locate at the right hand side
void func3(int num1, int num2 = 1) {
    cout << num1 + num2 << endl;
}

// Noted that function cannot be called if it is not defined,
// unless there is a prototype of it
void func4(); // This is defined at the bottom of the file
// These prototype can be added in header file (.h file) to share function
// across different files

// Function overloading
// function with the same name and type, but different parameters type and 
// amount can be defined
void print(int n) {cout << n << endl;}
void print(char a) {cout << a << endl;}

// Static variable
// Their values will be kept after the function execution,
// but still can be called inside the function
void func5() {
    static int static_num; // will assign to 0 if no intialisation
    cout << ++static_num << endl;;
}


int main() {
    func2(); // 2
    func3(2); // 3
    func3(3, 1); // 4
    func4(); // func4
    print(1); // 1
    print('a'); // a
    func5(); // 1
    func5(); // 2

    return 0;
}

void func4() {
    cout << "func4" << endl;
}
