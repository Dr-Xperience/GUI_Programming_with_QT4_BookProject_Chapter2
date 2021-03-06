#include<QtGui>
#include<QtWidgets>

#include "gotocelldialog.h"

GoToCellDialog::GoToCellDialog(QWidget *parent):QDialog(parent)
{
	setupUi(this);
	buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

	QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
	lineEdit->setValidator(new QRegExpValidator(regExp,this));
	
	connect(buttonBox,SIGNAL(accepted()),this,SLOT(accept()));
	connect(buttonBox,SIGNAL(rejected()),this,SLOT(reject()));
	//No need to set fixed height done that in QtDesigner
	//GoToCellDialog->setFixedHeight(sizeHint().height());
}

void GoToCellDialog::on_lineEdit_textChanged()
{
	//pushButtonOK->setEnabled(lineEdit->hasAcceptableInput());
	buttonBox->button(QDialogButtonBox::Ok)->setEnabled(lineEdit->hasAcceptableInput());
}

