// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "encryptedmessage.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

EncryptedMessage::EncryptedMessage(EncryptedMessageClassType classType, InboundPkt *in) :
    m_chatId(0),
    m_date(0),
    m_randomId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

EncryptedMessage::EncryptedMessage(InboundPkt *in) :
    m_chatId(0),
    m_date(0),
    m_randomId(0),
    m_classType(typeEncryptedMessage)
{
    fetch(in);
}

EncryptedMessage::EncryptedMessage(const Null &null) :
    TelegramTypeObject(null),
    m_chatId(0),
    m_date(0),
    m_randomId(0),
    m_classType(typeEncryptedMessage)
{
}

EncryptedMessage::~EncryptedMessage() {
}

void EncryptedMessage::setBytes(const QByteArray &bytes) {
    m_bytes = bytes;
}

QByteArray EncryptedMessage::bytes() const {
    return m_bytes;
}

void EncryptedMessage::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 EncryptedMessage::chatId() const {
    return m_chatId;
}

void EncryptedMessage::setDate(qint32 date) {
    m_date = date;
}

qint32 EncryptedMessage::date() const {
    return m_date;
}

void EncryptedMessage::setFile(const EncryptedFile &file) {
    m_file = file;
}

EncryptedFile EncryptedMessage::file() const {
    return m_file;
}

void EncryptedMessage::setRandomId(qint64 randomId) {
    m_randomId = randomId;
}

qint64 EncryptedMessage::randomId() const {
    return m_randomId;
}

bool EncryptedMessage::operator ==(const EncryptedMessage &b) const {
    return m_classType == b.m_classType &&
           m_bytes == b.m_bytes &&
           m_chatId == b.m_chatId &&
           m_date == b.m_date &&
           m_file == b.m_file &&
           m_randomId == b.m_randomId;
}

void EncryptedMessage::setClassType(EncryptedMessage::EncryptedMessageClassType classType) {
    m_classType = classType;
}

EncryptedMessage::EncryptedMessageClassType EncryptedMessage::classType() const {
    return m_classType;
}

bool EncryptedMessage::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeEncryptedMessage: {
        m_randomId = in->fetchLong();
        m_chatId = in->fetchInt();
        m_date = in->fetchInt();
        m_bytes = in->fetchBytes();
        m_file.fetch(in);
        m_classType = static_cast<EncryptedMessageClassType>(x);
        return true;
    }
        break;
    
    case typeEncryptedMessageService: {
        m_randomId = in->fetchLong();
        m_chatId = in->fetchInt();
        m_date = in->fetchInt();
        m_bytes = in->fetchBytes();
        m_classType = static_cast<EncryptedMessageClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool EncryptedMessage::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeEncryptedMessage: {
        out->appendLong(m_randomId);
        out->appendInt(m_chatId);
        out->appendInt(m_date);
        out->appendBytes(m_bytes);
        m_file.push(out);
        return true;
    }
        break;
    
    case typeEncryptedMessageService: {
        out->appendLong(m_randomId);
        out->appendInt(m_chatId);
        out->appendInt(m_date);
        out->appendBytes(m_bytes);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray EncryptedMessage::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const EncryptedMessage &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case EncryptedMessage::typeEncryptedMessage:
        stream << item.randomId();
        stream << item.chatId();
        stream << item.date();
        stream << item.bytes();
        stream << item.file();
        break;
    case EncryptedMessage::typeEncryptedMessageService:
        stream << item.randomId();
        stream << item.chatId();
        stream << item.date();
        stream << item.bytes();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, EncryptedMessage &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<EncryptedMessage::EncryptedMessageClassType>(type));
    switch(type) {
    case EncryptedMessage::typeEncryptedMessage: {
        qint64 m_random_id;
        stream >> m_random_id;
        item.setRandomId(m_random_id);
        qint32 m_chat_id;
        stream >> m_chat_id;
        item.setChatId(m_chat_id);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        QByteArray m_bytes;
        stream >> m_bytes;
        item.setBytes(m_bytes);
        EncryptedFile m_file;
        stream >> m_file;
        item.setFile(m_file);
    }
        break;
    case EncryptedMessage::typeEncryptedMessageService: {
        qint64 m_random_id;
        stream >> m_random_id;
        item.setRandomId(m_random_id);
        qint32 m_chat_id;
        stream >> m_chat_id;
        item.setChatId(m_chat_id);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        QByteArray m_bytes;
        stream >> m_bytes;
        item.setBytes(m_bytes);
    }
        break;
    }
    return stream;
}

