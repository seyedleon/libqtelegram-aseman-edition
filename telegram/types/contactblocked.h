// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTBLOCKED
#define LQTG_TYPE_CONTACTBLOCKED

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT ContactBlocked : public TelegramTypeObject
{
public:
    enum ContactBlockedType {
        typeContactBlocked = 0x561bc879
    };

    ContactBlocked(ContactBlockedType classType = typeContactBlocked, InboundPkt *in = 0);
    ContactBlocked(InboundPkt *in);
    ContactBlocked(const Null&);
    virtual ~ContactBlocked();

    void setDate(qint32 date);
    qint32 date() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ContactBlockedType classType);
    ContactBlockedType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactBlocked &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint32 m_date;
    qint32 m_userId;
    ContactBlockedType m_classType;
};

Q_DECLARE_METATYPE(ContactBlocked)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ContactBlocked &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ContactBlocked &item);

#endif // LQTG_TYPE_CONTACTBLOCKED
