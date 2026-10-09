#include <iostream>

int main() {
    system("chcp 65001>nul");
    // Константы
    const int CURRENT_YEAR = 2026;
    const int RETIREMENT_AGE = 65;
    const int ADULT_AGE = 18;
    const int DRIVING_AGE = 18;
    const int VOTING_AGE = 18;


    // Данные пользователя (указать собственный год рождения)
    int birthYear = 2007;

    // Вычисления
    int age = CURRENT_YEAR - birthYear;
    int yearsToRetirement = RETIREMENT_AGE - age;
    int ageInMonths = age * 12;
    bool isAdult = (age >= ADULT_AGE);
    bool canDrive = (age >= DRIVING_AGE);
    bool canVote = (age >= VOTING_AGE);

    // Вывод результатов
    std::cout << "=== КАЛЬКУЛЯТОР ВОЗРАСТА ===" << std::endl;
    std::cout << std::endl;

    std::cout << "Год рождения: " << birthYear << std::endl;
    std::cout << "Текущий год: " << CURRENT_YEAR << std::endl;
    std::cout << "Ваш возраст: " << age << " лет" << std::endl;
    std::cout << "Возраст в месяцах: " << ageInMonths << " месяцев" << std::endl;
    std::cout << std::endl;

    std::cout << "Совершеннолетний: " << (isAdult ? "Да" : "Нет") << std::endl;
    std::cout << "Может водить: " << (canDrive ? "Да" : "Нет") << std::endl;
    std::cout << "До пенсии: " << yearsToRetirement << " лет" << std::endl;
    std::cout << "Может голосовать: " << (isAdult ? "Да" : "Нет") << std::endl;

    // Информация об используемой памяти
    std::cout << std::endl;
    std::cout << "--- Используемая память ---" << std::endl;
    std::cout << "birthYear (int): " << sizeof(birthYear) << " байт" << std::endl;
    std::cout << "age (int): " << sizeof(age) << " байт" << std::endl;
    std::cout << "isAdult (bool): " << sizeof(isAdult) << " байт" << std::endl;

    return 0;
}
/*Результат
=== КАЛЬКУЛЯТОР ВОЗРАСТА ===

Год рождения: 2007
Текущий год: 2026
Ваш возраст: 19 лет
Возраст в месяцах: 228 месяцев

Совершеннолетний: Да
Может водить: Да
До пенсии: 46 лет
Может голосовать: Да

--- Используемая память ---
birthYear (int): 4 байт
age (int): 4 байт
isAdult (bool): 1 байт*/