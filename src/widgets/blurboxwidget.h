#ifndef BLURBOXWIDGET_H
#define BLURBOXWIDGET_H

#include <dblureffectwidget.h>
#include <QVBoxLayout>
#include "src/global_util/constants.h"
#include  "src/global_util/calculate_util.h"
#include "qapplication.h"

DWIDGET_USE_NAMESPACE

class BlurBoxWidget : public DBlurEffectWidget
{
    Q_OBJECT
public:
    explicit BlurBoxWidget(QWidget *parent = nullptr);
    QVBoxLayout *qvLayout ;
private:
    CalculateUtil *m_calcUtil;
};

#endif // BLURBOXWIDGET_H