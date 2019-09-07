﻿#include "myobject.h"

MyObject::MyObject()
{
    init();
}

MyObject::~MyObject()
{

}

void MyObject::setShapeType(ShapeType type)
{
    this->shapeType = type;
}

ShapeType MyObject::getShapeType() const
{
    return this->shapeType;
}

void MyObject::setBox(QRect box)
{
    this->box = box;
}

QRect MyObject::getBox() const
{
    return this->box;
}

void MyObject::setLine(QPoint startPoint, QPoint stopPoint)
{
    this->line.clear();
    this->line.append(startPoint);
    this->line.append(stopPoint);
}

QList<QPoint> MyObject::getLine() const
{
    return this->line;
}

void MyObject::setPolygon(QPolygon polygon)
{
    this->polygon = polygon;
}

QPolygon MyObject::getPolygon() const
{
    return this->polygon;
}

void MyObject::setPointList(QList<QPoint> &pointList)
{
    this->pointList = pointList;
}

QList<QPoint> MyObject::getPointList() const
{
    return this->pointList;
}

void MyObject::setObjectClass(QString objectClass)
{
    this->obejctClass = objectClass;
}

QString MyObject::getObjectClass() const
{
    return this->obejctClass;
}

void MyObject::setIsDifficult(bool flag)
{
    this->isDifficult = flag;
}

bool MyObject::getIsDifficult() const
{
    return this->isDifficult;
}

void MyObject::setObjectFlag(int flag)
{
    this->objectFlag = flag;
}

int MyObject::getObjectFlag() const
{
    return this->objectFlag;
}

void MyObject::setIsTrackingObject(bool flag)
{
    this->isTrackingObject = flag;
}

bool MyObject::getIsTrackingObject() const
{
    return this->isTrackingObject;
}

void MyObject::setSegmentImage(const QImage &image)
{
    maskImage = image.copy();
}

QImage MyObject::getSegmentImage() const
{
    return maskImage;
}

void MyObject::init()
{
    this->shapeType = ShapeType::UNSHAPE;
    this->line.clear();
    this->polygon.clear();
    this->objectFlag = 0;
    this->isTrackingObject = false;
    this->isDifficult = false;
}
