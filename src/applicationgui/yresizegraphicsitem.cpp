#include "yresizegraphicsitem.h"

#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>

#include "spriteresizegraphicsitem.h"
#include "spritegraphicsitem.h"

YResizeGraphicsItem::YResizeGraphicsItem(SpriteResizeGraphicsItem* parent) : QGraphicsItem(parent), _parent(parent)
{

}

void YResizeGraphicsItem::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    painter->setPen(Qt::white);
    painter->setBrush(Qt::black);
    painter->drawRect(boundingRect());
}

void YResizeGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent* event)
{

}

void YResizeGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{

    QSize size = _parent->getParent()->getSprite()->getSize();

    //map event coords to parent
    QPointF position = mapToParent(event->pos());

    //check y value
    int ypos = (int)(-position.y() * 2);
    if(ypos < 0)
        ypos = 0;

    //update size
    size.setHeight(ypos);
    _parent->getParent()->getSprite()->setSize(size);
}

void YResizeGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
{

}
