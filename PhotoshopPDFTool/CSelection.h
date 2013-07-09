// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CSelection wrapper class

class CSelection : public COleDispatchDriver
{
public:
    CSelection(){} // Calls COleDispatchDriver default constructor
    CSelection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CSelection(const CSelection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // Selection methods
public:
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
    void Clear()
    {
        InvokeHelper(0x4d413031, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Copy(VARIANT& Merge)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x636f7079, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Merge);
    }
    void Cut()
    {
        InvokeHelper(0x63757420, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void SelectBorder(double Width)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x42726472, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Width);
    }
    void Contract(double By)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x53437472, DISPATCH_METHOD, VT_EMPTY, NULL, parms, By);
    }
    void Fill(VARIANT& FillType, VARIANT& Mode, VARIANT& Opacity, VARIANT& PreserveTransparency)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x46696c6c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &FillType, &Mode, &Opacity, &PreserveTransparency);
    }
    void Stroke(VARIANT& StrokeColor, long Width, VARIANT& Location, VARIANT& Mode, VARIANT& Opacity, VARIANT& PreserveTransparency)
    {
        static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x53746b65, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &StrokeColor, Width, &Location, &Mode, &Opacity, &PreserveTransparency);
    }
    void SelectAll()
    {
        InvokeHelper(0x5363416c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Deselect()
    {
        InvokeHelper(0x44736c74, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Select(VARIANT& Region, VARIANT& Type, VARIANT& Feather, VARIANT& AntiAlias)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x736c6374, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Region, &Type, &Feather, &AntiAlias);
    }
    void Expand(double By)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x58706e64, DISPATCH_METHOD, VT_EMPTY, NULL, parms, By);
    }
    void Feather(double By)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x46746872, DISPATCH_METHOD, VT_EMPTY, NULL, parms, By);
    }
    void Grow(long Tolerance, BOOL AntiAlias)
    {
        static BYTE parms[] = VTS_I4 VTS_BOOL ;
        InvokeHelper(0x47726f77, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Tolerance, AntiAlias);
    }
    void Invert()
    {
        InvokeHelper(0x4976536c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Similar(long Tolerance, BOOL AntiAlias)
    {
        static BYTE parms[] = VTS_I4 VTS_BOOL ;
        InvokeHelper(0x536d6c72, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Tolerance, AntiAlias);
    }
    void Smooth(long Radius)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50537468, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Radius);
    }
    void Store(LPDISPATCH Into, VARIANT& Combination)
    {
        static BYTE parms[] = VTS_DISPATCH VTS_VARIANT ;
        InvokeHelper(0x5376536c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Into, &Combination);
    }
    void Load(LPDISPATCH From, VARIANT& Combination, VARIANT& Inverting)
    {
        static BYTE parms[] = VTS_DISPATCH VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x4c64536c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, From, &Combination, &Inverting);
    }
    void Translate(VARIANT& DeltaX, VARIANT& DeltaY)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x4d765073, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &DeltaX, &DeltaY);
    }
    void TranslateBoundary(VARIANT& DeltaX, VARIANT& DeltaY)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x4d764264, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &DeltaX, &DeltaY);
    }
    void Rotate(double Angle, VARIANT& Anchor)
    {
        static BYTE parms[] = VTS_R8 VTS_VARIANT ;
        InvokeHelper(0x526f7461, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Angle, &Anchor);
    }
    void RotateBoundary(double Angle, VARIANT& Anchor)
    {
        static BYTE parms[] = VTS_R8 VTS_VARIANT ;
        InvokeHelper(0x526f7442, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Angle, &Anchor);
    }
    void Resize(VARIANT& Horizontal, VARIANT& Vertical, VARIANT& Anchor)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x53636c65, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Horizontal, &Vertical, &Anchor);
    }
    void ResizeBoundary(VARIANT& Horizontal, VARIANT& Vertical, VARIANT& Anchor)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x53634264, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Horizontal, &Vertical, &Anchor);
    }
    void MakeWorkPath(VARIANT& Tolerance)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x50543136, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Tolerance);
    }

    // Selection properties
public:

};
