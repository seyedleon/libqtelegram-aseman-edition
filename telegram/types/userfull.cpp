// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "userfull.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

UserFull::UserFull(UserFullType classType, InboundPkt *in) :
    m_blocked(false),
    m_classType(classType)
{
    if(in) fetch(in);
}

UserFull::UserFull(InboundPkt *in) :
    m_blocked(false),
    m_classType(typeUserFull)
{
    fetch(in);
}

UserFull::UserFull(const Null &null) :
    TelegramTypeObject(null),
    m_blocked(false),
    m_classType(typeUserFull)
{
}

UserFull::~UserFull() {
}

void UserFull::setBlocked(bool blocked) {
    m_blocked = blocked;
}

bool UserFull::blocked() const {
    return m_blocked;
}

void UserFull::setBotInfo(const BotInfo &botInfo) {
    m_botInfo = botInfo;
}

BotInfo UserFull::botInfo() const {
    return m_botInfo;
}

void UserFull::setLink(const ContactsLink &link) {
    m_link = link;
}

ContactsLink UserFull::link() const {
    return m_link;
}

void UserFull::setNotifySettings(const PeerNotifySettings &notifySettings) {
    m_notifySettings = notifySettings;
}

PeerNotifySettings UserFull::notifySettings() const {
    return m_notifySettings;
}

void UserFull::setProfilePhoto(const Photo &profilePhoto) {
    m_profilePhoto = profilePhoto;
}

Photo UserFull::profilePhoto() const {
    return m_profilePhoto;
}

void UserFull::setUser(const User &user) {
    m_user = user;
}

User UserFull::user() const {
    return m_user;
}

bool UserFull::operator ==(const UserFull &b) const {
    return m_classType == b.m_classType &&
           m_blocked == b.m_blocked &&
           m_botInfo == b.m_botInfo &&
           m_link == b.m_link &&
           m_notifySettings == b.m_notifySettings &&
           m_profilePhoto == b.m_profilePhoto &&
           m_user == b.m_user;
}

void UserFull::setClassType(UserFull::UserFullType classType) {
    m_classType = classType;
}

UserFull::UserFullType UserFull::classType() const {
    return m_classType;
}

bool UserFull::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeUserFull: {
        m_user.fetch(in);
        m_link.fetch(in);
        m_profilePhoto.fetch(in);
        m_notifySettings.fetch(in);
        m_blocked = in->fetchBool();
        m_botInfo.fetch(in);
        m_classType = static_cast<UserFullType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool UserFull::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeUserFull: {
        m_user.push(out);
        m_link.push(out);
        m_profilePhoto.push(out);
        m_notifySettings.push(out);
        out->appendBool(m_blocked);
        m_botInfo.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const UserFull &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case UserFull::typeUserFull:
        stream << item.user();
        stream << item.link();
        stream << item.profilePhoto();
        stream << item.notifySettings();
        stream << item.blocked();
        stream << item.botInfo();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, UserFull &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<UserFull::UserFullType>(type));
    switch(type) {
    case UserFull::typeUserFull: {
        User m_user;
        stream >> m_user;
        item.setUser(m_user);
        ContactsLink m_link;
        stream >> m_link;
        item.setLink(m_link);
        Photo m_profile_photo;
        stream >> m_profile_photo;
        item.setProfilePhoto(m_profile_photo);
        PeerNotifySettings m_notify_settings;
        stream >> m_notify_settings;
        item.setNotifySettings(m_notify_settings);
        bool m_blocked;
        stream >> m_blocked;
        item.setBlocked(m_blocked);
        BotInfo m_bot_info;
        stream >> m_bot_info;
        item.setBotInfo(m_bot_info);
    }
        break;
    }
    return stream;
}

