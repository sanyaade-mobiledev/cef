// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_BROWSER_HOST_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_BROWSER_HOST_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_browser.h"
#include "include/capi/cef_browser_capi.h"
#include "include/cef_client.h"
#include "include/capi/cef_client_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefBrowserHostCToCpp
    : public CefCToCpp<CefBrowserHostCToCpp, CefBrowserHost,
        cef_browser_host_t> {
 public:
  explicit CefBrowserHostCToCpp(cef_browser_host_t* str)
      : CefCToCpp<CefBrowserHostCToCpp, CefBrowserHost, cef_browser_host_t>(
          str) {}
  virtual ~CefBrowserHostCToCpp() {}

  // CefBrowserHost methods
  virtual CefRefPtr<CefBrowser> GetBrowser() OVERRIDE;
  virtual void ParentWindowWillClose() OVERRIDE;
  virtual void CloseBrowser() OVERRIDE;
  virtual void SetFocus(bool enable) OVERRIDE;
  virtual CefWindowHandle GetWindowHandle() OVERRIDE;
  virtual CefWindowHandle GetOpenerWindowHandle() OVERRIDE;
  virtual CefRefPtr<CefClient> GetClient() OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_BROWSER_HOST_CTOCPP_H_

