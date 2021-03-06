{ Parsed from MobileCoreServices.framework (iPhoneOS8.2) UTType.h }
{ Created on Fri Mar 20 2:11:10 2015 }

{$ifndef __UTTYPE__}

{$ifdef EXTERNAL_SYMBOLS}
var
  kUTExportedTypeDeclarationsKey: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTImportedTypeDeclarationsKey: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTypeIdentifierKey: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTypeTagSpecificationKey: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTypeConformsToKey: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTypeDescriptionKey: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTypeIconFileKey: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTypeReferenceURLKey: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTypeVersionKey: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTagClassFilenameExtension: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTagClassMIMEType: CFStringRef { available starting in __MAC_10_3,__IPHONE_3_0 }; cvar; external;
  kUTTagClassNSPboardType: CFStringRef { available starting in __MAC_10_3,__IPHONE_NA }; cvar; external;
  kUTTagClassOSType: CFStringRef { available starting in __MAC_10_3,__IPHONE_NA }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UTTypeCreatePreferredIdentifierForTag(inTagClass: CFStringRef; inTag: CFStringRef; inConformingToUTI: CFStringRef): CFStringRef; cdecl; external; { available starting in __MAC_10_3,__IPHONE_3_0 }
function UTTypeCreateAllIdentifiersForTag(inTagClass: CFStringRef; inTag: CFStringRef; inConformingToUTI: CFStringRef): CFArrayRef; cdecl; external; { available starting in __MAC_10_3,__IPHONE_3_0 }
function UTTypeCopyPreferredTagWithClass(inUTI: CFStringRef; inTagClass: CFStringRef): CFStringRef; cdecl; external; { available starting in __MAC_10_3,__IPHONE_3_0 }
function UTTypeCopyAllTagsWithClass(inUTI: CFStringRef; inTagClass: CFStringRef): CFArrayRef; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function UTTypeEqual(inUTI1: CFStringRef; inUTI2: CFStringRef): Boolean; cdecl; external; { available starting in __MAC_10_3,__IPHONE_3_0 }
function UTTypeConformsTo(inUTI: CFStringRef; inConformsToUTI: CFStringRef): Boolean; cdecl; external; { available starting in __MAC_10_3,__IPHONE_3_0 }
function UTTypeCopyDescription(inUTI: CFStringRef): CFStringRef; cdecl; external; { available starting in __MAC_10_3,__IPHONE_3_0 }
function UTTypeIsDeclared(inUTI: CFStringRef): Boolean; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function UTTypeIsDynamic(inUTI: CFStringRef): Boolean; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function UTTypeCopyDeclaration(inUTI: CFStringRef): CFDictionaryRef; cdecl; external; { available starting in __MAC_10_3,__IPHONE_3_0 }
function UTTypeCopyDeclaringBundleURL(inUTI: CFStringRef): CFURLRef; cdecl; external; { available starting in __MAC_10_3,__IPHONE_3_0 }
function UTCreateStringForOSType(inOSType: OSType): CFStringRef; cdecl; external; { available starting in __MAC_10_3,__IPHONE_NA }
function UTGetOSTypeFromString(inString: CFStringRef): OSType; cdecl; external; { available starting in __MAC_10_3,__IPHONE_NA }
{$endif}

{$endif}
