// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "channelparticipantobject.h"

ChannelParticipantObject::ChannelParticipantObject(const ChannelParticipant &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

ChannelParticipantObject::ChannelParticipantObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

ChannelParticipantObject::~ChannelParticipantObject() {
}

void ChannelParticipantObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 ChannelParticipantObject::date() const {
    return m_core.date();
}

void ChannelParticipantObject::setInviterId(qint32 inviterId) {
    if(m_core.inviterId() == inviterId) return;
    m_core.setInviterId(inviterId);
    Q_EMIT inviterIdChanged();
    Q_EMIT coreChanged();
}

qint32 ChannelParticipantObject::inviterId() const {
    return m_core.inviterId();
}

void ChannelParticipantObject::setKickedBy(qint32 kickedBy) {
    if(m_core.kickedBy() == kickedBy) return;
    m_core.setKickedBy(kickedBy);
    Q_EMIT kickedByChanged();
    Q_EMIT coreChanged();
}

qint32 ChannelParticipantObject::kickedBy() const {
    return m_core.kickedBy();
}

void ChannelParticipantObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

qint32 ChannelParticipantObject::userId() const {
    return m_core.userId();
}

ChannelParticipantObject &ChannelParticipantObject::operator =(const ChannelParticipant &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT dateChanged();
    Q_EMIT inviterIdChanged();
    Q_EMIT kickedByChanged();
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ChannelParticipantObject::operator ==(const ChannelParticipant &b) const {
    return m_core == b;
}

void ChannelParticipantObject::setClassType(quint32 classType) {
    ChannelParticipant::ChannelParticipantClassType result;
    switch(classType) {
    case TypeChannelParticipant:
        result = ChannelParticipant::typeChannelParticipant;
        break;
    case TypeChannelParticipantSelf:
        result = ChannelParticipant::typeChannelParticipantSelf;
        break;
    case TypeChannelParticipantModerator:
        result = ChannelParticipant::typeChannelParticipantModerator;
        break;
    case TypeChannelParticipantEditor:
        result = ChannelParticipant::typeChannelParticipantEditor;
        break;
    case TypeChannelParticipantKicked:
        result = ChannelParticipant::typeChannelParticipantKicked;
        break;
    case TypeChannelParticipantCreator:
        result = ChannelParticipant::typeChannelParticipantCreator;
        break;
    default:
        result = ChannelParticipant::typeChannelParticipant;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ChannelParticipantObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ChannelParticipant::typeChannelParticipant:
        result = TypeChannelParticipant;
        break;
    case ChannelParticipant::typeChannelParticipantSelf:
        result = TypeChannelParticipantSelf;
        break;
    case ChannelParticipant::typeChannelParticipantModerator:
        result = TypeChannelParticipantModerator;
        break;
    case ChannelParticipant::typeChannelParticipantEditor:
        result = TypeChannelParticipantEditor;
        break;
    case ChannelParticipant::typeChannelParticipantKicked:
        result = TypeChannelParticipantKicked;
        break;
    case ChannelParticipant::typeChannelParticipantCreator:
        result = TypeChannelParticipantCreator;
        break;
    default:
        result = TypeChannelParticipant;
        break;
    }

    return result;
}

void ChannelParticipantObject::setCore(const ChannelParticipant &core) {
    operator =(core);
}

ChannelParticipant ChannelParticipantObject::core() const {
    return m_core;
}

