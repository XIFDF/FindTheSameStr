#include "FindTheSameStr.h"

FindTheSameStr::FindTheSameStr(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    
    connect(ui.listWidget, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(selectToView()));
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(startToFind()));
}

void FindTheSameStr::startToFind()
{
    textA = ui.textEdit->toPlainText();
    textB = ui.textEdit_2->toPlainText();
    sameStrMinLength = ui.spinBox->text().toLong();

    sameStrPoints.clear();
    result.clear();
    findSameStr(textA, textB);
    refreshListWidgets();
}

void FindTheSameStr::findSameStr(const QString & str1, const QString & str2)
{
    long sameStrLength = 0;
    long str1Index = 0;
    long str2Index = 0;
    long str1Length = str1.length();
    long str2Length = str2.length();
    
    for (long i = 1 - str1Length; i < str2Length; i++)
    {
        sameStrLength = 0;
        str1Index = i < 0 ? -i : 0;
        str2Index = i < 0 ? 0 : i;

        for (; (str1Index < str1Length) && (str2Index < str2Length); str1Index++, str2Index++)
        {
            if (str1.at(str1Index) == str2.at(str2Index))
            {
                sameStrLength++;
            }
            else
            {
                sameStrLength = 0;
            }
            if (sameStrLength >= sameStrMinLength)
            {
                std::vector<int> sameStrPoint = { str1Index, str2Index, sameStrLength };
                sameStrPoints.push_back(sameStrPoint);
            }
        }
    }
    
    long tmpLength = 0;
    for (auto i : sameStrPoints)
    {
        tmpLength = i.at(2);
        result.push_back(str1.mid(i.at(0) - tmpLength + 1, tmpLength));
    }
    std::set<QString> st(result.begin(), result.end());
    result.assign(st.begin(), st.end());
}

void FindTheSameStr::refreshListWidgets()
{
    ui.listWidget->clear();

    for (auto i : result)
    {
        ui.listWidget->addItem(i);
    }
}

void FindTheSameStr::selectToView()
{
    long rowNo = ui.listWidget->currentRow();
    ui.textEdit->moveCursor(QTextCursor::End, QTextCursor::MoveAnchor);
    ui.textEdit_2->moveCursor(QTextCursor::End, QTextCursor::MoveAnchor);

    QPalette palA = ui.textEdit->palette();
    QPalette palB = ui.textEdit_2->palette();

    ui.textEdit->find(result.at(rowNo), QTextDocument::FindBackward);
    palA.setColor(QPalette::Highlight, palA.color(QPalette::Active, QPalette::Highlight));
    ui.textEdit->setPalette(palA);

    ui.textEdit_2->find(result.at(rowNo), QTextDocument::FindBackward);
    palB.setColor(QPalette::Highlight, palB.color(QPalette::Active, QPalette::Highlight));
    ui.textEdit_2->setPalette(palB);
    
}
