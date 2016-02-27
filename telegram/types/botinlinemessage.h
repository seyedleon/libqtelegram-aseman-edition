// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_BOTINLINEMESSAGE
#define LQTG_TYPE_BOTINLINEMESSAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>
#include <QList>
#include "messageentity.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT BotInlineMessage : public TelegramTypeObject
{
public:
    enum BotInlineMessageType {
        typeBotInlineMessageMediaAuto = 0xfc56e87d,
        typeBotInlineMessageText = 0xa56197a9
    };

    BotInlineMessage(BotInlineMessageType classType = typeBotInlineMessageMediaAuto, InboundPkt *in = 0);
    BotInlineMessage(InboundPkt *in);
    BotInlineMessage(const Null&);
    virtual ~BotInlineMessage();

    void setCaption(const QString &caption);
    QString caption() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMessage(const QString &message);
    QString message() const;

    void setNoWebpage(bool noWebpage);
    bool noWebpage() const;

    void setClassType(BotInlineMessageType classType);
    BotInlineMessageType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const BotInlineMessage &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QString m_caption;
    QList<MessageEntity> m_entities;
    qint32 m_flags;
    QString m_message;
    BotInlineMessageType m_classType;
};

Q_DECLARE_METATYPE(BotInlineMessage)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const BotInlineMessage &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, BotInlineMessage &item);

#endif // LQTG_TYPE_BOTINLINEMESSAGE
