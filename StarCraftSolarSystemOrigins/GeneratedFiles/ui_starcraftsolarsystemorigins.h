/********************************************************************************
** Form generated from reading UI file 'starcraftsolarsystemorigins.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARCRAFTSOLARSYSTEMORIGINS_H
#define UI_STARCRAFTSOLARSYSTEMORIGINS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StarCraftSolarSystemOriginsClass
{
public:
    QLabel *img_jugador2;
    QLabel *container_titleJugador2;
    QLabel *bgImage;
    QPushButton *btn_iniciar;
    QLabel *img_jugador1;
    QLabel *container_jugador1;
    QLabel *container_jugador2;
    QLabel *lbl_titleJugador2;
    QLineEdit *txt_nomJugador2;
    QLabel *container_titleJugador1;
    QLabel *lbl_nomJugador2;
    QLineEdit *txt_nomJugador1;
    QLabel *lbl_nomJugador1;
    QLabel *lbl_titleJugador1;

    void setupUi(QWidget *StarCraftSolarSystemOriginsClass)
    {
        if (StarCraftSolarSystemOriginsClass->objectName().isEmpty())
            StarCraftSolarSystemOriginsClass->setObjectName(QStringLiteral("StarCraftSolarSystemOriginsClass"));
        StarCraftSolarSystemOriginsClass->resize(1249, 779);
        img_jugador2 = new QLabel(StarCraftSolarSystemOriginsClass);
        img_jugador2->setObjectName(QStringLiteral("img_jugador2"));
        img_jugador2->setGeometry(QRect(970, 320, 281, 351));
        img_jugador2->setStyleSheet(QStringLiteral("background-image: url(:/MainMenu/Resources/Tagal_Psycher.png);"));
        container_titleJugador2 = new QLabel(StarCraftSolarSystemOriginsClass);
        container_titleJugador2->setObjectName(QStringLiteral("container_titleJugador2"));
        container_titleJugador2->setGeometry(QRect(960, 130, 291, 71));
        container_titleJugador2->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: rgb(0, 230, 77);"));
        container_titleJugador2->setFrameShape(QFrame::StyledPanel);
        container_titleJugador2->setFrameShadow(QFrame::Sunken);
        bgImage = new QLabel(StarCraftSolarSystemOriginsClass);
        bgImage->setObjectName(QStringLiteral("bgImage"));
        bgImage->setGeometry(QRect(0, 0, 1251, 781));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        bgImage->setFont(font);
        bgImage->setStyleSheet(QStringLiteral("background-image: url(:/MainMenu/Resources/starcraft_bg.jpg);"));
        btn_iniciar = new QPushButton(StarCraftSolarSystemOriginsClass);
        btn_iniciar->setObjectName(QStringLiteral("btn_iniciar"));
        btn_iniciar->setGeometry(QRect(550, 600, 151, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Starcraft"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferAntialias);
        btn_iniciar->setFont(font1);
        btn_iniciar->setStyleSheet(QLatin1String("border-style: outset;\n"
"border-width: 1px;\n"
"border-color: rgb(0, 121, 205);\n"
"color: rgb(233, 254, 254);\n"
"background-color: rgb(7, 92, 182);"));
        btn_iniciar->setFlat(true);
        img_jugador1 = new QLabel(StarCraftSolarSystemOriginsClass);
        img_jugador1->setObjectName(QStringLiteral("img_jugador1"));
        img_jugador1->setGeometry(QRect(0, 340, 231, 321));
        img_jugador1->setStyleSheet(QStringLiteral("background-image: url(:/MainMenu/Resources/warrior.png);"));
        container_jugador1 = new QLabel(StarCraftSolarSystemOriginsClass);
        container_jugador1->setObjectName(QStringLiteral("container_jugador1"));
        container_jugador1->setGeometry(QRect(0, 120, 281, 541));
        container_jugador1->setStyleSheet(QLatin1String("border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 0, 255);\n"
""));
        container_jugador1->setFrameShape(QFrame::StyledPanel);
        container_jugador1->setFrameShadow(QFrame::Sunken);
        container_jugador2 = new QLabel(StarCraftSolarSystemOriginsClass);
        container_jugador2->setObjectName(QStringLiteral("container_jugador2"));
        container_jugador2->setGeometry(QRect(960, 130, 291, 541));
        container_jugador2->setStyleSheet(QLatin1String("border-style: outset;\n"
"border-width: 2px;\n"
"border-color: rgb(0, 230, 77);"));
        container_jugador2->setFrameShape(QFrame::StyledPanel);
        container_jugador2->setFrameShadow(QFrame::Sunken);
        lbl_titleJugador2 = new QLabel(StarCraftSolarSystemOriginsClass);
        lbl_titleJugador2->setObjectName(QStringLiteral("lbl_titleJugador2"));
        lbl_titleJugador2->setGeometry(QRect(1020, 140, 211, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Starcraft"));
        font2.setPointSize(15);
        lbl_titleJugador2->setFont(font2);
        lbl_titleJugador2->setStyleSheet(QStringLiteral("color: rgb(0, 230, 77);"));
        txt_nomJugador2 = new QLineEdit(StarCraftSolarSystemOriginsClass);
        txt_nomJugador2->setObjectName(QStringLiteral("txt_nomJugador2"));
        txt_nomJugador2->setGeometry(QRect(980, 270, 251, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Starcraft"));
        font3.setPointSize(12);
        txt_nomJugador2->setFont(font3);
        txt_nomJugador2->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: rgb(233, 254, 254);\n"
"border-style: outset;\n"
"border-bottom-width: 2px;\n"
"border-color: rgb(0, 230, 77);"));
        txt_nomJugador2->setFrame(true);
        txt_nomJugador2->setReadOnly(false);
        container_titleJugador1 = new QLabel(StarCraftSolarSystemOriginsClass);
        container_titleJugador1->setObjectName(QStringLiteral("container_titleJugador1"));
        container_titleJugador1->setGeometry(QRect(0, 120, 281, 71));
        container_titleJugador1->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);"));
        container_titleJugador1->setFrameShape(QFrame::StyledPanel);
        container_titleJugador1->setFrameShadow(QFrame::Sunken);
        lbl_nomJugador2 = new QLabel(StarCraftSolarSystemOriginsClass);
        lbl_nomJugador2->setObjectName(QStringLiteral("lbl_nomJugador2"));
        lbl_nomJugador2->setGeometry(QRect(980, 220, 191, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Starcraft"));
        font4.setPointSize(14);
        lbl_nomJugador2->setFont(font4);
        lbl_nomJugador2->setStyleSheet(QStringLiteral("color: rgb(233, 254, 254);"));
        txt_nomJugador1 = new QLineEdit(StarCraftSolarSystemOriginsClass);
        txt_nomJugador1->setObjectName(QStringLiteral("txt_nomJugador1"));
        txt_nomJugador1->setGeometry(QRect(20, 260, 241, 41));
        txt_nomJugador1->setFont(font3);
        txt_nomJugador1->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: rgb(233, 254, 254);\n"
"border-style: outset;\n"
"border-bottom-width: 2px;\n"
"border-color: rgb(0, 0, 255);"));
        txt_nomJugador1->setFrame(true);
        txt_nomJugador1->setReadOnly(false);
        lbl_nomJugador1 = new QLabel(StarCraftSolarSystemOriginsClass);
        lbl_nomJugador1->setObjectName(QStringLiteral("lbl_nomJugador1"));
        lbl_nomJugador1->setGeometry(QRect(20, 210, 191, 51));
        lbl_nomJugador1->setFont(font4);
        lbl_nomJugador1->setStyleSheet(QStringLiteral("color: rgb(233, 254, 254);"));
        lbl_titleJugador1 = new QLabel(StarCraftSolarSystemOriginsClass);
        lbl_titleJugador1->setObjectName(QStringLiteral("lbl_titleJugador1"));
        lbl_titleJugador1->setGeometry(QRect(40, 130, 211, 51));
        lbl_titleJugador1->setFont(font2);
        lbl_titleJugador1->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));
        bgImage->raise();
        btn_iniciar->raise();
        img_jugador1->raise();
        container_jugador1->raise();
        container_jugador2->raise();
        txt_nomJugador2->raise();
        container_titleJugador1->raise();
        lbl_nomJugador2->raise();
        txt_nomJugador1->raise();
        lbl_nomJugador1->raise();
        lbl_titleJugador1->raise();
        img_jugador2->raise();
        container_titleJugador2->raise();
        lbl_titleJugador2->raise();

        retranslateUi(StarCraftSolarSystemOriginsClass);

        QMetaObject::connectSlotsByName(StarCraftSolarSystemOriginsClass);
    } // setupUi

    void retranslateUi(QWidget *StarCraftSolarSystemOriginsClass)
    {
        StarCraftSolarSystemOriginsClass->setWindowTitle(QApplication::translate("StarCraftSolarSystemOriginsClass", "StarCraftSolarSystemOrigins", Q_NULLPTR));
        img_jugador2->setText(QString());
        container_titleJugador2->setText(QString());
        btn_iniciar->setText(QApplication::translate("StarCraftSolarSystemOriginsClass", "Iniciar", Q_NULLPTR));
        img_jugador1->setText(QString());
        container_jugador1->setText(QString());
        container_jugador2->setText(QString());
        lbl_titleJugador2->setText(QApplication::translate("StarCraftSolarSystemOriginsClass", "Jugador  2", Q_NULLPTR));
        txt_nomJugador2->setInputMask(QString());
        txt_nomJugador2->setText(QString());
        txt_nomJugador2->setPlaceholderText(QString());
        container_titleJugador1->setText(QString());
        lbl_nomJugador2->setText(QApplication::translate("StarCraftSolarSystemOriginsClass", "Nombre", Q_NULLPTR));
        txt_nomJugador1->setInputMask(QString());
        txt_nomJugador1->setText(QString());
        txt_nomJugador1->setPlaceholderText(QString());
        lbl_nomJugador1->setText(QApplication::translate("StarCraftSolarSystemOriginsClass", "Nombre", Q_NULLPTR));
        lbl_titleJugador1->setText(QApplication::translate("StarCraftSolarSystemOriginsClass", "Jugador  1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StarCraftSolarSystemOriginsClass: public Ui_StarCraftSolarSystemOriginsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARCRAFTSOLARSYSTEMORIGINS_H
