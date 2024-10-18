#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh!
#endif

//%S J SDL2_GUID_t uuuu
// SDL_GUID is struct uin8_t data[16] => UU when in args, H when is return

// _fini
// _init
//GO(SDL_abs, iFi)
//GO(SDL_acos, dFd)
//GO(SDL_acosf, fFf)
GOM(SDL_AddEventWatch, vFEpp)
// SDL_AddHintCallback
//GOM(SDL_AddTimer, pFEupp)
//GO(SDL_AllocFormat, pFu)
//GO(SDL_AllocPalette, pFi)
//GO(SDL_AllocRW, pFv)    // no need to create a "my_" probably
GO(SDL_asin, dFd)
GO(SDL_asinf, fFf)
GO(SDL_atan, dFd)
GO(SDL_atan2, dFdd)
GO(SDL_atan2f, fFff)
GO(SDL_atanf, fFf)
GO(SDL_atof, dFp)
GO(SDL_atoi, iFp)
GO(SDL_AtomicAdd, iFpi)
GO(SDL_AtomicCAS, uFpii)
//GO(SDL_AtomicCASPtr, uFppp)
GO(SDL_AtomicGet, iFp)
//GO(SDL_AtomicGetPtr, pFp)
GO(SDL_AtomicLock, vFp)
GO(SDL_AtomicSet, iFpi)
//GO(SDL_AtomicSetPtr, pFpp)
GO(SDL_AtomicTryLock, uFp)
GO(SDL_AtomicUnlock, vFp)
//GO(SDL_AudioInit, iFp)
GO(SDL_AudioQuit, vFv)
//GO(SDL_AudioStreamAvailable, iFp)
//GO(SDL_AudioStreamClear, vFp)
GO(SDL_AudioStreamFlush, iFp)
GO(SDL_AudioStreamGet, iFppi)
GO(SDL_AudioStreamPut, iFppi)
//GO(SDL_BuildAudioCVT, iFpWCiWCi)
//GO(SDL_CalculateGammaRamp, vFfp)
GO(SDL_calloc, pFLL)
GO(SDL_CaptureMouse, iFu)
GO(SDL_ceil, dFd)
GO(SDL_ceilf, fFf)
GO(SDL_ClearError, vFv)
GO(SDL_ClearHints, vFv)
GO(SDL_ClearQueuedAudio, vFu)
GO(SDL_CloseAudio, vFv)
GO(SDL_CloseAudioDevice, vFu)
//GO(SDL_ComposeCustomBlendMode, uFuuuuuu)
//GO(SDL_CondBroadcast, iFp)
//GO(SDL_CondSignal, iFp)
//GO(SDL_CondWait, iFpp)
//GO(SDL_CondWaitTimeout, iFppu)
//GO(SDL_ConvertAudio, iFp)
//GO(SDL_ConvertPixels, iFiiupiupi)
GOM(SDL_ConvertSurface, pFppu)  //%noE
GOM(SDL_ConvertSurfaceFormat, pFpuu)    //%noE
//GO(SDL_copysign, dFdd)
//GO(SDL_copysignf, fFff)
//GO(SDL_cos, dFd)
//GO(SDL_cosf, fFf)
GOM(SDL_CreateColorCursor, pFpii)   //%noE
//GO(SDL_CreateCond, pFv)
//GO(SDL_CreateCursor, pFppiiii)
GO(SDL_CreateMutex, pFv)
GO(SDL_CreateRenderer, pFpiu)
GOM(SDL_CreateRGBSurface, pFEuiiiuuuu)
GOM(SDL_CreateRGBSurfaceFrom, pFEpiiiiuuuu)
//GO(SDL_CreateRGBSurfaceWithFormat, pFuiiiu)
GOM(SDL_CreateRGBSurfaceWithFormatFrom, pFEpiiiiu)
GO(SDL_CreateSemaphore, pFu)
//GO(SDL_CreateShapedWindow, pFpuuuuu)
//GO(SDL_CreateSoftwareRenderer, pFp)
GO(SDL_CreateSystemCursor, pFu)
GO(SDL_CreateTexture, pFpuiii)
GOM(SDL_CreateTextureFromSurface, pFpp) //%noE
GOM(SDL_CreateThread, pFEppp)
// SDL_CreateThreadWithStackSize
GO(SDL_CreateWindow, pFpiiiiu)
GO(SDL_CreateWindowAndRenderer, iFiiuBp_Bp_)
//GO(SDL_CreateWindowFrom, pFp)
GO(SDL_Delay, vFu)
GOM(SDL_DelEventWatch, vFEpp)
// SDL_DelHintCallback
//GO(SDL_DequeueAudio, uFupu)
GO(SDL_DestroyCond, vFp)
GO(SDL_DestroyMutex, vFp)
GO(SDL_DestroyRenderer, vFp)
GO(SDL_DestroySemaphore, vFp)
GO(SDL_DestroyTexture, vFp)
GO(SDL_DestroyWindow, vFp)
//GO(SDL_DestroyWindowSurface, iFp)
//GO(SDL_DetachThread, vFp)
GO(SDL_DisableScreenSaver, vFv)
//GO(SDL_DuplicateSurface, pFp)
//GOM(SDL_DYNAPI_entry, iFEupu)
//GO(SDL_EnableScreenSaver, vFv)
//GO(SDL_EnclosePoints, uFpipp)
//GO(SDL_Error, iFu)
//GO(SDL_EventState, CFui)
//GO(SDL_exp, dFd)
//GO(SDL_expf, fFf)
//GO(SDL_fabs, dFd)
//GO(SDL_fabsf, fFf)
GOM(SDL_FillRect, iFEppu)
//GO(SDL_FillRects, iFppiu)
// SDL_FilterEvents
//GO(SDL_floor, dFd)
//GO(SDL_floorf,fFf)
//GO(SDL_FlushEvent, vFu)
//GO(SDL_FlushEvents, vFuu)
//GO(SDL_fmod, dFdd)
//GO(SDL_fmodf, fFff)
GO(SDL_free, vFp)
GO(SDL_FreeAudioStream, vFp)
GO(SDL_FreeCursor, vFp)
//GO(SDL_FreeFormat, vFp)
//GO(SDL_FreePalette, vFp)
//GO(SDL_FreeRW, vFp)
GOM(SDL_FreeSurface, vFEp)
//GO(SDL_FreeWAV, vFp)
//GO(SDL_GameControllerAddMapping, iFp)
GOM(SDL_GameControllerAddMappingsFromRW, iFEpi)
GO(SDL_GameControllerClose, vFp)
GO(SDL_GameControllerEventState, iFi)
//GO(SDL_GameControllerFromInstanceID, pFi)
//GO(SDL_GameControllerFromPlayerIndex, pFi)
GO(SDL_GameControllerGetAttached, iFp)
GO(SDL_GameControllerGetAxis, wFpi)
//GO(SDL_GameControllerGetAxisFromString, iFp)
//GO(SDL_GameControllerGetBindForAxis, HFpi)
//GO(SDL_GameControllerGetBindForButton, HFpi)
GO(SDL_GameControllerGetButton, CFpi)
//GO(SDL_GameControllerGetButtonFromString, iFp)
//GO(SDL_GameControllerGetFirmwareVersion, WFp)
GO(SDL_GameControllerGetJoystick, pFp)
//GO(SDL_GameControllerGetNumTouchpads, iFp)
//GO(SDL_GameControllerGetNumTouchpadFingers, iFpi)
//GO(SDL_GameControllerGetPlayerIndex, iFp)
//GO(SDL_GameControllerGetProduct, WFp)
//GO(SDL_GameControllerGetProductVersion, WFp)
//GO(SDL_GameControllerGetSensorData, iFpipi)
//GO(SDL_GameControllerGetSensorDataWithTimestamp, iFpippi)
//GO(SDL_GameControllerGetSerial, pFp)
//GO(SDL_GameControllerGetStringForAxis, pFi)
//GO(SDL_GameControllerGetStringForButton, pFi)
//GO(SDL_GameControllerGetTouchpadFinger, iFpiipppp)
GO(SDL_GameControllerGetType, uFp)
GO(SDL_GameControllerGetVendor, WFp)
GO(SDL_GameControllerHasAxis, iFpu)
GO(SDL_GameControllerHasButton, uFpi)
GO(SDL_GameControllerHasLED, iFp)
GO(SDL_GameControllerHasRumble, iFp)
GO(SDL_GameControllerHasSensor, iFpi)
GO(SDL_GameControllerIsSensorEnabled, uFpi)
GO(SDL_GameControllerMapping, pFp)
GO(SDL_GameControllerMappingForDeviceIndex, pFi)
//GO(SDL_GameControllerMappingForGUID, pFpp)
GO(SDL_GameControllerMappingForIndex, pFi)
GO(SDL_GameControllerName, pFp)
//GO(SDL_GameControllerNameForIndex, pFi)
GO(SDL_GameControllerNumMappings, iFv)
GO(SDL_GameControllerOpen, pFi)
//GO(SDL_GameControllerPath, pFp)
//GO(SDL_GameControllerPathForIndex, pFi)
//GO(SDL_GameControllerRumble, iFpWWu)
//GO(SDL_GameControllerRumbleTriggers, iFpWWu)
//GO(SDL_GameControllerSetLED, iFpCCC)
//GO(SDL_GameControllerSetPlayerIndex, vFpi)
//GO(SDL_GameControllerSetSensorEnabled, iFpiu)
GO(SDL_GameControllerTypeForIndex, uFi)
GO(SDL_GameControllerUpdate, vFv)
// SDL_GetAssertionHandler
//GO(SDL_GetAssertionReport, pFv)
//GO(SDL_GetAudioDeviceName, pFii)
GO(SDL_GetAudioDeviceStatus, uFu)
//GO(SDL_GetAudioDriver, pFi)
//GO(SDL_GetAudioDeviceSpec, iFiip)
GO(SDL_GetAudioStatus, uFv)
GOM(SDL_GetBasePath, pFEv)
GO(SDL_GetClipboardText, pFv)
//GO(SDL_GetClipRect, vFpp)
GOM(SDL_GetClosestDisplayMode, pFipp)   //%noE
//GO(SDL_GetColorKey, iFpp)
GO(SDL_GetCPUCacheLineSize, iFv)
GO(SDL_GetCPUCount, iFv)
GO(SDL_GetCurrentAudioDriver, pFv)
GOM(SDL_GetCurrentDisplayMode, iFip)    //%noE
GO(SDL_GetCurrentVideoDriver, pFv)
//GO(SDL_GetCursor, pFv)
// SDL_GetDefaultAssertionHandler
//GO(SDL_GetDefaultAudioInfo, iFppi)
//GO(SDL_GetDefaultCursor, pFv)
GOM(SDL_GetDesktopDisplayMode, iFEip)
GO(SDL_GetDisplayBounds, iFip)
GO(SDL_GetDisplayDPI, iFippp)
GOM(SDL_GetDisplayMode, iFiip)  //%noE
GO(SDL_GetDisplayName, pFi)
//GO(SDL_GetDisplayOrientation, uFi)
GO(SDL_GetDisplayUsableBounds, iFip)
GO(SDL_getenv, pFp)
GO(SDL_GetError, pFv)
//GOM(SDL_GetEventFilter, iFEpp)
//GO(SDL_GetGlobalMouseState, uFpp)
//GO(SDL_GetGrabbedWindow, pFv)
//GO(SDL_GetHint, pFp)
GO(SDL_GetHintBoolean, uFpu)
//GOM(SDL_GetJoystickGUIDInfo, vFGpppp)
GO(SDL_GetKeyboardFocus, pFv)
GO(SDL_GetKeyboardState, pFp)
//GO(SDL_GetKeyFromName, iFp)
GO(SDL_GetKeyFromScancode, iFu)
GO(SDL_GetKeyName, pFi)
//GO(SDL_GetMemoryFunctions, vFpppp)
GO(SDL_GetModState, uFv)
GO(SDL_GetMouseFocus, pFv)
GO(SDL_GetMouseState, uFpp)
GO(SDL_GetNumAllocations, iFv)
GO(SDL_GetNumAudioDevices, iFi)
GO(SDL_GetNumAudioDrivers, iFv)
GO(SDL_GetNumDisplayModes, iFi)
GO(SDL_GetNumRenderDrivers, iFv)
GO(SDL_GetNumTouchDevices, iFv)
GO(SDL_GetNumTouchFingers, iFu)
GO(SDL_GetNumVideoDisplays, iFv)
GO(SDL_GetNumVideoDrivers, iFv)
//GOM(SDL_GetOriginalMemoryFunctions,
GO(SDL_GetPerformanceCounter, UFv)
GO(SDL_GetPerformanceFrequency, UFv)
//GO(SDL_GetPixelFormatName, pFu)
//GO(SDL_GetPlatform, pFv)
//GO(SDL_GetPointDisplayIndex, iFp)
//GO(SDL_GetPowerInfo, uFpp)
//GO(SDL_GetPreferredLocales, pFv)
GO(SDL_GetPrefPath, pFpp)
//GO(SDL_GetPrimarySelectionText, pFv)
//GO(SDL_GetQueuedAudioSize, uFu)
//GO(SDL_GetRectDisplayIndex, iFp)
GO(SDL_GetRelativeMouseMode, iFv)
GO(SDL_GetRelativeMouseState, uFpp)
//GO(SDL_GetRenderDrawBlendMode, iFpp)
//GO(SDL_GetRenderDrawColor, iFppppp)
//GO(SDL_GetRenderDriverInfo, iFip)
//GO(SDL_GetRenderer, pFp)
//GO(SDL_GetRendererInfo, iFpp)
//GO(SDL_GetRendererOutputSize, iFppp)
//GO(SDL_GetRenderTarget, pFp)
//GO(SDL_GetRevision, pFv)
//GO(SDL_GetRevisionNumber, iFv)
//GO(SDL_GetRGB, vFupppp)
//GO(SDL_GetRGBA, vFuppppp)
GO(SDL_GetScancodeFromKey, uFi)
//GO(SDL_GetScancodeFromName, uFp)
//GO(SDL_GetScancodeName, pFu)
//GO(SDL_GetShapedWindowMode, iFpp)
//GO(SDL_GetSurfaceAlphaMod, iFpp)
//GO(SDL_GetSurfaceBlendMode, iFpp)
//GO(SDL_GetSurfaceColorMod, iFpppp)
GO(SDL_GetSystemRAM, iFv)
//GO(SDL_GetTextureAlphaMod, iFpp)
//GO(SDL_GetTextureBlendMode, iFpp)
//GO(SDL_GetTextureColorMod, iFpppp)
GOM(SDL_GetThreadID, hFEp)
//GO(SDL_GetThreadName, pFp)
GO(SDL_GetTicks, uFv)
//GO(SDL_GetTicks64, UFv)
//GO(SDL_GetTouchDevice, lFi)
//GO(SDL_GetTouchDeviceType, iFl)
//GO(SDL_GetTouchFinger, pFli)
//GO(SDL_GetVersion, vFp)
GO(SDL_GetVideoDriver, pFi)
//GO(SDL_GetWindowBordersSize, iFppppp)
//GO(SDL_GetWindowBrightness, fFp)
GO(SDL_GetWindowData, pFpp)
GO(SDL_GetWindowDisplayIndex, iFp)
GOM(SDL_GetWindowDisplayMode, iFpp) //%noE
GO(SDL_GetWindowFlags, uFp)
GO(SDL_GetWindowFromID, pFu)
//GO(SDL_GetWindowGammaRamp, iFpppp)
GO(SDL_GetWindowGrab, iFp)
GO(SDL_GetWindowID, uFp)
GO(SDL_GetWindowMaximumSize, vFppp)
GO(SDL_GetWindowMinimumSize, vFppp)
//GO(SDL_GetWindowOpacity, iFpp)
//GO(SDL_GetWindowPixelFormat, uFp)
GO(SDL_GetWindowPosition, vFppp)
GO(SDL_GetWindowSize, vFppp)
//GO(SDL_GetWindowSizeInPixels, vFppp)
//GO(SDL_GetWindowSurface, pFp)
GO(SDL_GetWindowTitle, pFp)
GOM(SDL_GetWindowWMInfo, iFpp)  //%noE
GO(SDL_GetYUVConversionMode, uFv)
GO(SDL_GetYUVConversionModeForResolution, uFii)
//GO(SDL_GL_BindTexture, iFppp)
GO(SDL_GL_CreateContext, pFp)
GO(SDL_GL_DeleteContext, vFp)
//GO(SDL_GL_ExtensionSupported, iFp)
GO(SDL_GL_GetAttribute, iFup)
GO(SDL_GL_GetCurrentContext, pFv)
GO(SDL_GL_GetCurrentWindow, pFv)
GO(SDL_GL_GetDrawableSize, vFppp)
GOM(SDL_GL_GetProcAddress, pFEp)
GO(SDL_GL_GetSwapInterval, iFv)
GO(SDL_GL_LoadLibrary, iFp)
GO(SDL_GL_MakeCurrent, iFpp)
GO(SDL_GL_ResetAttributes, vFv)
GO(SDL_GL_SetAttribute, iFui)
GO(SDL_GL_SetSwapInterval, iFi)
GO(SDL_GL_SwapWindow, vFp)
GO(SDL_GL_UnbindTexture, iFp)
GO(SDL_GL_UnloadLibrary, vFv)
//GO(SDL_GUIDToString, vFUUpi)
GO(SDL_HapticClose, vFp)
GO(SDL_HapticDestroyEffect, vFpi)
GO(SDL_HapticEffectSupported, iFpp)
GO(SDL_HapticGetEffectStatus, iFpi)
GO(SDL_HapticIndex, iFp)
GO(SDL_HapticName, pFi)
GO(SDL_HapticNewEffect, iFpp)
GO(SDL_HapticNumAxes, iFp)
GO(SDL_HapticNumEffects, iFp)
GO(SDL_HapticNumEffectsPlaying, iFp)
GO(SDL_HapticOpen, pFi)
GO(SDL_HapticOpened, iFi)
GO(SDL_HapticOpenFromJoystick, pFp)
GO(SDL_HapticOpenFromMouse, pFv)
GO(SDL_HapticPause, iFp)
GO(SDL_HapticQuery, uFp)
GO(SDL_HapticRumbleInit, iFp)
GO(SDL_HapticRumblePlay, iFpfu)
GO(SDL_HapticRumbleStop, iFp)
GO(SDL_HapticRumbleSupported, iFp)
GO(SDL_HapticRunEffect, iFpiu)
GO(SDL_HapticSetAutocenter, iFpi)
GO(SDL_HapticSetGain, iFpi)
GO(SDL_HapticStopAll, iFp)
GO(SDL_HapticStopEffect, iFpi)
GO(SDL_HapticUnpause, iFp)
GO(SDL_HapticUpdateEffect, iFpip)
//GOM(SDL_Has3DNow, iFv)
//GOM(SDL_HasAltiVec, iFv)
//GOM(SDL_HasAVX, iFv)
//GOM(SDL_HasAVX2, iFv)
//GOM(SDL_HasAVX512F, iFv)
GO(SDL_HasClipboardText, iFv)
//GO(SDL_HasColorKey, uFp)
GO(SDL_HasEvent, uFu)
GO(SDL_HasEvents, uFuu)
//GO(SDL_HasIntersection, uFpp)
//GO(SDL_HasLASX, iFv)
//GO(SDL_HasLSX, iFv)
//GOM(SDL_HasMMX, iFv)
//GOM(SDL_HasNEON, iFv)
//GOM(SDL_HasRDTSC, iFv)
//GO(SDL_HasPrimarySelectionText, iFv)
//GO(SDL_HasScreenKeyboardSupport, iFv)
//GOM(SDL_HasSSE, iFv)
//GOM(SDL_HasSSE2, iFv)
//GOM(SDL_HasSSE3, iFv)
//GOM(SDL_HasSSE41, iFv)
//GOM(SDL_HasSSE42, iFv)
GO(SDL_HideWindow, vFp)
//GO(SDL_HasWindowSurface, iFp)
//GO(SDL_iconv, LFppppp)
//GO(SDL_iconv_close, iFp)
//GO(SDL_iconv_open, pFpp)
GO(SDL_iconv_string, pFpppL)
GO(SDL_Init, iFu)
GO(SDL_InitSubSystem, iFu)
//GO(SDL_IntersectRect, uFppp)
//GO(SDL_IntersectRectAndLine, uFppppp)
//GO(SDL_isdigit, iFi)
GO(SDL_IsGameController, uFi)
//GO(SDL_IsScreenKeyboardShown, uFp)
GO(SDL_IsScreenSaverEnabled, iFv)
//GO(SDL_IsShapedWindow, uFp)
GO(SDL_isspace, iFi)
GO(SDL_IsTablet, uFv)
GO(SDL_IsTextInputActive, iFv)
//GO(SDL_itoa, pFipi)
//GO(SDL_JoystickAttachVirtualEx, iFp)
GO(SDL_JoystickClose, vFp)
//GO(SDL_JoystickCurrentPowerLevel, iFp)
GO(SDL_JoystickEventState, iFi)
//GO(SDL_JoystickFromInstanceID, pFi)
//GO(SDL_JoystickGetAttached, iFp)
GO(SDL_JoystickGetAxis, wFpi)
//GO(SDL_JoystickGetAxisInitialState, uFpip)
//GO(SDL_JoystickGetBall, iFpipp)
GO(SDL_JoystickGetButton, CFpi)
GOS(SDL_JoystickGetDeviceGUID, JFEi)  // return a struct that is "uint8_t data[16]"
//GO(SDL_JoystickGetDeviceInstanceID, iFi)
//GO(SDL_JoystickGetDevicePlayerIndex, iFi)
//GO(SDL_JoystickGetDeviceProduct, WFi)
//GO(SDL_JoystickGetDeviceProductVersion, WFi)
//GO(SDL_JoystickGetDeviceType, uFi)
//GO(SDL_JoystickGetDeviceVendor, WFi)
//GO(SDL_JoystickGetFirmwareVersion, WFp)
//GO(SDL_JoystickGetGUID, HFp)
//GO(SDL_JoystickGetGUIDFromString, HFp)
GO(SDL_JoystickGetGUIDString, vFUUpi)   //uint8_t data[16] passed as 1st argument...
//GO(SDL_JoystickGetHat, CFpi)
//GO(SDL_JoystickGetPlayerIndex, iFp)
//GO(SDL_JoystickGetProduct, WFp)
//GO(SDL_JoystickGetProductVersion, WFp)
//GO(SDL_JoystickGetSerial, pFp)
//GO(SDL_JoystickGetType, uFp)
//GO(SDL_JoystickGetVendor, WFp)
GO(SDL_JoystickInstanceID, iFp)
GO(SDL_JoystickIsHaptic, iFp)
GO(SDL_JoystickName, pFp)
GO(SDL_JoystickNameForIndex, pFi)
GO(SDL_JoystickNumAxes, iFp)
GO(SDL_JoystickNumBalls, iFp)
GO(SDL_JoystickNumButtons, iFp)
GO(SDL_JoystickNumHats, iFp)
GO(SDL_JoystickOpen, pFi)
//GO(SDL_JoystickPath, pFp)
//GO(SDL_JoystickPathForIndex, pFi)
//GO(SDL_JoystickRumble, iFpWWu)
//GO(SDL_JoystickRumbleTriggers, iFpWWu)
GO(SDL_JoystickUpdate, vFv)
//GO(SDL_LinuxSetThreadPriority, iFli)
//GO(SDL_lltoa, pFlpi)
GOM(SDL_LoadBMP_RW, pFEpi)
//GO(SDL_LoadDollarTemplates, iFip)
//GO(SDL_LoadFile, pFpp)
//GOM(SDL_LoadFile_RW, pFEppi)
//GOM(SDL_LoadFunction, pFEpp)
//GOM(SDL_LoadObject, pFEp)
//GOM(SDL_LoadWAV_RW, pFEpippp)
GO(SDL_LockAudio, vFv)
GO(SDL_LockAudioDevice, vFi)
//GO(SDL_LockJoysticks, vFv)
GO(SDL_LockMutex, iFp)
//GO(SDL_LockSensors, vFv)
//GO(SDL_LockSurface, iFp)
//GO(SDL_LockTexture, iFpppp)
//GO(SDL_log, dFd)
GOM(SDL_Log, vFEpV)
//GO(SDL_log10, dFd)
//GO(SDL_log10f, fFf)
//GOM(SDL_LogCritical, vFEipV)
//GOM(SDL_LogDebug, vFEipV)
//GOM(SDL_LogError, vFEipV)
//GO(SDL_logf, fFf)
//GOM(SDL_LogGetOutputFunction, vFEpp)
//GO(SDL_LogGetPriority, uFi)
//GOM(SDL_LogInfo, vFEipV)
//GO2(SDL_LogMessage, vFiupV, SDL_LogMessageV)
GO(SDL_LogMessageV, vFiupV)
//GO(SDL_LogResetPriorities, vFv)
//GO(SDL_LogSetAllPriority, vFu)
//GOM(SDL_LogSetOutputFunction, vFEpp)
//GO(SDL_LogSetPriority, vFiu)
//GOM(SDL_LogVerbose, vFEipV)
//GOM(SDL_LogWarn, vFEipV)
//GO(SDL_LowerBlit, iFpppp)
//GO(SDL_LowerBlitScaled, iFpppp)
//GO(SDL_ltoa, pFlpi)
GO(SDL_malloc, pFL)
//GO(SDL_MapRGB, uFpCCC)
//GO(SDL_MapRGBA, uFpCCCC)
//GO(SDL_MasksToPixelFormatEnum, uFiuuuu)
//GO(SDL_MaximizeWindow, vFp)
GO(SDL_memcmp, iFppL)
GO(SDL_memcpy, pFppu)
GO(SDL_memmove, pFppu)
//GO(SDL_MemoryBarrierAcquireFunction, vFv)
//GO(SDL_MemoryBarrierReleaseFunction, vFv)
GO(SDL_memset, pFpiL)
//GO(SDL_MinimizeWindow, vFp)
//GO(SDL_MixAudio, vFppui)
GO(SDL_MixAudioFormat, vFppWui)
GO(SDL_MouseIsHaptic, iFv)
GO(SDL_NewAudioStream, pFWCiWCi)
GO(SDL_NumHaptics, iFv)
GO(SDL_NumJoysticks, iFv)
GO(SDL_NumSensors, iFv)
GOM(SDL_OpenAudio, iFEpp)
GOM(SDL_OpenAudioDevice, uFEpippi)
GO(SDL_PauseAudio, vFi)
GO(SDL_PauseAudioDevice, vFui)
GOM(SDL_PeepEvents, iFEpiuuu)
//GO(SDL_PixelFormatEnumToMasks, uFuppppp)
GOM(SDL_PollEvent, iFp) //%noE
GO(SDL_pow, dFdd)
GO(SDL_powf, fFff)
GO(SDL_PumpEvents, vFv)
GOM(SDL_PushEvent, iFp)     //%noE
//GO2(SDL_qsort, vFEpuup, my_qsort)
//GO(SDL_QueryTexture, iFppppp)
//GO(SDL_QueueAudio, iFupu)
GO(SDL_Quit, vFv)
 GO(SDL_QuitSubSystem, vFu)
GO(SDL_RaiseWindow, vFp)
//GOM(SDL_ReadBE16, uFEp)
//GOM(SDL_ReadBE32, uFEp)
//GOM(SDL_ReadBE64, UFEp)
//GOM(SDL_ReadLE16, uFEp)
//GOM(SDL_ReadLE32, uFEp)
//GOM(SDL_ReadLE64, UFEp)
//GOM(SDL_ReadU8, uFEp)
GO(SDL_realloc, pFpL)
//GO(SDL_RecordGesture, iFl)
//GO(SDL_RegisterEvents, uFi)
//GOM(SDL_RemoveTimer, iFEp)
GO(SDL_RenderClear, iFp)
GO(SDL_RenderCopy, iFpppp)
//GO(SDL_RenderCopyEx, iFppppdpu)
// SDL_RenderCopyExF
// SDL_RenderCopyF
//GO(SDL_RenderDrawLine, iFpiiii)
// SDL_RenderDrawLineF
//GO(SDL_RenderDrawLines, iFppi)
// SDL_RenderDrawLinesF
//GO(SDL_RenderDrawPoint, iFpii)
// SDL_RenderDrawPointF
//GO(SDL_RenderDrawPoints, iFppi)
// SDL_RenderDrawPointsF
//GO(SDL_RenderDrawRect, iFpp)
// SDL_RenderDrawRectF
//GO(SDL_RenderDrawRects, iFppi)
// SDL_RenderDrawRectsF
//GO(SDL_RenderFillRect, iFpp)
// SDL_RenderFillRectF
//GO(SDL_RenderFillRects, iFppi)
// SDL_RenderFillRectsF
// SDL_RenderFlush
//GO(SDL_RenderGetClipRect, vFpp)
//GO(SDL_RenderGetIntegerScale, iFp)
//GO(SDL_RenderGetLogicalSize, vFppp)
// SDL_RenderGetMetalCommandEncoder
// SDL_RenderGetMetalLayer
//GO(SDL_RenderGetScale, vFppp)
//GO(SDL_RenderGetViewport, vFpp)
//GO(SDL_RenderIsClipEnabled, uFp)
GO(SDL_RenderPresent, vFp)
//GO(SDL_RenderReadPixels, iFppupi)
//GO(SDL_RenderSetClipRect, iFpp)
//GO(SDL_RenderSetIntegerScale, iFpu)
GO(SDL_RenderSetLogicalSize, iFpii)
//GO(SDL_RenderSetScale, iFpff)
//GO(SDL_RenderSetViewport, iFpp)
//GO(SDL_RenderTargetSupported, iFp)
//GO(SDL_RenderSetVSync, iFpi)
//GO(SDL_RenderWindowToLogical, vFpiipp)
//GO(SDL_ReportAssertion, uFpppi)
//GO(SDL_ResetAssertionReport, vFv)
//GO(SDL_ResetHints, vFv)
//GO(SDL_ResetKeyboard, vFv)
GO(SDL_RestoreWindow, vFp)
//GOM(SDL_RWFromConstMem, pFEpi)
//GOM(SDL_RWFromFP, pFEpi)
GOM(SDL_RWFromFile, pFEpp)
//GOM(SDL_RWFromMem, pFEpi)
//GOM(SDL_SaveAllDollarTemplates, iFEp)
//GOM(SDL_SaveBMP_RW, iFEppi)
//GOM(SDL_SaveDollarTemplate, iFEip)
GO(SDL_scalbn, dFdi)
GO(SDL_scalbnf, fFfi)
GO(SDL_SemPost, iFp)
GO(SDL_SemTryWait, iFp)
GO(SDL_SemValue, uFp)
GO(SDL_SemWait, iFp)
GO(SDL_SemWaitTimeout, iFpu)
GO(SDL_SensorClose, vFp)
GO(SDL_SensorFromInstanceID, pFi)
GO(SDL_SensorGetData, iFppi)
GO(SDL_SensorGetDataWithTimestamp, iFpppi)
GO(SDL_SensorGetDeviceInstanceID, iFi)
GO(SDL_SensorGetDeviceName, pFi)
GO(SDL_SensorGetDeviceNonPortableType, iFi)
GO(SDL_SensorGetDeviceType, iFi)
GO(SDL_SensorGetInstanceID, iFp)
GO(SDL_SensorGetName, pFp)
GO(SDL_SensorGetNonPortableType, iFp)
GO(SDL_SensorGetType, iFp)
GO(SDL_SensorOpen, pFi)
GO(SDL_SensorUpdate, vFv)
// SDL_SetAssertionHandler
GO(SDL_SetClipboardText, iFp)
//GO(SDL_SetClipRect, uFpp)
GOM(SDL_SetColorKey, iFpiu) //%noE
GO(SDL_SetCursor, vFp)
GO(SDL_setenv, iFppi)
GO(SDL_SetError, iFppppp)    // it use ..., so putarbitrary  4 args
//GOM(SDL_SetEventFilter, vFEpp)
GO(SDL_SetHint, uFpp)
//GO(SDL_SetHintWithPriority, uFppu)
GO(SDL_SetMainReady, vFv)
//GOM(SDL_SetMemoryFunctions,
GO(SDL_SetModState, vFu)
//GO(SDL_SetPaletteColors, iFppii)
// SDL_SetPixelFormatPalette
//GO(SDL_SetPrimarySelectionText, iFp)
GO(SDL_SetRelativeMouseMode, iFi)
//GO(SDL_SetRenderDrawBlendMode, iFpu)
GO(SDL_SetRenderDrawColor, iFpCCCC)
//GO(SDL_SetRenderTarget, iFpp)
//GO(SDL_SetSurfaceAlphaMod, iFpC)
//GO(SDL_SetSurfaceBlendMode, iFpu)
//GO(SDL_SetSurfaceColorMod, iFpCCC)
// SDL_SetSurfaceColorMod
//GO(SDL_SetSurfacePalette, iFpp)
//GO(SDL_SetSurfaceRLE, iFpi)
//GO(SDL_SetTextInputRect, vFp)
//GO(SDL_SetTextureAlphaMod, iFpC)
//GO(SDL_SetTextureBlendMode, iFpu)
//GO(SDL_SetTextureColorMod, iFpCCC)
//GO(SDL_SetTextureScaleMode, iFpu)
GO(SDL_SetThreadPriority, iFu)
GO(SDL_SetWindowBordered, vFpi)
//GO(SDL_SetWindowBrightness, iFpf)
GO(SDL_SetWindowData, pFppp)
GOM(SDL_SetWindowDisplayMode, iFpp) //%noE
GO(SDL_SetWindowFullscreen, iFpu)
GO(SDL_SetWindowGammaRamp, iFpppp)
GO(SDL_SetWindowGrab, vFpi)
// SDL_SetWindowHitTest
GOM(SDL_SetWindowIcon, vFEpp)
// SDL_SetWindowInputFocus
//GO(SDL_SetWindowMaximumSize, vFpii)
GO(SDL_SetWindowMinimumSize, vFpii)
// SDL_SetWindowModalFor
// SDL_SetWindowOpacity
GO(SDL_SetWindowPosition, vFpii)
GO(SDL_SetWindowResizable, vFpi)
//GO(SDL_SetWindowShape, iFppp)
GO(SDL_SetWindowSize, vFpii)
GO(SDL_SetWindowTitle, vFpp)
// SDL_SetYUVConversionMode
GO(SDL_ShowCursor, iFi)
GOM(SDL_ShowMessageBox, iFpp)   //%noE
GO(SDL_ShowSimpleMessageBox, iFuppp)
GO(SDL_ShowWindow, vFp)
//GO(SDL_SIMDAlloc, pFL)
//GO(SDL_SIMDGetAlignment, LFv)
//GO(SDL_SIMDRealloc, pFpL)
//GO(SDL_SIMDFree, vFp)
GO(SDL_sin, dFd)
GO(SDL_sinf, fFf)
GOM(SDL_snprintf, iFEpLpV)
//GO(SDL_SoftStretch, iFpppp)
GO(SDL_sqrt, dFd)
GO(SDL_sqrtf, fFf)
GO2(SDL_sscanf, iFEppV, my_sscanf)
GO(SDL_StartTextInput, vFv)
GO(SDL_StopTextInput, vFv)
GO(SDL_strcasecmp, iFpp)
GO(SDL_strchr, pFpi)
GO(SDL_strcmp, iFpp)
GO(SDL_strdup, pFp)
GO(SDL_strlcat, LFppL)
GO(SDL_strlcpy, uFppu)
GO(SDL_strlen, uFp)
GO(SDL_strlwr, pFp)
GO(SDL_strncasecmp, iFppL)
GO(SDL_strncmp, iFppu)
GO(SDL_strrchr, pFpi)
GO(SDL_strrev, pFp)
GO(SDL_strstr, pFpp)
GO(SDL_strtod, dFpp)
GO(SDL_strtol, lFppi)
GO(SDL_strtoll, lFppi)
GO(SDL_strtoul, LFppi)
GO(SDL_strtoull, LFppi)
GO(SDL_strupr, pFp)
GO(SDL_tan, dFd)
GO(SDL_tanf, fFf)
GO(SDL_ThreadID, hFv)
//GO(SDL_TLSCreate, uFv)
//GO(SDL_TLSGet, pFu)
//GOM(SDL_TLSSet, iFEupp)
GO(SDL_tolower, iFi)
GO(SDL_toupper, iFi)
//GO(SDL_TryLockMutex, iFp)
GO(SDL_uitoa, pFupi)
GO(SDL_ulltoa, pFLpi)
GO(SDL_ultoa, pFLpi)
//GO(SDL_UnionRect, vFppp)
//GOM(SDL_UnloadObject, vFEp)
GO(SDL_UnlockAudio, vFv)
GO(SDL_UnlockAudioDevice, vFi)
//GO(SDL_UnlockJoysticks, vFv)
GO(SDL_UnlockMutex, iFp)
//GO(SDL_UnlockSensors, vFv)
//GO(SDL_UnlockSurface, vFp)
//GO(SDL_UnlockTexture, vFp)
GO(SDL_UpdateTexture, iFpppi)
//GO(SDL_UpdateWindowSurface, iFp)
//GO(SDL_UpdateWindowSurfaceRects, iFppi)
//GO(SDL_UpdateYUVTexture, iFpppipipi)
//GO(SDL_UpperBlit, iFpppp)
//GO(SDL_UpperBlitScaled, iFpppp)
//GO(SDL_utf8strlcpy, uFppu)
// SDL_utf8strlen
//GO(SDL_VideoInit, iFp)
//GO(SDL_VideoQuit, vFv)
GOM(SDL_vsnprintf, iFEpLpp)
// SDL_vsscanf
//GO(SDL_Vulkan_CreateSurface, iFppp)
//GO(SDL_Vulkan_GetDrawableSize, vFppp)
//GO(SDL_Vulkan_GetInstanceExtensions, iFppp)
//GOM(SDL_Vulkan_GetVkGetInstanceProcAddr, pFEv)
//GO(SDL_Vulkan_LoadLibrary, iFp) //TODO: wrap to also call my_dlopen with path?
//GO(SDL_Vulkan_UnloadLibrary, vFv)
//GO(SDL_WaitEvent, iFp)
GOM(SDL_WaitEventTimeout, iFpi) //%noE
GO(SDL_WaitThread, vFpp)
GO(SDL_WarpMouseGlobal, iFii)
GO(SDL_WarpMouseInWindow, vFpii)
GO(SDL_WasInit, uFu)
// SDL_wcscmp
// SDL_wcsdup
// SDL_wcslcat
// SDL_wcslcpy
//GO(SDL_wcslen, LFp)
//GOM(SDL_WriteBE16, uFEpW)
//GOM(SDL_WriteBE32, uFEpu)
//GOM(SDL_WriteBE64, uFEpU)
//GOM(SDL_WriteLE16, uFEpW)
//GOM(SDL_WriteLE32, uFEpu)
//GOM(SDL_WriteLE64, uFEpU)
//GOM(SDL_WriteU8, uFEpu)

GOM(SDL_RWseek, IFEpIi)
GOM(SDL_RWtell, IFEp)
GOM(SDL_RWsize, IFEp)
GOM(SDL_RWread, LFEppLL)
GOM(SDL_RWwrite, LFEppLL)
GOM(SDL_RWclose, iFEp)

//GO2(SDL_mutexP, iFp, SDL_LockMutex)
//GO2(SDL_mutexV, iFp, SDL_UnlockMutex)

GO(SDL_doesntexist, IFpIi)
GOM(SDL_notreal, pFEpi)
//GOM(SDL_IsJoystickPS4, iFEWW)
//GOM(SDL_IsJoystickNintendoSwitchPro, iFEWW)
//GOM(SDL_IsJoystickSteamController, iFEWW)
//GOM(SDL_IsJoystickXbox360, iFEWW)
//GOM(SDL_IsJoystickXboxOne, iFEWW)
//GOM(SDL_IsJoystickXInput, iFEUU)
//GOM(SDL_IsJoystickHIDAPI, iFEUU)
