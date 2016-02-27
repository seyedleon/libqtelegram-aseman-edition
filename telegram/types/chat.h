// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHAT
#define LQTG_TYPE_CHAT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include "inputchannel.h"
#include "chatphoto.h"
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT Chat : public TelegramTypeObject
{
public:
    enum ChatType {
        typeChatEmpty = 0x9ba2d800,
        typeChat = 0xd91cdd54,
        typeChatForbidden = 0x7328bdb,
        typeChannel = 0x4b1b7506,
        typeChannelForbidden = 0x2d85832c
    };

    Chat(ChatType classType = typeChatEmpty, InboundPkt *in = 0);
    Chat(InboundPkt *in);
    Chat(const Null&);
    virtual ~Chat();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setAdmin(bool admin);
    bool admin() const;

    void setAdminsEnabled(bool adminsEnabled);
    bool adminsEnabled() const;

    void setBroadcast(bool broadcast);
    bool broadcast() const;

    void setCreator(bool creator);
    bool creator() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDeactivated(bool deactivated);
    bool deactivated() const;

    void setDemocracy(bool democracy);
    bool democracy() const;

    void setEditor(bool editor);
    bool editor() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint32 id);
    qint32 id() const;

    void setKicked(bool kicked);
    bool kicked() const;

    void setLeft(bool left);
    bool left() const;

    void setMegagroup(bool megagroup);
    bool megagroup() const;

    void setMigratedTo(const InputChannel &migratedTo);
    InputChannel migratedTo() const;

    void setModerator(bool moderator);
    bool moderator() const;

    void setParticipantsCount(qint32 participantsCount);
    qint32 participantsCount() const;

    void setPhoto(const ChatPhoto &photo);
    ChatPhoto photo() const;

    void setRestricted(bool restricted);
    bool restricted() const;

    void setRestrictionReason(const QString &restrictionReason);
    QString restrictionReason() const;

    void setSignatures(bool signatures);
    bool signatures() const;

    void setTitle(const QString &title);
    QString title() const;

    void setUsername(const QString &username);
    QString username() const;

    void setVerified(bool verified);
    bool verified() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(ChatType classType);
    ChatType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const Chat &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint64 m_accessHash;
    qint32 m_date;
    qint32 m_flags;
    qint32 m_id;
    InputChannel m_migratedTo;
    qint32 m_participantsCount;
    ChatPhoto m_photo;
    QString m_restrictionReason;
    QString m_title;
    QString m_username;
    qint32 m_version;
    ChatType m_classType;
};

Q_DECLARE_METATYPE(Chat)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Chat &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Chat &item);

#endif // LQTG_TYPE_CHAT
