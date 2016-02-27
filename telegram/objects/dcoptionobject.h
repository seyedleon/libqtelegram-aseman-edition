// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DCOPTION_OBJECT
#define LQTG_TYPE_DCOPTION_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/dcoption.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT DcOptionObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(DcOptionType)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint32 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QString ipAddress READ ipAddress WRITE setIpAddress NOTIFY ipAddressChanged)
    Q_PROPERTY(bool ipv6 READ ipv6 WRITE setIpv6 NOTIFY ipv6Changed)
    Q_PROPERTY(bool mediaOnly READ mediaOnly WRITE setMediaOnly NOTIFY mediaOnlyChanged)
    Q_PROPERTY(qint32 port READ port WRITE setPort NOTIFY portChanged)
    Q_PROPERTY(bool tcpoOnly READ tcpoOnly WRITE setTcpoOnly NOTIFY tcpoOnlyChanged)
    Q_PROPERTY(DcOption core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum DcOptionType {
        TypeDcOption
    };

    DcOptionObject(const DcOption &core, QObject *parent = 0);
    DcOptionObject(QObject *parent = 0);
    virtual ~DcOptionObject();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint32 id);
    qint32 id() const;

    void setIpAddress(const QString &ipAddress);
    QString ipAddress() const;

    void setIpv6(bool ipv6);
    bool ipv6() const;

    void setMediaOnly(bool mediaOnly);
    bool mediaOnly() const;

    void setPort(qint32 port);
    qint32 port() const;

    void setTcpoOnly(bool tcpoOnly);
    bool tcpoOnly() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const DcOption &core);
    DcOption core() const;

    DcOptionObject &operator =(const DcOption &b);
    bool operator ==(const DcOption &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void flagsChanged();
    void idChanged();
    void ipAddressChanged();
    void ipv6Changed();
    void mediaOnlyChanged();
    void portChanged();
    void tcpoOnlyChanged();

private Q_SLOTS:

private:
    DcOption m_core;
};

#endif // LQTG_TYPE_DCOPTION_OBJECT
