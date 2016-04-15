// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesdialogsobject.h"

MessagesDialogsObject::MessagesDialogsObject(const MessagesDialogs &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

MessagesDialogsObject::MessagesDialogsObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

MessagesDialogsObject::~MessagesDialogsObject() {
}

void MessagesDialogsObject::setChats(const QList<Chat> &chats) {
    if(m_core.chats() == chats) return;
    m_core.setChats(chats);
    Q_EMIT chatsChanged();
    Q_EMIT coreChanged();
}

QList<Chat> MessagesDialogsObject::chats() const {
    return m_core.chats();
}

void MessagesDialogsObject::setCount(qint32 count) {
    if(m_core.count() == count) return;
    m_core.setCount(count);
    Q_EMIT countChanged();
    Q_EMIT coreChanged();
}

qint32 MessagesDialogsObject::count() const {
    return m_core.count();
}

void MessagesDialogsObject::setDialogs(const QList<Dialog> &dialogs) {
    if(m_core.dialogs() == dialogs) return;
    m_core.setDialogs(dialogs);
    Q_EMIT dialogsChanged();
    Q_EMIT coreChanged();
}

QList<Dialog> MessagesDialogsObject::dialogs() const {
    return m_core.dialogs();
}

void MessagesDialogsObject::setMessages(const QList<Message> &messages) {
    if(m_core.messages() == messages) return;
    m_core.setMessages(messages);
    Q_EMIT messagesChanged();
    Q_EMIT coreChanged();
}

QList<Message> MessagesDialogsObject::messages() const {
    return m_core.messages();
}

void MessagesDialogsObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

QList<User> MessagesDialogsObject::users() const {
    return m_core.users();
}

MessagesDialogsObject &MessagesDialogsObject::operator =(const MessagesDialogs &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT chatsChanged();
    Q_EMIT countChanged();
    Q_EMIT dialogsChanged();
    Q_EMIT messagesChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool MessagesDialogsObject::operator ==(const MessagesDialogs &b) const {
    return m_core == b;
}

void MessagesDialogsObject::setClassType(quint32 classType) {
    MessagesDialogs::MessagesDialogsClassType result;
    switch(classType) {
    case TypeMessagesDialogs:
        result = MessagesDialogs::typeMessagesDialogs;
        break;
    case TypeMessagesDialogsSlice:
        result = MessagesDialogs::typeMessagesDialogsSlice;
        break;
    default:
        result = MessagesDialogs::typeMessagesDialogs;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 MessagesDialogsObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessagesDialogs::typeMessagesDialogs:
        result = TypeMessagesDialogs;
        break;
    case MessagesDialogs::typeMessagesDialogsSlice:
        result = TypeMessagesDialogsSlice;
        break;
    default:
        result = TypeMessagesDialogs;
        break;
    }

    return result;
}

void MessagesDialogsObject::setCore(const MessagesDialogs &core) {
    operator =(core);
}

MessagesDialogs MessagesDialogsObject::core() const {
    return m_core;
}

