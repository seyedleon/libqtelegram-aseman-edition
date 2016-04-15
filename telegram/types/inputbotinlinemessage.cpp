// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputbotinlinemessage.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputBotInlineMessage::InputBotInlineMessage(InputBotInlineMessageClassType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputBotInlineMessage::InputBotInlineMessage(InboundPkt *in) :
    m_flags(0),
    m_classType(typeInputBotInlineMessageMediaAuto)
{
    fetch(in);
}

InputBotInlineMessage::InputBotInlineMessage(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeInputBotInlineMessageMediaAuto)
{
}

InputBotInlineMessage::~InputBotInlineMessage() {
}

void InputBotInlineMessage::setAddress(const QString &address) {
    m_address = address;
}

QString InputBotInlineMessage::address() const {
    return m_address;
}

void InputBotInlineMessage::setCaption(const QString &caption) {
    m_caption = caption;
}

QString InputBotInlineMessage::caption() const {
    return m_caption;
}

void InputBotInlineMessage::setEntities(const QList<MessageEntity> &entities) {
    m_entities = entities;
}

QList<MessageEntity> InputBotInlineMessage::entities() const {
    return m_entities;
}

void InputBotInlineMessage::setFirstName(const QString &firstName) {
    m_firstName = firstName;
}

QString InputBotInlineMessage::firstName() const {
    return m_firstName;
}

void InputBotInlineMessage::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 InputBotInlineMessage::flags() const {
    return m_flags;
}

void InputBotInlineMessage::setGeoPoint(const InputGeoPoint &geoPoint) {
    m_geoPoint = geoPoint;
}

InputGeoPoint InputBotInlineMessage::geoPoint() const {
    return m_geoPoint;
}

void InputBotInlineMessage::setLastName(const QString &lastName) {
    m_lastName = lastName;
}

QString InputBotInlineMessage::lastName() const {
    return m_lastName;
}

void InputBotInlineMessage::setMessage(const QString &message) {
    m_message = message;
}

QString InputBotInlineMessage::message() const {
    return m_message;
}

void InputBotInlineMessage::setNoWebpage(bool noWebpage) {
    if(noWebpage) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool InputBotInlineMessage::noWebpage() const {
    return (m_flags & 1<<0);
}

void InputBotInlineMessage::setPhoneNumber(const QString &phoneNumber) {
    m_phoneNumber = phoneNumber;
}

QString InputBotInlineMessage::phoneNumber() const {
    return m_phoneNumber;
}

void InputBotInlineMessage::setProvider(const QString &provider) {
    m_provider = provider;
}

QString InputBotInlineMessage::provider() const {
    return m_provider;
}

void InputBotInlineMessage::setReplyMarkup(const ReplyMarkup &replyMarkup) {
    m_replyMarkup = replyMarkup;
}

ReplyMarkup InputBotInlineMessage::replyMarkup() const {
    return m_replyMarkup;
}

void InputBotInlineMessage::setTitle(const QString &title) {
    m_title = title;
}

QString InputBotInlineMessage::title() const {
    return m_title;
}

void InputBotInlineMessage::setVenueId(const QString &venueId) {
    m_venueId = venueId;
}

QString InputBotInlineMessage::venueId() const {
    return m_venueId;
}

bool InputBotInlineMessage::operator ==(const InputBotInlineMessage &b) const {
    return m_classType == b.m_classType &&
           m_address == b.m_address &&
           m_caption == b.m_caption &&
           m_entities == b.m_entities &&
           m_firstName == b.m_firstName &&
           m_flags == b.m_flags &&
           m_geoPoint == b.m_geoPoint &&
           m_lastName == b.m_lastName &&
           m_message == b.m_message &&
           m_phoneNumber == b.m_phoneNumber &&
           m_provider == b.m_provider &&
           m_replyMarkup == b.m_replyMarkup &&
           m_title == b.m_title &&
           m_venueId == b.m_venueId;
}

void InputBotInlineMessage::setClassType(InputBotInlineMessage::InputBotInlineMessageClassType classType) {
    m_classType = classType;
}

InputBotInlineMessage::InputBotInlineMessageClassType InputBotInlineMessage::classType() const {
    return m_classType;
}

bool InputBotInlineMessage::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputBotInlineMessageMediaAuto: {
        m_flags = in->fetchInt();
        m_caption = in->fetchQString();
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageText: {
        m_flags = in->fetchInt();
        m_message = in->fetchQString();
        if(m_flags & 1<<1) {
            if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
            qint32 m_entities_length = in->fetchInt();
            m_entities.clear();
            for (qint32 i = 0; i < m_entities_length; i++) {
                MessageEntity type;
                if(m_flags & 1<<1) {
                type.fetch(in);
            }
                m_entities.append(type);
            }
        }
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaGeo: {
        m_flags = in->fetchInt();
        m_geoPoint.fetch(in);
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaVenue: {
        m_flags = in->fetchInt();
        m_geoPoint.fetch(in);
        m_title = in->fetchQString();
        m_address = in->fetchQString();
        m_provider = in->fetchQString();
        m_venueId = in->fetchQString();
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaContact: {
        m_flags = in->fetchInt();
        m_phoneNumber = in->fetchQString();
        m_firstName = in->fetchQString();
        m_lastName = in->fetchQString();
        if(m_flags & 1<<2) {
            m_replyMarkup.fetch(in);
        }
        m_classType = static_cast<InputBotInlineMessageClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputBotInlineMessage::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputBotInlineMessageMediaAuto: {
        out->appendInt(m_flags);
        out->appendQString(m_caption);
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageText: {
        out->appendInt(m_flags);
        out->appendQString(m_message);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_entities.count());
        for (qint32 i = 0; i < m_entities.count(); i++) {
            m_entities[i].push(out);
        }
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaGeo: {
        out->appendInt(m_flags);
        m_geoPoint.push(out);
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaVenue: {
        out->appendInt(m_flags);
        m_geoPoint.push(out);
        out->appendQString(m_title);
        out->appendQString(m_address);
        out->appendQString(m_provider);
        out->appendQString(m_venueId);
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageMediaContact: {
        out->appendInt(m_flags);
        out->appendQString(m_phoneNumber);
        out->appendQString(m_firstName);
        out->appendQString(m_lastName);
        m_replyMarkup.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray InputBotInlineMessage::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const InputBotInlineMessage &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputBotInlineMessage::typeInputBotInlineMessageMediaAuto:
        stream << item.flags();
        stream << item.caption();
        stream << item.replyMarkup();
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageText:
        stream << item.flags();
        stream << item.message();
        stream << item.entities();
        stream << item.replyMarkup();
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaGeo:
        stream << item.flags();
        stream << item.geoPoint();
        stream << item.replyMarkup();
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaVenue:
        stream << item.flags();
        stream << item.geoPoint();
        stream << item.title();
        stream << item.address();
        stream << item.provider();
        stream << item.venueId();
        stream << item.replyMarkup();
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaContact:
        stream << item.flags();
        stream << item.phoneNumber();
        stream << item.firstName();
        stream << item.lastName();
        stream << item.replyMarkup();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputBotInlineMessage &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputBotInlineMessage::InputBotInlineMessageClassType>(type));
    switch(type) {
    case InputBotInlineMessage::typeInputBotInlineMessageMediaAuto: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_caption;
        stream >> m_caption;
        item.setCaption(m_caption);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageText: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_message;
        stream >> m_message;
        item.setMessage(m_message);
        QList<MessageEntity> m_entities;
        stream >> m_entities;
        item.setEntities(m_entities);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaGeo: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        InputGeoPoint m_geo_point;
        stream >> m_geo_point;
        item.setGeoPoint(m_geo_point);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaVenue: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        InputGeoPoint m_geo_point;
        stream >> m_geo_point;
        item.setGeoPoint(m_geo_point);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QString m_address;
        stream >> m_address;
        item.setAddress(m_address);
        QString m_provider;
        stream >> m_provider;
        item.setProvider(m_provider);
        QString m_venue_id;
        stream >> m_venue_id;
        item.setVenueId(m_venue_id);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    case InputBotInlineMessage::typeInputBotInlineMessageMediaContact: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_phone_number;
        stream >> m_phone_number;
        item.setPhoneNumber(m_phone_number);
        QString m_first_name;
        stream >> m_first_name;
        item.setFirstName(m_first_name);
        QString m_last_name;
        stream >> m_last_name;
        item.setLastName(m_last_name);
        ReplyMarkup m_reply_markup;
        stream >> m_reply_markup;
        item.setReplyMarkup(m_reply_markup);
    }
        break;
    }
    return stream;
}

