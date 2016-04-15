// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGE
#define LQTG_TYPE_MESSAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include "messageaction.h"
#include <QtGlobal>
#include <QList>
#include "messageentity.h"
#include "messagefwdheader.h"
#include "messagemedia.h"
#include <QString>
#include "replymarkup.h"
#include "peer.h"

class LIBQTELEGRAMSHARED_EXPORT Message : public TelegramTypeObject
{
public:
    enum MessageClassType {
        typeMessageEmpty = 0x83e5de54,
        typeMessage = 0xc09be45f,
        typeMessageService = 0x9e19a1f6
    };

    Message(MessageClassType classType = typeMessageEmpty, InboundPkt *in = 0);
    Message(InboundPkt *in);
    Message(const Null&);
    virtual ~Message();

    void setAction(const MessageAction &action);
    MessageAction action() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setEditDate(qint32 editDate);
    qint32 editDate() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setFromId(qint32 fromId);
    qint32 fromId() const;

    void setFwdFrom(const MessageFwdHeader &fwdFrom);
    MessageFwdHeader fwdFrom() const;

    void setId(qint32 id);
    qint32 id() const;

    void setMedia(const MessageMedia &media);
    MessageMedia media() const;

    void setMediaUnread(bool mediaUnread);
    bool mediaUnread() const;

    void setMentioned(bool mentioned);
    bool mentioned() const;

    void setMessage(const QString &message);
    QString message() const;

    void setOut(bool out);
    bool out() const;

    void setPost(bool post);
    bool post() const;

    void setReplyMarkup(const ReplyMarkup &replyMarkup);
    ReplyMarkup replyMarkup() const;

    void setReplyToMsgId(qint32 replyToMsgId);
    qint32 replyToMsgId() const;

    void setSilent(bool silent);
    bool silent() const;

    void setToId(const Peer &toId);
    Peer toId() const;

    void setUnread(bool unread);
    bool unread() const;

    void setViaBotId(qint32 viaBotId);
    qint32 viaBotId() const;

    void setViews(qint32 views);
    qint32 views() const;

    void setClassType(MessageClassType classType);
    MessageClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const Message &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    MessageAction m_action;
    qint32 m_date;
    qint32 m_editDate;
    QList<MessageEntity> m_entities;
    qint32 m_flags;
    qint32 m_fromId;
    MessageFwdHeader m_fwdFrom;
    qint32 m_id;
    MessageMedia m_media;
    QString m_message;
    ReplyMarkup m_replyMarkup;
    qint32 m_replyToMsgId;
    Peer m_toId;
    qint32 m_viaBotId;
    qint32 m_views;
    MessageClassType m_classType;
};

Q_DECLARE_METATYPE(Message)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Message &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Message &item);

#endif // LQTG_TYPE_MESSAGE
