#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent) : QWidget(parent){

}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush(Qt::SolidPattern);
    QPen pen;
    float y0, y1;

    painter.setRenderHint(QPainter::Antialiasing);
    brush.setColor(QColor(160, 158, 163));
    painter.setBrush(brush);
    painter.drawRect(0, 0, width(), height());

    pen.setColor(QColor(101, 39, 143));
    pen.setWidth(2);
    painter.setPen(pen);

    for(int i = 1; i < pontos.length(); i++){
        y0 = ((float)pontos.at(i-1)-getMin()) / (getMax()-getMin());
        y1 = ((float)pontos.at(i)-getMin()) / ((getMax())-getMin());
        painter.drawLine(width()/(pontos.length()-1)*(i-1), height()-(y0*height()), width()/(pontos.length()-1)*(i), height()-(y1*height()));
    }
}

void Plotter::updatePoints(QList<int> newPoints){
    pontos = newPoints;
    repaint();
}

int Plotter::getMax(){
    if (pontos.isEmpty()){
        return 0;
    }
    int max = pontos.at(0);
    for(int i = 1; i < pontos.length(); i++){
        if(pontos.at(i) > max) {
            max = pontos.at(i);
        }
    }
    qDebug() << "max: " << max;
    return max;
}

int Plotter::getMin(){
    if (pontos.isEmpty()){
        return 0;
    }
    int min = pontos.at(0);
    for(int i = 1; i < pontos.length(); i++){
        if(pontos.at(i) < min){
            min = pontos.at(i);
        }
    }
    qDebug() << "min: " << min;
    return min;
}
