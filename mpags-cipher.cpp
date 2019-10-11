#include <iostream>
#include <string>
int main()
{
    //product of double and int
    double my_dbl{1.2};
    int my_int{4};
    std::cout << my_dbl*my_int << '\n';
    //outputs 4.8, as expected

    //int divided by double
    std::cout << my_int/my_dbl << '\n';
    //outputs 3.33333, as expected

    //int divided by int
    int my_int2{3};
    std::cout << my_int/my_int2 << '\n';
    //outputs 1 (rather than 1.33333 as an operation on two
    //int is automatically made an int)
    
    //char from string
    std::string my_string{"heya"};
    char my_char{my_string[2]};
    std::cout << my_char << '\n';
}
