// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagegroupobject.h"

MessageGroupObject::MessageGroupObject(const MessageGroup &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

MessageGroupObject::MessageGroupObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

MessageGroupObject::~MessageGroupObject() {
}

void MessageGroupObject::setCount(qint32 count) {
    if(m_core.count() == count) return;
    m_core.setCount(count);
    Q_EMIT countChanged();
    Q_EMIT coreChanged();
}

qint32 MessageGroupObject::count() const {
    return m_core.count();
}

void MessageGroupObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 MessageGroupObject::date() const {
    return m_core.date();
}

void MessageGroupObject::setMaxId(qint32 maxId) {
    if(m_core.maxId() == maxId) return;
    m_core.setMaxId(maxId);
    Q_EMIT maxIdChanged();
    Q_EMIT coreChanged();
}

qint32 MessageGroupObject::maxId() const {
    return m_core.maxId();
}

void MessageGroupObject::setMinId(qint32 minId) {
    if(m_core.minId() == minId) return;
    m_core.setMinId(minId);
    Q_EMIT minIdChanged();
    Q_EMIT coreChanged();
}

qint32 MessageGroupObject::minId() const {
    return m_core.minId();
}

MessageGroupObject &MessageGroupObject::operator =(const MessageGroup &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT countChanged();
    Q_EMIT dateChanged();
    Q_EMIT maxIdChanged();
    Q_EMIT minIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool MessageGroupObject::operator ==(const MessageGroup &b) const {
    return m_core == b;
}

void MessageGroupObject::setClassType(quint32 classType) {
    MessageGroup::MessageGroupClassType result;
    switch(classType) {
    case TypeMessageGroup:
        result = MessageGroup::typeMessageGroup;
        break;
    default:
        result = MessageGroup::typeMessageGroup;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 MessageGroupObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessageGroup::typeMessageGroup:
        result = TypeMessageGroup;
        break;
    default:
        result = TypeMessageGroup;
        break;
    }

    return result;
}

void MessageGroupObject::setCore(const MessageGroup &core) {
    operator =(core);
}

MessageGroup MessageGroupObject::core() const {
    return m_core;
}

