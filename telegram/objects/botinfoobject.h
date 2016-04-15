// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_BOTINFO_OBJECT
#define LQTG_TYPE_BOTINFO_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/botinfo.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT BotInfoObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(BotInfoClassType)
    Q_PROPERTY(QList<BotCommand> commands READ commands WRITE setCommands NOTIFY commandsChanged)
    Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(BotInfo core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum BotInfoClassType {
        TypeBotInfo
    };

    BotInfoObject(const BotInfo &core, QObject *parent = 0);
    BotInfoObject(QObject *parent = 0);
    virtual ~BotInfoObject();

    void setCommands(const QList<BotCommand> &commands);
    QList<BotCommand> commands() const;

    void setDescription(const QString &description);
    QString description() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const BotInfo &core);
    BotInfo core() const;

    BotInfoObject &operator =(const BotInfo &b);
    bool operator ==(const BotInfo &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void commandsChanged();
    void descriptionChanged();
    void userIdChanged();

private Q_SLOTS:

private:
    BotInfo m_core;
};

#endif // LQTG_TYPE_BOTINFO_OBJECT
