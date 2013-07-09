// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CApplication wrapper class

class CApplication : public COleDispatchDriver
{
public:
    CApplication(){} // Calls COleDispatchDriver default constructor
    CApplication(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CApplication(const CApplication& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _Application methods
public:
    CString get_ColorSettings()
    {
        CString result;
        InvokeHelper(0x435a436e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    CString get_WinColorSettings()
    {
        CString result;
        InvokeHelper(0x435a436d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_ActiveDocument()
    {
        LPDISPATCH result;
        InvokeHelper(0x70414463, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ActiveDocument(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x70414463, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_Name()
    {
        CString result;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    CString get_Path()
    {
        CString result;
        InvokeHelper(0x70507468, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Preferences()
    {
        LPDISPATCH result;
        InvokeHelper(0x70507266, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    CString get_ScriptingVersion()
    {
        CString result;
        InvokeHelper(0x70537673, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    double get_FreeMemory()
    {
        double result;
        InvokeHelper(0x70464d4d, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    CString get_Version()
    {
        CString result;
        InvokeHelper(0x76657273, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    BOOL get_Visible()
    {
        BOOL result;
        InvokeHelper(0x70555673, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Visible(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70555673, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_DisplayDialogs()
    {
        long result;
        InvokeHelper(0x4155694c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_DisplayDialogs(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4155694c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_ForegroundColor()
    {
        LPDISPATCH result;
        InvokeHelper(0x66674363, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ForegroundColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x66674363, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_ForegroundColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x66674363, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_BackgroundColor()
    {
        LPDISPATCH result;
        InvokeHelper(0x62674363, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_BackgroundColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x62674363, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_BackgroundColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x62674363, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_Documents()
    {
        LPDISPATCH result;
        InvokeHelper(0x646f6375, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Fonts()
    {
        LPDISPATCH result;
        InvokeHelper(0x63466e74, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Application()
    {
        LPDISPATCH result;
        InvokeHelper(0x63617070, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void DoAction(LPCTSTR Action, LPCTSTR From)
    {
        static BYTE parms[] = VTS_BSTR VTS_BSTR ;
        InvokeHelper(0x446f4163, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Action, From);
    }
    void Load(LPCTSTR Document)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x4c64536c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Document);
    }
    LPDISPATCH Open(LPCTSTR Document, VARIANT& As)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_BSTR VTS_VARIANT ;
        InvokeHelper(0x5073434f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Document, &As);
        return result;
    }
    void Purge(long Target)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50757267, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target);
    }
    CString DoJavaScript(LPCTSTR JavaScriptCode, VARIANT& Arguments, VARIANT& ExecutionMode)
    {
        CString result;
        static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x446a7857, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, JavaScriptCode, &Arguments, &ExecutionMode);
        return result;
    }
    CString DoJavaScriptFile(LPCTSTR JavaScriptFile, VARIANT& Arguments, VARIANT& ExecutionMode)
    {
        CString result;
        static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x446a6657, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, JavaScriptFile, &Arguments, &ExecutionMode);
        return result;
    }
    CString MakePhotoGallery(LPCTSTR InputFolder, LPCTSTR OutputFolder, VARIANT& Options)
    {
        CString result;
        static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_VARIANT ;
        InvokeHelper(0x77777067, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, InputFolder, OutputFolder, &Options);
        return result;
    }
    CString MakePDFPresentation(VARIANT& InputFiles, LPCTSTR OutputFile, VARIANT& Options)
    {
        CString result;
        static BYTE parms[] = VTS_VARIANT VTS_BSTR VTS_VARIANT ;
        InvokeHelper(0x50444631, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, &InputFiles, OutputFile, &Options);
        return result;
    }
    void Quit()
    {
        InvokeHelper(0x71756974, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    LPDISPATCH ExecuteAction(long EventID, VARIANT& Descriptor, VARIANT& DisplayDialogs)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x506c6179, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, EventID, &Descriptor, &DisplayDialogs);
        return result;
    }
    LPDISPATCH ExecuteActionGet(LPDISPATCH Reference)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x41476574, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Reference);
        return result;
    }
    long StringIDToTypeID(LPCTSTR StringID)
    {
        long result;
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x41723031, DISPATCH_METHOD, VT_I4, (void*)&result, parms, StringID);
        return result;
    }
    CString TypeIDToStringID(long TypeID)
    {
        CString result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x41723032, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, TypeID);
        return result;
    }
    long CharIDToTypeID(LPCTSTR CharID)
    {
        long result;
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x41723033, DISPATCH_METHOD, VT_I4, (void*)&result, parms, CharID);
        return result;
    }
    CString TypeIDToCharID(long TypeID)
    {
        CString result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x41723034, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, TypeID);
        return result;
    }
    void ChangeColorSettings(VARIANT& Name, VARIANT& File)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x4368437a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Name, &File);
    }

    // _Application properties
public:

};
