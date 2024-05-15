#include <QtTest>
#include <vector>
#include <QString>
#include "F:\TechProg_MPU\SERVER\tasks.h"
// add necessary includes here

class FuncForServer_Test : public QObject
{
    Q_OBJECT

public:
    FuncForServer_Test();
    ~FuncForServer_Test();

private slots:
    void test_case1();

};

FuncForServer_Test::FuncForServer_Test()
{

}

FuncForServer_Test::~FuncForServer_Test()
{

}

void FuncForServer_Test::test_case1()
{
    //QVERIFY(parsing("ewqeewqewq") =="error1");
    //QVERIFY2(parsing("ewqeewqewq") =="error", "parsing(\"ewqeewqewq\") !=error1");
    //std::vector<int> temp[5] = {0,0,0,0,0};
    //std::vector<std::vector<int>> matrix[5] = {temp,temp,temp,temp,temp};
    QString res = matrixToString(matrix);
    QVERIFY (res == "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0");
}

QTEST_APPLESS_MAIN(FuncForServer_Test)

#include "tst_funcforserver_test.moc"
