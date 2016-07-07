// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_SharingClient_WRAP_H_
#define SWIG_SharingClient_WRAP_H_

class SwigDirector_LogWriter : public XTools::LogWriter, public Swig::Director {

public:
    SwigDirector_LogWriter();
    virtual ~SwigDirector_LogWriter();
    virtual void WriteLogEntry(XTools::LogSeverity severity, std::string const &message);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int, char *);
    void swig_connect_director(SWIG_Callback0_t callbackWriteLogEntry);

private:
    SWIG_Callback0_t swig_callbackWriteLogEntry;
    void swig_init_callbacks();
};

class SwigDirector_NetworkConnectionListener : public XTools::NetworkConnectionListener, public Swig::Director {

public:
    SwigDirector_NetworkConnectionListener();
    virtual ~SwigDirector_NetworkConnectionListener();
    virtual void OnConnected(XTools::NetworkConnectionPtr const &connection);
    virtual void OnConnectFailed(XTools::NetworkConnectionPtr const &connection);
    virtual void OnDisconnected(XTools::NetworkConnectionPtr const &connection);
    virtual void OnMessageReceived(XTools::NetworkConnectionPtr const &connection, XTools::NetworkInMessage &message);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(void *, void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnConnected, SWIG_Callback1_t callbackOnConnectFailed, SWIG_Callback2_t callbackOnDisconnected, SWIG_Callback3_t callbackOnMessageReceived);

private:
    SWIG_Callback0_t swig_callbackOnConnected;
    SWIG_Callback1_t swig_callbackOnConnectFailed;
    SWIG_Callback2_t swig_callbackOnDisconnected;
    SWIG_Callback3_t swig_callbackOnMessageReceived;
    void swig_init_callbacks();
};

class SwigDirector_IntArrayListener : public XTools::IntArrayListener, public Swig::Director {

public:
    SwigDirector_IntArrayListener();
    virtual ~SwigDirector_IntArrayListener();
    virtual void OnValueChanged(XTools::int32 index, XTools::int32 newValue);
    virtual void OnValueInserted(XTools::int32 index, XTools::int32 value);
    virtual void OnValueRemoved(XTools::int32 index, XTools::int32 value);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int, int);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(int, int);
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(int, int);
    void swig_connect_director(SWIG_Callback0_t callbackOnValueChanged, SWIG_Callback1_t callbackOnValueInserted, SWIG_Callback2_t callbackOnValueRemoved);

private:
    SWIG_Callback0_t swig_callbackOnValueChanged;
    SWIG_Callback1_t swig_callbackOnValueInserted;
    SWIG_Callback2_t swig_callbackOnValueRemoved;
    void swig_init_callbacks();
};

class SwigDirector_ObjectElementListener : public XTools::ObjectElementListener, public Swig::Director {

public:
    SwigDirector_ObjectElementListener();
    virtual ~SwigDirector_ObjectElementListener();
    virtual void OnBoolElementChanged(XTools::XGuid elementID, bool newValue);
    virtual void OnIntElementChanged(XTools::XGuid elementID, XTools::int32 newValue);
    virtual void OnLongElementChanged(XTools::XGuid elementID, XTools::int64 newValue);
    virtual void OnFloatElementChanged(XTools::XGuid elementID, float newValue);
    virtual void OnDoubleElementChanged(XTools::XGuid elementID, double newValue);
    virtual void OnStringElementChanged(XTools::XGuid elementID, XTools::XStringPtr const &newValue);
    virtual void OnElementAdded(XTools::ElementPtr const &element);
    virtual void OnElementDeleted(XTools::ElementPtr const &element);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(long long, unsigned int);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(long long, int);
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(long long, long long);
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(long long, float);
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(long long, double);
    typedef void (SWIGSTDCALL* SWIG_Callback5_t)(long long, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback6_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback7_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnBoolElementChanged, SWIG_Callback1_t callbackOnIntElementChanged, SWIG_Callback2_t callbackOnLongElementChanged, SWIG_Callback3_t callbackOnFloatElementChanged, SWIG_Callback4_t callbackOnDoubleElementChanged, SWIG_Callback5_t callbackOnStringElementChanged, SWIG_Callback6_t callbackOnElementAdded, SWIG_Callback7_t callbackOnElementDeleted);

private:
    SWIG_Callback0_t swig_callbackOnBoolElementChanged;
    SWIG_Callback1_t swig_callbackOnIntElementChanged;
    SWIG_Callback2_t swig_callbackOnLongElementChanged;
    SWIG_Callback3_t swig_callbackOnFloatElementChanged;
    SWIG_Callback4_t swig_callbackOnDoubleElementChanged;
    SWIG_Callback5_t swig_callbackOnStringElementChanged;
    SWIG_Callback6_t swig_callbackOnElementAdded;
    SWIG_Callback7_t swig_callbackOnElementDeleted;
    void swig_init_callbacks();
};

class SwigDirector_SyncListener : public XTools::SyncListener, public Swig::Director {

public:
    SwigDirector_SyncListener();
    virtual ~SwigDirector_SyncListener();
    virtual void OnSyncChangesBegin();
    virtual void OnSyncChangesEnd();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)();
    void swig_connect_director(SWIG_Callback0_t callbackOnSyncChangesBegin, SWIG_Callback1_t callbackOnSyncChangesEnd);

private:
    SWIG_Callback0_t swig_callbackOnSyncChangesBegin;
    SWIG_Callback1_t swig_callbackOnSyncChangesEnd;
    void swig_init_callbacks();
};

class SwigDirector_SessionListener : public XTools::SessionListener, public Swig::Director {

public:
    SwigDirector_SessionListener();
    virtual ~SwigDirector_SessionListener();
    virtual void OnJoiningSession();
    virtual void OnJoinSucceeded();
    virtual void OnJoinFailed();
    virtual void OnSessionDisconnected();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)();
    void swig_connect_director(SWIG_Callback0_t callbackOnJoiningSession, SWIG_Callback1_t callbackOnJoinSucceeded, SWIG_Callback2_t callbackOnJoinFailed, SWIG_Callback3_t callbackOnSessionDisconnected);

private:
    SWIG_Callback0_t swig_callbackOnJoiningSession;
    SWIG_Callback1_t swig_callbackOnJoinSucceeded;
    SWIG_Callback2_t swig_callbackOnJoinFailed;
    SWIG_Callback3_t swig_callbackOnSessionDisconnected;
    void swig_init_callbacks();
};

class SwigDirector_SessionManagerListener : public XTools::SessionManagerListener, public Swig::Director {

public:
    SwigDirector_SessionManagerListener();
    virtual ~SwigDirector_SessionManagerListener();
    virtual void OnCreateSucceeded(XTools::SessionPtr const &newSession);
    virtual void OnCreateFailed(XTools::XStringPtr const &reason);
    virtual void OnSessionAdded(XTools::SessionPtr const &newSession);
    virtual void OnSessionClosed(XTools::SessionPtr const &session);
    virtual void OnUserJoinedSession(XTools::SessionPtr const &session, XTools::UserPtr const &newUser);
    virtual void OnUserLeftSession(XTools::SessionPtr const &session, XTools::UserPtr const &user);
    virtual void OnUserChanged(XTools::SessionPtr const &session, XTools::UserPtr const &user);
    virtual void OnServerConnected();
    virtual void OnServerDisconnected();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback5_t)(void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback6_t)(void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback7_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback8_t)();
    void swig_connect_director(SWIG_Callback0_t callbackOnCreateSucceeded, SWIG_Callback1_t callbackOnCreateFailed, SWIG_Callback2_t callbackOnSessionAdded, SWIG_Callback3_t callbackOnSessionClosed, SWIG_Callback4_t callbackOnUserJoinedSession, SWIG_Callback5_t callbackOnUserLeftSession, SWIG_Callback6_t callbackOnUserChanged, SWIG_Callback7_t callbackOnServerConnected, SWIG_Callback8_t callbackOnServerDisconnected);

private:
    SWIG_Callback0_t swig_callbackOnCreateSucceeded;
    SWIG_Callback1_t swig_callbackOnCreateFailed;
    SWIG_Callback2_t swig_callbackOnSessionAdded;
    SWIG_Callback3_t swig_callbackOnSessionClosed;
    SWIG_Callback4_t swig_callbackOnUserJoinedSession;
    SWIG_Callback5_t swig_callbackOnUserLeftSession;
    SWIG_Callback6_t swig_callbackOnUserChanged;
    SWIG_Callback7_t swig_callbackOnServerConnected;
    SWIG_Callback8_t swig_callbackOnServerDisconnected;
    void swig_init_callbacks();
};

class SwigDirector_UserPresenceManagerListener : public XTools::UserPresenceManagerListener, public Swig::Director {

public:
    SwigDirector_UserPresenceManagerListener();
    virtual ~SwigDirector_UserPresenceManagerListener();
    virtual void OnUserPresenceChanged(XTools::UserPtr const &user);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnUserPresenceChanged);

private:
    SWIG_Callback0_t swig_callbackOnUserPresenceChanged;
    void swig_init_callbacks();
};

class SwigDirector_RoomManagerListener : public XTools::RoomManagerListener, public Swig::Director {

public:
    SwigDirector_RoomManagerListener();
    virtual ~SwigDirector_RoomManagerListener();
    virtual void OnRoomAdded(XTools::RoomPtr const &newRoom);
    virtual void OnRoomClosed(XTools::RoomPtr const &room);
    virtual void OnUserJoinedRoom(XTools::RoomPtr const &room, XTools::UserID user);
    virtual void OnUserLeftRoom(XTools::RoomPtr const &room, XTools::UserID user);
    virtual void OnAnchorsChanged(XTools::RoomPtr const &room);
    virtual void OnAnchorsDownloaded(bool successful, XTools::AnchorDownloadRequestPtr const &request, XTools::XStringPtr const &failureReason);
    virtual void OnAnchorUploadComplete(bool successful, XTools::XStringPtr const &failureReason);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(void *, int);
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(void *, int);
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback5_t)(unsigned int, void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback6_t)(unsigned int, void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnRoomAdded, SWIG_Callback1_t callbackOnRoomClosed, SWIG_Callback2_t callbackOnUserJoinedRoom, SWIG_Callback3_t callbackOnUserLeftRoom, SWIG_Callback4_t callbackOnAnchorsChanged, SWIG_Callback5_t callbackOnAnchorsDownloaded, SWIG_Callback6_t callbackOnAnchorUploadComplete);

private:
    SWIG_Callback0_t swig_callbackOnRoomAdded;
    SWIG_Callback1_t swig_callbackOnRoomClosed;
    SWIG_Callback2_t swig_callbackOnUserJoinedRoom;
    SWIG_Callback3_t swig_callbackOnUserLeftRoom;
    SWIG_Callback4_t swig_callbackOnAnchorsChanged;
    SWIG_Callback5_t swig_callbackOnAnchorsDownloaded;
    SWIG_Callback6_t swig_callbackOnAnchorUploadComplete;
    void swig_init_callbacks();
};

class SwigDirector_PairMaker : public XTools::PairMaker, public Swig::Director {

public:
    SwigDirector_PairMaker();
    virtual ~SwigDirector_PairMaker();
    virtual bool IsReceiver();
    virtual XTools::int32 GetAddressCount();
    virtual XTools::XStringPtr GetAddress(XTools::int32 index);
    virtual XTools::uint16 GetPort();
    virtual void Update();
    virtual bool IsReadyToConnect();
    virtual XTools::int32 GetLocalKey();
    virtual XTools::int32 GetRemoteKey();

    typedef unsigned int (SWIGSTDCALL* SWIG_Callback0_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef void * (SWIGSTDCALL* SWIG_Callback2_t)(int);
    typedef unsigned short (SWIGSTDCALL* SWIG_Callback3_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)();
    typedef unsigned int (SWIGSTDCALL* SWIG_Callback5_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback6_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback7_t)();
    void swig_connect_director(SWIG_Callback0_t callbackIsReceiver, SWIG_Callback1_t callbackGetAddressCount, SWIG_Callback2_t callbackGetAddress, SWIG_Callback3_t callbackGetPort, SWIG_Callback4_t callbackUpdate, SWIG_Callback5_t callbackIsReadyToConnect, SWIG_Callback6_t callbackGetLocalKey, SWIG_Callback7_t callbackGetRemoteKey);

private:
    SWIG_Callback0_t swig_callbackIsReceiver;
    SWIG_Callback1_t swig_callbackGetAddressCount;
    SWIG_Callback2_t swig_callbackGetAddress;
    SWIG_Callback3_t swig_callbackGetPort;
    SWIG_Callback4_t swig_callbackUpdate;
    SWIG_Callback5_t swig_callbackIsReadyToConnect;
    SWIG_Callback6_t swig_callbackGetLocalKey;
    SWIG_Callback7_t swig_callbackGetRemoteKey;
    void swig_init_callbacks();
};

class SwigDirector_PairingListener : public XTools::PairingListener, public Swig::Director {

public:
    SwigDirector_PairingListener();
    virtual ~SwigDirector_PairingListener();
    virtual void PairingConnectionSucceeded();
    virtual void PairingConnectionFailed(XTools::PairingResult reason);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(int);
    void swig_connect_director(SWIG_Callback0_t callbackPairingConnectionSucceeded, SWIG_Callback1_t callbackPairingConnectionFailed);

private:
    SWIG_Callback0_t swig_callbackPairingConnectionSucceeded;
    SWIG_Callback1_t swig_callbackPairingConnectionFailed;
    void swig_init_callbacks();
};

class SwigDirector_ImageTagLocationListener : public XTools::ImageTagLocationListener, public Swig::Director {

public:
    SwigDirector_ImageTagLocationListener();
    virtual ~SwigDirector_ImageTagLocationListener();
    virtual void OnTagLocated(XTools::ImageTagLocationPtr const &location);
    virtual void OnTagLocatingCompleted();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)();
    void swig_connect_director(SWIG_Callback0_t callbackOnTagLocated, SWIG_Callback1_t callbackOnTagLocatingCompleted);

private:
    SWIG_Callback0_t swig_callbackOnTagLocated;
    SWIG_Callback1_t swig_callbackOnTagLocatingCompleted;
    void swig_init_callbacks();
};


#endif
