// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CXMPMetadata wrapper class

class CXMPMetadata : public COleDispatchDriver
{
public:
    CXMPMetadata(){} // Calls COleDispatchDriver default constructor
    CXMPMetadata(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CXMPMetadata(const CXMPMetadata& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // XMPMetadata methods
public:
    CString get_RawData()
    {
        CString result;
        InvokeHelper(0x70524d64, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_RawData(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x70524d64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_Application()
    {
        LPDISPATCH result;
        InvokeHelper(0x63617070, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Parent()
    {
        LPDISPATCH result;
        InvokeHelper(0x63746e72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }

    // XMPMetadata properties
public:

};
