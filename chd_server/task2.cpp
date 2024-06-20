#include "task2.h"
#include <QRandomGenerator>
#include <QString>
#include <vector>
#include <QVariantMap>

int randomInt(int min, int max) {
    return QRandomGenerator::global()->bounded(min, max + 1);
}

std::vector<int> equation() {
    std::vector<int> x(5);

    for (int i = 0; i < 5; ++i)
    {
        x[i] = randomInt(-5, 5);
    }

    return x;
}

double globalmin(const std::vector<int>&x)
{
    double alpha = 10, v=0, grama = 0.9, eta = 0.00001;
    for(int i=0;i<100000;i++)
    {
        v = grama*v + eta * (4 * x[0] * alpha * alpha * alpha + 3 * x[1] * alpha * alpha + 2 * x[2] * alpha + x[3]);
        alpha = alpha - v;
    }
    return alpha;
}


QVariantMap Findtheminimumpoint() {
    QVariantMap task;

    auto x = equation();

    double det = globalmin(x);

    task["text"] = QString("Найдите точку минимума функции, используя метод градиентный спуск: %1x^4+%2x^3+%3x^2+%4x+%5=0").arg(x[0]).arg(x[1]).arg(x[2]).arg(x[3]).arg(x[4]);
    task["answer"] = QString("%1").arg(det);

    return task;
}
