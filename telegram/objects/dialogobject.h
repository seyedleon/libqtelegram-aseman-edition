// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DIALOG_OBJECT
#define LQTG_TYPE_DIALOG_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/dialog.h"

#include <QPointer>
#include "peernotifysettingsobject.h"
#include "peerobject.h"

class LIBQTELEGRAMSHARED_EXPORT DialogObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(DialogClassType)
    Q_PROPERTY(PeerNotifySettingsObject* notifySettings READ notifySettings WRITE setNotifySettings NOTIFY notifySettingsChanged)
    Q_PROPERTY(PeerObject* peer READ peer WRITE setPeer NOTIFY peerChanged)
    Q_PROPERTY(qint32 pts READ pts WRITE setPts NOTIFY ptsChanged)
    Q_PROPERTY(qint32 readInboxMaxId READ readInboxMaxId WRITE setReadInboxMaxId NOTIFY readInboxMaxIdChanged)
    Q_PROPERTY(qint32 topImportantMessage READ topImportantMessage WRITE setTopImportantMessage NOTIFY topImportantMessageChanged)
    Q_PROPERTY(qint32 topMessage READ topMessage WRITE setTopMessage NOTIFY topMessageChanged)
    Q_PROPERTY(qint32 unreadCount READ unreadCount WRITE setUnreadCount NOTIFY unreadCountChanged)
    Q_PROPERTY(qint32 unreadImportantCount READ unreadImportantCount WRITE setUnreadImportantCount NOTIFY unreadImportantCountChanged)
    Q_PROPERTY(Dialog core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum DialogClassType {
        TypeDialog,
        TypeDialogChannel
    };

    DialogObject(const Dialog &core, QObject *parent = 0);
    DialogObject(QObject *parent = 0);
    virtual ~DialogObject();

    void setNotifySettings(PeerNotifySettingsObject* notifySettings);
    PeerNotifySettingsObject* notifySettings() const;

    void setPeer(PeerObject* peer);
    PeerObject* peer() const;

    void setPts(qint32 pts);
    qint32 pts() const;

    void setReadInboxMaxId(qint32 readInboxMaxId);
    qint32 readInboxMaxId() const;

    void setTopImportantMessage(qint32 topImportantMessage);
    qint32 topImportantMessage() const;

    void setTopMessage(qint32 topMessage);
    qint32 topMessage() const;

    void setUnreadCount(qint32 unreadCount);
    qint32 unreadCount() const;

    void setUnreadImportantCount(qint32 unreadImportantCount);
    qint32 unreadImportantCount() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const Dialog &core);
    Dialog core() const;

    DialogObject &operator =(const Dialog &b);
    bool operator ==(const Dialog &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void notifySettingsChanged();
    void peerChanged();
    void ptsChanged();
    void readInboxMaxIdChanged();
    void topImportantMessageChanged();
    void topMessageChanged();
    void unreadCountChanged();
    void unreadImportantCountChanged();

private Q_SLOTS:
    void coreNotifySettingsChanged();
    void corePeerChanged();

private:
    QPointer<PeerNotifySettingsObject> m_notifySettings;
    QPointer<PeerObject> m_peer;
    Dialog m_core;
};

#endif // LQTG_TYPE_DIALOG_OBJECT
