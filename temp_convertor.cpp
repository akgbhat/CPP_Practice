
#include <iostream>

double celsiusToFahrenheit(double temp) {
    return ((9.0 * temp) / 5.0) + 32.0;
}

double fahrenheitToCelsius(double temp) {
    return (temp - 32.0) * (5.0 / 9.0);
}

double enterTemp() {
    double temp;

    std::cout << "Type the temperature: ";

    if (!(std::cin >> temp)) {
        std::cerr << "Invalid! Enter a valid number.\n";
        std::exit(1);
    }

    return temp;
}

int main() {
    char unit;

    std::cout << "Convert from Celsius (C) or Fahrenheit (F): ";

    if (!(std::cin >> unit)) {
        std::cerr << "Invalid! Enter a correct conversion unit.\n";
        return 1;
    }

    if (unit != 'C' && unit != 'c' &&
        unit != 'F' && unit != 'f') {
        std::cerr << "Invalid entry! Enter C or F.\n";
        return 1;
    }

    double temperature = enterTemp();

    if (unit == 'C' || unit == 'c') {
        std::cout << "Temperature is: "
                  << celsiusToFahrenheit(temperature)
                  << " deg F\n";
    } else {
        std::cout << "Temperature is: "
                  << fahrenheitToCelsius(temperature)
                  << " deg C\n";
    }

    return 0;
}
