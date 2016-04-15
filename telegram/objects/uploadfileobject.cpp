// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "uploadfileobject.h"

UploadFileObject::UploadFileObject(const UploadFile &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_type(0),
    m_core(core)
{
    m_type = new StorageFileTypeObject(m_core.type(), this);
    connect(m_type.data(), &StorageFileTypeObject::coreChanged, this, &UploadFileObject::coreTypeChanged);
}

UploadFileObject::UploadFileObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_type(0),
    m_core()
{
    m_type = new StorageFileTypeObject(m_core.type(), this);
    connect(m_type.data(), &StorageFileTypeObject::coreChanged, this, &UploadFileObject::coreTypeChanged);
}

UploadFileObject::~UploadFileObject() {
}

void UploadFileObject::setBytes(const QByteArray &bytes) {
    if(m_core.bytes() == bytes) return;
    m_core.setBytes(bytes);
    Q_EMIT bytesChanged();
    Q_EMIT coreChanged();
}

QByteArray UploadFileObject::bytes() const {
    return m_core.bytes();
}

void UploadFileObject::setMtime(qint32 mtime) {
    if(m_core.mtime() == mtime) return;
    m_core.setMtime(mtime);
    Q_EMIT mtimeChanged();
    Q_EMIT coreChanged();
}

qint32 UploadFileObject::mtime() const {
    return m_core.mtime();
}

void UploadFileObject::setType(StorageFileTypeObject* type) {
    if(m_type == type) return;
    if(m_type) delete m_type;
    m_type = type;
    if(m_type) {
        m_type->setParent(this);
        m_core.setType(m_type->core());
        connect(m_type.data(), &StorageFileTypeObject::coreChanged, this, &UploadFileObject::coreTypeChanged);
    }
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
}

StorageFileTypeObject*  UploadFileObject::type() const {
    return m_type;
}

UploadFileObject &UploadFileObject::operator =(const UploadFile &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_type->setCore(b.type());

    Q_EMIT bytesChanged();
    Q_EMIT mtimeChanged();
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool UploadFileObject::operator ==(const UploadFile &b) const {
    return m_core == b;
}

void UploadFileObject::setClassType(quint32 classType) {
    UploadFile::UploadFileClassType result;
    switch(classType) {
    case TypeUploadFile:
        result = UploadFile::typeUploadFile;
        break;
    default:
        result = UploadFile::typeUploadFile;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 UploadFileObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case UploadFile::typeUploadFile:
        result = TypeUploadFile;
        break;
    default:
        result = TypeUploadFile;
        break;
    }

    return result;
}

void UploadFileObject::setCore(const UploadFile &core) {
    operator =(core);
}

UploadFile UploadFileObject::core() const {
    return m_core;
}

void UploadFileObject::coreTypeChanged() {
    if(m_core.type() == m_type->core()) return;
    m_core.setType(m_type->core());
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
}

