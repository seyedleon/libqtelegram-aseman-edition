// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PEERNOTIFYSETTINGS_OBJECT
#define LQTG_TYPE_PEERNOTIFYSETTINGS_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/peernotifysettings.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT PeerNotifySettingsObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(PeerNotifySettingsType)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint32 muteUntil READ muteUntil WRITE setMuteUntil NOTIFY muteUntilChanged)
    Q_PROPERTY(bool showPreviews READ showPreviews WRITE setShowPreviews NOTIFY showPreviewsChanged)
    Q_PROPERTY(bool silent READ silent WRITE setSilent NOTIFY silentChanged)
    Q_PROPERTY(QString sound READ sound WRITE setSound NOTIFY soundChanged)
    Q_PROPERTY(PeerNotifySettings core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum PeerNotifySettingsType {
        TypePeerNotifySettingsEmpty,
        TypePeerNotifySettings
    };

    PeerNotifySettingsObject(const PeerNotifySettings &core, QObject *parent = 0);
    PeerNotifySettingsObject(QObject *parent = 0);
    virtual ~PeerNotifySettingsObject();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMuteUntil(qint32 muteUntil);
    qint32 muteUntil() const;

    void setShowPreviews(bool showPreviews);
    bool showPreviews() const;

    void setSilent(bool silent);
    bool silent() const;

    void setSound(const QString &sound);
    QString sound() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const PeerNotifySettings &core);
    PeerNotifySettings core() const;

    PeerNotifySettingsObject &operator =(const PeerNotifySettings &b);
    bool operator ==(const PeerNotifySettings &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void flagsChanged();
    void muteUntilChanged();
    void showPreviewsChanged();
    void silentChanged();
    void soundChanged();

private Q_SLOTS:

private:
    PeerNotifySettings m_core;
};

#endif // LQTG_TYPE_PEERNOTIFYSETTINGS_OBJECT
