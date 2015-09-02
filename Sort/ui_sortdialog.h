/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxPrimaryKey;
    QGridLayout *gridLayout;
    QLabel *labelPrimaryColumn;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxPrimaryColumn;
    QSpacerItem *horizontalSpacer;
    QLabel *labelPrimaryOrder;
    QComboBox *comboBoxPrimaryOrder;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonOK;
    QToolButton *toolButtonCancel;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonMore;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBoxSecondaryKey;
    QGridLayout *gridLayout_2;
    QLabel *labelSecondaryColumn;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxSecondaryColumn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelSecondaryOrder;
    QComboBox *comboBoxSecondaryOrder;
    QGroupBox *groupBoxTertiaryKey;
    QGridLayout *gridLayout_3;
    QLabel *labelTertiaryColumn;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxTertiaryColumn;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelTertiaryOrder;
    QComboBox *comboBoxTertiaryOrder;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QStringLiteral("SortDialog"));
        SortDialog->resize(313, 283);
        gridLayout_4 = new QGridLayout(SortDialog);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBoxPrimaryKey = new QGroupBox(SortDialog);
        groupBoxPrimaryKey->setObjectName(QStringLiteral("groupBoxPrimaryKey"));
        gridLayout = new QGridLayout(groupBoxPrimaryKey);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelPrimaryColumn = new QLabel(groupBoxPrimaryKey);
        labelPrimaryColumn->setObjectName(QStringLiteral("labelPrimaryColumn"));

        gridLayout->addWidget(labelPrimaryColumn, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBoxPrimaryColumn = new QComboBox(groupBoxPrimaryKey);
        comboBoxPrimaryColumn->setObjectName(QStringLiteral("comboBoxPrimaryColumn"));
        comboBoxPrimaryColumn->setEditable(true);
        comboBoxPrimaryColumn->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(comboBoxPrimaryColumn);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        labelPrimaryOrder = new QLabel(groupBoxPrimaryKey);
        labelPrimaryOrder->setObjectName(QStringLiteral("labelPrimaryOrder"));

        gridLayout->addWidget(labelPrimaryOrder, 1, 0, 1, 1);

        comboBoxPrimaryOrder = new QComboBox(groupBoxPrimaryKey);
        comboBoxPrimaryOrder->setObjectName(QStringLiteral("comboBoxPrimaryOrder"));

        gridLayout->addWidget(comboBoxPrimaryOrder, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxPrimaryKey, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButtonOK = new QPushButton(SortDialog);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));

        verticalLayout->addWidget(pushButtonOK);

        toolButtonCancel = new QToolButton(SortDialog);
        toolButtonCancel->setObjectName(QStringLiteral("toolButtonCancel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonCancel->sizePolicy().hasHeightForWidth());
        toolButtonCancel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButtonCancel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButtonMore = new QPushButton(SortDialog);
        pushButtonMore->setObjectName(QStringLiteral("pushButtonMore"));
        pushButtonMore->setCheckable(true);

        verticalLayout->addWidget(pushButtonMore);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 1, 0, 1, 1);

        groupBoxSecondaryKey = new QGroupBox(SortDialog);
        groupBoxSecondaryKey->setObjectName(QStringLiteral("groupBoxSecondaryKey"));
        gridLayout_2 = new QGridLayout(groupBoxSecondaryKey);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelSecondaryColumn = new QLabel(groupBoxSecondaryKey);
        labelSecondaryColumn->setObjectName(QStringLiteral("labelSecondaryColumn"));

        gridLayout_2->addWidget(labelSecondaryColumn, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        comboBoxSecondaryColumn = new QComboBox(groupBoxSecondaryKey);
        comboBoxSecondaryColumn->setObjectName(QStringLiteral("comboBoxSecondaryColumn"));
        comboBoxSecondaryColumn->setEditable(true);
        comboBoxSecondaryColumn->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(comboBoxSecondaryColumn);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        labelSecondaryOrder = new QLabel(groupBoxSecondaryKey);
        labelSecondaryOrder->setObjectName(QStringLiteral("labelSecondaryOrder"));

        gridLayout_2->addWidget(labelSecondaryOrder, 1, 0, 1, 1);

        comboBoxSecondaryOrder = new QComboBox(groupBoxSecondaryKey);
        comboBoxSecondaryOrder->setObjectName(QStringLiteral("comboBoxSecondaryOrder"));

        gridLayout_2->addWidget(comboBoxSecondaryOrder, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxSecondaryKey, 2, 0, 1, 1);

        groupBoxTertiaryKey = new QGroupBox(SortDialog);
        groupBoxTertiaryKey->setObjectName(QStringLiteral("groupBoxTertiaryKey"));
        gridLayout_3 = new QGridLayout(groupBoxTertiaryKey);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelTertiaryColumn = new QLabel(groupBoxTertiaryKey);
        labelTertiaryColumn->setObjectName(QStringLiteral("labelTertiaryColumn"));

        gridLayout_3->addWidget(labelTertiaryColumn, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBoxTertiaryColumn = new QComboBox(groupBoxTertiaryKey);
        comboBoxTertiaryColumn->setObjectName(QStringLiteral("comboBoxTertiaryColumn"));
        comboBoxTertiaryColumn->setEditable(true);
        comboBoxTertiaryColumn->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_3->addWidget(comboBoxTertiaryColumn);

        horizontalSpacer_3 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        labelTertiaryOrder = new QLabel(groupBoxTertiaryKey);
        labelTertiaryOrder->setObjectName(QStringLiteral("labelTertiaryOrder"));

        gridLayout_3->addWidget(labelTertiaryOrder, 1, 0, 1, 1);

        comboBoxTertiaryOrder = new QComboBox(groupBoxTertiaryKey);
        comboBoxTertiaryOrder->setObjectName(QStringLiteral("comboBoxTertiaryOrder"));

        gridLayout_3->addWidget(comboBoxTertiaryOrder, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxTertiaryKey, 3, 0, 1, 1);


        retranslateUi(SortDialog);
        QObject::connect(pushButtonOK, SIGNAL(clicked()), SortDialog, SLOT(accept()));
        QObject::connect(toolButtonCancel, SIGNAL(clicked()), SortDialog, SLOT(reject()));
        QObject::connect(pushButtonMore, SIGNAL(toggled(bool)), groupBoxSecondaryKey, SLOT(setVisible(bool)));
        QObject::connect(pushButtonMore, SIGNAL(toggled(bool)), groupBoxTertiaryKey, SLOT(setVisible(bool)));

        pushButtonOK->setDefault(true);


        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QApplication::translate("SortDialog", "Sort", 0));
        groupBoxPrimaryKey->setTitle(QApplication::translate("SortDialog", "&Primary Key", 0));
        labelPrimaryColumn->setText(QApplication::translate("SortDialog", "Column: ", 0));
        comboBoxPrimaryColumn->clear();
        comboBoxPrimaryColumn->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        labelPrimaryOrder->setText(QApplication::translate("SortDialog", "Order:", 0));
        comboBoxPrimaryOrder->clear();
        comboBoxPrimaryOrder->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0)
         << QApplication::translate("SortDialog", "Descending", 0)
        );
        pushButtonOK->setText(QApplication::translate("SortDialog", "OK", 0));
        toolButtonCancel->setText(QApplication::translate("SortDialog", "Cancel", 0));
        pushButtonMore->setText(QApplication::translate("SortDialog", "&More", 0));
        groupBoxSecondaryKey->setTitle(QApplication::translate("SortDialog", "&Secondary Key", 0));
        labelSecondaryColumn->setText(QApplication::translate("SortDialog", "Column: ", 0));
        comboBoxSecondaryColumn->clear();
        comboBoxSecondaryColumn->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        labelSecondaryOrder->setText(QApplication::translate("SortDialog", "Order:", 0));
        comboBoxSecondaryOrder->clear();
        comboBoxSecondaryOrder->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0)
         << QApplication::translate("SortDialog", "Descending", 0)
        );
        groupBoxTertiaryKey->setTitle(QApplication::translate("SortDialog", "&Tertiary Key", 0));
        labelTertiaryColumn->setText(QApplication::translate("SortDialog", "Column: ", 0));
        comboBoxTertiaryColumn->clear();
        comboBoxTertiaryColumn->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        labelTertiaryOrder->setText(QApplication::translate("SortDialog", "Order:", 0));
        comboBoxTertiaryOrder->clear();
        comboBoxTertiaryOrder->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0)
         << QApplication::translate("SortDialog", "Descending", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
