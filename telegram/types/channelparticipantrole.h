// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELPARTICIPANTROLE
#define LQTG_TYPE_CHANNELPARTICIPANTROLE

#include "telegramtypeobject.h"

#include <QMetaType>

class LIBQTELEGRAMSHARED_EXPORT ChannelParticipantRole : public TelegramTypeObject
{
public:
    enum ChannelParticipantRoleClassType {
        typeChannelRoleEmpty = 0xb285a0c6,
        typeChannelRoleModerator = 0x9618d975,
        typeChannelRoleEditor = 0x820bfe8c
    };

    ChannelParticipantRole(ChannelParticipantRoleClassType classType = typeChannelRoleEmpty, InboundPkt *in = 0);
    ChannelParticipantRole(InboundPkt *in);
    ChannelParticipantRole(const Null&);
    virtual ~ChannelParticipantRole();

    void setClassType(ChannelParticipantRoleClassType classType);
    ChannelParticipantRoleClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ChannelParticipantRole &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    ChannelParticipantRoleClassType m_classType;
};

Q_DECLARE_METATYPE(ChannelParticipantRole)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ChannelParticipantRole &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ChannelParticipantRole &item);

#endif // LQTG_TYPE_CHANNELPARTICIPANTROLE
