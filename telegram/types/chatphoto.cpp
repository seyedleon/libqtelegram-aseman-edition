// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chatphoto.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

ChatPhoto::ChatPhoto(ChatPhotoClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ChatPhoto::ChatPhoto(InboundPkt *in) :
    m_classType(typeChatPhotoEmpty)
{
    fetch(in);
}

ChatPhoto::ChatPhoto(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeChatPhotoEmpty)
{
}

ChatPhoto::~ChatPhoto() {
}

void ChatPhoto::setPhotoBig(const FileLocation &photoBig) {
    m_photoBig = photoBig;
}

FileLocation ChatPhoto::photoBig() const {
    return m_photoBig;
}

void ChatPhoto::setPhotoSmall(const FileLocation &photoSmall) {
    m_photoSmall = photoSmall;
}

FileLocation ChatPhoto::photoSmall() const {
    return m_photoSmall;
}

bool ChatPhoto::operator ==(const ChatPhoto &b) const {
    return m_classType == b.m_classType &&
           m_photoBig == b.m_photoBig &&
           m_photoSmall == b.m_photoSmall;
}

void ChatPhoto::setClassType(ChatPhoto::ChatPhotoClassType classType) {
    m_classType = classType;
}

ChatPhoto::ChatPhotoClassType ChatPhoto::classType() const {
    return m_classType;
}

bool ChatPhoto::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatPhotoEmpty: {
        m_classType = static_cast<ChatPhotoClassType>(x);
        return true;
    }
        break;
    
    case typeChatPhoto: {
        m_photoSmall.fetch(in);
        m_photoBig.fetch(in);
        m_classType = static_cast<ChatPhotoClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ChatPhoto::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatPhotoEmpty: {
        return true;
    }
        break;
    
    case typeChatPhoto: {
        m_photoSmall.push(out);
        m_photoBig.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray ChatPhoto::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const ChatPhoto &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ChatPhoto::typeChatPhotoEmpty:
        
        break;
    case ChatPhoto::typeChatPhoto:
        stream << item.photoSmall();
        stream << item.photoBig();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, ChatPhoto &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ChatPhoto::ChatPhotoClassType>(type));
    switch(type) {
    case ChatPhoto::typeChatPhotoEmpty: {
        
    }
        break;
    case ChatPhoto::typeChatPhoto: {
        FileLocation m_photo_small;
        stream >> m_photo_small;
        item.setPhotoSmall(m_photo_small);
        FileLocation m_photo_big;
        stream >> m_photo_big;
        item.setPhotoBig(m_photo_big);
    }
        break;
    }
    return stream;
}

