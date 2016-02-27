// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "geopoint.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

GeoPoint::GeoPoint(GeoPointType classType, InboundPkt *in) :
    m_lat(0),
    m_longValue(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

GeoPoint::GeoPoint(InboundPkt *in) :
    m_lat(0),
    m_longValue(0),
    m_classType(typeGeoPointEmpty)
{
    fetch(in);
}

GeoPoint::GeoPoint(const Null &null) :
    TelegramTypeObject(null),
    m_lat(0),
    m_longValue(0),
    m_classType(typeGeoPointEmpty)
{
}

GeoPoint::~GeoPoint() {
}

void GeoPoint::setLat(qreal lat) {
    m_lat = lat;
}

qreal GeoPoint::lat() const {
    return m_lat;
}

void GeoPoint::setLongValue(qreal longValue) {
    m_longValue = longValue;
}

qreal GeoPoint::longValue() const {
    return m_longValue;
}

bool GeoPoint::operator ==(const GeoPoint &b) const {
    return m_classType == b.m_classType &&
           m_lat == b.m_lat &&
           m_longValue == b.m_longValue;
}

void GeoPoint::setClassType(GeoPoint::GeoPointType classType) {
    m_classType = classType;
}

GeoPoint::GeoPointType GeoPoint::classType() const {
    return m_classType;
}

bool GeoPoint::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeGeoPointEmpty: {
        m_classType = static_cast<GeoPointType>(x);
        return true;
    }
        break;
    
    case typeGeoPoint: {
        m_longValue = in->fetchDouble();
        m_lat = in->fetchDouble();
        m_classType = static_cast<GeoPointType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool GeoPoint::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeGeoPointEmpty: {
        return true;
    }
        break;
    
    case typeGeoPoint: {
        out->appendDouble(m_longValue);
        out->appendDouble(m_lat);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const GeoPoint &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case GeoPoint::typeGeoPointEmpty:
        
        break;
    case GeoPoint::typeGeoPoint:
        stream << item.longValue();
        stream << item.lat();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, GeoPoint &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<GeoPoint::GeoPointType>(type));
    switch(type) {
    case GeoPoint::typeGeoPointEmpty: {
        
    }
        break;
    case GeoPoint::typeGeoPoint: {
        qreal m_longValue;
        stream >> m_longValue;
        item.setLongValue(m_longValue);
        qreal m_lat;
        stream >> m_lat;
        item.setLat(m_lat);
    }
        break;
    }
    return stream;
}

