// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELPARTICIPANT
#define LQTG_TYPE_CHANNELPARTICIPANT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT ChannelParticipant : public TelegramTypeObject
{
public:
    enum ChannelParticipantType {
        typeChannelParticipant = 0x15ebac1d,
        typeChannelParticipantSelf = 0xa3289a6d,
        typeChannelParticipantModerator = 0x91057fef,
        typeChannelParticipantEditor = 0x98192d61,
        typeChannelParticipantKicked = 0x8cc5e69a,
        typeChannelParticipantCreator = 0xe3e2e1f9
    };

    ChannelParticipant(ChannelParticipantType classType = typeChannelParticipant, InboundPkt *in = 0);
    ChannelParticipant(InboundPkt *in);
    ChannelParticipant(const Null&);
    virtual ~ChannelParticipant();

    void setDate(qint32 date);
    qint32 date() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setKickedBy(qint32 kickedBy);
    qint32 kickedBy() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ChannelParticipantType classType);
    ChannelParticipantType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ChannelParticipant &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint32 m_date;
    qint32 m_inviterId;
    qint32 m_kickedBy;
    qint32 m_userId;
    ChannelParticipantType m_classType;
};

Q_DECLARE_METATYPE(ChannelParticipant)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ChannelParticipant &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ChannelParticipant &item);

#endif // LQTG_TYPE_CHANNELPARTICIPANT
