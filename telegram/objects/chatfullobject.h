// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHATFULL_OBJECT
#define LQTG_TYPE_CHATFULL_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/chatfull.h"

#include <QPointer>
#include "photoobject.h"
#include "exportedchatinviteobject.h"
#include "peernotifysettingsobject.h"
#include "chatparticipantsobject.h"

class LIBQTELEGRAMSHARED_EXPORT ChatFullObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ChatFullClassType)
    Q_PROPERTY(QString about READ about WRITE setAbout NOTIFY aboutChanged)
    Q_PROPERTY(qint32 adminsCount READ adminsCount WRITE setAdminsCount NOTIFY adminsCountChanged)
    Q_PROPERTY(QList<BotInfo> botInfo READ botInfo WRITE setBotInfo NOTIFY botInfoChanged)
    Q_PROPERTY(bool canSetUsername READ canSetUsername WRITE setCanSetUsername NOTIFY canSetUsernameChanged)
    Q_PROPERTY(bool canViewParticipants READ canViewParticipants WRITE setCanViewParticipants NOTIFY canViewParticipantsChanged)
    Q_PROPERTY(PhotoObject* chatPhoto READ chatPhoto WRITE setChatPhoto NOTIFY chatPhotoChanged)
    Q_PROPERTY(ExportedChatInviteObject* exportedInvite READ exportedInvite WRITE setExportedInvite NOTIFY exportedInviteChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint32 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(qint32 kickedCount READ kickedCount WRITE setKickedCount NOTIFY kickedCountChanged)
    Q_PROPERTY(qint32 migratedFromChatId READ migratedFromChatId WRITE setMigratedFromChatId NOTIFY migratedFromChatIdChanged)
    Q_PROPERTY(qint32 migratedFromMaxId READ migratedFromMaxId WRITE setMigratedFromMaxId NOTIFY migratedFromMaxIdChanged)
    Q_PROPERTY(PeerNotifySettingsObject* notifySettings READ notifySettings WRITE setNotifySettings NOTIFY notifySettingsChanged)
    Q_PROPERTY(ChatParticipantsObject* participants READ participants WRITE setParticipants NOTIFY participantsChanged)
    Q_PROPERTY(qint32 participantsCount READ participantsCount WRITE setParticipantsCount NOTIFY participantsCountChanged)
    Q_PROPERTY(qint32 pinnedMsgId READ pinnedMsgId WRITE setPinnedMsgId NOTIFY pinnedMsgIdChanged)
    Q_PROPERTY(qint32 readInboxMaxId READ readInboxMaxId WRITE setReadInboxMaxId NOTIFY readInboxMaxIdChanged)
    Q_PROPERTY(qint32 unreadCount READ unreadCount WRITE setUnreadCount NOTIFY unreadCountChanged)
    Q_PROPERTY(qint32 unreadImportantCount READ unreadImportantCount WRITE setUnreadImportantCount NOTIFY unreadImportantCountChanged)
    Q_PROPERTY(ChatFull core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ChatFullClassType {
        TypeChatFull,
        TypeChannelFull
    };

    ChatFullObject(const ChatFull &core, QObject *parent = 0);
    ChatFullObject(QObject *parent = 0);
    virtual ~ChatFullObject();

    void setAbout(const QString &about);
    QString about() const;

    void setAdminsCount(qint32 adminsCount);
    qint32 adminsCount() const;

    void setBotInfo(const QList<BotInfo> &botInfo);
    QList<BotInfo> botInfo() const;

    void setCanSetUsername(bool canSetUsername);
    bool canSetUsername() const;

    void setCanViewParticipants(bool canViewParticipants);
    bool canViewParticipants() const;

    void setChatPhoto(PhotoObject* chatPhoto);
    PhotoObject* chatPhoto() const;

    void setExportedInvite(ExportedChatInviteObject* exportedInvite);
    ExportedChatInviteObject* exportedInvite() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint32 id);
    qint32 id() const;

    void setKickedCount(qint32 kickedCount);
    qint32 kickedCount() const;

    void setMigratedFromChatId(qint32 migratedFromChatId);
    qint32 migratedFromChatId() const;

    void setMigratedFromMaxId(qint32 migratedFromMaxId);
    qint32 migratedFromMaxId() const;

    void setNotifySettings(PeerNotifySettingsObject* notifySettings);
    PeerNotifySettingsObject* notifySettings() const;

    void setParticipants(ChatParticipantsObject* participants);
    ChatParticipantsObject* participants() const;

    void setParticipantsCount(qint32 participantsCount);
    qint32 participantsCount() const;

    void setPinnedMsgId(qint32 pinnedMsgId);
    qint32 pinnedMsgId() const;

    void setReadInboxMaxId(qint32 readInboxMaxId);
    qint32 readInboxMaxId() const;

    void setUnreadCount(qint32 unreadCount);
    qint32 unreadCount() const;

    void setUnreadImportantCount(qint32 unreadImportantCount);
    qint32 unreadImportantCount() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ChatFull &core);
    ChatFull core() const;

    ChatFullObject &operator =(const ChatFull &b);
    bool operator ==(const ChatFull &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void aboutChanged();
    void adminsCountChanged();
    void botInfoChanged();
    void canSetUsernameChanged();
    void canViewParticipantsChanged();
    void chatPhotoChanged();
    void exportedInviteChanged();
    void flagsChanged();
    void idChanged();
    void kickedCountChanged();
    void migratedFromChatIdChanged();
    void migratedFromMaxIdChanged();
    void notifySettingsChanged();
    void participantsChanged();
    void participantsCountChanged();
    void pinnedMsgIdChanged();
    void readInboxMaxIdChanged();
    void unreadCountChanged();
    void unreadImportantCountChanged();

private Q_SLOTS:
    void coreChatPhotoChanged();
    void coreExportedInviteChanged();
    void coreNotifySettingsChanged();
    void coreParticipantsChanged();

private:
    QPointer<PhotoObject> m_chatPhoto;
    QPointer<ExportedChatInviteObject> m_exportedInvite;
    QPointer<PeerNotifySettingsObject> m_notifySettings;
    QPointer<ChatParticipantsObject> m_participants;
    ChatFull m_core;
};

#endif // LQTG_TYPE_CHATFULL_OBJECT
