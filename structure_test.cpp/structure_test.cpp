//Эксперимент 1

/*int main() {
    std::cout << "Hello";
    return 0;
   
}
*/


//Результат: Возникает ошибка сборки

//Эксперимент 2

/*#include <iostream>

int start() {
    std::cout << "Hello";
    return 0;
}
*/

//Результат: Программа компилируется, но не запускается

//Эксперимент 3
/*#include <iostream>

int main() {
    std::cout << "Hello";
}
*/

//Результат: Программа работает, ошибок не возникает, потому что компилятор добавляет return автоматически

//Эксперимент 4

/*#include <iostream>

int main() {
    cout << "Hello";
    return 0;
}
*/

//Результат: Возникает ошибка, компилятор не знает откуда взять cout
/*Cпособы решения : добавить std::cout или #include <iostream>
*                                          using namespace std;*/