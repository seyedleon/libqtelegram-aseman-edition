// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "botcommand.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

BotCommand::BotCommand(BotCommandType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

BotCommand::BotCommand(InboundPkt *in) :
    m_classType(typeBotCommand)
{
    fetch(in);
}

BotCommand::BotCommand(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeBotCommand)
{
}

BotCommand::~BotCommand() {
}

void BotCommand::setCommand(const QString &command) {
    m_command = command;
}

QString BotCommand::command() const {
    return m_command;
}

void BotCommand::setDescription(const QString &description) {
    m_description = description;
}

QString BotCommand::description() const {
    return m_description;
}

bool BotCommand::operator ==(const BotCommand &b) const {
    return m_classType == b.m_classType &&
           m_command == b.m_command &&
           m_description == b.m_description;
}

void BotCommand::setClassType(BotCommand::BotCommandType classType) {
    m_classType = classType;
}

BotCommand::BotCommandType BotCommand::classType() const {
    return m_classType;
}

bool BotCommand::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeBotCommand: {
        m_command = in->fetchQString();
        m_description = in->fetchQString();
        m_classType = static_cast<BotCommandType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool BotCommand::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeBotCommand: {
        out->appendQString(m_command);
        out->appendQString(m_description);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const BotCommand &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case BotCommand::typeBotCommand:
        stream << item.command();
        stream << item.description();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, BotCommand &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<BotCommand::BotCommandType>(type));
    switch(type) {
    case BotCommand::typeBotCommand: {
        QString m_command;
        stream >> m_command;
        item.setCommand(m_command);
        QString m_description;
        stream >> m_description;
        item.setDescription(m_description);
    }
        break;
    }
    return stream;
}

