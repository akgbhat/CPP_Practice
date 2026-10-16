#include <iostream>
#include <string>

double temp;

double convertFahrenheit(temp){
    return ((9.0*temp)/5.0)+32.0;
}
double convertCelsius(temp){
    return  temp
}

int main(){
    std::string tempConvert;

    std::cout << "Type in the temperature you want to convert: Celsius (C) or Fahrenheit (F) - ";
    std::cin >> tempConvert;

    if (tempConvert=="C"){
        double tempFahrenheit, tempCelsius;
        std::cout << "\nType in the temperature in Celsius: ";
        std:: cin >> tempCelsius;
        tempFahrenheit = ((9.0*tempCelsius)/5.0)+32.0;
        std::cout << "\nTemperature in Fahrenheit is: " << tempFahrenheit << "\n";
  }


    return 0;
}