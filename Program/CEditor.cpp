#include "Header_CP.h"

class CEditor {
private:
    // �������� ������ ����
    int x1;
    // �������� ������ ����
    int x2;
    // �������� �������������
    int x3;

public:
    // ��������� ��������� 1
    int GetX1();
    // ��������� ��������� 2
    int GetX2();
    // ��������� ��������� 3
    int GetX3();
    // ��������� ����� ���������� 1, 2, 3
    int GetAllData();
    // ��������� ��������� 1
    void SetX1(double x1);
    // ��������� ������� ����������
    void SetAllData(double x1, double x2, double x3);
};