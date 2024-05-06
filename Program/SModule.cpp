#include "SModule.h"

class SModule
{
    // Номер загружаемого модуля
    size_t C;
    // Номера загруженных модулей
    vector<int> data;
public:
    // Конструктор класса
    M(std::size_t R, std::size_t C) : C(C), data(R* C) {}
    // Процедура поиска модуля перед загрузкой
    int z_operator()(std::size_t r, std::size_t c) const;
    // Дружественная функция поиска модуля перед загрузкой
    int& z_operator()(std::size_t r, std::size_t c);
};