#include <ios>
#include <iostream>
#include <iomanip>
#define N 10
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
    cout << dec << 11 << endl; // 11

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


    // Conditinoal operator
    int condi_a = 3, condi_b = 5;
    (condi_a > condi_b) ? cout << condi_a << endl : cout << condi_b << endl;
    // outputing the larger number in one line


    // For loop
    for (int for_num = 0; for_num < 3; ++for_num) {
    // int for_num = 0: statement(s) executed before entering the loop
    // for_num < 3: the loop will quit if the statement returns true
    // ++for_num: statement(s) executed after each iteration
    // These three types of statements are separated by ;
        cout << "for_num is " << for_num << endl; // this will run for 3 times
    }
    // {} can be neglected if there is only one statement
    // for_num cannot be accessed here as it was declared inside the for loop
    
    // More than one statement can be included for the first and third type:
    for (int for_1 = 0, for_2 = 0; for_1 < 4; ++for_1, ++for_2)
        cout << for_1 << ' ' << for_2 << endl;


    // While loop (pre-tested)
    int while_num;
    cin >> while_num;
    while (while_num <= 0) { // while_num < 0: execute loop body if the 
                            // expression returns true
        cout << "Please input a positive number" << endl;
        cin >> while_num;
    }
    // This can be used for validation, the above is one of the example
    // {} can be neglected if there is only one statement


    // Do while loop (post-tested)
    int do_while_num;
    do {
        cin >> do_while_num;
        if (do_while_num <= 0) {
            cout << "Please input a positive number" << endl;
            cin >> do_while_num;
        }
    } while (do_while_num <= 0);
    // This has the same effect as the above, but checking for one more time
    // remember to put ; after the while statement of do while loop
    // {} can be neglected if there is only one statement
    

    // Break and continue statements
    int break_num;
    while (1) {
        cin >> break_num;
        if (break_num <= 0) {
            cout << "Please input a positive number" << endl;
        } else {
            break; // exit the (innermost) loop
        }
    }
    // printing odd number below 5
    for (int continue_num = 0; continue_num < 5; ++continue_num) {
        if (continue_num % 2 == 0) {
            continue; // jump to next iteration
        } else {
            cout << continue_num << endl;
        }
    }


    // Array
    // type name[size]
    // String is array of characters!
    int num_array1[20]; // either define with size
    int num_array3[] = {2, 3}; // or define the content of the array
    int num_array2[N]; // the size is best defined using #define
    // N is defined at the top of the file,
    // Normal variable can be used, but some compiler may create error

    // Array initialisation
    int array_init1[2] = {1, 2}; // either define it straight away
    int array_init2[20] = {1, 2}; // the first two are 1 and 2, the remaining
    // are all 0
    int array_init3[20] = {0}; // initialise all elements to be 0

    // Accessing elements of array
    // All index starts from 0
    int num_array4[] = {3, 4};
    cout << num_array4[0] << endl; // 3
    cout << num_array4[1] << endl; // 4

    // 2D array
    int array_2d1[2][3];
    int array_2d2[2][3] = {{1,2,3}, {4,5,6}};
    int array_2d3[][3] = {1, 2, 3, 4, 5, 6}; 
    // size of first dimension can be neglected if the content is defined


    return 0;
}
