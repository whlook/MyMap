/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *pic;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *line;
    QPushButton *pushButton_6;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_5;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1500, 935);
        MainWindow->setMouseTracking(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pic = new QLabel(centralWidget);
        pic->setObjectName(QStringLiteral("pic"));
        pic->setGeometry(QRect(200, 80, 801, 591));
        pic->setCursor(QCursor(Qt::CrossCursor));
        pic->setMouseTracking(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(900, 7, 62, 48));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(true);
        pushButton->setToolTipDuration(1500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/map.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 40));
        pushButton->setCheckable(false);
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1110, 7, 63, 49));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setToolTipDuration(1500);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(51, 41));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1002, 7, 62, 48));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setToolTipDuration(1500);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/school.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(50, 40));
        pushButton_3->setFlat(true);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 60, 1480, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(1212, 7, 67, 52));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setToolTipDuration(1500);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);
        pushButton_6->setIconSize(QSize(55, 44));
        pushButton_6->setFlat(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(700, 30, 54, 12));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(51, 21, 525, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(110, 0));

        horizontalLayout->addWidget(comboBox);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(110, 0));
        comboBox_2->setMaximumSize(QSize(110, 16777215));

        horizontalLayout->addWidget(comboBox_2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);

        horizontalLayout->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/icon/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);

        horizontalLayout->addWidget(pushButton_5);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        pic->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        line->raise();
        pushButton_6->raise();
        label->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1500, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pic->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "\345\234\260\345\233\276\346\214\207\345\215\227", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "\350\201\224\347\263\273\346\211\213\345\206\214", 0));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "\345\255\246\346\240\241\347\231\276\347\247\221", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216\350\257\245\350\275\257\344\273\266", 0));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QString());
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_5->setText(QApplication::translate("MainWindow", "\345\207\272\345\217\221\347\202\271\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\344\270\234\351\227\250", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\27410\345\217\267", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\2749\345\217\267", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\2748\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\27411\345\217\267", 0)
         << QApplication::translate("MainWindow", "\350\266\263\347\220\203\345\234\272\357\274\210\344\270\200\357\274\211", 0)
         << QApplication::translate("MainWindow", "\344\270\255\345\233\275\351\223\266\350\241\214ATM", 0)
         << QApplication::translate("MainWindow", "\345\244\247\345\255\246\347\224\237\346\264\273\345\212\250\344\270\255\345\277\203", 0)
         << QApplication::translate("MainWindow", "\347\220\206\345\217\221\345\272\227", 0)
         << QApplication::translate("MainWindow", "\350\211\272\346\234\257\350\256\276\350\256\241\345\255\246\351\231\242", 0)
         << QApplication::translate("MainWindow", "\346\260\221\346\227\217\351\244\220\345\216\205", 0)
         << QApplication::translate("MainWindow", "\344\276\277\345\210\251\345\272\227", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2741\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2742\345\217\267", 0)
         << QApplication::translate("MainWindow", "\346\265\264\345\256\244", 0)
         << QApplication::translate("MainWindow", "NULL", 0)
         << QApplication::translate("MainWindow", "\347\224\237\346\264\273\345\214\272\345\244\247\351\227\250", 0)
         << QApplication::translate("MainWindow", "\347\257\256\347\220\203\345\234\272\357\274\210\344\270\200\357\274\211", 0)
         << QApplication::translate("MainWindow", "\346\270\270\346\263\263\346\261\240", 0)
         << QApplication::translate("MainWindow", "\344\271\222\344\271\223\347\276\275\346\257\233\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\350\217\234\351\270\237\351\251\277\347\253\231", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2745\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2744\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2743\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\27410\345\217\267", 0)
         << QApplication::translate("MainWindow", "\351\200\237\346\235\245\345\256\235\345\277\253\351\200\222\345\244\204", 0)
         << QApplication::translate("MainWindow", "3\343\200\2014\345\217\267\351\244\220\345\216\205", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2749\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2746\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2747\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2748\345\217\267", 0)
         << QApplication::translate("MainWindow", "1\343\200\2012\345\217\267\351\244\220\345\216\205", 0)
         << QApplication::translate("MainWindow", "\347\257\256\347\220\203\345\234\272\357\274\210\344\272\214\357\274\211", 0)
         << QApplication::translate("MainWindow", "\350\266\263\347\220\203\345\234\272\357\274\210\344\272\214\357\274\211", 0)
         << QApplication::translate("MainWindow", "\345\267\245\347\250\213\350\256\255\347\273\203\344\270\255\345\277\203", 0)
         << QApplication::translate("MainWindow", "NULL", 0)
         << QApplication::translate("MainWindow", "\345\274\200\346\260\264\346\210\277\357\274\210\344\272\214\357\274\211", 0)
         << QApplication::translate("MainWindow", "\345\274\200\346\260\264\346\210\277\357\274\210\344\270\200\357\274\211", 0)
        );
        label_6->setText(QApplication::translate("MainWindow", "\347\233\256\347\232\204\345\234\260\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\344\270\234\351\227\250", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\27410\345\217\267", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\2749\345\217\267", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\2748\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206", 0)
         << QApplication::translate("MainWindow", "\346\225\231\345\255\246\346\245\27411\345\217\267", 0)
         << QApplication::translate("MainWindow", "\350\266\263\347\220\203\345\234\272\357\274\210\344\270\200\357\274\211", 0)
         << QApplication::translate("MainWindow", "\344\270\255\345\233\275\351\223\266\350\241\214ATM", 0)
         << QApplication::translate("MainWindow", "\345\244\247\345\255\246\347\224\237\346\264\273\345\212\250\344\270\255\345\277\203", 0)
         << QApplication::translate("MainWindow", "\347\220\206\345\217\221\345\272\227", 0)
         << QApplication::translate("MainWindow", "\350\211\272\346\234\257\350\256\276\350\256\241\345\255\246\351\231\242", 0)
         << QApplication::translate("MainWindow", "\346\260\221\346\227\217\351\244\220\345\216\205", 0)
         << QApplication::translate("MainWindow", "\344\276\277\345\210\251\345\272\227", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2741\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2742\345\217\267", 0)
         << QApplication::translate("MainWindow", "\346\265\264\345\256\244", 0)
         << QApplication::translate("MainWindow", "NULL", 0)
         << QApplication::translate("MainWindow", "\347\224\237\346\264\273\345\214\272\345\244\247\351\227\250", 0)
         << QApplication::translate("MainWindow", "\347\257\256\347\220\203\345\234\272\357\274\210\344\270\200\357\274\211", 0)
         << QApplication::translate("MainWindow", "\346\270\270\346\263\263\346\261\240", 0)
         << QApplication::translate("MainWindow", "\344\271\222\344\271\223\347\276\275\346\257\233\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\350\217\234\351\270\237\351\251\277\347\253\231", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2745\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2744\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2743\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\27410\345\217\267", 0)
         << QApplication::translate("MainWindow", "\351\200\237\346\235\245\345\256\235\345\277\253\351\200\222\345\244\204", 0)
         << QApplication::translate("MainWindow", "3\343\200\2014\345\217\267\351\244\220\345\216\205", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2749\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2746\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2747\345\217\267", 0)
         << QApplication::translate("MainWindow", "\345\256\277\350\210\215\346\245\2748\345\217\267", 0)
         << QApplication::translate("MainWindow", "1\343\200\2012\345\217\267\351\244\220\345\216\205", 0)
         << QApplication::translate("MainWindow", "\347\257\256\347\220\203\345\234\272\357\274\210\344\272\214\357\274\211", 0)
         << QApplication::translate("MainWindow", "\350\266\263\347\220\203\345\234\272\357\274\210\344\272\214\357\274\211", 0)
         << QApplication::translate("MainWindow", "\345\267\245\347\250\213\350\256\255\347\273\203\344\270\255\345\277\203", 0)
         << QApplication::translate("MainWindow", "NULL", 0)
         << QApplication::translate("MainWindow", "\345\274\200\346\260\264\346\210\277\357\274\210\344\272\214\357\274\211", 0)
         << QApplication::translate("MainWindow", "\345\274\200\346\260\264\346\210\277\357\274\210\344\270\200\357\274\211", 0)
        );
        pushButton_4->setText(QApplication::translate("MainWindow", "GO!", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\350\267\257\347\272\277", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
