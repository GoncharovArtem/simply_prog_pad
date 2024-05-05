#include "Header_CP.h"

class CEditor {
private:
    int x1;
    int x2;
    int x3;

public:
    int GetX1();
    int GetX2();
    int GetX3();
    int GetAllData();
    void SetX1(double x1);
    void SetX2(double x2);
    void SetX3(double x3);
    void SetAllData(double x1, double x2, double x3);
};