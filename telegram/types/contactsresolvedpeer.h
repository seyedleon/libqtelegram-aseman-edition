// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSRESOLVEDPEER
#define LQTG_TYPE_CONTACTSRESOLVEDPEER

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QList>
#include "chat.h"
#include "peer.h"
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT ContactsResolvedPeer : public TelegramTypeObject
{
public:
    enum ContactsResolvedPeerType {
        typeContactsResolvedPeer = 0x7f077ad9
    };

    ContactsResolvedPeer(ContactsResolvedPeerType classType = typeContactsResolvedPeer, InboundPkt *in = 0);
    ContactsResolvedPeer(InboundPkt *in);
    ContactsResolvedPeer(const Null&);
    virtual ~ContactsResolvedPeer();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setPeer(const Peer &peer);
    Peer peer() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(ContactsResolvedPeerType classType);
    ContactsResolvedPeerType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactsResolvedPeer &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QList<Chat> m_chats;
    Peer m_peer;
    QList<User> m_users;
    ContactsResolvedPeerType m_classType;
};

Q_DECLARE_METATYPE(ContactsResolvedPeer)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ContactsResolvedPeer &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ContactsResolvedPeer &item);

#endif // LQTG_TYPE_CONTACTSRESOLVEDPEER
