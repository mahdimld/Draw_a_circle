#include "dialog.h"
#include "ui_dialog.h"
#include <QPainter>

int t=0,s=0;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);

    timer = new QTimer(this);
    ui->horizontalSlider->setValue(24);
    MySlot();
    connect(timer,SIGNAL(timeout()),SLOT(MySlot()));
    timer->start(t);

    update();

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{


    QPainter painter(this);

    // draw an arc
    QPen paintpen(Qt::blue);
    paintpen.setWidth(4);
    painter.setPen(paintpen);

    painter.drawArc(100,100,100,100,0,s);


}


    void Dialog::MySlot()
    {


         connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
         t=ui->horizontalSlider->value();
        qDebug()<<t;
        //ui->progressBar->setValue((s*98)/5700);

        s+=t/10;
        repaint();

    }



void Dialog::on_horizontalSlider_actionTriggered(int action)
{

}

void Dialog::on_progressBar_valueChanged(int value)
{

}
