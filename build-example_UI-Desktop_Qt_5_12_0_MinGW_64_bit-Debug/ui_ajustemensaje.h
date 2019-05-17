/********************************************************************************
** Form generated from reading UI file 'ajustemensaje.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJUSTEMENSAJE_H
#define UI_AJUSTEMENSAJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ajusteMensaje
{
public:
    QPushButton *btnGuardar;
    QPushButton *btnRemitente;
    QLineEdit *leTitulo;
    QLineEdit *leRemitente;
    QLineEdit *leDestinatario;
    QPushButton *btnDestinatario;
    QLineEdit *leFondo;
    QPushButton *btnFondo;
    QPushButton *btnReestablecer;

    void setupUi(QWidget *ajusteMensaje)
    {
        if (ajusteMensaje->objectName().isEmpty())
            ajusteMensaje->setObjectName(QString::fromUtf8("ajusteMensaje"));
        ajusteMensaje->resize(205, 191);
        btnGuardar = new QPushButton(ajusteMensaje);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(110, 160, 91, 23));
        btnGuardar->setStyleSheet(QString::fromUtf8(""));
        btnRemitente = new QPushButton(ajusteMensaje);
        btnRemitente->setObjectName(QString::fromUtf8("btnRemitente"));
        btnRemitente->setGeometry(QRect(40, 50, 75, 23));
        leTitulo = new QLineEdit(ajusteMensaje);
        leTitulo->setObjectName(QString::fromUtf8("leTitulo"));
        leTitulo->setEnabled(false);
        leTitulo->setGeometry(QRect(22, 10, 161, 20));
        leTitulo->setStyleSheet(QString::fromUtf8("background:white; color:black"));
        leTitulo->setAlignment(Qt::AlignCenter);
        leRemitente = new QLineEdit(ajusteMensaje);
        leRemitente->setObjectName(QString::fromUtf8("leRemitente"));
        leRemitente->setEnabled(false);
        leRemitente->setGeometry(QRect(130, 50, 31, 20));
        leDestinatario = new QLineEdit(ajusteMensaje);
        leDestinatario->setObjectName(QString::fromUtf8("leDestinatario"));
        leDestinatario->setEnabled(false);
        leDestinatario->setGeometry(QRect(130, 90, 31, 20));
        btnDestinatario = new QPushButton(ajusteMensaje);
        btnDestinatario->setObjectName(QString::fromUtf8("btnDestinatario"));
        btnDestinatario->setGeometry(QRect(40, 90, 75, 23));
        leFondo = new QLineEdit(ajusteMensaje);
        leFondo->setObjectName(QString::fromUtf8("leFondo"));
        leFondo->setEnabled(false);
        leFondo->setGeometry(QRect(130, 130, 31, 20));
        btnFondo = new QPushButton(ajusteMensaje);
        btnFondo->setObjectName(QString::fromUtf8("btnFondo"));
        btnFondo->setGeometry(QRect(40, 130, 75, 23));
        btnReestablecer = new QPushButton(ajusteMensaje);
        btnReestablecer->setObjectName(QString::fromUtf8("btnReestablecer"));
        btnReestablecer->setGeometry(QRect(10, 160, 91, 23));
        btnReestablecer->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(ajusteMensaje);

        QMetaObject::connectSlotsByName(ajusteMensaje);
    } // setupUi

    void retranslateUi(QWidget *ajusteMensaje)
    {
        ajusteMensaje->setWindowTitle(QApplication::translate("ajusteMensaje", "Form", nullptr));
        btnGuardar->setText(QApplication::translate("ajusteMensaje", "Guardar Cambios", nullptr));
        btnRemitente->setText(QApplication::translate("ajusteMensaje", "Remitente", nullptr));
        leTitulo->setText(QApplication::translate("ajusteMensaje", "AJUSTAR COLOR", nullptr));
        btnDestinatario->setText(QApplication::translate("ajusteMensaje", "Destinatario", nullptr));
        btnFondo->setText(QApplication::translate("ajusteMensaje", "Fondo", nullptr));
        btnReestablecer->setText(QApplication::translate("ajusteMensaje", "Reestablecer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajusteMensaje: public Ui_ajusteMensaje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJUSTEMENSAJE_H
