// Excercise1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator
{
public:
    double num1;
    double num2;
    double result;

    double add()
    {
        return num1 + num2;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double subtract_1_2()
    {
        return num1 - num2;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }
    bool set_num1()
    {
        if(num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
            
        else
            return false;
    }
    bool set_num2()
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }

        else
            return false;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    Calculator calc;
    while (true)
    {
        double input_num1, input_num2;

        std::cout << "Введите num1:\n";
        std::cin >> input_num1;
        if (!calc.set_num1(input_num1)) 
            {
                std::cout << "Неверный ввод! num1 не может быть 0.\n";
                continue;
            }
        std::cout << "Введите num2:\n";
        std::cin >> input_num2;
        if (!calc.set_num2(input_num2)) 
            {
                std::cout << "Неверный ввод! num2 не может быть 0.\n";
                continue;
            }

  
        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;


    }
    return 0;

}

