/* 
 * Code without implementation of GoToCellDialog class's
 * custom implementation
 /

#include<QApplication>
#include<QDialog>

#include "ui_gotocelldialog.h"

int main(int argc,char *argv[])
{
	QApplication app(argc,argv);
	
	Ui::GoToCellDialog ui;
	QDialog *dialog = new QDialog();
	ui.setupUi(dialog);
	dialog->show();

	return app.exec();

}

*/

/* 
 * Code with implementation of GoToCellDialog class's
 * custom implementation
 */

#include<QApplication>

#include "gotocelldialog.h"

int main(int argc, char* argv[])
{
	QApplication app(argc,argv);
	GoToCellDialog *dialog = new GoToCellDialog();
	dialog->show();
	return app.exec();
}
