// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CTextFont wrapper class

class CTextFont : public COleDispatchDriver
{
public:
    CTextFont(){} // Calls COleDispatchDriver default constructor
    CTextFont(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CTextFont(const CTextFont& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // TextFont methods
public:
    CString get_Name()
    {
        CString result;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    CString get_PostScriptName()
    {
        CString result;
        InvokeHelper(0x7050534e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    CString get_Family()
    {
        CString result;
        InvokeHelper(0x7046464e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    CString get_Style()
    {
        CString result;
        InvokeHelper(0x5374796c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
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

    // TextFont properties
public:

};
