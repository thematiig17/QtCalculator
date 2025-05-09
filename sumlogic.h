#ifndef SUMLOGIC_H
#define SUMLOGIC_H

#include <QObject>

class SumLogic : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int result READ result NOTIFY resultChanged)

public:
    SumLogic();

    Q_INVOKABLE void add(int a, int b);
    int result() const;

signals:
    void resultChanged();

private:
    int m_result;
};

#endif // SUMLOGIC_H
