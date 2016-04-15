// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_BOTINFO
#define LQTG_TYPE_BOTINFO

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QList>
#include "botcommand.h"
#include <QString>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT BotInfo : public TelegramTypeObject
{
public:
    enum BotInfoClassType {
        typeBotInfo = 0x98e81d3a
    };

    BotInfo(BotInfoClassType classType = typeBotInfo, InboundPkt *in = 0);
    BotInfo(InboundPkt *in);
    BotInfo(const Null&);
    virtual ~BotInfo();

    void setCommands(const QList<BotCommand> &commands);
    QList<BotCommand> commands() const;

    void setDescription(const QString &description);
    QString description() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(BotInfoClassType classType);
    BotInfoClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const BotInfo &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<BotCommand> m_commands;
    QString m_description;
    qint32 m_userId;
    BotInfoClassType m_classType;
};

Q_DECLARE_METATYPE(BotInfo)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const BotInfo &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, BotInfo &item);

#endif // LQTG_TYPE_BOTINFO
