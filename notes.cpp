#include <ios>
#include <iostream>
#include <iomanip>
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
    // Number input are separated by white space (space / new line)


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
    // like tab ('\t') or " ('\"')

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


    // Operator
    // Assignment operator
    int operator_assign = 3; // this statement will return the value 3 too
    int chain_1, chain_2;
    chain_1 = (chain_2 = 2); // chain_1 = chain_2 = 2
    chain_1 = chain_2 = 2; // the same as above

    // Increment / Decrement operators
    int increment = 3;
    ++increment; // increment = 4 (OR increment++, which is not prefered)
    int decrement = 5;
    cout << --decrement + 3 << endl; // 7, 
    // while decrement = 4 after this statement
    // as "--decrement" decrease the variable first, then return the new value
    // the position of --/++ decides altering the value first or later

    // Division and Modulus operators
    // Division
    cout << 5 / 2 << endl; // 2 (quotient)
    // Modulus
    cout << 5 % 2 << endl; // 1 (remainder)


    // Changing the width of output
    cout.width(4); // only effective for ONE output
    // has to write "#include <iomanip>" at the top first
    cout << 12 << endl; // "  12"
    // Leading space will be added if the original output width is smaller
    cout << 12 << endl; // "12"
    // Or cout << setw(4) << 12 << endl;


    // Setting the format and precision of floating point output
    
    // has to write "#include <iomanip>" at the top first
    // default is 6 precision, i.e. 5 decimal points or scientific,
    // depending on the value
    
    // Fixed point notation
    cout << fixed; // the effect is permanent
    cout << 1.34 << endl; // 1.340000
    cout << 0.000000000000134 << endl; // 0.000000

    // Scientific notation
    cout << scientific;
    cout << 1.34 << endl; // 1.340000e+00
    cout << 1.2345671 << endl; // 1.234567e+00
    cout << 1.2345678 << endl; // 1.234568e+00, due to round off

    // Precision
    cout << setprecision(2);
    cout << 1.34 << endl; // 1.3, by default it set significant figures
    // with "fixed" or "scientific",
    // it means number of figures AFTER the decimal point
    cout << fixed << 0.003 << endl; // 0.00
    cout << scientific << 0.003 << endl; // 3.00e-03
    cout << defaultfloat; // default floating point behaviour


    // Other cout manipulator
    // Fill
    cout << setfill('*');
    cout << setw(5) << 23 << endl; // ***23

    // Radix
    cout << oct << 11 << endl; // 13
    cout << hex << 11 << endl; // b
    cout << dec << 11 << endl; // b

    // Alignment
    cout << setfill('*');
    cout << setw(5);
    cout << setiosflags(ios::left) << 5.6 << endl; // 5.6**


    // Logical operator
    bool logic1, logic2;
    logic1 = true;
    logic2 = false;
    cout << !logic1 << endl; // not
    cout << (logic1 && logic2) << endl; // and
    cout << (logic1 || logic2) << endl; // or
    cout << (logic1 == logic2) << endl; // equal
    cout << (logic1 != logic2) << endl; // not equal
    cout << (logic1 < logic2) << endl; // less than
    cout << (logic1 >= logic2) << endl; // greater than or equal to

    // Short-circuit evaluation
    // if the first expression is false (true), the expression after && (||)
    // will not be evaluated 


    // If statement
    int if_num = 3;
    if (if_num > 0)
        cout << "if_num is a positive number";
    else
        cout << "if_num is a non-positive number";
    // if the there are more than one statement in one situation,
    // use {} to group them together


    // Switch statement
    int switch_num = 3;
    switch (switch_num) { // expression inside () must be integer type 
                          // (including char)
        case 0:
            cout << "switch_num is 0" << endl;
            break;
        case 1:
            cout << "switch_num is 1" << endl;
            break;
        default:
            cout << "switch_num is neither 0 nor 1" << endl;
            break;
    }


    return 0;
}
