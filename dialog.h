#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui>
#include <QPainter>
#include <QObject>
#include <QTimer>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog();
    QTimer *timer;

    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
protected:
    void paintEvent(QPaintEvent *);

public slots:
    void MySlot();
private slots:
    void on_progressBar_valueChanged(int value);
    void on_horizontalSlider_actionTriggered(int action);
};
#endif // DIALOG_H




