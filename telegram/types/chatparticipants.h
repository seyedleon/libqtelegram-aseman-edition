// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHATPARTICIPANTS
#define LQTG_TYPE_CHATPARTICIPANTS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include <QList>
#include "chatparticipant.h"

class LIBQTELEGRAMSHARED_EXPORT ChatParticipants : public TelegramTypeObject
{
public:
    enum ChatParticipantsType {
        typeChatParticipantsForbidden = 0xfc900c2b,
        typeChatParticipants = 0x3f460fed
    };

    ChatParticipants(ChatParticipantsType classType = typeChatParticipantsForbidden, InboundPkt *in = 0);
    ChatParticipants(InboundPkt *in);
    ChatParticipants(const Null&);
    virtual ~ChatParticipants();

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setParticipants(const QList<ChatParticipant> &participants);
    QList<ChatParticipant> participants() const;

    void setSelfParticipant(const ChatParticipant &selfParticipant);
    ChatParticipant selfParticipant() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(ChatParticipantsType classType);
    ChatParticipantsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ChatParticipants &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint32 m_chatId;
    qint32 m_flags;
    QList<ChatParticipant> m_participants;
    ChatParticipant m_selfParticipant;
    qint32 m_version;
    ChatParticipantsType m_classType;
};

Q_DECLARE_METATYPE(ChatParticipants)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ChatParticipants &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ChatParticipants &item);

#endif // LQTG_TYPE_CHATPARTICIPANTS
