// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_UPDATESTYPE_OBJECT
#define LQTG_TYPE_UPDATESTYPE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/updatestype.h"

#include <QPointer>
#include "messagefwdheaderobject.h"
#include "messagemediaobject.h"
#include "updateobject.h"

class LIBQTELEGRAMSHARED_EXPORT UpdatesTypeObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(UpdatesTypeType)
    Q_PROPERTY(qint32 chatId READ chatId WRITE setChatId NOTIFY chatIdChanged)
    Q_PROPERTY(QList<Chat> chats READ chats WRITE setChats NOTIFY chatsChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(QList<MessageEntity> entities READ entities WRITE setEntities NOTIFY entitiesChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint32 fromId READ fromId WRITE setFromId NOTIFY fromIdChanged)
    Q_PROPERTY(MessageFwdHeaderObject* fwdFrom READ fwdFrom WRITE setFwdFrom NOTIFY fwdFromChanged)
    Q_PROPERTY(qint32 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(MessageMediaObject* media READ media WRITE setMedia NOTIFY mediaChanged)
    Q_PROPERTY(bool mediaUnread READ mediaUnread WRITE setMediaUnread NOTIFY mediaUnreadChanged)
    Q_PROPERTY(bool mentioned READ mentioned WRITE setMentioned NOTIFY mentionedChanged)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(bool out READ out WRITE setOut NOTIFY outChanged)
    Q_PROPERTY(qint32 pts READ pts WRITE setPts NOTIFY ptsChanged)
    Q_PROPERTY(qint32 ptsCount READ ptsCount WRITE setPtsCount NOTIFY ptsCountChanged)
    Q_PROPERTY(qint32 replyToMsgId READ replyToMsgId WRITE setReplyToMsgId NOTIFY replyToMsgIdChanged)
    Q_PROPERTY(qint32 seq READ seq WRITE setSeq NOTIFY seqChanged)
    Q_PROPERTY(qint32 seqStart READ seqStart WRITE setSeqStart NOTIFY seqStartChanged)
    Q_PROPERTY(bool silent READ silent WRITE setSilent NOTIFY silentChanged)
    Q_PROPERTY(bool unread READ unread WRITE setUnread NOTIFY unreadChanged)
    Q_PROPERTY(UpdateObject* update READ update WRITE setUpdate NOTIFY updateChanged)
    Q_PROPERTY(QList<Update> updates READ updates WRITE setUpdates NOTIFY updatesChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(qint32 viaBotId READ viaBotId WRITE setViaBotId NOTIFY viaBotIdChanged)
    Q_PROPERTY(UpdatesType core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum UpdatesTypeType {
        TypeUpdatesTooLong,
        TypeUpdateShortMessage,
        TypeUpdateShortChatMessage,
        TypeUpdateShort,
        TypeUpdatesCombined,
        TypeUpdates,
        TypeUpdateShortSentMessage
    };

    UpdatesTypeObject(const UpdatesType &core, QObject *parent = 0);
    UpdatesTypeObject(QObject *parent = 0);
    virtual ~UpdatesTypeObject();

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setFromId(qint32 fromId);
    qint32 fromId() const;

    void setFwdFrom(MessageFwdHeaderObject* fwdFrom);
    MessageFwdHeaderObject* fwdFrom() const;

    void setId(qint32 id);
    qint32 id() const;

    void setMedia(MessageMediaObject* media);
    MessageMediaObject* media() const;

    void setMediaUnread(bool mediaUnread);
    bool mediaUnread() const;

    void setMentioned(bool mentioned);
    bool mentioned() const;

    void setMessage(const QString &message);
    QString message() const;

    void setOut(bool out);
    bool out() const;

    void setPts(qint32 pts);
    qint32 pts() const;

    void setPtsCount(qint32 ptsCount);
    qint32 ptsCount() const;

    void setReplyToMsgId(qint32 replyToMsgId);
    qint32 replyToMsgId() const;

    void setSeq(qint32 seq);
    qint32 seq() const;

    void setSeqStart(qint32 seqStart);
    qint32 seqStart() const;

    void setSilent(bool silent);
    bool silent() const;

    void setUnread(bool unread);
    bool unread() const;

    void setUpdate(UpdateObject* update);
    UpdateObject* update() const;

    void setUpdates(const QList<Update> &updates);
    QList<Update> updates() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setViaBotId(qint32 viaBotId);
    qint32 viaBotId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const UpdatesType &core);
    UpdatesType core() const;

    UpdatesTypeObject &operator =(const UpdatesType &b);
    bool operator ==(const UpdatesType &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void chatIdChanged();
    void chatsChanged();
    void dateChanged();
    void entitiesChanged();
    void flagsChanged();
    void fromIdChanged();
    void fwdFromChanged();
    void idChanged();
    void mediaChanged();
    void mediaUnreadChanged();
    void mentionedChanged();
    void messageChanged();
    void outChanged();
    void ptsChanged();
    void ptsCountChanged();
    void replyToMsgIdChanged();
    void seqChanged();
    void seqStartChanged();
    void silentChanged();
    void unreadChanged();
    void updateChanged();
    void updatesChanged();
    void userIdChanged();
    void usersChanged();
    void viaBotIdChanged();

private Q_SLOTS:
    void coreFwdFromChanged();
    void coreMediaChanged();
    void coreUpdateChanged();

private:
    QPointer<MessageFwdHeaderObject> m_fwdFrom;
    QPointer<MessageMediaObject> m_media;
    QPointer<UpdateObject> m_update;
    UpdatesType m_core;
};

#endif // LQTG_TYPE_UPDATESTYPE_OBJECT
