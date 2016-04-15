// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messageaction.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessageAction::MessageAction(MessageActionClassType classType, InboundPkt *in) :
    m_channelId(0),
    m_chatId(0),
    m_inviterId(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessageAction::MessageAction(InboundPkt *in) :
    m_channelId(0),
    m_chatId(0),
    m_inviterId(0),
    m_userId(0),
    m_classType(typeMessageActionEmpty)
{
    fetch(in);
}

MessageAction::MessageAction(const Null &null) :
    TelegramTypeObject(null),
    m_channelId(0),
    m_chatId(0),
    m_inviterId(0),
    m_userId(0),
    m_classType(typeMessageActionEmpty)
{
}

MessageAction::~MessageAction() {
}

void MessageAction::setChannelId(qint32 channelId) {
    m_channelId = channelId;
}

qint32 MessageAction::channelId() const {
    return m_channelId;
}

void MessageAction::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 MessageAction::chatId() const {
    return m_chatId;
}

void MessageAction::setInviterId(qint32 inviterId) {
    m_inviterId = inviterId;
}

qint32 MessageAction::inviterId() const {
    return m_inviterId;
}

void MessageAction::setPhoto(const Photo &photo) {
    m_photo = photo;
}

Photo MessageAction::photo() const {
    return m_photo;
}

void MessageAction::setTitle(const QString &title) {
    m_title = title;
}

QString MessageAction::title() const {
    return m_title;
}

void MessageAction::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 MessageAction::userId() const {
    return m_userId;
}

void MessageAction::setUsers(const QList<qint32> &users) {
    m_users = users;
}

QList<qint32> MessageAction::users() const {
    return m_users;
}

bool MessageAction::operator ==(const MessageAction &b) const {
    return m_classType == b.m_classType &&
           m_channelId == b.m_channelId &&
           m_chatId == b.m_chatId &&
           m_inviterId == b.m_inviterId &&
           m_photo == b.m_photo &&
           m_title == b.m_title &&
           m_userId == b.m_userId &&
           m_users == b.m_users;
}

void MessageAction::setClassType(MessageAction::MessageActionClassType classType) {
    m_classType = classType;
}

MessageAction::MessageActionClassType MessageAction::classType() const {
    return m_classType;
}

bool MessageAction::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessageActionEmpty: {
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatCreate: {
        m_title = in->fetchQString();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            qint32 type;
            type = in->fetchInt();
            m_users.append(type);
        }
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatEditTitle: {
        m_title = in->fetchQString();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatEditPhoto: {
        m_photo.fetch(in);
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatDeletePhoto: {
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatAddUser: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            qint32 type;
            type = in->fetchInt();
            m_users.append(type);
        }
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatDeleteUser: {
        m_userId = in->fetchInt();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatJoinedByLink: {
        m_inviterId = in->fetchInt();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChannelCreate: {
        m_title = in->fetchQString();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatMigrateTo: {
        m_channelId = in->fetchInt();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChannelMigrateFrom: {
        m_title = in->fetchQString();
        m_chatId = in->fetchInt();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionPinMessage: {
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessageAction::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessageActionEmpty: {
        return true;
    }
        break;
    
    case typeMessageActionChatCreate: {
        out->appendQString(m_title);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            out->appendInt(m_users[i]);
        }
        return true;
    }
        break;
    
    case typeMessageActionChatEditTitle: {
        out->appendQString(m_title);
        return true;
    }
        break;
    
    case typeMessageActionChatEditPhoto: {
        m_photo.push(out);
        return true;
    }
        break;
    
    case typeMessageActionChatDeletePhoto: {
        return true;
    }
        break;
    
    case typeMessageActionChatAddUser: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            out->appendInt(m_users[i]);
        }
        return true;
    }
        break;
    
    case typeMessageActionChatDeleteUser: {
        out->appendInt(m_userId);
        return true;
    }
        break;
    
    case typeMessageActionChatJoinedByLink: {
        out->appendInt(m_inviterId);
        return true;
    }
        break;
    
    case typeMessageActionChannelCreate: {
        out->appendQString(m_title);
        return true;
    }
        break;
    
    case typeMessageActionChatMigrateTo: {
        out->appendInt(m_channelId);
        return true;
    }
        break;
    
    case typeMessageActionChannelMigrateFrom: {
        out->appendQString(m_title);
        out->appendInt(m_chatId);
        return true;
    }
        break;
    
    case typeMessageActionPinMessage: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray MessageAction::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const MessageAction &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessageAction::typeMessageActionEmpty:
        
        break;
    case MessageAction::typeMessageActionChatCreate:
        stream << item.title();
        stream << item.users();
        break;
    case MessageAction::typeMessageActionChatEditTitle:
        stream << item.title();
        break;
    case MessageAction::typeMessageActionChatEditPhoto:
        stream << item.photo();
        break;
    case MessageAction::typeMessageActionChatDeletePhoto:
        
        break;
    case MessageAction::typeMessageActionChatAddUser:
        stream << item.users();
        break;
    case MessageAction::typeMessageActionChatDeleteUser:
        stream << item.userId();
        break;
    case MessageAction::typeMessageActionChatJoinedByLink:
        stream << item.inviterId();
        break;
    case MessageAction::typeMessageActionChannelCreate:
        stream << item.title();
        break;
    case MessageAction::typeMessageActionChatMigrateTo:
        stream << item.channelId();
        break;
    case MessageAction::typeMessageActionChannelMigrateFrom:
        stream << item.title();
        stream << item.chatId();
        break;
    case MessageAction::typeMessageActionPinMessage:
        
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessageAction &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessageAction::MessageActionClassType>(type));
    switch(type) {
    case MessageAction::typeMessageActionEmpty: {
        
    }
        break;
    case MessageAction::typeMessageActionChatCreate: {
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QList<qint32> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case MessageAction::typeMessageActionChatEditTitle: {
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
    }
        break;
    case MessageAction::typeMessageActionChatEditPhoto: {
        Photo m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
    }
        break;
    case MessageAction::typeMessageActionChatDeletePhoto: {
        
    }
        break;
    case MessageAction::typeMessageActionChatAddUser: {
        QList<qint32> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case MessageAction::typeMessageActionChatDeleteUser: {
        qint32 m_user_id;
        stream >> m_user_id;
        item.setUserId(m_user_id);
    }
        break;
    case MessageAction::typeMessageActionChatJoinedByLink: {
        qint32 m_inviter_id;
        stream >> m_inviter_id;
        item.setInviterId(m_inviter_id);
    }
        break;
    case MessageAction::typeMessageActionChannelCreate: {
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
    }
        break;
    case MessageAction::typeMessageActionChatMigrateTo: {
        qint32 m_channel_id;
        stream >> m_channel_id;
        item.setChannelId(m_channel_id);
    }
        break;
    case MessageAction::typeMessageActionChannelMigrateFrom: {
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        qint32 m_chat_id;
        stream >> m_chat_id;
        item.setChatId(m_chat_id);
    }
        break;
    case MessageAction::typeMessageActionPinMessage: {
        
    }
        break;
    }
    return stream;
}

