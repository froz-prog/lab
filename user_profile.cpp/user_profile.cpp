#include <iostream>
#include <string>

int main() {
    system("chcp 65001>nul");
    // === ОБЪЯВЛЕНИЕ ПЕРЕМЕННЫХ ===

    // Личные данные (заполнить собственными данными)
    std::string firstName = "Руслан";     // Имя
    std::string lastName = "Муругов";      // Фамилия
    int age = 19;                    // Возраст (целое число)
    char gender = 'M';              // Пол ('M' или 'F')
    double height = 1.82;            // Рост в метрах
    double weight = 66.3;            // Вес в килограммах

    // Учебные данные
    std::string group = "ИСПкр-252";         // Номер группы
    int course = 2;                 // Курс (1-4)
    double averageGrade = 5.0;      // Средний балл
    bool hasScholarship = true;    // Наличие стипендии

    // Контактные данные
    std::string email = "murugovruslan19@gmail.com";         // Адрес электронной почты
    std::string phone = "79178336593";         // Номер телефона

    // === ВЫВОД ИНФОРМАЦИИ ===

    std::cout << "==============================" << std::endl;
    std::cout << "     ПРОФИЛЬ ПОЛЬЗОВАТЕЛЯ     " << std::endl;
    std::cout << "==============================" << std::endl;

    std::cout << std::endl;
    std::cout << "--- Личные данные ---" << std::endl;
    std::cout << "Имя: " << firstName << std::endl;
    std::cout << "Фамилия: " << lastName << std::endl;
    std::cout << "Возраст: " << age << " лет" << std::endl;
    std::cout << "Пол: " << gender << std::endl;
    std::cout << "Рост: " << height << " м" << std::endl;
    std::cout << "Вес: " << weight << " кг" << std::endl;

    std::cout << std::endl;
    std::cout << "--- Учебные данные ---" << std::endl;
    std::cout << "Группа: " << group << std::endl;
    std::cout << "Курс: " << course << std::endl;
    std::cout << "Средний балл: " << averageGrade << std::endl;
    std::cout << "Стипендия: " << (hasScholarship ? "Да" : "Нет") << std::endl;

    std::cout << std::endl;
    std::cout << "--- Контактные данные ---" << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Телефон: " << phone << std::endl;

    std::cout << std::endl;
    std::cout << "==============================" << std::endl;

    return 0;
}

/*Результат
==============================
     ПРОФИЛЬ ПОЛЬЗОВАТЕЛЯ
==============================

--- Личные данные ---
Имя: Руслан
Фамилия: Муругов
Возраст: 19 лет
Пол: M
Рост: 1.82 м
Вес: 66.3 кг

--- Учебные данные ---
Группа: ИСПкр-252
Курс: 2
Средний балл: 5
Стипендия: Да

--- Контактные данные ---
Email: murugovruslan19@gmail.com
Телефон: 79178336593

==============================*/