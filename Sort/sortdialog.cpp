#include <QtGui>
#include <QtWidgets>

#include "sortdialog.h"

SortDialog::SortDialog(QWidget *parent):QDialog(parent)
{
	setupUi(this);
	
	//mCompleter = new QCompleter(this);
	
	groupBoxSecondaryKey->hide();
	groupBoxTertiaryKey->hide();
	layout()->setSizeConstraint(QLayout::SetFixedSize);

	setColumnRange('A','Z');
	//comboBoxPrimaryColumn->setCompleter(mCompleter);
	comboBoxPrimaryColumn->completer()->setCompletionMode(QCompleter::PopupCompletion);
	comboBoxSecondaryColumn->completer()->setCompletionMode(QCompleter::PopupCompletion);
	comboBoxTertiaryColumn->completer()->setCompletionMode(QCompleter::PopupCompletion);
}

void SortDialog::setColumnRange(QChar first, QChar last)
{
	comboBoxPrimaryColumn->clear();
	comboBoxSecondaryColumn->clear();
	comboBoxTertiaryColumn->clear();

	comboBoxSecondaryColumn->addItem(tr("None"));
	comboBoxTertiaryColumn->addItem(tr("None"));
	
	comboBoxPrimaryColumn->setMinimumSize(comboBoxSecondaryColumn->sizeHint());

	QChar ch = first;

	while(ch <= last)
	{
		comboBoxPrimaryColumn->addItem(QString(ch));
		comboBoxSecondaryColumn->addItem(QString(ch));
		comboBoxTertiaryColumn->addItem(QString(ch));
		ch = ch.unicode() + 1;
	}
}
