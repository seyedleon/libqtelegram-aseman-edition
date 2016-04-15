// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "photosphotos.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

PhotosPhotos::PhotosPhotos(PhotosPhotosClassType classType, InboundPkt *in) :
    m_count(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

PhotosPhotos::PhotosPhotos(InboundPkt *in) :
    m_count(0),
    m_classType(typePhotosPhotos)
{
    fetch(in);
}

PhotosPhotos::PhotosPhotos(const Null &null) :
    TelegramTypeObject(null),
    m_count(0),
    m_classType(typePhotosPhotos)
{
}

PhotosPhotos::~PhotosPhotos() {
}

void PhotosPhotos::setCount(qint32 count) {
    m_count = count;
}

qint32 PhotosPhotos::count() const {
    return m_count;
}

void PhotosPhotos::setPhotos(const QList<Photo> &photos) {
    m_photos = photos;
}

QList<Photo> PhotosPhotos::photos() const {
    return m_photos;
}

void PhotosPhotos::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> PhotosPhotos::users() const {
    return m_users;
}

bool PhotosPhotos::operator ==(const PhotosPhotos &b) const {
    return m_classType == b.m_classType &&
           m_count == b.m_count &&
           m_photos == b.m_photos &&
           m_users == b.m_users;
}

void PhotosPhotos::setClassType(PhotosPhotos::PhotosPhotosClassType classType) {
    m_classType = classType;
}

PhotosPhotos::PhotosPhotosClassType PhotosPhotos::classType() const {
    return m_classType;
}

bool PhotosPhotos::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePhotosPhotos: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_photos_length = in->fetchInt();
        m_photos.clear();
        for (qint32 i = 0; i < m_photos_length; i++) {
            Photo type;
            type.fetch(in);
            m_photos.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<PhotosPhotosClassType>(x);
        return true;
    }
        break;
    
    case typePhotosPhotosSlice: {
        m_count = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_photos_length = in->fetchInt();
        m_photos.clear();
        for (qint32 i = 0; i < m_photos_length; i++) {
            Photo type;
            type.fetch(in);
            m_photos.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<PhotosPhotosClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool PhotosPhotos::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePhotosPhotos: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_photos.count());
        for (qint32 i = 0; i < m_photos.count(); i++) {
            m_photos[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    case typePhotosPhotosSlice: {
        out->appendInt(m_count);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_photos.count());
        for (qint32 i = 0; i < m_photos.count(); i++) {
            m_photos[i].push(out);
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

QByteArray PhotosPhotos::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const PhotosPhotos &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case PhotosPhotos::typePhotosPhotos:
        stream << item.photos();
        stream << item.users();
        break;
    case PhotosPhotos::typePhotosPhotosSlice:
        stream << item.count();
        stream << item.photos();
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, PhotosPhotos &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<PhotosPhotos::PhotosPhotosClassType>(type));
    switch(type) {
    case PhotosPhotos::typePhotosPhotos: {
        QList<Photo> m_photos;
        stream >> m_photos;
        item.setPhotos(m_photos);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case PhotosPhotos::typePhotosPhotosSlice: {
        qint32 m_count;
        stream >> m_count;
        item.setCount(m_count);
        QList<Photo> m_photos;
        stream >> m_photos;
        item.setPhotos(m_photos);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}

