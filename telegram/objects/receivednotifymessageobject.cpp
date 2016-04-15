// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "receivednotifymessageobject.h"

ReceivedNotifyMessageObject::ReceivedNotifyMessageObject(const ReceivedNotifyMessage &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

ReceivedNotifyMessageObject::ReceivedNotifyMessageObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

ReceivedNotifyMessageObject::~ReceivedNotifyMessageObject() {
}

void ReceivedNotifyMessageObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 ReceivedNotifyMessageObject::flags() const {
    return m_core.flags();
}

void ReceivedNotifyMessageObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint32 ReceivedNotifyMessageObject::id() const {
    return m_core.id();
}

ReceivedNotifyMessageObject &ReceivedNotifyMessageObject::operator =(const ReceivedNotifyMessage &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT flagsChanged();
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ReceivedNotifyMessageObject::operator ==(const ReceivedNotifyMessage &b) const {
    return m_core == b;
}

void ReceivedNotifyMessageObject::setClassType(quint32 classType) {
    ReceivedNotifyMessage::ReceivedNotifyMessageClassType result;
    switch(classType) {
    case TypeReceivedNotifyMessage:
        result = ReceivedNotifyMessage::typeReceivedNotifyMessage;
        break;
    default:
        result = ReceivedNotifyMessage::typeReceivedNotifyMessage;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ReceivedNotifyMessageObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ReceivedNotifyMessage::typeReceivedNotifyMessage:
        result = TypeReceivedNotifyMessage;
        break;
    default:
        result = TypeReceivedNotifyMessage;
        break;
    }

    return result;
}

void ReceivedNotifyMessageObject::setCore(const ReceivedNotifyMessage &core) {
    operator =(core);
}

ReceivedNotifyMessage ReceivedNotifyMessageObject::core() const {
    return m_core;
}

