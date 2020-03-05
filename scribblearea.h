#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QColor>
#include <QImage>
#include <QPoint>
#include <QWidget>


class ScribbleArea
{
    Q_OBJECT

private:
    void drawLineTo(const QPoint &endPoint);
    void resizeImage(QImage *image, const QSize &newSize);
    bool modified;
    bool scribbling;
    QColor myPenColor;
    QImage image;
    QPoint lastPoint;

public:
    ScribbleArea(QWidget *parent = 0);
    bool openImage(const QString &fileName);
    bool saveImage(const QString &fileName, const char *fileFormat);
    void setPenColor(const QColor &newColor);
    void setPenWidth(int newWidth);

    bool isModified() const {return modified;}
    QColor ptnColor() const {return myPenColor;}
    //int penWidth() const {return myPenWidth;}

public slots:
  //  void clearImage;
    void print();
protected:
    void mousePressEvent(QMouseEvent *event) ;//override;
    void mouseMoveEvent(QMouseEvent *event); //override;
    void mouseReleaseEvent(QMouseEvent *event); //override;
    void printEvent(QPaintEvent *event); //override;
    void resizeEvent(QResizeEvent *event);// override;

};

#endif // SCRIBBLEAREA_H
