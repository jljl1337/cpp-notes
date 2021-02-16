#include <iostream>
using namespace std;
// This can be replaced by using "std::cout"

// This is a single line comment
/*
This is a multiline-comment
*/

// only one function can be named "main", and "Main" will still create error
int main() {
    // Output statement
    cout << "Hello World" << endl;
    // Or cout << "Hello World" << "\n";
    // Or cout << "Hello World\n";


    // Input statement
    cout << "Please input a number: ";
    int input;
    cin >> input;
    cout << "You have inputted the number " << input << endl;


    // Variable
    int number; // declaration
    number = 3; // initialisation or definition
    // MUST declare before define the variable

    // The variable name is case sensitive, 
    // which means "A" is differnt from "A"
    // Only alphabet, number and "_" can be used,
    // such as "billy_age", but other cannot, so "billy-age" is a invalid name

    // More than one variables can be declared or defined in one line too:
    int age1, age2, age3;
    int num1 = 23, num2 = 14;

    // Numerical types
    int integer = 4; // integer (4 bytes / 32 bits)
    short short_integer = 2; // integer (2 bytes / 16 bits)
    long long_integer = 8; // integer (8 bytes / 64 bits)
    unsigned int unsigned_integer = 3; // integer with min of 0 and doubled max
    // Overflow error may occur without warning 
    // when exceed max or is below max value

    float floating_point_number = 3.9; // real number (4 bytes / 32 bits)
    double double_number = 3e-2; // default real number (8 bytes / 64 bits)

    // Character
    char character = 'd'; // single character of ASCII code 
    // (MUST use '', 1 bytes / 8 bits)
    cout << character + 1 << endl; // 100 (ASCII of 'd') + 1 = 101
    character = character + 1;
    cout << character << endl; // 'e'
    // '\' is a escape character, which can help writing special character,
    // like tab or "

    // String
    char string1[] = "amy";
    char * string2 = "amy"; // this create warning for C++11

    // Logical 
    bool boolean_value = true; // boolean value
    bool boolean_demo = 0; // false

    // Constant
    const int constant_integer = 3; // cannot be changed after definition

    // Other
    // void (empty value)
    
    // Types "ranking"
    // High -> low
    // real -> integer -> character -> boolean
    
    // Type conversion
    // high to low => demotion (may cause precision loss)
    // low to high => promotion
    int type_conversion = (int) 3.2; // 3, only the integeral part will be kept


    // Scope
    {
        int x = 10;
        // x can be accessed here
    }
    // x cannot be accessed here
    // with namespace used (in global scope), 
    // variables inside can be accessed outside,
    // like this: namespace level 1 { int x = 10; } 


    // sizeof() operator
    // this will return the memory space used of a variable 
    // or a type of variable
    cout << sizeof(int) << endl; // 4
    return 0;
}
