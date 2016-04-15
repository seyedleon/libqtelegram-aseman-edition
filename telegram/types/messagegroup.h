// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEGROUP
#define LQTG_TYPE_MESSAGEGROUP

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT MessageGroup : public TelegramTypeObject
{
public:
    enum MessageGroupClassType {
        typeMessageGroup = 0xe8346f53
    };

    MessageGroup(MessageGroupClassType classType = typeMessageGroup, InboundPkt *in = 0);
    MessageGroup(InboundPkt *in);
    MessageGroup(const Null&);
    virtual ~MessageGroup();

    void setCount(qint32 count);
    qint32 count() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setMaxId(qint32 maxId);
    qint32 maxId() const;

    void setMinId(qint32 minId);
    qint32 minId() const;

    void setClassType(MessageGroupClassType classType);
    MessageGroupClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessageGroup &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_count;
    qint32 m_date;
    qint32 m_maxId;
    qint32 m_minId;
    MessageGroupClassType m_classType;
};

Q_DECLARE_METATYPE(MessageGroup)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessageGroup &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessageGroup &item);

#endif // LQTG_TYPE_MESSAGEGROUP
