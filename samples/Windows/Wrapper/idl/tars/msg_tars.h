// **********************************************************************
// This file was generated by a TARS parser!
// TARS version 1.0.1.
// **********************************************************************

#ifndef __MSGMESSAGE_H_
#define __MSGMESSAGE_H_

#include <map>
#include <string>
#include <vector>
#include "tars/Tars.h"
using namespace std;

namespace MessageService
{
    enum DeviceType
    {
        DeviceTypeIos = 1,
        DeviceTypeAndroid = 2,
        DeviceTypePc = 3,
        DeviceTypeOther = 6,
    };
    inline string etos(const DeviceType & e)
    {
        switch(e)
        {
            case DeviceTypeIos: return "DeviceTypeIos";
            case DeviceTypeAndroid: return "DeviceTypeAndroid";
            case DeviceTypePc: return "DeviceTypePc";
            case DeviceTypeOther: return "DeviceTypeOther";
            default: return "";
        }
    }
    inline int stoe(const string & s, DeviceType & e)
    {
        if(s == "DeviceTypeIos")  { e=DeviceTypeIos; return 0;}
        if(s == "DeviceTypeAndroid")  { e=DeviceTypeAndroid; return 0;}
        if(s == "DeviceTypePc")  { e=DeviceTypePc; return 0;}
        if(s == "DeviceTypeOther")  { e=DeviceTypeOther; return 0;}

        return -1;
    }

    enum SendMode
    {
        SendModeP2P = 0,
        SendModeGroup = 1,
        SendModeP2PS = 4,
        SendModeOneOfGroup = 5,
        SendModeAppBroadcast = 7,
        SendModeSystemBroadcast = 8,
    };
    inline string etos(const SendMode & e)
    {
        switch(e)
        {
            case SendModeP2P: return "SendModeP2P";
            case SendModeGroup: return "SendModeGroup";
            case SendModeP2PS: return "SendModeP2PS";
            case SendModeOneOfGroup: return "SendModeOneOfGroup";
            case SendModeAppBroadcast: return "SendModeAppBroadcast";
            case SendModeSystemBroadcast: return "SendModeSystemBroadcast";
            default: return "";
        }
    }
    inline int stoe(const string & s, SendMode & e)
    {
        if(s == "SendModeP2P")  { e=SendModeP2P; return 0;}
        if(s == "SendModeGroup")  { e=SendModeGroup; return 0;}
        if(s == "SendModeP2PS")  { e=SendModeP2PS; return 0;}
        if(s == "SendModeOneOfGroup")  { e=SendModeOneOfGroup; return 0;}
        if(s == "SendModeAppBroadcast")  { e=SendModeAppBroadcast; return 0;}
        if(s == "SendModeSystemBroadcast")  { e=SendModeSystemBroadcast; return 0;}

        return -1;
    }

    enum SendOption
    {
        SendOptionOfflineSave = 4,
        SendOptionIosPush = 8,
    };
    inline string etos(const SendOption & e)
    {
        switch(e)
        {
            case SendOptionOfflineSave: return "SendOptionOfflineSave";
            case SendOptionIosPush: return "SendOptionIosPush";
            default: return "";
        }
    }
    inline int stoe(const string & s, SendOption & e)
    {
        if(s == "SendOptionOfflineSave")  { e=SendOptionOfflineSave; return 0;}
        if(s == "SendOptionIosPush")  { e=SendOptionIosPush; return 0;}

        return -1;
    }

    enum MessageType
    {
        MessageTypeText = 1,
        MessageTypeImage,
        MessageTypeAudio,
        MessageTypeVideo,
        MessageTypeFile,
        MessageTypeGeo,
        MessageTypeCustom,
        MessageTypeTip,
        MessageTypeCommand,
        MessageTypeOperate = 80,
        MessageTypeOther = 120,
    };
    inline string etos(const MessageType & e)
    {
        switch(e)
        {
            case MessageTypeText: return "MessageTypeText";
            case MessageTypeImage: return "MessageTypeImage";
            case MessageTypeAudio: return "MessageTypeAudio";
            case MessageTypeVideo: return "MessageTypeVideo";
            case MessageTypeFile: return "MessageTypeFile";
            case MessageTypeGeo: return "MessageTypeGeo";
            case MessageTypeCustom: return "MessageTypeCustom";
            case MessageTypeTip: return "MessageTypeTip";
            case MessageTypeCommand: return "MessageTypeCommand";
            case MessageTypeOperate: return "MessageTypeOperate";
            case MessageTypeOther: return "MessageTypeOther";
            default: return "";
        }
    }
    inline int stoe(const string & s, MessageType & e)
    {
        if(s == "MessageTypeText")  { e=MessageTypeText; return 0;}
        if(s == "MessageTypeImage")  { e=MessageTypeImage; return 0;}
        if(s == "MessageTypeAudio")  { e=MessageTypeAudio; return 0;}
        if(s == "MessageTypeVideo")  { e=MessageTypeVideo; return 0;}
        if(s == "MessageTypeFile")  { e=MessageTypeFile; return 0;}
        if(s == "MessageTypeGeo")  { e=MessageTypeGeo; return 0;}
        if(s == "MessageTypeCustom")  { e=MessageTypeCustom; return 0;}
        if(s == "MessageTypeTip")  { e=MessageTypeTip; return 0;}
        if(s == "MessageTypeCommand")  { e=MessageTypeCommand; return 0;}
        if(s == "MessageTypeOperate")  { e=MessageTypeOperate; return 0;}
        if(s == "MessageTypeOther")  { e=MessageTypeOther; return 0;}

        return -1;
    }

    enum MessageOp
    {
        MessageOpCancelMessage = 300,
    };
    inline string etos(const MessageOp & e)
    {
        switch(e)
        {
            case MessageOpCancelMessage: return "MessageOpCancelMessage";
            default: return "";
        }
    }
    inline int stoe(const string & s, MessageOp & e)
    {
        if(s == "MessageOpCancelMessage")  { e=MessageOpCancelMessage; return 0;}

        return -1;
    }

    struct Message : public tars::TarsStructBase
    {
    public:
        static string className()
        {
            return "MessageService.Message";
        }
        static string MD5()
        {
            return "7fcaedaf65c540b4c31e73f648b17ed7";
        }
        Message()
        :seqId(0),from(""),to(""),sendMode(0),type(0),priority(0),handleOption(0),pushInfo(""),timestamp(0),expireTime(0)
        {
        }
        void resetDefautlt()
        {
            seqId = 0;
            from = "";
            to = "";
            sendMode = 0;
            type = 0;
            priority = 0;
            handleOption = 0;
            pushInfo = "";
            timestamp = 0;
            expireTime = 0;
        }
        template<typename WriterT>
        void writeTo(tars::TarsOutputStream<WriterT>& _os) const
        {
            _os.write(seqId, 0);
            _os.write(from, 1);
            _os.write(to, 2);
            _os.write(sendMode, 3);
            _os.write(type, 4);
            if (priority != 0)
            {
                _os.write(priority, 5);
            }
            if (handleOption != 0)
            {
                _os.write(handleOption, 6);
            }
            if (pushInfo != "")
            {
                _os.write(pushInfo, 7);
            }
            _os.write(timestamp, 8);
            if (expireTime != 0)
            {
                _os.write(expireTime, 9);
            }
            _os.write(content, 10);
        }
        template<typename ReaderT>
        void readFrom(tars::TarsInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(seqId, 0, true);
            _is.read(from, 1, true);
            _is.read(to, 2, true);
            _is.read(sendMode, 3, true);
            _is.read(type, 4, true);
            _is.read(priority, 5, false);
            _is.read(handleOption, 6, false);
            _is.read(pushInfo, 7, false);
            _is.read(timestamp, 8, true);
            _is.read(expireTime, 9, false);
            _is.read(content, 10, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.display(seqId,"seqId");
            _ds.display(from,"from");
            _ds.display(to,"to");
            _ds.display(sendMode,"sendMode");
            _ds.display(type,"type");
            _ds.display(priority,"priority");
            _ds.display(handleOption,"handleOption");
            _ds.display(pushInfo,"pushInfo");
            _ds.display(timestamp,"timestamp");
            _ds.display(expireTime,"expireTime");
            _ds.display(content,"content");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.displaySimple(seqId, true);
            _ds.displaySimple(from, true);
            _ds.displaySimple(to, true);
            _ds.displaySimple(sendMode, true);
            _ds.displaySimple(type, true);
            _ds.displaySimple(priority, true);
            _ds.displaySimple(handleOption, true);
            _ds.displaySimple(pushInfo, true);
            _ds.displaySimple(timestamp, true);
            _ds.displaySimple(expireTime, true);
            _ds.displaySimple(content, false);
            return _os;
        }
    public:
        tars::Int64 seqId;
        std::string from;
        std::string to;
        tars::Short sendMode;
        tars::Short type;
        tars::Char priority;
        tars::Short handleOption;
        std::string pushInfo;
        tars::Int32 timestamp;
        tars::Int32 expireTime;
        vector<tars::Char> content;
    };
    inline bool operator==(const Message&l, const Message&r)
    {
        return l.seqId == r.seqId && l.from == r.from && l.to == r.to && l.sendMode == r.sendMode && l.type == r.type && l.priority == r.priority && l.handleOption == r.handleOption && l.pushInfo == r.pushInfo && l.timestamp == r.timestamp && l.expireTime == r.expireTime && l.content == r.content;
    }
    inline bool operator!=(const Message&l, const Message&r)
    {
        return !(l == r);
    }

    struct MessageSet : public tars::TarsStructBase
    {
    public:
        static string className()
        {
            return "MessageService.MessageSet";
        }
        static string MD5()
        {
            return "f7488a117d597b3499d93cffb66dd1df";
        }
        MessageSet()
        :from(""),to(""),sendMode(0)
        {
        }
        void resetDefautlt()
        {
            from = "";
            to = "";
            sendMode = 0;
        }
        template<typename WriterT>
        void writeTo(tars::TarsOutputStream<WriterT>& _os) const
        {
            _os.write(from, 0);
            _os.write(to, 1);
            _os.write(sendMode, 3);
        }
        template<typename ReaderT>
        void readFrom(tars::TarsInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(from, 0, true);
            _is.read(to, 1, true);
            _is.read(sendMode, 3, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.display(from,"from");
            _ds.display(to,"to");
            _ds.display(sendMode,"sendMode");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.displaySimple(from, true);
            _ds.displaySimple(to, true);
            _ds.displaySimple(sendMode, false);
            return _os;
        }
    public:
        std::string from;
        std::string to;
        tars::Short sendMode;
    };
    inline bool operator==(const MessageSet&l, const MessageSet&r)
    {
        return l.from == r.from && l.to == r.to && l.sendMode == r.sendMode;
    }
    inline bool operator!=(const MessageSet&l, const MessageSet&r)
    {
        return !(l == r);
    }

    struct SeqResp : public tars::TarsStructBase
    {
    public:
        static string className()
        {
            return "MessageService.SeqResp";
        }
        static string MD5()
        {
            return "c74a5744af9921d763e091ddf706ef70";
        }
        SeqResp()
        :code(0),info("")
        {
        }
        void resetDefautlt()
        {
            code = 0;
            info = "";
        }
        template<typename WriterT>
        void writeTo(tars::TarsOutputStream<WriterT>& _os) const
        {
            _os.write(code, 0);
            if (info != "")
            {
                _os.write(info, 1);
            }
        }
        template<typename ReaderT>
        void readFrom(tars::TarsInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(code, 0, true);
            _is.read(info, 1, false);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.display(code,"code");
            _ds.display(info,"info");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.displaySimple(code, true);
            _ds.displaySimple(info, false);
            return _os;
        }
    public:
        tars::Short code;
        std::string info;
    };
    inline bool operator==(const SeqResp&l, const SeqResp&r)
    {
        return l.code == r.code && l.info == r.info;
    }
    inline bool operator!=(const SeqResp&l, const SeqResp&r)
    {
        return !(l == r);
    }

}

#endif