// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputnotifypeer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputNotifyPeer::InputNotifyPeer(InputNotifyPeerClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputNotifyPeer::InputNotifyPeer(InboundPkt *in) :
    m_classType(typeInputNotifyPeer)
{
    fetch(in);
}

InputNotifyPeer::InputNotifyPeer(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeInputNotifyPeer)
{
}

InputNotifyPeer::~InputNotifyPeer() {
}

void InputNotifyPeer::setPeer(const InputPeer &peer) {
    m_peer = peer;
}

InputPeer InputNotifyPeer::peer() const {
    return m_peer;
}

bool InputNotifyPeer::operator ==(const InputNotifyPeer &b) const {
    return m_classType == b.m_classType &&
           m_peer == b.m_peer;
}

void InputNotifyPeer::setClassType(InputNotifyPeer::InputNotifyPeerClassType classType) {
    m_classType = classType;
}

InputNotifyPeer::InputNotifyPeerClassType InputNotifyPeer::classType() const {
    return m_classType;
}

bool InputNotifyPeer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputNotifyPeer: {
        m_peer.fetch(in);
        m_classType = static_cast<InputNotifyPeerClassType>(x);
        return true;
    }
        break;
    
    case typeInputNotifyUsers: {
        m_classType = static_cast<InputNotifyPeerClassType>(x);
        return true;
    }
        break;
    
    case typeInputNotifyChats: {
        m_classType = static_cast<InputNotifyPeerClassType>(x);
        return true;
    }
        break;
    
    case typeInputNotifyAll: {
        m_classType = static_cast<InputNotifyPeerClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputNotifyPeer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputNotifyPeer: {
        m_peer.push(out);
        return true;
    }
        break;
    
    case typeInputNotifyUsers: {
        return true;
    }
        break;
    
    case typeInputNotifyChats: {
        return true;
    }
        break;
    
    case typeInputNotifyAll: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray InputNotifyPeer::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const InputNotifyPeer &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputNotifyPeer::typeInputNotifyPeer:
        stream << item.peer();
        break;
    case InputNotifyPeer::typeInputNotifyUsers:
        
        break;
    case InputNotifyPeer::typeInputNotifyChats:
        
        break;
    case InputNotifyPeer::typeInputNotifyAll:
        
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputNotifyPeer &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputNotifyPeer::InputNotifyPeerClassType>(type));
    switch(type) {
    case InputNotifyPeer::typeInputNotifyPeer: {
        InputPeer m_peer;
        stream >> m_peer;
        item.setPeer(m_peer);
    }
        break;
    case InputNotifyPeer::typeInputNotifyUsers: {
        
    }
        break;
    case InputNotifyPeer::typeInputNotifyChats: {
        
    }
        break;
    case InputNotifyPeer::typeInputNotifyAll: {
        
    }
        break;
    }
    return stream;
}

