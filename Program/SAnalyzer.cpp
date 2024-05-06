#include "Header_SA.h"

class SAnalyzer
{
private:
    // Строка подвергающаяся проверке семантики
    string incoming_to_analyze;
    // Проверяемая фраза
    string checking_str;
public: 
    // Реализация отклика для пользователя о результатах проверки
    void analyzeMessage();
    // Установка проверяемой фразы из входящей строки
    void setChecking(string inc_s);
    // Получение проверяемой фразы
    string getChecking();
};