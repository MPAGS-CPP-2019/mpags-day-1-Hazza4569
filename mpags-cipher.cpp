#include <iostream>
int main()
{
    int my_int{0};
    my_int += 7.6;
    
    double my_dbl{0};
    my_dbl += 7.6;

    int bad_int{my_dbl};

    printf("My int: %d, my double: %.2f\n", my_int, my_dbl);
}
