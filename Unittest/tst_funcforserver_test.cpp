#include <QtTest>
#include "F:\TechProg_MPU\SERVER_FULL\task1.h"
#include "F:\TechProg_MPU\SERVER_FULL\task2.h"
#include "F:\TechProg_MPU\SERVER_FULL\task3.h"
#include "F:\TechProg_MPU\SERVER_FULL\task4.h"

// add necessary includes here

class FuncForServer_Test : public QObject
{
    Q_OBJECT

public:
    FuncForServer_Test();
    ~FuncForServer_Test();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case4();

};

FuncForServer_Test::FuncForServer_Test()
{

}

FuncForServer_Test::~FuncForServer_Test()
{

}

void FuncForServer_Test::test_case1()
{
    std::vector<int> x = {7,1,-2,0,-1};
    double res1 = globalmin(x);
    double value1 = 0.3282;
    QVERIFY2 ( res1 == value1  ,"task_1_false");
}

void FuncForServer_Test::test_case2()
{
    std::vector<int> x = {1,7,9};
    std::vector<int> y = {9,2,3};
    QString res2 = test_result(x,y);
    QString value2 ="9-1.5x +0x^2 +0.014x^3=0\n2-0.333(x-1) +0.25(x-1)^2-0.042(x-1)^3=0\n";
    QVERIFY2 (res2 == value2,"task_2_false");
}

void FuncForServer_Test::test_case3(){
    QString pass = "diem";
    QString res3 = test_sha_256(pass);
    QString value3 = "154E62FE8CD1750B5694CCC78FA52DDF70C720A612B2B067C6C924D1AF6B0065";
     QVERIFY2 (res3 == value3,"task_3_false");
}

void FuncForServer_Test::test_case4(){
    QString text = "dwgwziyqgp";
    QString key = "dwgw";
    QString res4 = vigenere( key, text);
    QString value4 = "grmrbddljk";
    QVERIFY2 (res4 == value4,"task_4_false");
}

QTEST_APPLESS_MAIN(FuncForServer_Test)

#include "tst_funcforserver_test.moc"
