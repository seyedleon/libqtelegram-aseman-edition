// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "privacykeyobject.h"

PrivacyKeyObject::PrivacyKeyObject(const PrivacyKey &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

PrivacyKeyObject::PrivacyKeyObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

PrivacyKeyObject::~PrivacyKeyObject() {
}

PrivacyKeyObject &PrivacyKeyObject::operator =(const PrivacyKey &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT coreChanged();
    return *this;
}

bool PrivacyKeyObject::operator ==(const PrivacyKey &b) const {
    return m_core == b;
}

void PrivacyKeyObject::setClassType(quint32 classType) {
    PrivacyKey::PrivacyKeyClassType result;
    switch(classType) {
    case TypePrivacyKeyStatusTimestamp:
        result = PrivacyKey::typePrivacyKeyStatusTimestamp;
        break;
    case TypePrivacyKeyChatInvite:
        result = PrivacyKey::typePrivacyKeyChatInvite;
        break;
    default:
        result = PrivacyKey::typePrivacyKeyStatusTimestamp;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 PrivacyKeyObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case PrivacyKey::typePrivacyKeyStatusTimestamp:
        result = TypePrivacyKeyStatusTimestamp;
        break;
    case PrivacyKey::typePrivacyKeyChatInvite:
        result = TypePrivacyKeyChatInvite;
        break;
    default:
        result = TypePrivacyKeyStatusTimestamp;
        break;
    }

    return result;
}

void PrivacyKeyObject::setCore(const PrivacyKey &core) {
    operator =(core);
}

PrivacyKey PrivacyKeyObject::core() const {
    return m_core;
}

