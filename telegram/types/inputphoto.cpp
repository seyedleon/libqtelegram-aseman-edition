// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputphoto.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputPhoto::InputPhoto(InputPhotoClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputPhoto::InputPhoto(InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_classType(typeInputPhotoEmpty)
{
    fetch(in);
}

InputPhoto::InputPhoto(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_id(0),
    m_classType(typeInputPhotoEmpty)
{
}

InputPhoto::~InputPhoto() {
}

void InputPhoto::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 InputPhoto::accessHash() const {
    return m_accessHash;
}

void InputPhoto::setId(qint64 id) {
    m_id = id;
}

qint64 InputPhoto::id() const {
    return m_id;
}

bool InputPhoto::operator ==(const InputPhoto &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_id == b.m_id;
}

void InputPhoto::setClassType(InputPhoto::InputPhotoClassType classType) {
    m_classType = classType;
}

InputPhoto::InputPhotoClassType InputPhoto::classType() const {
    return m_classType;
}

bool InputPhoto::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputPhotoEmpty: {
        m_classType = static_cast<InputPhotoClassType>(x);
        return true;
    }
        break;
    
    case typeInputPhoto: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputPhotoClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputPhoto::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPhotoEmpty: {
        return true;
    }
        break;
    
    case typeInputPhoto: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray InputPhoto::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const InputPhoto &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputPhoto::typeInputPhotoEmpty:
        
        break;
    case InputPhoto::typeInputPhoto:
        stream << item.id();
        stream << item.accessHash();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputPhoto &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputPhoto::InputPhotoClassType>(type));
    switch(type) {
    case InputPhoto::typeInputPhotoEmpty: {
        
    }
        break;
    case InputPhoto::typeInputPhoto: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
    }
        break;
    }
    return stream;
}

