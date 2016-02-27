// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTGEOPOINT
#define LQTG_TYPE_INPUTGEOPOINT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputGeoPoint : public TelegramTypeObject
{
public:
    enum InputGeoPointType {
        typeInputGeoPointEmpty = 0xe4c123d6,
        typeInputGeoPoint = 0xf3b7acc9
    };

    InputGeoPoint(InputGeoPointType classType = typeInputGeoPointEmpty, InboundPkt *in = 0);
    InputGeoPoint(InboundPkt *in);
    InputGeoPoint(const Null&);
    virtual ~InputGeoPoint();

    void setLat(qreal lat);
    qreal lat() const;

    void setLongValue(qreal longValue);
    qreal longValue() const;

    void setClassType(InputGeoPointType classType);
    InputGeoPointType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputGeoPoint &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qreal m_lat;
    qreal m_longValue;
    InputGeoPointType m_classType;
};

Q_DECLARE_METATYPE(InputGeoPoint)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputGeoPoint &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputGeoPoint &item);

#endif // LQTG_TYPE_INPUTGEOPOINT
