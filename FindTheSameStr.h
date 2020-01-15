#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FindTheSameStr.h"
#include "qboxlayout.h"
#include <vector>
#include <set>
class FindTheSameStr : public QMainWindow
{
    Q_OBJECT

public:
    FindTheSameStr(QWidget *parent = Q_NULLPTR);

private:
    Ui::FindTheSameStrClass ui;

    QString textA;
    QString textB;
    long sameStrMinLength = 11;
    std::vector<std::vector<int> > sameStrPoints;
    std::vector<QString> result;

    void findSameStr(const QString &str1, const QString &str2);
    void refreshListWidgets();
private slots:
    void startToFind();
    void selectToView();
};
