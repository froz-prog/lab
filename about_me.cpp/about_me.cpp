#include <iostream>

/*
 * Программа: О себе
 * Автор: [Ваше имя]
 * Дата: [Текущая дата]
 * Группа: [Ваша группа]
 */

int main() {
    system("chcp 65001>nul");
    // Заголовок
    std::cout << "================================" << std::endl;
    std::cout << "       Информация о студенте    " << std::endl;
    std::cout << "================================" << std::endl;

    // Личные данные
    std::cout << std::endl;
    std::cout << "Имя: Руслан" << std::endl;
    std::cout << "Группа: ИСПкр-252" << std::endl;
    std::cout << "Возраст: 19" << std::endl;

    // Увлечения
    std::cout << std::endl;
    std::cout << "Мои увлечения:" << std::endl;
    std::cout << "  1. Компьютерные игры" << std::endl;
    std::cout << "  2. Фильмы" << std::endl;
    std::cout << "  3. Общение с друзьями" << std::endl;

    // Мотивация
    std::cout << std::endl;
    std::cout << "Почему я изучаю программирование:" << std::endl;
    std::cout << "Для получения полезного навыка" << std::endl;

    std::cout << std::endl;
    std::cout << "================================" << std::endl;

    return 0;
}
