//Подключаем библиотеки: #include
#include <algorithm> //нужна для использования функции std::max
#include <cmath> //тригонометрия: (std::tan, std::acos) и возведению в степень (std::pow)
#include <iomanip> //настройки количества знаков после запятой),  std::setprecision(6)
#include <iostream>

int main() {
    double x{}, y{};
    std::cout << "Enter x and y: "; //character output - вывод пользователЮ
    std::cin >> x >> y; //character input - ввод пользователЯ
    //double = float
    double pi = std::acos(-1.0); //число Пи через арккосинус
    double R = 1.0 / std::tan((pi / 4.0) * x);
    double S = std::pow(y, 0.25) * std::pow(2.0, 1.0 / y); //pow переводит переменную y, 0.25 в степень
    //C- ма
    double C = std::max(R, S); //max выбирает большее из R,S

    std::cout << std::fixed << std::setprecision(6)
              << "R = " << R << "\nS = " << S << "\nC = " << C << '\n'; // \n - перевод строки
    return 0;
}
