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

    // Character
    // Input buffer
    // if more than required char is inputted, the extra one will be stored in
    // a buffer, which can be retrieved later
    char char1, char2;
    cout << "2 characters: ";
    cin >> char1; // '1' if the user input "12", '2' will be in the buffer
    cin >> char2; // '2'


    // String
    // type: cstring / string in <string> library
    // cstring:
    // ended by '\0' (null character), so the size will -1, such as:
    char string1[11]; // this can store at most 9 characters
    cout << "9 characters: ";
    cin >> string1;
    cout << string1 << endl;
    // so declare with required size + 1 when there is no intialisation
    // Also, cannot intialise a string after declaration

    // cin will terminate when encountering whitespace characers, such as
    // space, tab, enter etc.

    // cin method
    // get(char) (read one character)
    cout << "1 character: " << endl;
    char cin_get;
    cin.get(cin_get);
    cout << "cin_get: " << cin_get << endl;

    // getline(string, size) (read a line of text)
    // if length of input > size - 1 or there are other errors,
    // some internal state flags of cin will be set
    // method clear() is required to reset those flags
    char string2[5], string3[5];
    cout << "4 characters: ";
    cin.getline(string2, 5);
    cin.clear(); // if the user input more than 4 characters, the extra one
    // will get into string3
    // but it will skip string3 directly if there is no clear()
    cout << "4 characters: ";
    cin.getline(string3, 5);
    cout << string2 << endl;
    cout << string3 << endl;

    // Why '\0'?
    // it is used to distinguish continously stored string

    // Passing string as a parameter
    // size is optional

    // cstring functions in <cstring>
    char string4[10];
    char string5[] = "5";

    // copying the content of string5 to string4
    strcpy(string4, string5);
    cout << "string4: " << string4 << endl; // string4: "5"

    // append the content of string5 to string4
    strcat(string4, string5); 
    cout << "string4: " << string4 << endl; // string4: "55"

    // comparing string4 and string5 lexicographically character by character
    cout << strcmp(string4, string5) << endl; // 53
    // = 0 -> string4 == string5
    // > 0 -> string4 > string5
    // < 0 -> string4 < string5

    // finding the length of character (non-null characters)
    cout << "length of string4: " << strlen(string4) << endl; // 2

    return 0;
}

void func4() {
    cout << "func4" << endl;
}
