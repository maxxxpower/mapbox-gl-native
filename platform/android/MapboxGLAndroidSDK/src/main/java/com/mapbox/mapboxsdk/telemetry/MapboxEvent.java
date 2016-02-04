package com.mapbox.mapboxsdk.telemetry;

import java.io.Serializable;

public class MapboxEvent implements Serializable {
    public static final String MGLMapboxEventsUserAgent = "Sirius/1.0/ANDROID MapboxEventsiOS/1.1";
    public static final String MGLMapboxEventsAPIBase = "https://api.tiles.mapbox.com";

    // Event Types
    public static final String MAPBOXEVENT_TURNSTILE = "appUserTurnstile";
    public static final String MAPBOXEVENT_MAP_LOAD = "map.load";
    public static final String MAPBOXEVENT_MAP_CLICK = "map.click";
    public static final String MAPBOXEVENT_MAP_DRAGEND = "map.dragend";
    public static final String MAPBOXEVENT_LOCATION = "location";
    public static final String MAPBOXEVENT_VISIT = "visit";

    // Event Keys
    public static final String MGLEventKeyLatitude = "lat";
    public static final String MGLEventKeyLongitude = "lng";
    public static final String MGLEventKeySpeed = "speed";
    public static final String MGLEventKeyCourse = "course";
    public static final String MGLEventKeyAltitude = "altitude";
    public static final String MGLEventKeyHorizontalAccuracy = "horizontalAccuracy";

    public static final String MGLEventKeyPushEnabled = "enabled.push";
    public static final String MGLEventKeyEmailEnabled = "enabled.email";
    public static final String MGLEventKeyGestureID = "gesture";
    public static final String MGLEventKeyArrivalDate = "arrivalDate";
    public static final String MGLEventKeyDepartureDate = "departureDate";

    public static final String MGLEventGestureSingleTap = "SingleTap";
    public static final String MGLEventGestureDoubleTap = "DoubleTap";
    public static final String MGLEventGestureTwoFingerSingleTap = "TwoFingerTap";
    public static final String MGLEventGestureQuickZoom = "QuickZoom";
    public static final String MGLEventGesturePanStart = "Pan";
    public static final String MGLEventGesturePinchStart = "Pinch";
    public static final String MGLEventGestureRotateStart = "Rotation";
    public static final String MGLEventGesturePitchStart = "Pitch";

    // Event Attributes
    public static final int VERSION = 1;
    public static final String CREATED = "created";
    public static final String INSTANCE = "instance";
    public static final String VENDORID = "vendorId";
    public static final String APPBUNDLEID = "appBundleId";
    public static final String MODEL = "model";
    public static final String OPERATINGSYSTEM= "operatingSystem";
    public static final String ORIENTATION = "orientation";
    public static final String BATTERYLEVEL = "batteryLevel";
    public static final String APPLICATIONSTATE = "applicationState";
    public static final String RESOLUTION = "resolution";
    public static final String ACCESSIBILITYFONTSCALE = "accessibilityFontScale";
    public static final String CARRIER = "carrier";
    public static final String CELLULARNETWORKTYPE = "cellularNetworkType";
    public static final String WIFI = "wifi";
}
