// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_HELPINVITETEXT_OBJECT
#define LQTG_TYPE_HELPINVITETEXT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/helpinvitetext.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT HelpInviteTextObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(HelpInviteTextClassType)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(HelpInviteText core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum HelpInviteTextClassType {
        TypeHelpInviteText
    };

    HelpInviteTextObject(const HelpInviteText &core, QObject *parent = 0);
    HelpInviteTextObject(QObject *parent = 0);
    virtual ~HelpInviteTextObject();

    void setMessage(const QString &message);
    QString message() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const HelpInviteText &core);
    HelpInviteText core() const;

    HelpInviteTextObject &operator =(const HelpInviteText &b);
    bool operator ==(const HelpInviteText &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void messageChanged();

private Q_SLOTS:

private:
    HelpInviteText m_core;
};

#endif // LQTG_TYPE_HELPINVITETEXT_OBJECT
