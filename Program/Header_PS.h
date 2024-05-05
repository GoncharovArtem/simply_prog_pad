#ifndef PCH_H
#define PCH_H

// TODO: add headers that you want to pre-compile here
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>  // этот файл делает доступными инженерные функции  
#include <iomanip>   // дл€ манипул€торов вывода setw(), setprecision()
#include <Windows.h>
#include <conio.h>
#include <sstream>   // дл€ работы со строковым потоком вывода
#include <vector>


#include <cstring>
#include <fstream>

using namespace std;

// объ€вление символической константы - кодовой страницы
#define CODE_PAGE 1251



// команда очистки консоли
#define CLEAR "cls"

#endif //PCH_H
