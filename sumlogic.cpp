#include "sumlogic.h"

SumLogic::SumLogic() : m_result(0) {}

void SumLogic::add(int a, int b)
{
    m_result = a + b;
    emit resultChanged();
}

int SumLogic::result() const
{
    return m_result;
}
