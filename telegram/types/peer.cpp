// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "peer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

Peer::Peer(PeerType classType, InboundPkt *in) :
    m_channelId(0),
    m_chatId(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Peer::Peer(InboundPkt *in) :
    m_channelId(0),
    m_chatId(0),
    m_userId(0),
    m_classType(typePeerUser)
{
    fetch(in);
}

Peer::Peer(const Null &null) :
    TelegramTypeObject(null),
    m_channelId(0),
    m_chatId(0),
    m_userId(0),
    m_classType(typePeerUser)
{
}

Peer::~Peer() {
}

void Peer::setChannelId(qint32 channelId) {
    m_channelId = channelId;
}

qint32 Peer::channelId() const {
    return m_channelId;
}

void Peer::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 Peer::chatId() const {
    return m_chatId;
}

void Peer::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 Peer::userId() const {
    return m_userId;
}

bool Peer::operator ==(const Peer &b) const {
    return m_classType == b.m_classType &&
           m_channelId == b.m_channelId &&
           m_chatId == b.m_chatId &&
           m_userId == b.m_userId;
}

void Peer::setClassType(Peer::PeerType classType) {
    m_classType = classType;
}

Peer::PeerType Peer::classType() const {
    return m_classType;
}

bool Peer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePeerUser: {
        m_userId = in->fetchInt();
        m_classType = static_cast<PeerType>(x);
        return true;
    }
        break;
    
    case typePeerChat: {
        m_chatId = in->fetchInt();
        m_classType = static_cast<PeerType>(x);
        return true;
    }
        break;
    
    case typePeerChannel: {
        m_channelId = in->fetchInt();
        m_classType = static_cast<PeerType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Peer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePeerUser: {
        out->appendInt(m_userId);
        return true;
    }
        break;
    
    case typePeerChat: {
        out->appendInt(m_chatId);
        return true;
    }
        break;
    
    case typePeerChannel: {
        out->appendInt(m_channelId);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const Peer &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case Peer::typePeerUser:
        stream << item.userId();
        break;
    case Peer::typePeerChat:
        stream << item.chatId();
        break;
    case Peer::typePeerChannel:
        stream << item.channelId();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Peer &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<Peer::PeerType>(type));
    switch(type) {
    case Peer::typePeerUser: {
        qint32 m_user_id;
        stream >> m_user_id;
        item.setUserId(m_user_id);
    }
        break;
    case Peer::typePeerChat: {
        qint32 m_chat_id;
        stream >> m_chat_id;
        item.setChatId(m_chat_id);
    }
        break;
    case Peer::typePeerChannel: {
        qint32 m_channel_id;
        stream >> m_channel_id;
        item.setChannelId(m_channel_id);
    }
        break;
    }
    return stream;
}

