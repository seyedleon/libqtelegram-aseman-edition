// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUTHSENTCODE_OBJECT
#define LQTG_TYPE_AUTHSENTCODE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/authsentcode.h"

#include <QPointer>
#include "authcodetypeobject.h"
#include "authsentcodetypeobject.h"

class LIBQTELEGRAMSHARED_EXPORT AuthSentCodeObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AuthSentCodeClassType)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(AuthCodeTypeObject* nextType READ nextType WRITE setNextType NOTIFY nextTypeChanged)
    Q_PROPERTY(QString phoneCodeHash READ phoneCodeHash WRITE setPhoneCodeHash NOTIFY phoneCodeHashChanged)
    Q_PROPERTY(bool phoneRegistered READ phoneRegistered WRITE setPhoneRegistered NOTIFY phoneRegisteredChanged)
    Q_PROPERTY(qint32 timeout READ timeout WRITE setTimeout NOTIFY timeoutChanged)
    Q_PROPERTY(AuthSentCodeTypeObject* type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(AuthSentCode core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AuthSentCodeClassType {
        TypeAuthSentCode
    };

    AuthSentCodeObject(const AuthSentCode &core, QObject *parent = 0);
    AuthSentCodeObject(QObject *parent = 0);
    virtual ~AuthSentCodeObject();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setNextType(AuthCodeTypeObject* nextType);
    AuthCodeTypeObject* nextType() const;

    void setPhoneCodeHash(const QString &phoneCodeHash);
    QString phoneCodeHash() const;

    void setPhoneRegistered(bool phoneRegistered);
    bool phoneRegistered() const;

    void setTimeout(qint32 timeout);
    qint32 timeout() const;

    void setType(AuthSentCodeTypeObject* type);
    AuthSentCodeTypeObject* type() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const AuthSentCode &core);
    AuthSentCode core() const;

    AuthSentCodeObject &operator =(const AuthSentCode &b);
    bool operator ==(const AuthSentCode &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void flagsChanged();
    void nextTypeChanged();
    void phoneCodeHashChanged();
    void phoneRegisteredChanged();
    void timeoutChanged();
    void typeChanged();

private Q_SLOTS:
    void coreNextTypeChanged();
    void coreTypeChanged();

private:
    QPointer<AuthCodeTypeObject> m_nextType;
    QPointer<AuthSentCodeTypeObject> m_type;
    AuthSentCode m_core;
};

#endif // LQTG_TYPE_AUTHSENTCODE_OBJECT
