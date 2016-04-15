// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELPARTICIPANT_OBJECT
#define LQTG_TYPE_CHANNELPARTICIPANT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/channelparticipant.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ChannelParticipantObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ChannelParticipantClassType)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 inviterId READ inviterId WRITE setInviterId NOTIFY inviterIdChanged)
    Q_PROPERTY(qint32 kickedBy READ kickedBy WRITE setKickedBy NOTIFY kickedByChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(ChannelParticipant core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ChannelParticipantClassType {
        TypeChannelParticipant,
        TypeChannelParticipantSelf,
        TypeChannelParticipantModerator,
        TypeChannelParticipantEditor,
        TypeChannelParticipantKicked,
        TypeChannelParticipantCreator
    };

    ChannelParticipantObject(const ChannelParticipant &core, QObject *parent = 0);
    ChannelParticipantObject(QObject *parent = 0);
    virtual ~ChannelParticipantObject();

    void setDate(qint32 date);
    qint32 date() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setKickedBy(qint32 kickedBy);
    qint32 kickedBy() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ChannelParticipant &core);
    ChannelParticipant core() const;

    ChannelParticipantObject &operator =(const ChannelParticipant &b);
    bool operator ==(const ChannelParticipant &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void dateChanged();
    void inviterIdChanged();
    void kickedByChanged();
    void userIdChanged();

private Q_SLOTS:

private:
    ChannelParticipant m_core;
};

#endif // LQTG_TYPE_CHANNELPARTICIPANT_OBJECT
