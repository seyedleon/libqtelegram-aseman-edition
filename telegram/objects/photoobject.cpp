// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "photoobject.h"

PhotoObject::PhotoObject(const Photo &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

PhotoObject::PhotoObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

PhotoObject::~PhotoObject() {
}

void PhotoObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

qint64 PhotoObject::accessHash() const {
    return m_core.accessHash();
}

void PhotoObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 PhotoObject::date() const {
    return m_core.date();
}

void PhotoObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint64 PhotoObject::id() const {
    return m_core.id();
}

void PhotoObject::setSizes(const QList<PhotoSize> &sizes) {
    if(m_core.sizes() == sizes) return;
    m_core.setSizes(sizes);
    Q_EMIT sizesChanged();
    Q_EMIT coreChanged();
}

QList<PhotoSize> PhotoObject::sizes() const {
    return m_core.sizes();
}

PhotoObject &PhotoObject::operator =(const Photo &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT accessHashChanged();
    Q_EMIT dateChanged();
    Q_EMIT idChanged();
    Q_EMIT sizesChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool PhotoObject::operator ==(const Photo &b) const {
    return m_core == b;
}

void PhotoObject::setClassType(quint32 classType) {
    Photo::PhotoClassType result;
    switch(classType) {
    case TypePhotoEmpty:
        result = Photo::typePhotoEmpty;
        break;
    case TypePhoto:
        result = Photo::typePhoto;
        break;
    default:
        result = Photo::typePhotoEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 PhotoObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case Photo::typePhotoEmpty:
        result = TypePhotoEmpty;
        break;
    case Photo::typePhoto:
        result = TypePhoto;
        break;
    default:
        result = TypePhotoEmpty;
        break;
    }

    return result;
}

void PhotoObject::setCore(const Photo &core) {
    operator =(core);
}

Photo PhotoObject::core() const {
    return m_core;
}

