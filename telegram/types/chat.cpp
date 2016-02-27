// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chat.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

Chat::Chat(ChatType classType, InboundPkt *in) :
    m_accessHash(0),
    m_date(0),
    m_flags(0),
    m_id(0),
    m_participantsCount(0),
    m_version(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Chat::Chat(InboundPkt *in) :
    m_accessHash(0),
    m_date(0),
    m_flags(0),
    m_id(0),
    m_participantsCount(0),
    m_version(0),
    m_classType(typeChatEmpty)
{
    fetch(in);
}

Chat::Chat(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_date(0),
    m_flags(0),
    m_id(0),
    m_participantsCount(0),
    m_version(0),
    m_classType(typeChatEmpty)
{
}

Chat::~Chat() {
}

void Chat::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 Chat::accessHash() const {
    return m_accessHash;
}

void Chat::setAdmin(bool admin) {
    if(admin) m_flags = (m_flags | (1<<4));
    else m_flags = (m_flags & ~(1<<4));
}

bool Chat::admin() const {
    return (m_flags & 1<<4);
}

void Chat::setAdminsEnabled(bool adminsEnabled) {
    if(adminsEnabled) m_flags = (m_flags | (1<<3));
    else m_flags = (m_flags & ~(1<<3));
}

bool Chat::adminsEnabled() const {
    return (m_flags & 1<<3);
}

void Chat::setBroadcast(bool broadcast) {
    if(broadcast) m_flags = (m_flags | (1<<5));
    else m_flags = (m_flags & ~(1<<5));
}

bool Chat::broadcast() const {
    return (m_flags & 1<<5);
}

void Chat::setCreator(bool creator) {
    if(creator) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool Chat::creator() const {
    return (m_flags & 1<<0);
}

void Chat::setDate(qint32 date) {
    m_date = date;
}

qint32 Chat::date() const {
    return m_date;
}

void Chat::setDeactivated(bool deactivated) {
    if(deactivated) m_flags = (m_flags | (1<<5));
    else m_flags = (m_flags & ~(1<<5));
}

bool Chat::deactivated() const {
    return (m_flags & 1<<5);
}

void Chat::setDemocracy(bool democracy) {
    if(democracy) m_flags = (m_flags | (1<<10));
    else m_flags = (m_flags & ~(1<<10));
}

bool Chat::democracy() const {
    return (m_flags & 1<<10);
}

void Chat::setEditor(bool editor) {
    if(editor) m_flags = (m_flags | (1<<3));
    else m_flags = (m_flags & ~(1<<3));
}

bool Chat::editor() const {
    return (m_flags & 1<<3);
}

void Chat::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 Chat::flags() const {
    return m_flags;
}

void Chat::setId(qint32 id) {
    m_id = id;
}

qint32 Chat::id() const {
    return m_id;
}

void Chat::setKicked(bool kicked) {
    if(kicked) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

bool Chat::kicked() const {
    return (m_flags & 1<<1);
}

void Chat::setLeft(bool left) {
    if(left) m_flags = (m_flags | (1<<2));
    else m_flags = (m_flags & ~(1<<2));
}

bool Chat::left() const {
    return (m_flags & 1<<2);
}

void Chat::setMegagroup(bool megagroup) {
    if(megagroup) m_flags = (m_flags | (1<<8));
    else m_flags = (m_flags & ~(1<<8));
}

bool Chat::megagroup() const {
    return (m_flags & 1<<8);
}

void Chat::setMigratedTo(const InputChannel &migratedTo) {
    m_migratedTo = migratedTo;
}

InputChannel Chat::migratedTo() const {
    return m_migratedTo;
}

void Chat::setModerator(bool moderator) {
    if(moderator) m_flags = (m_flags | (1<<4));
    else m_flags = (m_flags & ~(1<<4));
}

bool Chat::moderator() const {
    return (m_flags & 1<<4);
}

void Chat::setParticipantsCount(qint32 participantsCount) {
    m_participantsCount = participantsCount;
}

qint32 Chat::participantsCount() const {
    return m_participantsCount;
}

void Chat::setPhoto(const ChatPhoto &photo) {
    m_photo = photo;
}

ChatPhoto Chat::photo() const {
    return m_photo;
}

void Chat::setRestricted(bool restricted) {
    if(restricted) m_flags = (m_flags | (1<<9));
    else m_flags = (m_flags & ~(1<<9));
}

bool Chat::restricted() const {
    return (m_flags & 1<<9);
}

void Chat::setRestrictionReason(const QString &restrictionReason) {
    m_restrictionReason = restrictionReason;
}

QString Chat::restrictionReason() const {
    return m_restrictionReason;
}

void Chat::setSignatures(bool signatures) {
    if(signatures) m_flags = (m_flags | (1<<11));
    else m_flags = (m_flags & ~(1<<11));
}

bool Chat::signatures() const {
    return (m_flags & 1<<11);
}

void Chat::setTitle(const QString &title) {
    m_title = title;
}

QString Chat::title() const {
    return m_title;
}

void Chat::setUsername(const QString &username) {
    m_username = username;
}

QString Chat::username() const {
    return m_username;
}

void Chat::setVerified(bool verified) {
    if(verified) m_flags = (m_flags | (1<<7));
    else m_flags = (m_flags & ~(1<<7));
}

bool Chat::verified() const {
    return (m_flags & 1<<7);
}

void Chat::setVersion(qint32 version) {
    m_version = version;
}

qint32 Chat::version() const {
    return m_version;
}

bool Chat::operator ==(const Chat &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_date == b.m_date &&
           m_flags == b.m_flags &&
           m_id == b.m_id &&
           m_migratedTo == b.m_migratedTo &&
           m_participantsCount == b.m_participantsCount &&
           m_photo == b.m_photo &&
           m_restrictionReason == b.m_restrictionReason &&
           m_title == b.m_title &&
           m_username == b.m_username &&
           m_version == b.m_version;
}

void Chat::setClassType(Chat::ChatType classType) {
    m_classType = classType;
}

Chat::ChatType Chat::classType() const {
    return m_classType;
}

bool Chat::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatEmpty: {
        m_id = in->fetchInt();
        m_classType = static_cast<ChatType>(x);
        return true;
    }
        break;
    
    case typeChat: {
        m_flags = in->fetchInt();
        m_id = in->fetchInt();
        m_title = in->fetchQString();
        m_photo.fetch(in);
        m_participantsCount = in->fetchInt();
        m_date = in->fetchInt();
        m_version = in->fetchInt();
        if(m_flags & 1<<6) {
            m_migratedTo.fetch(in);
        }
        m_classType = static_cast<ChatType>(x);
        return true;
    }
        break;
    
    case typeChatForbidden: {
        m_id = in->fetchInt();
        m_title = in->fetchQString();
        m_classType = static_cast<ChatType>(x);
        return true;
    }
        break;
    
    case typeChannel: {
        m_flags = in->fetchInt();
        m_id = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_title = in->fetchQString();
        if(m_flags & 1<<6) {
            m_username = in->fetchQString();
        }
        m_photo.fetch(in);
        m_date = in->fetchInt();
        m_version = in->fetchInt();
        if(m_flags & 1<<9) {
            m_restrictionReason = in->fetchQString();
        }
        m_classType = static_cast<ChatType>(x);
        return true;
    }
        break;
    
    case typeChannelForbidden: {
        m_id = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_title = in->fetchQString();
        m_classType = static_cast<ChatType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Chat::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatEmpty: {
        out->appendInt(m_id);
        return true;
    }
        break;
    
    case typeChat: {
        out->appendInt(m_flags);
        out->appendInt(m_id);
        out->appendQString(m_title);
        m_photo.push(out);
        out->appendInt(m_participantsCount);
        out->appendInt(m_date);
        out->appendInt(m_version);
        m_migratedTo.push(out);
        return true;
    }
        break;
    
    case typeChatForbidden: {
        out->appendInt(m_id);
        out->appendQString(m_title);
        return true;
    }
        break;
    
    case typeChannel: {
        out->appendInt(m_flags);
        out->appendInt(m_id);
        out->appendLong(m_accessHash);
        out->appendQString(m_title);
        out->appendQString(m_username);
        m_photo.push(out);
        out->appendInt(m_date);
        out->appendInt(m_version);
        out->appendQString(m_restrictionReason);
        return true;
    }
        break;
    
    case typeChannelForbidden: {
        out->appendInt(m_id);
        out->appendLong(m_accessHash);
        out->appendQString(m_title);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const Chat &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case Chat::typeChatEmpty:
        stream << item.id();
        break;
    case Chat::typeChat:
        stream << item.flags();
        stream << item.id();
        stream << item.title();
        stream << item.photo();
        stream << item.participantsCount();
        stream << item.date();
        stream << item.version();
        stream << item.migratedTo();
        break;
    case Chat::typeChatForbidden:
        stream << item.id();
        stream << item.title();
        break;
    case Chat::typeChannel:
        stream << item.flags();
        stream << item.id();
        stream << item.accessHash();
        stream << item.title();
        stream << item.username();
        stream << item.photo();
        stream << item.date();
        stream << item.version();
        stream << item.restrictionReason();
        break;
    case Chat::typeChannelForbidden:
        stream << item.id();
        stream << item.accessHash();
        stream << item.title();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Chat &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<Chat::ChatType>(type));
    switch(type) {
    case Chat::typeChatEmpty: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
    }
        break;
    case Chat::typeChat: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        ChatPhoto m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        qint32 m_participants_count;
        stream >> m_participants_count;
        item.setParticipantsCount(m_participants_count);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        qint32 m_version;
        stream >> m_version;
        item.setVersion(m_version);
        InputChannel m_migrated_to;
        stream >> m_migrated_to;
        item.setMigratedTo(m_migrated_to);
    }
        break;
    case Chat::typeChatForbidden: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
    }
        break;
    case Chat::typeChannel: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QString m_username;
        stream >> m_username;
        item.setUsername(m_username);
        ChatPhoto m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        qint32 m_version;
        stream >> m_version;
        item.setVersion(m_version);
        QString m_restriction_reason;
        stream >> m_restriction_reason;
        item.setRestrictionReason(m_restriction_reason);
    }
        break;
    case Chat::typeChannelForbidden: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
    }
        break;
    }
    return stream;
}

