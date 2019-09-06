#ifndef DRAWSHAPE_H
#define DRAWSHAPE_H

#include <QObject>
#include <QPainter>
#include "myobject.h"
#include "baseAlgorithm/geometryalgorithm.h"

class DrawShape : public QObject
{
    Q_OBJECT
public:
    DrawShape(QObject *parent = nullptr);

    virtual void initDraw() = 0;
    virtual int drawMousePress(const QPoint point, bool &isDraw) = 0;
    virtual int drawMouseMove(const QPoint point, bool &isDraw) = 0;
    virtual int drawMouseRelease(QWidget *parent, const QPoint point, const QString sampleClass, bool &isDraw) = 0;
    virtual void removeShape(bool &isDraw) = 0;
    virtual bool isInShape(const QPoint &point) = 0;

    virtual void drawPixmap(const QString &sampleClass, const ShapeType shapeID, QPainter &painter) = 0;

    virtual void setObjectList(QList<MyObject> list) = 0;
    virtual void getObjectList(QList<MyObject> &list) = 0;

    virtual int getObjectSize();

    virtual void setSegmentImage(const MyObject &object);
    virtual MyObject getSegmentImage();

protected:

    bool drawMousePressed;
    bool moveMousePressed;
    GeometryAlgorithm geometryAlgorithm;
};

#endif // DRAWSHAPE_H