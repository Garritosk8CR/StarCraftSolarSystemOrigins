/********************************************************************************
** Form generated from reading UI file 'invasion.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVASION_H
#define UI_INVASION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_invasion
{
public:
    QFrame *frame;
    QPushButton *btnInvadir;
    QPushButton *btnCancelar;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *invasion)
    {
        if (invasion->objectName().isEmpty())
            invasion->setObjectName(QStringLiteral("invasion"));
        invasion->resize(355, 180);
        frame = new QFrame(invasion);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 361, 181));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnInvadir = new QPushButton(frame);
        btnInvadir->setObjectName(QStringLiteral("btnInvadir"));
        btnInvadir->setGeometry(QRect(40, 120, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Starcraft"));
        font.setPointSize(10);
        btnInvadir->setFont(font);
        btnInvadir->setStyleSheet(QLatin1String("background-color: rgb(203, 119, 5);\n"
"color: rgb(255, 255, 255);"));
        btnCancelar = new QPushButton(frame);
        btnCancelar->setObjectName(QStringLiteral("btnCancelar"));
        btnCancelar->setGeometry(QRect(200, 120, 121, 31));
        btnCancelar->setFont(font);
        btnCancelar->setStyleSheet(QLatin1String("background-color: rgb(203, 119, 5);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 291, 16));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 59, 281, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Starcraft"));
        font1.setPointSize(11);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(invasion);

        QMetaObject::connectSlotsByName(invasion);
    } // setupUi

    void retranslateUi(QWidget *invasion)
    {
        invasion->setWindowTitle(QApplication::translate("invasion", "invasion", Q_NULLPTR));
        btnInvadir->setText(QApplication::translate("invasion", "Invadir", Q_NULLPTR));
        btnCancelar->setText(QApplication::translate("invasion", "Cancelar", Q_NULLPTR));
        label->setText(QApplication::translate("invasion", "Cantidad de Unidades", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class invasion: public Ui_invasion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVASION_H
