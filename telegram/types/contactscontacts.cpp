// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "contactscontacts.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

ContactsContacts::ContactsContacts(ContactsContactsType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ContactsContacts::ContactsContacts(InboundPkt *in) :
    m_classType(typeContactsContactsNotModified)
{
    fetch(in);
}

ContactsContacts::ContactsContacts(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeContactsContactsNotModified)
{
}

ContactsContacts::~ContactsContacts() {
}

void ContactsContacts::setContacts(const QList<Contact> &contacts) {
    m_contacts = contacts;
}

QList<Contact> ContactsContacts::contacts() const {
    return m_contacts;
}

void ContactsContacts::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> ContactsContacts::users() const {
    return m_users;
}

bool ContactsContacts::operator ==(const ContactsContacts &b) const {
    return m_classType == b.m_classType &&
           m_contacts == b.m_contacts &&
           m_users == b.m_users;
}

void ContactsContacts::setClassType(ContactsContacts::ContactsContactsType classType) {
    m_classType = classType;
}

ContactsContacts::ContactsContactsType ContactsContacts::classType() const {
    return m_classType;
}

bool ContactsContacts::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeContactsContactsNotModified: {
        m_classType = static_cast<ContactsContactsType>(x);
        return true;
    }
        break;
    
    case typeContactsContacts: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_contacts_length = in->fetchInt();
        m_contacts.clear();
        for (qint32 i = 0; i < m_contacts_length; i++) {
            Contact type;
            type.fetch(in);
            m_contacts.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<ContactsContactsType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ContactsContacts::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactsContactsNotModified: {
        return true;
    }
        break;
    
    case typeContactsContacts: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_contacts.count());
        for (qint32 i = 0; i < m_contacts.count(); i++) {
            m_contacts[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const ContactsContacts &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ContactsContacts::typeContactsContactsNotModified:
        
        break;
    case ContactsContacts::typeContactsContacts:
        stream << item.contacts();
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, ContactsContacts &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ContactsContacts::ContactsContactsType>(type));
    switch(type) {
    case ContactsContacts::typeContactsContactsNotModified: {
        
    }
        break;
    case ContactsContacts::typeContactsContacts: {
        QList<Contact> m_contacts;
        stream >> m_contacts;
        item.setContacts(m_contacts);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}

