// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputencryptedfile.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputEncryptedFile::InputEncryptedFile(InputEncryptedFileType classType, InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_keyFingerprint(0),
    m_parts(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputEncryptedFile::InputEncryptedFile(InboundPkt *in) :
    m_accessHash(0),
    m_id(0),
    m_keyFingerprint(0),
    m_parts(0),
    m_classType(typeInputEncryptedFileEmpty)
{
    fetch(in);
}

InputEncryptedFile::InputEncryptedFile(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_id(0),
    m_keyFingerprint(0),
    m_parts(0),
    m_classType(typeInputEncryptedFileEmpty)
{
}

InputEncryptedFile::~InputEncryptedFile() {
}

void InputEncryptedFile::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 InputEncryptedFile::accessHash() const {
    return m_accessHash;
}

void InputEncryptedFile::setId(qint64 id) {
    m_id = id;
}

qint64 InputEncryptedFile::id() const {
    return m_id;
}

void InputEncryptedFile::setKeyFingerprint(qint32 keyFingerprint) {
    m_keyFingerprint = keyFingerprint;
}

qint32 InputEncryptedFile::keyFingerprint() const {
    return m_keyFingerprint;
}

void InputEncryptedFile::setMd5Checksum(const QString &md5Checksum) {
    m_md5Checksum = md5Checksum;
}

QString InputEncryptedFile::md5Checksum() const {
    return m_md5Checksum;
}

void InputEncryptedFile::setParts(qint32 parts) {
    m_parts = parts;
}

qint32 InputEncryptedFile::parts() const {
    return m_parts;
}

bool InputEncryptedFile::operator ==(const InputEncryptedFile &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_id == b.m_id &&
           m_keyFingerprint == b.m_keyFingerprint &&
           m_md5Checksum == b.m_md5Checksum &&
           m_parts == b.m_parts;
}

void InputEncryptedFile::setClassType(InputEncryptedFile::InputEncryptedFileType classType) {
    m_classType = classType;
}

InputEncryptedFile::InputEncryptedFileType InputEncryptedFile::classType() const {
    return m_classType;
}

bool InputEncryptedFile::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputEncryptedFileEmpty: {
        m_classType = static_cast<InputEncryptedFileType>(x);
        return true;
    }
        break;
    
    case typeInputEncryptedFileUploaded: {
        m_id = in->fetchLong();
        m_parts = in->fetchInt();
        m_md5Checksum = in->fetchQString();
        m_keyFingerprint = in->fetchInt();
        m_classType = static_cast<InputEncryptedFileType>(x);
        return true;
    }
        break;
    
    case typeInputEncryptedFile: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputEncryptedFileType>(x);
        return true;
    }
        break;
    
    case typeInputEncryptedFileBigUploaded: {
        m_id = in->fetchLong();
        m_parts = in->fetchInt();
        m_keyFingerprint = in->fetchInt();
        m_classType = static_cast<InputEncryptedFileType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputEncryptedFile::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputEncryptedFileEmpty: {
        return true;
    }
        break;
    
    case typeInputEncryptedFileUploaded: {
        out->appendLong(m_id);
        out->appendInt(m_parts);
        out->appendQString(m_md5Checksum);
        out->appendInt(m_keyFingerprint);
        return true;
    }
        break;
    
    case typeInputEncryptedFile: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    case typeInputEncryptedFileBigUploaded: {
        out->appendLong(m_id);
        out->appendInt(m_parts);
        out->appendInt(m_keyFingerprint);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const InputEncryptedFile &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputEncryptedFile::typeInputEncryptedFileEmpty:
        
        break;
    case InputEncryptedFile::typeInputEncryptedFileUploaded:
        stream << item.id();
        stream << item.parts();
        stream << item.md5Checksum();
        stream << item.keyFingerprint();
        break;
    case InputEncryptedFile::typeInputEncryptedFile:
        stream << item.id();
        stream << item.accessHash();
        break;
    case InputEncryptedFile::typeInputEncryptedFileBigUploaded:
        stream << item.id();
        stream << item.parts();
        stream << item.keyFingerprint();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputEncryptedFile &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputEncryptedFile::InputEncryptedFileType>(type));
    switch(type) {
    case InputEncryptedFile::typeInputEncryptedFileEmpty: {
        
    }
        break;
    case InputEncryptedFile::typeInputEncryptedFileUploaded: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint32 m_parts;
        stream >> m_parts;
        item.setParts(m_parts);
        QString m_md5_checksum;
        stream >> m_md5_checksum;
        item.setMd5Checksum(m_md5_checksum);
        qint32 m_key_fingerprint;
        stream >> m_key_fingerprint;
        item.setKeyFingerprint(m_key_fingerprint);
    }
        break;
    case InputEncryptedFile::typeInputEncryptedFile: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
    }
        break;
    case InputEncryptedFile::typeInputEncryptedFileBigUploaded: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint32 m_parts;
        stream >> m_parts;
        item.setParts(m_parts);
        qint32 m_key_fingerprint;
        stream >> m_key_fingerprint;
        item.setKeyFingerprint(m_key_fingerprint);
    }
        break;
    }
    return stream;
}

