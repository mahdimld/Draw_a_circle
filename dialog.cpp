#include "dialog.h"
#include "ui_dialog.h"
#include <QPainter>

int t=10,s=0,t2,t3;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{




    ui->setupUi(this);


    timer = new QTimer(this);

    timer->start(t);
    connect(timer,SIGNAL(timeout()),SLOT(MySlot()));


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{


    QPainter painter(this);

   /* QPen paintpen(Qt::black);
    paintpen.setWidth(6);

    QPen linepen(Qt::red);
    linepen.setWidth(2);

    QPoint p1;
    p1.setX(10);
    p1.setY(10);

    QPoint p2;
    p2.setX(100);
    p2.setY(100);

    painter.setPen(linepen);

    painter.drawLine(p1,p2);*/
   /* QRect rec(10,10,100,100);
    QPen framepen(Qt::red);
    framepen.setWidth(6);
    QBrush brush(Qt::blue,Qt::SolidPattern);
    painter.fillRect(rec,brush);
    painter.setPen(framepen);

    //painter.drawRect(rec);


    painter.drawEllipse(rec);*/

    //make our polygon

   /* QPolygon poly;
    poly<<QPoint(10,10);
    poly<<QPoint(10,100);
    poly<<QPoint(100,10);
    poly<<QPoint(100,100);

    //make a pen
    QPen linepen(Qt::red);
    linepen.setWidth(2);

    linepen.setJoinStyle(Qt::MiterJoin);
    linepen.setStyle(Qt::DotLine);
    painter.setPen(linepen);


    //make a brush
    QBrush fillbrush;
    fillbrush.setColor(Qt::green);
    fillbrush.setStyle(Qt::SolidPattern);

    //fill the polygon

    QPainterPath path;
    path.addPolygon(poly);


    //draw polygon

    painter.drawPolygon(poly);

    //painter.fillpath(path,fillbrush);
*/

    // draw an arc
    QPen paintpen(Qt::blue);
    paintpen.setWidth(4);
    painter.setPen(paintpen);

    painter.drawArc(100,100,100,100,0,s);


}


    void Dialog::MySlot()
    {
        //connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
        ui->progressBar->setValue((s*98)/5700);
        //t2=ui->progressBar->value();
        //t3=t*(1-(t2/100));
        s+=1;

        repaint();

    }



void Dialog::on_horizontalSlider_actionTriggered(int action)
{

}

void Dialog::on_progressBar_valueChanged(int value)
{

}
