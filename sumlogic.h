#ifndef SUMLOGIC_H
#define SUMLOGIC_H

#include <QObject>

class SumLogic : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double result READ result NOTIFY resultChanged);

public:
    SumLogic();
    Q_INVOKABLE void add(double a, double b);
    Q_INVOKABLE void subtract(double a, double b);
    Q_INVOKABLE void multiply(double a, double b);
    Q_INVOKABLE void divide(double a, double b);

    double result();

signals:
    void resultChanged();

private:
    double m_result;
};





#endif // SUMLOGIC_H
