/********************************************************************************
** Form generated from reading UI file 'recursoplaneta.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECURSOPLANETA_H
#define UI_RECURSOPLANETA_H

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

class Ui_recursoPlaneta
{
public:
    QFrame *frame;
    QLabel *lblProduccion;
    QLabel *lblNumProduc;
    QLabel *lblUniDefensa;
    QLineEdit *txtCantUnidades;
    QPushButton *btnCancelar;
    QPushButton *btnEditar;
    QLabel *lblNumDefensa;

    void setupUi(QWidget *recursoPlaneta)
    {
        if (recursoPlaneta->objectName().isEmpty())
            recursoPlaneta->setObjectName(QStringLiteral("recursoPlaneta"));
        recursoPlaneta->resize(381, 223);
        frame = new QFrame(recursoPlaneta);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 381, 231));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lblProduccion = new QLabel(frame);
        lblProduccion->setObjectName(QStringLiteral("lblProduccion"));
        lblProduccion->setGeometry(QRect(20, 20, 161, 31));
        QFont font;
        font.setFamily(QStringLiteral("Starcraft"));
        font.setPointSize(10);
        lblProduccion->setFont(font);
        lblProduccion->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lblNumProduc = new QLabel(frame);
        lblNumProduc->setObjectName(QStringLiteral("lblNumProduc"));
        lblNumProduc->setGeometry(QRect(190, 20, 51, 31));
        lblNumProduc->setFont(font);
        lblNumProduc->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lblUniDefensa = new QLabel(frame);
        lblUniDefensa->setObjectName(QStringLiteral("lblUniDefensa"));
        lblUniDefensa->setGeometry(QRect(20, 60, 271, 31));
        lblUniDefensa->setFont(font);
        lblUniDefensa->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        txtCantUnidades = new QLineEdit(frame);
        txtCantUnidades->setObjectName(QStringLiteral("txtCantUnidades"));
        txtCantUnidades->setGeometry(QRect(60, 110, 261, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Starcraft"));
        font1.setPointSize(11);
        txtCantUnidades->setFont(font1);
        txtCantUnidades->setStyleSheet(QLatin1String("backgroud-color: white;\n"
"color: rgb(255, 255, 255);"));
        btnCancelar = new QPushButton(frame);
        btnCancelar->setObjectName(QStringLiteral("btnCancelar"));
        btnCancelar->setGeometry(QRect(200, 170, 121, 31));
        btnCancelar->setFont(font);
        btnCancelar->setStyleSheet(QLatin1String("background-color: rgb(203, 119, 5);\n"
"color: rgb(255, 255, 255);"));
        btnEditar = new QPushButton(frame);
        btnEditar->setObjectName(QStringLiteral("btnEditar"));
        btnEditar->setGeometry(QRect(60, 170, 101, 31));
        btnEditar->setFont(font);
        btnEditar->setStyleSheet(QLatin1String("background-color: rgb(203, 119, 5);\n"
"color: rgb(255, 255, 255);"));
        lblNumDefensa = new QLabel(frame);
        lblNumDefensa->setObjectName(QStringLiteral("lblNumDefensa"));
        lblNumDefensa->setGeometry(QRect(300, 60, 51, 31));
        lblNumDefensa->setFont(font);
        lblNumDefensa->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(recursoPlaneta);

        QMetaObject::connectSlotsByName(recursoPlaneta);
    } // setupUi

    void retranslateUi(QWidget *recursoPlaneta)
    {
        recursoPlaneta->setWindowTitle(QApplication::translate("recursoPlaneta", "Recursos del planeta", Q_NULLPTR));
        lblProduccion->setText(QApplication::translate("recursoPlaneta", "Produccion:", Q_NULLPTR));
        lblNumProduc->setText(QApplication::translate("recursoPlaneta", "0", Q_NULLPTR));
        lblUniDefensa->setText(QApplication::translate("recursoPlaneta", "Unidades de defensa:", Q_NULLPTR));
        btnCancelar->setText(QApplication::translate("recursoPlaneta", "Cancelar", Q_NULLPTR));
        btnEditar->setText(QApplication::translate("recursoPlaneta", "Editar", Q_NULLPTR));
        lblNumDefensa->setText(QApplication::translate("recursoPlaneta", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class recursoPlaneta: public Ui_recursoPlaneta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECURSOPLANETA_H
