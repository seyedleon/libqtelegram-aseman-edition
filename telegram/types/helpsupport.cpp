// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "helpsupport.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

HelpSupport::HelpSupport(HelpSupportType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

HelpSupport::HelpSupport(InboundPkt *in) :
    m_classType(typeHelpSupport)
{
    fetch(in);
}

HelpSupport::HelpSupport(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeHelpSupport)
{
}

HelpSupport::~HelpSupport() {
}

void HelpSupport::setPhoneNumber(const QString &phoneNumber) {
    m_phoneNumber = phoneNumber;
}

QString HelpSupport::phoneNumber() const {
    return m_phoneNumber;
}

void HelpSupport::setUser(const User &user) {
    m_user = user;
}

User HelpSupport::user() const {
    return m_user;
}

bool HelpSupport::operator ==(const HelpSupport &b) const {
    return m_classType == b.m_classType &&
           m_phoneNumber == b.m_phoneNumber &&
           m_user == b.m_user;
}

void HelpSupport::setClassType(HelpSupport::HelpSupportType classType) {
    m_classType = classType;
}

HelpSupport::HelpSupportType HelpSupport::classType() const {
    return m_classType;
}

bool HelpSupport::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeHelpSupport: {
        m_phoneNumber = in->fetchQString();
        m_user.fetch(in);
        m_classType = static_cast<HelpSupportType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool HelpSupport::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeHelpSupport: {
        out->appendQString(m_phoneNumber);
        m_user.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const HelpSupport &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case HelpSupport::typeHelpSupport:
        stream << item.phoneNumber();
        stream << item.user();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, HelpSupport &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<HelpSupport::HelpSupportType>(type));
    switch(type) {
    case HelpSupport::typeHelpSupport: {
        QString m_phone_number;
        stream >> m_phone_number;
        item.setPhoneNumber(m_phone_number);
        User m_user;
        stream >> m_user;
        item.setUser(m_user);
    }
        break;
    }
    return stream;
}

