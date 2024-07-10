#include <iostream>

double celsius_to_farenheit(double celsius_val) {
    const float standard_conversion = 1.8;
    const int add_32 = 32;
    double return_value = (celsius_val*standard_conversion) + add_32;
    return return_value;
}

double farenheit_to_celsius(double farenheit_val) {
    const double standard_conversion = 1.8;
    const int remove_32 = 32;
    double return_value = (farenheit_val-remove_32)/(standard_conversion);
    return return_value;
}

int main() {
    std::cout << celsius_to_farenheit(23) <<std::endl;
    std::cout << farenheit_to_celsius(73.4) <<std::endl;
}