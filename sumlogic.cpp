#include "sumlogic.h"

SumLogic::SumLogic() : m_result(0) {}

double SumLogic::result()
{
    return round(m_result * 10000) / 10000;
}
void SumLogic::add(double a, double b)
{
    m_result = round((a + b) * 10000) / 10000;
    emit resultChanged();
}
void SumLogic::subtract(double a, double b)
{
    m_result = round((a - b) * 10000) / 10000;
    emit resultChanged();
}

void SumLogic::multiply(double a, double b)
{
    m_result = round((a * b) * 10000) / 10000;
    emit resultChanged();
}

void SumLogic::divide(double a, double b)
{
    m_result = round((a / b) * 10000) / 10000;
    emit resultChanged();
}
