#include <QtWidgets/QGraphicsBlurEffect>
#include <QtWidgets/QGraphicsItem>

namespace QtNodes {

class ConnectionGraphicsObject;

class ConnectionBlurEffect : public QGraphicsBlurEffect {
   public:
    explicit ConnectionBlurEffect(ConnectionGraphicsObject *item);

    void draw(QPainter *painter) override;

   private:
};
}  // namespace QtNodes