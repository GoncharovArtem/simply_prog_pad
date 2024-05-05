#include "Header_PS.h"
class PSetting
{
private:
    // День - текущая дата в системе
    int day;
    // Месяц - текущая дата в системе
    int month; 
    // Год - текущая дата в системе
    int year; 
public: 
    // Сообщение пользователю о корректной синхронизации
    void message();
    // Установка текущей даты
    void setDate(int date_day, int date_month, int date_year);
    // Получение текущей даты
    void getDate();
}; 