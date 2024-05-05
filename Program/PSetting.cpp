#include "Header_PS.h"
class PSetting
{
private:
    int day; 
    int month; 
    int year; 
public: 
    void message();
    void setDate(int date_day, int date_month, int date_year);
    void getDate();
}; 