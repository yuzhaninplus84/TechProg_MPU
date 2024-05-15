#ifndef TASKS_H
#define TASKS_H
#include <QVariant>
#include <QRandomGenerator>
#include <QtMath>
#include <vector>
#include <QString>

QVariantMap generateMatrixTask();
QString matrixToString(const std::vector<std::vector<int>>& matrix);

#endif //TASKS_H
