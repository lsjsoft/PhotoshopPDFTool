// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CRawFormatOpenOptions wrapper class

class CRawFormatOpenOptions : public COleDispatchDriver
{
public:
    CRawFormatOpenOptions(){} // Calls COleDispatchDriver default constructor
    CRawFormatOpenOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CRawFormatOpenOptions(const CRawFormatOpenOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _RawFormatOpenOptions methods
public:
    long get_Height()
    {
        long result;
        InvokeHelper(0x48676874, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Height(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x48676874, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Width()
    {
        long result;
        InvokeHelper(0x57647468, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Width(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x57647468, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_ChannelNumber()
    {
        long result;
        InvokeHelper(0x43684e6d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ChannelNumber(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x43684e6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_InterleaveChannels()
    {
        BOOL result;
        InvokeHelper(0x634f6472, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_InterleaveChannels(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x634f6472, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_BitsPerChannel()
    {
        long result;
        InvokeHelper(0x44426368, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_BitsPerChannel(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x44426368, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_ByteOrder()
    {
        long result;
        InvokeHelper(0x5466426f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ByteOrder(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x5466426f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_HeaderSize()
    {
        long result;
        InvokeHelper(0x4864537a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_HeaderSize(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4864537a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_RetainHeader()
    {
        BOOL result;
        InvokeHelper(0x52744864, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_RetainHeader(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x52744864, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_Application()
    {
        LPDISPATCH result;
        InvokeHelper(0x63617070, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ObjectValue(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_ObjectValue(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x0, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }

    // _RawFormatOpenOptions properties
public:

};
