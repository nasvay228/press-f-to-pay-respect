#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
protected:
    void mousePressEvent(QMouseEvent * e);
    void paintEvent(QPaintEvent * e);

protected slots:

};

#endif // WIDGET_H
