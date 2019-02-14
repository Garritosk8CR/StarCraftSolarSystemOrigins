/********************************************************************************
** Form generated from reading UI file 'sistemasolar.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SISTEMASOLAR_H
#define UI_SISTEMASOLAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sistemaSolar
{
public:
    QFrame *frJuego;
    QLabel *lblTituloCantMovidas;
    QLabel *lblCantMovidas;
    QLabel *lblTurno;
    QLabel *lblUnidDisponibles;
    QLabel *lblConquistas;
    QLabel *lblTurnoJugador;
    QLabel *lblNumUnidDisponibles;
    QLabel *lblCantConquista;
    QPushButton *btnPlaneta1;
    QPushButton *btnPlaneta2;
    QPushButton *btnPlaneta3;
    QPushButton *btnPlaneta4;
    QPushButton *btnPlaneta9;
    QPushButton *btnPlaneta6;
    QPushButton *btnPlaneta7;
    QPushButton *btnPlaneta8;
    QPushButton *btnPlaneta5;
    QLabel *lblPlaneta1;
    QLabel *lblPlaneta3;
    QLabel *lblPlaneta5;
    QLabel *lblPlaneta6;
    QLabel *lblPlaneta7;
    QLabel *lblPlaneta4;
    QLabel *lblPlaneta2;
    QLabel *lblPlaneta8;
    QLabel *lblPlaneta9;
    QFrame *frame;

    void setupUi(QWidget *sistemaSolar)
    {
        if (sistemaSolar->objectName().isEmpty())
            sistemaSolar->setObjectName(QStringLiteral("sistemaSolar"));
        sistemaSolar->resize(1026, 630);
        frJuego = new QFrame(sistemaSolar);
        frJuego->setObjectName(QStringLiteral("frJuego"));
        frJuego->setGeometry(QRect(0, -10, 1031, 641));
        frJuego->setStyleSheet(QStringLiteral("background-image: url(:/Imagenes/patron-espacio.jpg);"));
        frJuego->setFrameShape(QFrame::StyledPanel);
        frJuego->setFrameShadow(QFrame::Raised);
        lblTituloCantMovidas = new QLabel(frJuego);
        lblTituloCantMovidas->setObjectName(QStringLiteral("lblTituloCantMovidas"));
        lblTituloCantMovidas->setGeometry(QRect(20, 20, 261, 31));
        QFont font;
        font.setFamily(QStringLiteral("Starcraft"));
        font.setPointSize(11);
        lblTituloCantMovidas->setFont(font);
        lblTituloCantMovidas->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lblCantMovidas = new QLabel(frJuego);
        lblCantMovidas->setObjectName(QStringLiteral("lblCantMovidas"));
        lblCantMovidas->setGeometry(QRect(290, 20, 31, 31));
        lblCantMovidas->setFont(font);
        lblCantMovidas->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"backgroud-color: transparent;"));
        lblTurno = new QLabel(frJuego);
        lblTurno->setObjectName(QStringLiteral("lblTurno"));
        lblTurno->setGeometry(QRect(680, 80, 81, 31));
        lblTurno->setFont(font);
        lblTurno->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"backgroud-color: transparent;"));
        lblUnidDisponibles = new QLabel(frJuego);
        lblUnidDisponibles->setObjectName(QStringLiteral("lblUnidDisponibles"));
        lblUnidDisponibles->setGeometry(QRect(680, 110, 281, 31));
        lblUnidDisponibles->setFont(font);
        lblUnidDisponibles->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(9, 43, 8);"));
        lblConquistas = new QLabel(frJuego);
        lblConquistas->setObjectName(QStringLiteral("lblConquistas"));
        lblConquistas->setGeometry(QRect(680, 140, 151, 31));
        lblConquistas->setFont(font);
        lblConquistas->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(9, 43, 8);"));
        lblTurnoJugador = new QLabel(frJuego);
        lblTurnoJugador->setObjectName(QStringLiteral("lblTurnoJugador"));
        lblTurnoJugador->setGeometry(QRect(780, 80, 171, 31));
        lblTurnoJugador->setFont(font);
        lblTurnoJugador->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"backgroud-color: transparent;"));
        lblTurnoJugador->setTextFormat(Qt::AutoText);
        lblNumUnidDisponibles = new QLabel(frJuego);
        lblNumUnidDisponibles->setObjectName(QStringLiteral("lblNumUnidDisponibles"));
        lblNumUnidDisponibles->setGeometry(QRect(990, 110, 31, 31));
        lblNumUnidDisponibles->setFont(font);
        lblNumUnidDisponibles->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"backgroud-color: transparent;"));
        lblCantConquista = new QLabel(frJuego);
        lblCantConquista->setObjectName(QStringLiteral("lblCantConquista"));
        lblCantConquista->setGeometry(QRect(840, 140, 31, 31));
        lblCantConquista->setFont(font);
        lblCantConquista->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(9, 43, 8);"));
        btnPlaneta1 = new QPushButton(frJuego);
        btnPlaneta1->setObjectName(QStringLiteral("btnPlaneta1"));
        btnPlaneta1->setGeometry(QRect(410, 90, 101, 101));
        btnPlaneta1->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"background-image: url(:/Imagenes/venus.png);\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        btnPlaneta2 = new QPushButton(frJuego);
        btnPlaneta2->setObjectName(QStringLiteral("btnPlaneta2"));
        btnPlaneta2->setGeometry(QRect(210, 150, 101, 101));
        btnPlaneta2->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"background-image: url(:/Imagenes/marte.png);\n"
"\n"
""));
        btnPlaneta3 = new QPushButton(frJuego);
        btnPlaneta3->setObjectName(QStringLiteral("btnPlaneta3"));
        btnPlaneta3->setGeometry(QRect(620, 230, 101, 101));
        btnPlaneta3->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"background-image: url(:/Imagenes/100px-TinyDuna.png);\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        btnPlaneta4 = new QPushButton(frJuego);
        btnPlaneta4->setObjectName(QStringLiteral("btnPlaneta4"));
        btnPlaneta4->setGeometry(QRect(430, 300, 101, 101));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        btnPlaneta4->setFont(font1);
        btnPlaneta4->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"background-image: url(:/Imagenes/100px-TinyEeloo.png);\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);\n"
""));
        btnPlaneta9 = new QPushButton(frJuego);
        btnPlaneta9->setObjectName(QStringLiteral("btnPlaneta9"));
        btnPlaneta9->setGeometry(QRect(220, 450, 101, 101));
        btnPlaneta9->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"background-image: url(:/Imagenes/100px-TinyKerbin.png);\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        btnPlaneta6 = new QPushButton(frJuego);
        btnPlaneta6->setObjectName(QStringLiteral("btnPlaneta6"));
        btnPlaneta6->setGeometry(QRect(850, 470, 101, 101));
        btnPlaneta6->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"background-image: url(:/Imagenes/holovanSM.png);\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        btnPlaneta7 = new QPushButton(frJuego);
        btnPlaneta7->setObjectName(QStringLiteral("btnPlaneta7"));
        btnPlaneta7->setGeometry(QRect(550, 470, 101, 101));
        btnPlaneta7->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"background-image: url(:/Imagenes/senegardeSM.png);\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        btnPlaneta8 = new QPushButton(frJuego);
        btnPlaneta8->setObjectName(QStringLiteral("btnPlaneta8"));
        btnPlaneta8->setGeometry(QRect(120, 300, 101, 101));
        btnPlaneta8->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"background-image: url(:/Imagenes/Veldin.png);\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        btnPlaneta5 = new QPushButton(frJuego);
        btnPlaneta5->setObjectName(QStringLiteral("btnPlaneta5"));
        btnPlaneta5->setGeometry(QRect(800, 290, 101, 101));
        btnPlaneta5->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"background-image: url(:/Imagenes/mercurio.png);\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        lblPlaneta1 = new QLabel(frJuego);
        lblPlaneta1->setObjectName(QStringLiteral("lblPlaneta1"));
        lblPlaneta1->setGeometry(QRect(410, 50, 131, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Starcraft"));
        font2.setPointSize(9);
        lblPlaneta1->setFont(font2);
        lblPlaneta1->setStyleSheet(QLatin1String("\n"
"color: rgb(0, 0, 255);"));
        lblPlaneta3 = new QLabel(frJuego);
        lblPlaneta3->setObjectName(QStringLiteral("lblPlaneta3"));
        lblPlaneta3->setGeometry(QRect(600, 200, 131, 21));
        lblPlaneta3->setFont(font2);
        lblPlaneta3->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"color: rgb(0, 0, 255);"));
        lblPlaneta5 = new QLabel(frJuego);
        lblPlaneta5->setObjectName(QStringLiteral("lblPlaneta5"));
        lblPlaneta5->setGeometry(QRect(800, 260, 131, 21));
        lblPlaneta5->setFont(font2);
        lblPlaneta5->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"color: rgb(0, 0, 255);"));
        lblPlaneta6 = new QLabel(frJuego);
        lblPlaneta6->setObjectName(QStringLiteral("lblPlaneta6"));
        lblPlaneta6->setGeometry(QRect(850, 430, 131, 21));
        lblPlaneta6->setFont(font2);
        lblPlaneta6->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"color: rgb(0, 0, 255);"));
        lblPlaneta7 = new QLabel(frJuego);
        lblPlaneta7->setObjectName(QStringLiteral("lblPlaneta7"));
        lblPlaneta7->setGeometry(QRect(550, 430, 131, 21));
        lblPlaneta7->setFont(font2);
        lblPlaneta7->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"color: rgb(0, 0, 255);"));
        lblPlaneta4 = new QLabel(frJuego);
        lblPlaneta4->setObjectName(QStringLiteral("lblPlaneta4"));
        lblPlaneta4->setGeometry(QRect(430, 270, 131, 21));
        lblPlaneta4->setFont(font2);
        lblPlaneta4->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"color: rgb(0, 0, 255);"));
        lblPlaneta2 = new QLabel(frJuego);
        lblPlaneta2->setObjectName(QStringLiteral("lblPlaneta2"));
        lblPlaneta2->setGeometry(QRect(210, 110, 131, 21));
        lblPlaneta2->setFont(font2);
        lblPlaneta2->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"color: rgb(0, 0, 255);"));
        lblPlaneta8 = new QLabel(frJuego);
        lblPlaneta8->setObjectName(QStringLiteral("lblPlaneta8"));
        lblPlaneta8->setGeometry(QRect(120, 270, 131, 21));
        lblPlaneta8->setFont(font2);
        lblPlaneta8->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"color: rgb(0, 0, 255);"));
        lblPlaneta9 = new QLabel(frJuego);
        lblPlaneta9->setObjectName(QStringLiteral("lblPlaneta9"));
        lblPlaneta9->setGeometry(QRect(220, 420, 131, 21));
        lblPlaneta9->setFont(font2);
        lblPlaneta9->setStyleSheet(QLatin1String("backgroud-color: transparent;\n"
"color: rgb(0, 0, 255);"));
        frame = new QFrame(frJuego);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(750, 0, 111, 81));
        frame->setStyleSheet(QLatin1String("background-image: url(:/Imagenes/jugador.png);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lblTituloCantMovidas->raise();
        lblCantMovidas->raise();
        lblTurnoJugador->raise();
        lblTurno->raise();
        lblUnidDisponibles->raise();
        lblNumUnidDisponibles->raise();
        lblConquistas->raise();
        lblCantConquista->raise();
        btnPlaneta1->raise();
        btnPlaneta2->raise();
        btnPlaneta3->raise();
        btnPlaneta4->raise();
        btnPlaneta9->raise();
        btnPlaneta6->raise();
        btnPlaneta7->raise();
        btnPlaneta8->raise();
        btnPlaneta5->raise();
        lblPlaneta1->raise();
        lblPlaneta3->raise();
        lblPlaneta5->raise();
        lblPlaneta6->raise();
        lblPlaneta7->raise();
        lblPlaneta4->raise();
        lblPlaneta2->raise();
        lblPlaneta8->raise();
        lblPlaneta9->raise();
        frame->raise();

        retranslateUi(sistemaSolar);

        QMetaObject::connectSlotsByName(sistemaSolar);
    } // setupUi

    void retranslateUi(QWidget *sistemaSolar)
    {
        sistemaSolar->setWindowTitle(QApplication::translate("sistemaSolar", "sistemaSolar", Q_NULLPTR));
        lblTituloCantMovidas->setText(QApplication::translate("sistemaSolar", "Cantidad de Movidas:", Q_NULLPTR));
        lblCantMovidas->setText(QApplication::translate("sistemaSolar", "0", Q_NULLPTR));
        lblTurno->setText(QApplication::translate("sistemaSolar", "Turno:", Q_NULLPTR));
        lblUnidDisponibles->setText(QApplication::translate("sistemaSolar", "Unidades Disponibles:", Q_NULLPTR));
        lblConquistas->setText(QApplication::translate("sistemaSolar", "Conquistas:", Q_NULLPTR));
        lblTurnoJugador->setText(QString());
        lblNumUnidDisponibles->setText(QApplication::translate("sistemaSolar", "0", Q_NULLPTR));
        lblCantConquista->setText(QApplication::translate("sistemaSolar", "0", Q_NULLPTR));
        btnPlaneta1->setText(QApplication::translate("sistemaSolar", "Nombre", Q_NULLPTR));
        btnPlaneta2->setText(QApplication::translate("sistemaSolar", "Nombre", Q_NULLPTR));
        btnPlaneta3->setText(QApplication::translate("sistemaSolar", "Nombre", Q_NULLPTR));
        btnPlaneta4->setText(QApplication::translate("sistemaSolar", "Nombre", Q_NULLPTR));
        btnPlaneta9->setText(QApplication::translate("sistemaSolar", "Nombre", Q_NULLPTR));
        btnPlaneta6->setText(QApplication::translate("sistemaSolar", "Nombre", Q_NULLPTR));
        btnPlaneta7->setText(QApplication::translate("sistemaSolar", "Nombre", Q_NULLPTR));
        btnPlaneta8->setText(QApplication::translate("sistemaSolar", "Nombre", Q_NULLPTR));
        btnPlaneta5->setText(QApplication::translate("sistemaSolar", "Nombre", Q_NULLPTR));
        lblPlaneta1->setText(QApplication::translate("sistemaSolar", "Conquistado", Q_NULLPTR));
        lblPlaneta3->setText(QApplication::translate("sistemaSolar", "Conquistado", Q_NULLPTR));
        lblPlaneta5->setText(QApplication::translate("sistemaSolar", "Conquistado", Q_NULLPTR));
        lblPlaneta6->setText(QApplication::translate("sistemaSolar", "Conquistado", Q_NULLPTR));
        lblPlaneta7->setText(QApplication::translate("sistemaSolar", "Conquistado", Q_NULLPTR));
        lblPlaneta4->setText(QApplication::translate("sistemaSolar", "Conquistado", Q_NULLPTR));
        lblPlaneta2->setText(QApplication::translate("sistemaSolar", "Conquistado", Q_NULLPTR));
        lblPlaneta8->setText(QApplication::translate("sistemaSolar", "Conquistado", Q_NULLPTR));
        lblPlaneta9->setText(QApplication::translate("sistemaSolar", "Conquistado", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sistemaSolar: public Ui_sistemaSolar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SISTEMASOLAR_H
