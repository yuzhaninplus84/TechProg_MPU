#include "task1.h"
#include<iostream>
#include <QRandomGenerator>
#include <QString>
#include <vector>
#include <QVariantMap>
#define Number 4
int RandomInt1(int min, int max) {
    return QRandomGenerator::global()->bounded(min, max + 1);
}

std::vector<int> rand_x() {
    std::vector<int> x(Number);
    //x[0]=1; x[1]=2;x[2]=3;x[3]=4;
    for (int i = 0; i < Number; ++i)
    {
        x[i] = RandomInt1(1,9);
    }

    return x;
}

std::vector<int> rand_y() {
    std::vector<int> y(Number);
    //y[0]=2;y[1]=4;y[2]=8;y[3]=16;
    for (int i = 0; i < Number; ++i)
    {
        y[i] = RandomInt1(1,9);
    }

    return y;
}

std::vector<int> assign_a(const std::vector<int>&y) {
    std::vector<int> a(Number);
    for (int i = 0; i < Number; ++i)
    {
        a[i] = y[i];
    }

    return a;
}

std::vector<int> assign_h(std::vector<int>&x) {
    std::vector<int> h(Number);
    for (int i = 0; i < Number - 1; ++i)
    {
        h[i] = x[i + 1] - x[i];
    }
    return h;
}

std::vector<std::vector<double>> matrix_A(std::vector<int>&h) {
    std::vector<std::vector<double>> A(Number, std::vector<double>(Number));
    for (int i = 0; i < Number; i++)
    {
        for (int j = 0; j < Number; j++)
        {
            A[i][j] = 0;
        }
    }

    A[0][0] = 1; A[Number - 1][Number - 1] = 1;
    for (int i = 1; i < Number-1; i++)
    {
        A[i][i - 1] = h[i - 1];
        A[i][i] = 2 * (h[i] + h[i - 1]);
        A[i][i + 1] = h[i];
    }

    return A;
}

std::vector<std::vector<double>> matrix_B(std::vector<int>&y, std::vector<int>&h) {
    std::vector<std::vector<double>> B(Number, std::vector<double>(Number));
    B[0][0] = B[Number - 1][0] = 0;
    for(int i = 1; i < Number - 1;i++ )
    {
        B[i][0] = 3 * (y[i + 1] - y[i]) / h[i] - 3 * (y[i] - y[i - 1]) / h[i - 1];
    }

    return B;
}

double det(const std::vector<std::vector<double>>&a, int n)
{
    int i, j, k, dem = 0, kt;
    std::vector<double> b(Number);
    double h, kq = 1;
    auto A=a;
    for (i = 0; i < n - 1; i++)
    {
        if (A[i][i] == 0)
        {
            kt = 0;
            for (j = i + 1; j < n; j++)
            {
                if (A[i][j] != 0)
                {
                    for (k = 0; k < n; k++)
                    {
                        float t = A[k][i];
                        A[k][i] = A[k][j];
                        A[k][j] = t;
                    }
                    dem++; kt++;
                    break;
                }
            }
            if (kt == 0) return 0;
        }
        b[i] = A[i][i];
        for (j = 0; j < n; j++) A[i][j] /= b[i];
        for (j = i + 1; j < n; j++)
        {
            h = A[j][i];
            for (k = 0; k < n; k++) A[j][k] = A[j][k] - h * A[i][k];
        }
    }
    b[n - 1] = A[n - 1][n - 1];
    for (i = 0; i < n; i++) kq *= b[i];
    if (dem % 2 == 0) return kq;
    return -kq;
}

double con(const std::vector<std::vector<double>>&a, int n, int h, int c)
{
    std::vector<std::vector<double>> b(Number, std::vector<double>(Number));
    int i, j, x = -1, y;
    for (i = 0; i < n; i++)
    {
        if (i == h) continue;
        x++; y = -1;
        for (j = 0; j < n; j++)
        {
            if (j == c)continue;
            y++;
            b[x][y] = a[i][j];
        }
    }
    if ((h + c) % 2 == 0) return det(b, n - 1);
    return -det(b, n - 1);
}

std::vector<std::vector<double>> nghichdao(const std::vector<std::vector<double>>&a, int n)
{
    std::vector<std::vector<double>> b(Number, std::vector<double>(Number));
    auto c=a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = con(c, n, i, j);
        }
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            float t = b[i][j];
            b[i][j] = b[j][i];
            b[j][i] = t;
        }
    double k = det(c, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            b[i][j] /= k;
            c[i][j] = b[i][j];
        }
    return c;
}

/*std::vector<double> tichMaTran(const std::vector<std::vector<double>>&a, const std::vector<std::vector<double>>&b, int m, int n, int m1) {
    std::vector<std::vector<double>> c;
    std::vector<double> C;
    int i, j, k;
    for (i = 0; i < n; i++)
        for (j = 0; j < m1; j++) {
            double tt = 0;
            for (k = 0; k < m; k++)
            {
                tt = tt + (a[i][k] * b[k][j]);
            }
            c[i][j] = tt;
        }

    for (int i = 0; i < Number; i++)
    {
        C[i] = c[i][0] ;
    }
    return C;
}*/

std::vector<double> tichMaTran(const std::vector<std::vector<double>>&a, const std::vector<std::vector<double>>&b, int m, int n, int m1) {
    std::vector<std::vector<double>> c(Number, std::vector<double>(Number));
    std::vector<double> C(Number);
    int i, j, k;
    for (i = 0; i < n; i++)
        for (j = 0; j < m1; j++) {
            double tt = 0;
            for (k = 0; k < m; k++)
            {
                tt = tt + (a[i][k] * b[k][j]);
            }
            c[i][j] = tt;
        }

    for (i = 0; i < Number; i++)
    {
        C[i] = c[i][0] ;
    }
    return C;
}

std::vector<double> assign_b(std::vector<int>&y, std::vector<int>&h, std::vector<double>&c) {
    std::vector<double> b(Number);
    for (int i = 0; i < Number-1; i++)
    {
        b[i] = (y[i + 1] - y[i]) / h[i] - (c[i+1] + 2 * c[i]) * h[i] / 3;
    }

    return b;
}

std::vector<double> assign_d(std::vector<int>&h, std::vector<double>&c) {
    std::vector<double> d(Number);
    for (int i = 0; i < Number-1; i++)
    {
        d[i] = (c[i + 1] - c[i]) / 3 * h[i];
    }

    return d;
}

QString topic(std::vector<int>&x, std::vector<int>&y)
{
    QString Result;
    Result += "x  ";
    for(int i=0; i< Number; i++)
    {
        Result += QString::number(x[i]) + "  ";
    }
    Result += "\n";
    Result += "******************************************\n";
    Result += "y  ";
    for(int i=0; i< Number; i++)
    {
        Result += QString::number(y[i]) + "  ";
    }
    return Result;
}

QString Result(std::vector<int>&a, std::vector<double>&b, std::vector<double>&c, std::vector<double>&d)//
{
    QString str;
    //str += QString::number(a[0]) + " +" + QString::number(b[0]) + "x +" + QString::number(c[0]) + "x^2 +" + QString::number(d[0]) + "x^3=0\n";
    str += QString::number(a[0]);
    if(b[0]>=0)
    {
        str +=" +";
    }
    str += QString::number(b[0]) + "x";
    if(c[0]>=0)
    {
        str +=" +";
    }
    str += QString::number(c[0]) + "x^2";
    if(d[0]>=0)
    {
         str +=" +";
    }
    str += QString::number(d[0]) + "x^3=0\n";
    for (int i = 1; i < Number - 1; i++)
    {
        //str += QString::number(a[i]) + " + " + QString::number(b[i]) + "(x-" + i + ") + " + QString::number(c[i]) + "(x-" + i + ")^2 + " + QString::number(d[i]) + "(x-" + i + ")^3 = 0\n";
        str += QString::number(a[i]);
        if(b[i]>=0)
        {
            str +=" +";
        }
        str += QString::number(b[i]) + "(x-"+QString::number(i)+")";
        if(c[i]>=0)
        {
            str +=" +";
        }
        str += QString::number(c[i]) + "(x-"+QString::number(i)+")^2";
        if(d[i]>=0)
        {
            str +=" +";
        }
        str += QString::number(d[i])+ "(x-" +QString::number(i)+ ")^3=0\n";
    }
    return str;
}

/*QString MatrixToString1(const std::vector<std::vector<double>>& matrix) {
    QString result;
    for (const auto& row : matrix) {
        for (int value : row) {
            result += QString::number(value) + "\t";
        }
        result += "\n";
    }
    return result;
}

QString MatrixToString2(const std::vector<double>& matrix) {
    QString result;
    for (const auto& row : matrix) {
        for (int value : row) {
            result += QString::number(value) + "\t";
        }
        result += "\n";
    }
    return result;
}*/

QVariantMap get_result() {
    QVariantMap task;
    auto x=rand_x();
    auto y=rand_y();
    auto a= assign_a(y);
    auto h= assign_h(x);
    auto A= matrix_A(h);
    auto B= matrix_B(y, h);
    auto At= nghichdao(A, Number);
    auto c= tichMaTran(At, B, Number, Number, 1);
    auto b= assign_b(y, h, c);
    auto d= assign_d(h, c);

    task["text"] = QString("Постройте естественный сплайн для функции интерполяции:\n%1").arg(topic(x,y));
    task["answer"] = QString("%1").arg(Result(a,b,c,d));//MatrixToString1(A)

    return task;
}


