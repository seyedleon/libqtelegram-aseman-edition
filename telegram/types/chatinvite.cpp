// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chatinvite.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

ChatInvite::ChatInvite(ChatInviteType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ChatInvite::ChatInvite(InboundPkt *in) :
    m_flags(0),
    m_classType(typeChatInviteAlready)
{
    fetch(in);
}

ChatInvite::ChatInvite(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeChatInviteAlready)
{
}

ChatInvite::~ChatInvite() {
}

void ChatInvite::setBroadcast(bool broadcast) {
    if(broadcast) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

bool ChatInvite::broadcast() const {
    return (m_flags & 1<<1);
}

void ChatInvite::setChannel(bool channel) {
    if(channel) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool ChatInvite::channel() const {
    return (m_flags & 1<<0);
}

void ChatInvite::setChat(const Chat &chat) {
    m_chat = chat;
}

Chat ChatInvite::chat() const {
    return m_chat;
}

void ChatInvite::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 ChatInvite::flags() const {
    return m_flags;
}

void ChatInvite::setMegagroup(bool megagroup) {
    if(megagroup) m_flags = (m_flags | (1<<3));
    else m_flags = (m_flags & ~(1<<3));
}

bool ChatInvite::megagroup() const {
    return (m_flags & 1<<3);
}

void ChatInvite::setPublicValue(bool publicValue) {
    if(publicValue) m_flags = (m_flags | (1<<2));
    else m_flags = (m_flags & ~(1<<2));
}

bool ChatInvite::publicValue() const {
    return (m_flags & 1<<2);
}

void ChatInvite::setTitle(const QString &title) {
    m_title = title;
}

QString ChatInvite::title() const {
    return m_title;
}

bool ChatInvite::operator ==(const ChatInvite &b) const {
    return m_classType == b.m_classType &&
           m_chat == b.m_chat &&
           m_flags == b.m_flags &&
           m_title == b.m_title;
}

void ChatInvite::setClassType(ChatInvite::ChatInviteType classType) {
    m_classType = classType;
}

ChatInvite::ChatInviteType ChatInvite::classType() const {
    return m_classType;
}

bool ChatInvite::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatInviteAlready: {
        m_chat.fetch(in);
        m_classType = static_cast<ChatInviteType>(x);
        return true;
    }
        break;
    
    case typeChatInvite: {
        m_flags = in->fetchInt();
        m_title = in->fetchQString();
        m_classType = static_cast<ChatInviteType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ChatInvite::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatInviteAlready: {
        m_chat.push(out);
        return true;
    }
        break;
    
    case typeChatInvite: {
        out->appendInt(m_flags);
        out->appendQString(m_title);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const ChatInvite &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ChatInvite::typeChatInviteAlready:
        stream << item.chat();
        break;
    case ChatInvite::typeChatInvite:
        stream << item.flags();
        stream << item.title();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, ChatInvite &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ChatInvite::ChatInviteType>(type));
    switch(type) {
    case ChatInvite::typeChatInviteAlready: {
        Chat m_chat;
        stream >> m_chat;
        item.setChat(m_chat);
    }
        break;
    case ChatInvite::typeChatInvite: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
    }
        break;
    }
    return stream;
}

