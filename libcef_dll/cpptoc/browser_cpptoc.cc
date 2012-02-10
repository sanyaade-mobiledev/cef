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

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/ctocpp/client_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT int cef_browser_create(const cef_window_info_t* windowInfo,
    struct _cef_client_t* client, const cef_string_t* url,
    const struct _cef_browser_settings_t* settings) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: windowInfo; type: struct_byref_const
  DCHECK(windowInfo);
  if (!windowInfo)
    return 0;
  // Verify param: client; type: refptr_diff
  DCHECK(client);
  if (!client)
    return 0;
  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings)
    return 0;
  // Unverified params: url

  // Translate param: windowInfo; type: struct_byref_const
  CefWindowInfo windowInfoObj;
  if (windowInfo)
    windowInfoObj.Set(*windowInfo, false);
  // Translate param: settings; type: struct_byref_const
  CefBrowserSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);

  // Execute
  bool _retval = CefBrowser::CreateBrowser(
      windowInfoObj,
      CefClientCToCpp::Wrap(client),
      CefString(url),
      settingsObj);

  // Return type: bool
  return _retval;
}

CEF_EXPORT cef_browser_t* cef_browser_create_sync(
    const cef_window_info_t* windowInfo, struct _cef_client_t* client,
    const cef_string_t* url, const struct _cef_browser_settings_t* settings) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: windowInfo; type: struct_byref_const
  DCHECK(windowInfo);
  if (!windowInfo)
    return NULL;
  // Verify param: client; type: refptr_diff
  DCHECK(client);
  if (!client)
    return NULL;
  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings)
    return NULL;
  // Unverified params: url

  // Translate param: windowInfo; type: struct_byref_const
  CefWindowInfo windowInfoObj;
  if (windowInfo)
    windowInfoObj.Set(*windowInfo, false);
  // Translate param: settings; type: struct_byref_const
  CefBrowserSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);

  // Execute
  CefRefPtr<CefBrowser> _retval = CefBrowser::CreateBrowserSync(
      windowInfoObj,
      CefClientCToCpp::Wrap(client),
      CefString(url),
      settingsObj);

  // Return type: refptr_same
  return CefBrowserCppToC::Wrap(_retval);
}


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK browser_parent_window_will_close(
    struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->ParentWindowWillClose();
}

void CEF_CALLBACK browser_close_browser(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->CloseBrowser();
}

int CEF_CALLBACK browser_can_go_back(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->CanGoBack();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_go_back(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->GoBack();
}

int CEF_CALLBACK browser_can_go_forward(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->CanGoForward();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_go_forward(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->GoForward();
}

int CEF_CALLBACK browser_is_loading(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->IsLoading();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_reload(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->Reload();
}

void CEF_CALLBACK browser_reload_ignore_cache(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->ReloadIgnoreCache();
}

void CEF_CALLBACK browser_stop_load(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->StopLoad();
}

void CEF_CALLBACK browser_set_focus(struct _cef_browser_t* self, int enable) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->SetFocus(
      enable?true:false);
}

cef_window_handle_t CEF_CALLBACK browser_get_window_handle(
    struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  cef_window_handle_t _retval = CefBrowserCppToC::Get(self)->GetWindowHandle();

  // Return type: simple
  return _retval;
}

cef_window_handle_t CEF_CALLBACK browser_get_opener_window_handle(
    struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  cef_window_handle_t _retval = CefBrowserCppToC::Get(
      self)->GetOpenerWindowHandle();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK browser_is_popup(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->IsPopup();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_has_document(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->HasDocument();

  // Return type: bool
  return _retval;
}

struct _cef_client_t* CEF_CALLBACK browser_get_client(
    struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefClient> _retval = CefBrowserCppToC::Get(self)->GetClient();

  // Return type: refptr_diff
  return CefClientCToCpp::Unwrap(_retval);
}

struct _cef_frame_t* CEF_CALLBACK browser_get_main_frame(
    struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefBrowserCppToC::Get(self)->GetMainFrame();

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

struct _cef_frame_t* CEF_CALLBACK browser_get_focused_frame(
    struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefBrowserCppToC::Get(self)->GetFocusedFrame();

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

struct _cef_frame_t* CEF_CALLBACK browser_get_frame_byident(
    struct _cef_browser_t* self, int64 identifier) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefBrowserCppToC::Get(self)->GetFrame(
      identifier);

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

struct _cef_frame_t* CEF_CALLBACK browser_get_frame(struct _cef_browser_t* self,
    const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefBrowserCppToC::Get(self)->GetFrame(
      CefString(name));

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

size_t CEF_CALLBACK browser_get_frame_count(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  size_t _retval = CefBrowserCppToC::Get(self)->GetFrameCount();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_get_frame_identifiers(struct _cef_browser_t* self,
    size_t* identifiersCount, int64* identifiers) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: identifiers; type: simple_vec_byref
  DCHECK(identifiersCount && (*identifiersCount == 0 || identifiers));
  if (!identifiersCount || (*identifiersCount > 0 && !identifiers))
    return;

  // Translate param: identifiers; type: simple_vec_byref
  std::vector<int64 > identifiersList;
  if (identifiersCount && *identifiersCount > 0 && identifiers) {
    for (size_t i = 0; i < *identifiersCount; ++i) {
      identifiersList.push_back(identifiers[i]);
    }
  }

  // Execute
  CefBrowserCppToC::Get(self)->GetFrameIdentifiers(
      identifiersList);

  // Restore param: identifiers; type: simple_vec_byref
  if (identifiersCount && identifiers) {
    *identifiersCount = std::min(identifiersList.size(), *identifiersCount);
    if (*identifiersCount > 0) {
      for (size_t i = 0; i < *identifiersCount; ++i) {
        identifiers[i] = identifiersList[i];
      }
    }
  }
}

void CEF_CALLBACK browser_get_frame_names(struct _cef_browser_t* self,
    cef_string_list_t names) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: names; type: string_vec_byref
  DCHECK(names);
  if (!names)
    return;

  // Translate param: names; type: string_vec_byref
  std::vector<CefString> namesList;
  transfer_string_list_contents(names, namesList);

  // Execute
  CefBrowserCppToC::Get(self)->GetFrameNames(
      namesList);

  // Restore param: names; type: string_vec_byref
  cef_string_list_clear(names);
  transfer_string_list_contents(namesList, names);
}

void CEF_CALLBACK browser_find(struct _cef_browser_t* self, int identifier,
    const cef_string_t* searchText, int forward, int matchCase,
    int findNext) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: searchText; type: string_byref_const
  DCHECK(searchText);
  if (!searchText)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->Find(
      identifier,
      CefString(searchText),
      forward?true:false,
      matchCase?true:false,
      findNext?true:false);
}

void CEF_CALLBACK browser_stop_finding(struct _cef_browser_t* self,
    int clearSelection) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->StopFinding(
      clearSelection?true:false);
}

double CEF_CALLBACK browser_get_zoom_level(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  double _retval = CefBrowserCppToC::Get(self)->GetZoomLevel();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_set_zoom_level(struct _cef_browser_t* self,
    double zoomLevel) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->SetZoomLevel(
      zoomLevel);
}

void CEF_CALLBACK browser_clear_history(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->ClearHistory();
}

void CEF_CALLBACK browser_show_dev_tools(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->ShowDevTools();
}

void CEF_CALLBACK browser_close_dev_tools(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->CloseDevTools();
}


// CONSTRUCTOR - Do not edit by hand.

CefBrowserCppToC::CefBrowserCppToC(CefBrowser* cls)
    : CefCppToC<CefBrowserCppToC, CefBrowser, cef_browser_t>(cls) {
  struct_.struct_.parent_window_will_close = browser_parent_window_will_close;
  struct_.struct_.close_browser = browser_close_browser;
  struct_.struct_.can_go_back = browser_can_go_back;
  struct_.struct_.go_back = browser_go_back;
  struct_.struct_.can_go_forward = browser_can_go_forward;
  struct_.struct_.go_forward = browser_go_forward;
  struct_.struct_.is_loading = browser_is_loading;
  struct_.struct_.reload = browser_reload;
  struct_.struct_.reload_ignore_cache = browser_reload_ignore_cache;
  struct_.struct_.stop_load = browser_stop_load;
  struct_.struct_.set_focus = browser_set_focus;
  struct_.struct_.get_window_handle = browser_get_window_handle;
  struct_.struct_.get_opener_window_handle = browser_get_opener_window_handle;
  struct_.struct_.is_popup = browser_is_popup;
  struct_.struct_.has_document = browser_has_document;
  struct_.struct_.get_client = browser_get_client;
  struct_.struct_.get_main_frame = browser_get_main_frame;
  struct_.struct_.get_focused_frame = browser_get_focused_frame;
  struct_.struct_.get_frame_byident = browser_get_frame_byident;
  struct_.struct_.get_frame = browser_get_frame;
  struct_.struct_.get_frame_count = browser_get_frame_count;
  struct_.struct_.get_frame_identifiers = browser_get_frame_identifiers;
  struct_.struct_.get_frame_names = browser_get_frame_names;
  struct_.struct_.find = browser_find;
  struct_.struct_.stop_finding = browser_stop_finding;
  struct_.struct_.get_zoom_level = browser_get_zoom_level;
  struct_.struct_.set_zoom_level = browser_set_zoom_level;
  struct_.struct_.clear_history = browser_clear_history;
  struct_.struct_.show_dev_tools = browser_show_dev_tools;
  struct_.struct_.close_dev_tools = browser_close_dev_tools;
}

#ifndef NDEBUG
template<> long CefCppToC<CefBrowserCppToC, CefBrowser,
    cef_browser_t>::DebugObjCt = 0;
#endif
