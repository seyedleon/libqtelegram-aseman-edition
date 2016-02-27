// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DCOPTION
#define LQTG_TYPE_DCOPTION

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT DcOption : public TelegramTypeObject
{
public:
    enum DcOptionType {
        typeDcOption = 0x5d8c6cc
    };

    DcOption(DcOptionType classType = typeDcOption, InboundPkt *in = 0);
    DcOption(InboundPkt *in);
    DcOption(const Null&);
    virtual ~DcOption();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint32 id);
    qint32 id() const;

    void setIpAddress(const QString &ipAddress);
    QString ipAddress() const;

    void setIpv6(bool ipv6);
    bool ipv6() const;

    void setMediaOnly(bool mediaOnly);
    bool mediaOnly() const;

    void setPort(qint32 port);
    qint32 port() const;

    void setTcpoOnly(bool tcpoOnly);
    bool tcpoOnly() const;

    void setClassType(DcOptionType classType);
    DcOptionType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const DcOption &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint32 m_flags;
    qint32 m_id;
    QString m_ipAddress;
    qint32 m_port;
    DcOptionType m_classType;
};

Q_DECLARE_METATYPE(DcOption)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const DcOption &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, DcOption &item);

#endif // LQTG_TYPE_DCOPTION
