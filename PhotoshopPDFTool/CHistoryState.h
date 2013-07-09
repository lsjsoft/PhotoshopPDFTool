// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CHistoryState wrapper class

class CHistoryState : public COleDispatchDriver
{
public:
    CHistoryState(){} // Calls COleDispatchDriver default constructor
    CHistoryState(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CHistoryState(const CHistoryState& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // HistoryState methods
public:
    CString get_Name()
    {
        CString result;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    BOOL get_Snapshot()
    {
        BOOL result;
        InvokeHelper(0x48536874, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
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

    // HistoryState properties
public:

};
