﻿// laba1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream> //подключаем библиотеки
#include <math.h> //подключаем библиотеки



int main() //наша основная функция
{
    unsigned int A; //объявляем переменную, в которую потом запишем число, которые мы переведем в двоичную систему

    printf("Vvodite vashe chislo \n"); //выводим просьбу ввести число
    scanf_s("%d", &A); // получаем целое число и записываем в переменную А

    unsigned int den = 2147483648; //объявляем переменную, равную 2^31 или 0x80000000

    for (int i = 0; i < 32; i++) //переводим из %d в %b, методом поразрядного деления на степень двойки. от 2^31 до 2^0 (1).
    {
        if (A / den) //проверяем делится ли число на den
        {
            printf("1");
            A -= den; //если да, то выводим один
        }
        else
            printf("0"); //если нет, то в выводе 0

        den /= 2; // делим деноминатор на 2
    }

    std::cout << "\n"; //строка не несет в себе какого-то особого смысла. сделано для красоты вывода

    return 0; //программа завершилась успешно
}