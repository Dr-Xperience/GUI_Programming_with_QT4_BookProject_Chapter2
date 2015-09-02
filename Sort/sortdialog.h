#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>

#include "ui_sortdialog.h"

//class QCompleter;

class SortDialog: public QDialog, public Ui::SortDialog
{
	Q_OBJECT
//	QCompleter *mCompleter;
public:
	SortDialog(QWidget *parent =0);
	void setColumnRange(QChar first, QChar last);
};

#endif
