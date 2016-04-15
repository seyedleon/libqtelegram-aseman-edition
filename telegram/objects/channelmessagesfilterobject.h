// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELMESSAGESFILTER_OBJECT
#define LQTG_TYPE_CHANNELMESSAGESFILTER_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/channelmessagesfilter.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ChannelMessagesFilterObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ChannelMessagesFilterClassType)
    Q_PROPERTY(bool excludeNewMessages READ excludeNewMessages WRITE setExcludeNewMessages NOTIFY excludeNewMessagesChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(bool importantOnly READ importantOnly WRITE setImportantOnly NOTIFY importantOnlyChanged)
    Q_PROPERTY(QList<MessageRange> ranges READ ranges WRITE setRanges NOTIFY rangesChanged)
    Q_PROPERTY(ChannelMessagesFilter core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ChannelMessagesFilterClassType {
        TypeChannelMessagesFilterEmpty,
        TypeChannelMessagesFilter,
        TypeChannelMessagesFilterCollapsed
    };

    ChannelMessagesFilterObject(const ChannelMessagesFilter &core, QObject *parent = 0);
    ChannelMessagesFilterObject(QObject *parent = 0);
    virtual ~ChannelMessagesFilterObject();

    void setExcludeNewMessages(bool excludeNewMessages);
    bool excludeNewMessages() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setImportantOnly(bool importantOnly);
    bool importantOnly() const;

    void setRanges(const QList<MessageRange> &ranges);
    QList<MessageRange> ranges() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ChannelMessagesFilter &core);
    ChannelMessagesFilter core() const;

    ChannelMessagesFilterObject &operator =(const ChannelMessagesFilter &b);
    bool operator ==(const ChannelMessagesFilter &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void excludeNewMessagesChanged();
    void flagsChanged();
    void importantOnlyChanged();
    void rangesChanged();

private Q_SLOTS:

private:
    ChannelMessagesFilter m_core;
};

#endif // LQTG_TYPE_CHANNELMESSAGESFILTER_OBJECT
