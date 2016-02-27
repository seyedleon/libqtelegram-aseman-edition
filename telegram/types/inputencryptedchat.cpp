// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputencryptedchat.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputEncryptedChat::InputEncryptedChat(InputEncryptedChatType classType, InboundPkt *in) :
    m_accessHash(0),
    m_chatId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputEncryptedChat::InputEncryptedChat(InboundPkt *in) :
    m_accessHash(0),
    m_chatId(0),
    m_classType(typeInputEncryptedChat)
{
    fetch(in);
}

InputEncryptedChat::InputEncryptedChat(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_chatId(0),
    m_classType(typeInputEncryptedChat)
{
}

InputEncryptedChat::~InputEncryptedChat() {
}

void InputEncryptedChat::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 InputEncryptedChat::accessHash() const {
    return m_accessHash;
}

void InputEncryptedChat::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 InputEncryptedChat::chatId() const {
    return m_chatId;
}

bool InputEncryptedChat::operator ==(const InputEncryptedChat &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_chatId == b.m_chatId;
}

void InputEncryptedChat::setClassType(InputEncryptedChat::InputEncryptedChatType classType) {
    m_classType = classType;
}

InputEncryptedChat::InputEncryptedChatType InputEncryptedChat::classType() const {
    return m_classType;
}

bool InputEncryptedChat::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputEncryptedChat: {
        m_chatId = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputEncryptedChatType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputEncryptedChat::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputEncryptedChat: {
        out->appendInt(m_chatId);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const InputEncryptedChat &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputEncryptedChat::typeInputEncryptedChat:
        stream << item.chatId();
        stream << item.accessHash();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputEncryptedChat &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputEncryptedChat::InputEncryptedChatType>(type));
    switch(type) {
    case InputEncryptedChat::typeInputEncryptedChat: {
        qint32 m_chat_id;
        stream >> m_chat_id;
        item.setChatId(m_chat_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
    }
        break;
    }
    return stream;
}

