// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "wallpaperobject.h"

WallPaperObject::WallPaperObject(const WallPaper &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

WallPaperObject::WallPaperObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

WallPaperObject::~WallPaperObject() {
}

void WallPaperObject::setBgColor(qint32 bgColor) {
    if(m_core.bgColor() == bgColor) return;
    m_core.setBgColor(bgColor);
    Q_EMIT bgColorChanged();
    Q_EMIT coreChanged();
}

qint32 WallPaperObject::bgColor() const {
    return m_core.bgColor();
}

void WallPaperObject::setColor(qint32 color) {
    if(m_core.color() == color) return;
    m_core.setColor(color);
    Q_EMIT colorChanged();
    Q_EMIT coreChanged();
}

qint32 WallPaperObject::color() const {
    return m_core.color();
}

void WallPaperObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint32 WallPaperObject::id() const {
    return m_core.id();
}

void WallPaperObject::setSizes(const QList<PhotoSize> &sizes) {
    if(m_core.sizes() == sizes) return;
    m_core.setSizes(sizes);
    Q_EMIT sizesChanged();
    Q_EMIT coreChanged();
}

QList<PhotoSize> WallPaperObject::sizes() const {
    return m_core.sizes();
}

void WallPaperObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

QString WallPaperObject::title() const {
    return m_core.title();
}

WallPaperObject &WallPaperObject::operator =(const WallPaper &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT bgColorChanged();
    Q_EMIT colorChanged();
    Q_EMIT idChanged();
    Q_EMIT sizesChanged();
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool WallPaperObject::operator ==(const WallPaper &b) const {
    return m_core == b;
}

void WallPaperObject::setClassType(quint32 classType) {
    WallPaper::WallPaperClassType result;
    switch(classType) {
    case TypeWallPaper:
        result = WallPaper::typeWallPaper;
        break;
    case TypeWallPaperSolid:
        result = WallPaper::typeWallPaperSolid;
        break;
    default:
        result = WallPaper::typeWallPaper;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 WallPaperObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case WallPaper::typeWallPaper:
        result = TypeWallPaper;
        break;
    case WallPaper::typeWallPaperSolid:
        result = TypeWallPaperSolid;
        break;
    default:
        result = TypeWallPaper;
        break;
    }

    return result;
}

void WallPaperObject::setCore(const WallPaper &core) {
    operator =(core);
}

WallPaper WallPaperObject::core() const {
    return m_core;
}

