// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEACTION
#define LQTG_TYPE_MESSAGEACTION

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include "photo.h"
#include <QString>
#include <QList>

class LIBQTELEGRAMSHARED_EXPORT MessageAction : public TelegramTypeObject
{
public:
    enum MessageActionType {
        typeMessageActionEmpty = 0xb6aef7b0,
        typeMessageActionChatCreate = 0xa6638b9a,
        typeMessageActionChatEditTitle = 0xb5a1ce5a,
        typeMessageActionChatEditPhoto = 0x7fcb13a8,
        typeMessageActionChatDeletePhoto = 0x95e3fbef,
        typeMessageActionChatAddUser = 0x488a7337,
        typeMessageActionChatDeleteUser = 0xb2ae9b0c,
        typeMessageActionChatJoinedByLink = 0xf89cf5e8,
        typeMessageActionChannelCreate = 0x95d2ac92,
        typeMessageActionChatMigrateTo = 0x51bdb021,
        typeMessageActionChannelMigrateFrom = 0xb055eaee
    };

    MessageAction(MessageActionType classType = typeMessageActionEmpty, InboundPkt *in = 0);
    MessageAction(InboundPkt *in);
    MessageAction(const Null&);
    virtual ~MessageAction();

    void setChannelId(qint32 channelId);
    qint32 channelId() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setPhoto(const Photo &photo);
    Photo photo() const;

    void setTitle(const QString &title);
    QString title() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setUsers(const QList<qint32> &users);
    QList<qint32> users() const;

    void setClassType(MessageActionType classType);
    MessageActionType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessageAction &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint32 m_channelId;
    qint32 m_chatId;
    qint32 m_inviterId;
    Photo m_photo;
    QString m_title;
    qint32 m_userId;
    QList<qint32> m_users;
    MessageActionType m_classType;
};

Q_DECLARE_METATYPE(MessageAction)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessageAction &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessageAction &item);

#endif // LQTG_TYPE_MESSAGEACTION
