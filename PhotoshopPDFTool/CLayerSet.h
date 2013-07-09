// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CLayerSet wrapper class

class CLayerSet : public COleDispatchDriver
{
public:
    CLayerSet(){} // Calls COleDispatchDriver default constructor
    CLayerSet(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CLayerSet(const CLayerSet& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // LayerSet methods
public:
    VARIANT get_EnabledChannels()
    {
        VARIANT result;
        InvokeHelper(0x456e4368, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void put_EnabledChannels(VARIANT& newValue)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x456e4368, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
    }
    LPDISPATCH get_Layers()
    {
        LPDISPATCH result;
        InvokeHelper(0x634c7972, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_LayerSets()
    {
        LPDISPATCH result;
        InvokeHelper(0x634c5a74, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_ArtLayers()
    {
        LPDISPATCH result;
        InvokeHelper(0x63434c72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Layer()
    {
        LPDISPATCH result;
        InvokeHelper(0x53436c73, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    CString get_Name()
    {
        CString result;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_Name(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_AllLocked()
    {
        BOOL result;
        InvokeHelper(0x416c4c63, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_AllLocked(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x416c4c63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_BlendMode()
    {
        long result;
        InvokeHelper(0x426c4d64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_BlendMode(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x426c4d64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    VARIANT get_LinkedLayers()
    {
        VARIANT result;
        InvokeHelper(0x4c6b6564, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    double get_Opacity()
    {
        double result;
        InvokeHelper(0x4f706374, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Opacity(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4f706374, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Visible()
    {
        BOOL result;
        InvokeHelper(0x70565362, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Visible(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70565362, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_LayerType()
    {
        long result;
        InvokeHelper(0x74797065, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_ArtLayer()
    {
        LPDISPATCH result;
        InvokeHelper(0x4c41744c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_LayerSet()
    {
        LPDISPATCH result;
        InvokeHelper(0x4c41745a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    VARIANT get_Bounds()
    {
        VARIANT result;
        InvokeHelper(0x426e6473, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
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
    LPDISPATCH Merge()
    {
        LPDISPATCH result;
        InvokeHelper(0x4d674c5a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void Unlink()
    {
        InvokeHelper(0x556c6e6b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Link(LPDISPATCH With)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x6c6b546f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, With);
    }
    void Translate(VARIANT& DeltaX, VARIANT& DeltaY)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x4d765073, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &DeltaX, &DeltaY);
    }
    void Rotate(double Angle, VARIANT& Anchor)
    {
        static BYTE parms[] = VTS_R8 VTS_VARIANT ;
        InvokeHelper(0x526f7461, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Angle, &Anchor);
    }
    void Resize(VARIANT& Horizontal, VARIANT& Vertical, VARIANT& Anchor)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x53636c65, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Horizontal, &Vertical, &Anchor);
    }
    void MoveToBeginning(LPDISPATCH Container)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d764566, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Container);
    }
    void MoveToEnd(LPDISPATCH Container)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d764565, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Container);
    }
    void MoveBefore(LPDISPATCH RelativeObject)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d764562, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RelativeObject);
    }
    void MoveAfter(LPDISPATCH RelativeObject)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d764561, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RelativeObject);
    }
    LPDISPATCH Duplicate(VARIANT& RelativeObject, VARIANT& InsertionLocation)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x636c6f6e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &RelativeObject, &InsertionLocation);
        return result;
    }
    void Move(LPDISPATCH RelativeObject, long InsertionLocation)
    {
        static BYTE parms[] = VTS_DISPATCH VTS_I4 ;
        InvokeHelper(0x6d6f7665, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RelativeObject, InsertionLocation);
    }
    void Delete()
    {
        InvokeHelper(0x64656c6f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }

    // LayerSet properties
public:

};
