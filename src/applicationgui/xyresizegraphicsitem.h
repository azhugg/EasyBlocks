#ifndef XYRESIZEGRAPHICSITEM_H
#define XYRESIZEGRAPHICSITEM_H

#include <QGraphicsItem>

class SpriteResizeGraphicsItem;

/**
 * @brief The XYResizeGraphicsItem class
 *
 * @author Brecht Vandevoort
 */
class XYResizeGraphicsItem : public QGraphicsItem
{
public:
    /**
     * @brief Constructor
     * @param parent The parent SpriteResizeGraphicsItem
     */
    XYResizeGraphicsItem(SpriteResizeGraphicsItem* parent);

    /**
     * @brief Defines the outer bounds of the item as a rectangle
     * @return The outer bounds of the item
     */
    QRectF boundingRect() const {return QRectF(-7, -7, 7, 7);}

    /**
     * @brief Paints the contents of an item in local coordinates
     * @param painter The QPainter
     * @param option Pointer to QStyleOptionGraphicsItem, provides style options for the item
     * @param widget Pointer to QWidget, points to the widget that is being painted on, optional
     */
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);

protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);

private:
    SpriteResizeGraphicsItem* _parent;
};

#endif // XYRESIZEGRAPHICSITEM_H
