﻿#include "pch.h"

#define EXPORT_VERSION

#define PRAGMA(x) _Pragma(#x)
#define EXPORT_FORWARD(module, ordinal, name) PRAGMA(comment(linker, "/export:" #name "=" module "." #name))  //ordinal isn't used

#ifdef EXPORT_VERSION
#define EXPORT(ordinal, name) EXPORT_FORWARD(R"(C:\Windows\System32\version)", ordinal, name)
//#pragma comment(linker,"/export:GetFileVersionInfoA=C:\\Windows\\System32\\version.GetFileVersionInfoA")
EXPORT(1, GetFileVersionInfoA)
EXPORT(2, GetFileVersionInfoByHandle)
EXPORT(3, GetFileVersionInfoExA)
EXPORT(4, GetFileVersionInfoExW)
EXPORT(5, GetFileVersionInfoSizeA)
EXPORT(6, GetFileVersionInfoSizeExA)
EXPORT(7, GetFileVersionInfoSizeExW)
EXPORT(8, GetFileVersionInfoSizeW)
EXPORT(9, GetFileVersionInfoW)
EXPORT(10, VerFindFileA)
EXPORT(11, VerFindFileW)
EXPORT(12, VerInstallFileA)
EXPORT(13, VerInstallFileW)
EXPORT(14, VerLanguageNameA)
EXPORT(15, VerLanguageNameW)
EXPORT(16, VerQueryValueA)
EXPORT(17, VerQueryValueW)
#endif

#ifdef EXPORT_WINMM
#define EXPORT(ordinal, name) EXPORT_FORWARD(R"(C:\Windows\System32\winmm)", ordinal, name)
EXPORT(3, mciExecute)
EXPORT(4, CloseDriver)
EXPORT(5, DefDriverProc)
EXPORT(6, DriverCallback)
EXPORT(7, DrvGetModuleHandle)
EXPORT(8, GetDriverModuleHandle)
EXPORT(9, NotifyCallbackData)
EXPORT(10, OpenDriver)
EXPORT(11, PlaySound)
EXPORT(12, PlaySoundA)
EXPORT(13, PlaySoundW)
EXPORT(14, SendDriverMessage)
EXPORT(15, WOW32DriverCallback)
EXPORT(16, WOW32ResolveMultiMediaHandle)
EXPORT(17, WOWAppExit)
EXPORT(18, aux32Message)
EXPORT(19, auxGetDevCapsA)
EXPORT(20, auxGetDevCapsW)
EXPORT(21, auxGetNumDevs)
EXPORT(22, auxGetVolume)
EXPORT(23, auxOutMessage)
EXPORT(24, auxSetVolume)
EXPORT(25, joy32Message)
EXPORT(26, joyConfigChanged)
EXPORT(27, joyGetDevCapsA)
EXPORT(28, joyGetDevCapsW)
EXPORT(29, joyGetNumDevs)
EXPORT(30, joyGetPos)
EXPORT(31, joyGetPosEx)
EXPORT(32, joyGetThreshold)
EXPORT(33, joyReleaseCapture)
EXPORT(34, joySetCapture)
EXPORT(35, joySetThreshold)
EXPORT(36, mci32Message)
EXPORT(37, mciDriverNotify)
EXPORT(38, mciDriverYield)
EXPORT(39, mciFreeCommandResource)
EXPORT(40, mciGetCreatorTask)
EXPORT(41, mciGetDeviceIDA)
EXPORT(42, mciGetDeviceIDFromElementIDA)
EXPORT(43, mciGetDeviceIDFromElementIDW)
EXPORT(44, mciGetDeviceIDW)
EXPORT(45, mciGetDriverData)
EXPORT(46, mciGetErrorStringA)
EXPORT(47, mciGetErrorStringW)
EXPORT(48, mciGetYieldProc)
EXPORT(49, mciLoadCommandResource)
EXPORT(50, mciSendCommandA)
EXPORT(51, mciSendCommandW)
EXPORT(52, mciSendStringA)
EXPORT(53, mciSendStringW)
EXPORT(54, mciSetDriverData)
EXPORT(55, mciSetYieldProc)
EXPORT(56, mid32Message)
EXPORT(57, midiConnect)
EXPORT(58, midiDisconnect)
EXPORT(59, midiInAddBuffer)
EXPORT(60, midiInClose)
EXPORT(61, midiInGetDevCapsA)
EXPORT(62, midiInGetDevCapsW)
EXPORT(63, midiInGetErrorTextA)
EXPORT(64, midiInGetErrorTextW)
EXPORT(65, midiInGetID)
EXPORT(66, midiInGetNumDevs)
EXPORT(67, midiInMessage)
EXPORT(68, midiInOpen)
EXPORT(69, midiInPrepareHeader)
EXPORT(70, midiInReset)
EXPORT(71, midiInStart)
EXPORT(72, midiInStop)
EXPORT(73, midiInUnprepareHeader)
EXPORT(74, midiOutCacheDrumPatches)
EXPORT(75, midiOutCachePatches)
EXPORT(76, midiOutClose)
EXPORT(77, midiOutGetDevCapsA)
EXPORT(78, midiOutGetDevCapsW)
EXPORT(79, midiOutGetErrorTextA)
EXPORT(80, midiOutGetErrorTextW)
EXPORT(81, midiOutGetID)
EXPORT(82, midiOutGetNumDevs)
EXPORT(83, midiOutGetVolume)
EXPORT(84, midiOutLongMsg)
EXPORT(85, midiOutMessage)
EXPORT(86, midiOutOpen)
EXPORT(87, midiOutPrepareHeader)
EXPORT(88, midiOutReset)
EXPORT(89, midiOutSetVolume)
EXPORT(90, midiOutShortMsg)
EXPORT(91, midiOutUnprepareHeader)
EXPORT(92, midiStreamClose)
EXPORT(93, midiStreamOpen)
EXPORT(94, midiStreamOut)
EXPORT(95, midiStreamPause)
EXPORT(96, midiStreamPosition)
EXPORT(97, midiStreamProperty)
EXPORT(98, midiStreamRestart)
EXPORT(99, midiStreamStop)
EXPORT(100, mixerClose)
EXPORT(101, mixerGetControlDetailsA)
EXPORT(102, mixerGetControlDetailsW)
EXPORT(103, mixerGetDevCapsA)
EXPORT(104, mixerGetDevCapsW)
EXPORT(105, mixerGetID)
EXPORT(106, mixerGetLineControlsA)
EXPORT(107, mixerGetLineControlsW)
EXPORT(108, mixerGetLineInfoA)
EXPORT(109, mixerGetLineInfoW)
EXPORT(110, mixerGetNumDevs)
EXPORT(111, mixerMessage)
EXPORT(112, mixerOpen)
EXPORT(113, mixerSetControlDetails)
EXPORT(114, mmDrvInstall)
EXPORT(115, mmGetCurrentTask)
EXPORT(116, mmTaskBlock)
EXPORT(117, mmTaskCreate)
EXPORT(118, mmTaskSignal)
EXPORT(119, mmTaskYield)
EXPORT(120, mmioAdvance)
EXPORT(121, mmioAscend)
EXPORT(122, mmioClose)
EXPORT(123, mmioCreateChunk)
EXPORT(124, mmioDescend)
EXPORT(125, mmioFlush)
EXPORT(126, mmioGetInfo)
EXPORT(127, mmioInstallIOProcA)
EXPORT(128, mmioInstallIOProcW)
EXPORT(129, mmioOpenA)
EXPORT(130, mmioOpenW)
EXPORT(131, mmioRead)
EXPORT(132, mmioRenameA)
EXPORT(133, mmioRenameW)
EXPORT(134, mmioSeek)
EXPORT(135, mmioSendMessage)
EXPORT(136, mmioSetBuffer)
EXPORT(137, mmioSetInfo)
EXPORT(138, mmioStringToFOURCCA)
EXPORT(139, mmioStringToFOURCCW)
EXPORT(140, mmioWrite)
EXPORT(141, mmsystemGetVersion)
EXPORT(142, mod32Message)
EXPORT(143, mxd32Message)
EXPORT(144, sndPlaySoundA)
EXPORT(145, sndPlaySoundW)
EXPORT(146, tid32Message)
EXPORT(147, timeBeginPeriod)
EXPORT(148, timeEndPeriod)
EXPORT(149, timeGetDevCaps)
EXPORT(150, timeGetSystemTime)
EXPORT(151, timeGetTime)
EXPORT(152, timeKillEvent)
EXPORT(153, timeSetEvent)
EXPORT(154, waveInAddBuffer)
EXPORT(155, waveInClose)
EXPORT(156, waveInGetDevCapsA)
EXPORT(157, waveInGetDevCapsW)
EXPORT(158, waveInGetErrorTextA)
EXPORT(159, waveInGetErrorTextW)
EXPORT(160, waveInGetID)
EXPORT(161, waveInGetNumDevs)
EXPORT(162, waveInGetPosition)
EXPORT(163, waveInMessage)
EXPORT(164, waveInOpen)
EXPORT(165, waveInPrepareHeader)
EXPORT(166, waveInReset)
EXPORT(167, waveInStart)
EXPORT(168, waveInStop)
EXPORT(169, waveInUnprepareHeader)
EXPORT(170, waveOutBreakLoop)
EXPORT(171, waveOutClose)
EXPORT(172, waveOutGetDevCapsA)
EXPORT(173, waveOutGetDevCapsW)
EXPORT(174, waveOutGetErrorTextA)
EXPORT(175, waveOutGetErrorTextW)
EXPORT(176, waveOutGetID)
EXPORT(177, waveOutGetNumDevs)
EXPORT(178, waveOutGetPitch)
EXPORT(179, waveOutGetPlaybackRate)
EXPORT(180, waveOutGetPosition)
EXPORT(181, waveOutGetVolume)
EXPORT(182, waveOutMessage)
EXPORT(183, waveOutOpen)
EXPORT(184, waveOutPause)
EXPORT(185, waveOutPrepareHeader)
EXPORT(186, waveOutReset)
EXPORT(187, waveOutRestart)
EXPORT(188, waveOutSetPitch)
EXPORT(189, waveOutSetPlaybackRate)
EXPORT(190, waveOutSetVolume)
EXPORT(191, waveOutUnprepareHeader)
EXPORT(192, waveOutWrite)
EXPORT(193, wid32Message)
EXPORT(194, wod32Message)
#endif