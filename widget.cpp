#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *e)
{
    int x = e->x();
    int y = e->y();

    ui->lcdNumber->display(x);

}

void Widget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    int width = this->width();
    int height = this->height();
    painter.setPen(Qt::red);
    painter.drawRect(0,0,width-1,height-1);
}
