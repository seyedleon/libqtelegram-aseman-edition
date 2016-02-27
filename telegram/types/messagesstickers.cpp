// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesstickers.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessagesStickers::MessagesStickers(MessagesStickersType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesStickers::MessagesStickers(InboundPkt *in) :
    m_classType(typeMessagesStickersNotModified)
{
    fetch(in);
}

MessagesStickers::MessagesStickers(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeMessagesStickersNotModified)
{
}

MessagesStickers::~MessagesStickers() {
}

void MessagesStickers::setHash(const QString &hash) {
    m_hash = hash;
}

QString MessagesStickers::hash() const {
    return m_hash;
}

void MessagesStickers::setStickers(const QList<Document> &stickers) {
    m_stickers = stickers;
}

QList<Document> MessagesStickers::stickers() const {
    return m_stickers;
}

bool MessagesStickers::operator ==(const MessagesStickers &b) const {
    return m_classType == b.m_classType &&
           m_hash == b.m_hash &&
           m_stickers == b.m_stickers;
}

void MessagesStickers::setClassType(MessagesStickers::MessagesStickersType classType) {
    m_classType = classType;
}

MessagesStickers::MessagesStickersType MessagesStickers::classType() const {
    return m_classType;
}

bool MessagesStickers::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesStickersNotModified: {
        m_classType = static_cast<MessagesStickersType>(x);
        return true;
    }
        break;
    
    case typeMessagesStickers: {
        m_hash = in->fetchQString();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_stickers_length = in->fetchInt();
        m_stickers.clear();
        for (qint32 i = 0; i < m_stickers_length; i++) {
            Document type;
            type.fetch(in);
            m_stickers.append(type);
        }
        m_classType = static_cast<MessagesStickersType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesStickers::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesStickersNotModified: {
        return true;
    }
        break;
    
    case typeMessagesStickers: {
        out->appendQString(m_hash);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_stickers.count());
        for (qint32 i = 0; i < m_stickers.count(); i++) {
            m_stickers[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const MessagesStickers &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesStickers::typeMessagesStickersNotModified:
        
        break;
    case MessagesStickers::typeMessagesStickers:
        stream << item.hash();
        stream << item.stickers();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessagesStickers &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesStickers::MessagesStickersType>(type));
    switch(type) {
    case MessagesStickers::typeMessagesStickersNotModified: {
        
    }
        break;
    case MessagesStickers::typeMessagesStickers: {
        QString m_hash;
        stream >> m_hash;
        item.setHash(m_hash);
        QList<Document> m_stickers;
        stream >> m_stickers;
        item.setStickers(m_stickers);
    }
        break;
    }
    return stream;
}

