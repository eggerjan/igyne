/*=========================================================================
This source has no copyright.  It is intended to be copied by users
wishing to create their own VTK classes locally.
=========================================================================*/
#ifndef __Configure_h
#define __Configure_h

// Define vtkBioeng_SHARED if the library was built shared.
#if 1
# define vtkBioeng_SHARED
#endif

#if defined(_MSC_VER) && defined(vtkBioeng_SHARED)
# pragma warning ( disable : 4275 )
#endif

#if defined(_WIN32) && defined(vtkBioeng_SHARED)
# if defined(vtkBioeng_EXPORTS)
#  define VTK_BIOENG_EXPORT __declspec( dllexport ) 
# else
#  define VTK_BIOENG_EXPORT __declspec( dllimport ) 
# endif
#else
# define VTK_BIOENG_EXPORT
#endif

#endif // __vtkBioengConfigure_h
