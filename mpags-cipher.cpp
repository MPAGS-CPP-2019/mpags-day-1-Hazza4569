#include <iostream>
#include <string>
int main()
{
    const double const_dbl{6.3};
    
    int my_int{0};
    my_int += 4;

    const std::string my_str{"Hello world!"};
    
    printf("%.2f %d %s\n", const_dbl, my_int, my_str.c_str());
}
