#include "Header_CP.h"

class CEditor {
private:
    // Параметр ширины окна
    int x1;
    // Параметр высоты окна
    int x2;
    // Параметр контрастности
    int x3;

public:
    // Получение параметра 1
    int GetX1();
    // Получение параметра 2
    int GetX2();
    // Получение параметра 3
    int GetX3();
    // Получение суммы параметров 1, 2, 3
    int GetAllData();
    // Установка параметра 1
    void SetX1(double x1);
    // Установка главных параметров
    void SetAllData(double x1, double x2, double x3);
};