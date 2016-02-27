// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_FILELOCATION
#define LQTG_TYPE_FILELOCATION

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT FileLocation : public TelegramTypeObject
{
public:
    enum FileLocationType {
        typeFileLocationUnavailable = 0x7c596b46,
        typeFileLocation = 0x53d69076
    };

    FileLocation(FileLocationType classType = typeFileLocationUnavailable, InboundPkt *in = 0);
    FileLocation(InboundPkt *in);
    FileLocation(const Null&);
    virtual ~FileLocation();

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setLocalId(qint32 localId);
    qint32 localId() const;

    void setSecret(qint64 secret);
    qint64 secret() const;

    void setVolumeId(qint64 volumeId);
    qint64 volumeId() const;

    void setClassType(FileLocationType classType);
    FileLocationType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const FileLocation &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint32 m_dcId;
    qint32 m_localId;
    qint64 m_secret;
    qint64 m_volumeId;
    FileLocationType m_classType;
};

Q_DECLARE_METATYPE(FileLocation)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const FileLocation &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, FileLocation &item);

#endif // LQTG_TYPE_FILELOCATION
