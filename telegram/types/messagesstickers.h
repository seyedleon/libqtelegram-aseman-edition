// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESSTICKERS
#define LQTG_TYPE_MESSAGESSTICKERS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>
#include <QList>
#include "document.h"

class LIBQTELEGRAMSHARED_EXPORT MessagesStickers : public TelegramTypeObject
{
public:
    enum MessagesStickersType {
        typeMessagesStickersNotModified = 0xf1749a22,
        typeMessagesStickers = 0x8a8ecd32
    };

    MessagesStickers(MessagesStickersType classType = typeMessagesStickersNotModified, InboundPkt *in = 0);
    MessagesStickers(InboundPkt *in);
    MessagesStickers(const Null&);
    virtual ~MessagesStickers();

    void setHash(const QString &hash);
    QString hash() const;

    void setStickers(const QList<Document> &stickers);
    QList<Document> stickers() const;

    void setClassType(MessagesStickersType classType);
    MessagesStickersType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesStickers &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QString m_hash;
    QList<Document> m_stickers;
    MessagesStickersType m_classType;
};

Q_DECLARE_METATYPE(MessagesStickers)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessagesStickers &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessagesStickers &item);

#endif // LQTG_TYPE_MESSAGESSTICKERS
