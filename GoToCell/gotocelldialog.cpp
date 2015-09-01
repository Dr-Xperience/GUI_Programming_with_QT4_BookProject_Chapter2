#include<QtGui>
#include<QtWidgets>

#include "gotocelldialog.h"

GoToCellDialog::GoToCellDialog(QWidget *parent):QDialog(parent)
{
	setupUi(this);

	QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
	lineEdit->setValidator(new QRegExpValidator(regExp,this));
	connect(pushButtonOK,SIGNAL(clicked()),this,SLOT(accept()));
	connect(pushButtonCancel,SIGNAL(clicked()),this,SLOT(reject()));

}

void GoToCellDialog::on_lineEdit_textChanged()
{
	pushButtonOK->setEnabled(lineEdit->hasAcceptableInput());
}

