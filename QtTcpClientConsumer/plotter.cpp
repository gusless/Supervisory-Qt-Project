#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}{

}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(160, 158, 163));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(82, 56, 117));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());
}
