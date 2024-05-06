#include "SModule.h"

class SModule
{
    size_t C;
    vector<int> data;
public:
    M(std::size_t R, std::size_t C) : C(C), data(R* C) {}
    int z_operator()(std::size_t r, std::size_t c) const;
    int& z_operator()(std::size_t r, std::size_t c);
};