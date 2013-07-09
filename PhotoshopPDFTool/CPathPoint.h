// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CPathPoint wrapper class

class CPathPoint : public COleDispatchDriver
{
public:
    CPathPoint(){} // Calls COleDispatchDriver default constructor
    CPathPoint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CPathPoint(const CPathPoint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // PathPoint methods
public:
    VARIANT get_Anchor()
    {
        VARIANT result;
        InvokeHelper(0x50543138, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    VARIANT get_LeftDirection()
    {
        VARIANT result;
        InvokeHelper(0x50543139, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    VARIANT get_RightDirection()
    {
        VARIANT result;
        InvokeHelper(0x50543230, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    long get_Kind()
    {
        long result;
        InvokeHelper(0x4b696e64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
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

    // PathPoint properties
public:

};
