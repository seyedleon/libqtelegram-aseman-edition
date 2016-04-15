// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputcontact.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputContact::InputContact(InputContactClassType classType, InboundPkt *in) :
    m_clientId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputContact::InputContact(InboundPkt *in) :
    m_clientId(0),
    m_classType(typeInputPhoneContact)
{
    fetch(in);
}

InputContact::InputContact(const Null &null) :
    TelegramTypeObject(null),
    m_clientId(0),
    m_classType(typeInputPhoneContact)
{
}

InputContact::~InputContact() {
}

void InputContact::setClientId(qint64 clientId) {
    m_clientId = clientId;
}

qint64 InputContact::clientId() const {
    return m_clientId;
}

void InputContact::setFirstName(const QString &firstName) {
    m_firstName = firstName;
}

QString InputContact::firstName() const {
    return m_firstName;
}

void InputContact::setLastName(const QString &lastName) {
    m_lastName = lastName;
}

QString InputContact::lastName() const {
    return m_lastName;
}

void InputContact::setPhone(const QString &phone) {
    m_phone = phone;
}

QString InputContact::phone() const {
    return m_phone;
}

bool InputContact::operator ==(const InputContact &b) const {
    return m_classType == b.m_classType &&
           m_clientId == b.m_clientId &&
           m_firstName == b.m_firstName &&
           m_lastName == b.m_lastName &&
           m_phone == b.m_phone;
}

void InputContact::setClassType(InputContact::InputContactClassType classType) {
    m_classType = classType;
}

InputContact::InputContactClassType InputContact::classType() const {
    return m_classType;
}

bool InputContact::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputPhoneContact: {
        m_clientId = in->fetchLong();
        m_phone = in->fetchQString();
        m_firstName = in->fetchQString();
        m_lastName = in->fetchQString();
        m_classType = static_cast<InputContactClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputContact::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPhoneContact: {
        out->appendLong(m_clientId);
        out->appendQString(m_phone);
        out->appendQString(m_firstName);
        out->appendQString(m_lastName);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray InputContact::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const InputContact &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputContact::typeInputPhoneContact:
        stream << item.clientId();
        stream << item.phone();
        stream << item.firstName();
        stream << item.lastName();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputContact &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputContact::InputContactClassType>(type));
    switch(type) {
    case InputContact::typeInputPhoneContact: {
        qint64 m_client_id;
        stream >> m_client_id;
        item.setClientId(m_client_id);
        QString m_phone;
        stream >> m_phone;
        item.setPhone(m_phone);
        QString m_first_name;
        stream >> m_first_name;
        item.setFirstName(m_first_name);
        QString m_last_name;
        stream >> m_last_name;
        item.setLastName(m_last_name);
    }
        break;
    }
    return stream;
}

