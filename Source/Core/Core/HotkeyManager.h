// Copyright 2015 Dolphin Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <array>
#include <string>

#include "Common/CommonTypes.h"
#include "InputCommon/ControllerEmu/ControllerEmu.h"
#include "InputCommon/InputConfig.h"

namespace ControllerEmu
{
class ControllerEmu;
class Buttons;
}  // namespace ControllerEmu

enum Hotkey
{
  HK_OPEN,
  HK_CHANGE_DISC,
  HK_EJECT_DISC,
  HK_REFRESH_LIST,
  HK_PLAY_PAUSE,
  HK_STOP,
  HK_RESET,
  HK_FULLSCREEN,
  HK_SCREENSHOT,
  HK_EXIT,
  HK_UNLOCK_CURSOR,
  HK_CENTER_MOUSE,
  HK_ACTIVATE_CHAT,
  HK_REQUEST_GOLF_CONTROL,
#ifdef USE_RETRO_ACHIEVEMENTS
  HK_OPEN_ACHIEVEMENTS,
#endif  // USE_RETRO_ACHIEVEMENTS

  HK_VOLUME_DOWN,
  HK_VOLUME_UP,
  HK_VOLUME_TOGGLE_MUTE,

  HK_DECREASE_EMULATION_SPEED,
  HK_INCREASE_EMULATION_SPEED,
  HK_TOGGLE_THROTTLE,

  HK_FRAME_ADVANCE,
  HK_FRAME_ADVANCE_DECREASE_SPEED,
  HK_FRAME_ADVANCE_INCREASE_SPEED,
  HK_FRAME_ADVANCE_RESET_SPEED,

  HK_START_RECORDING,
  HK_PLAY_RECORDING,
  HK_EXPORT_RECORDING,
  HK_READ_ONLY_MODE,

  HK_STEP,
  HK_STEP_OVER,
  HK_STEP_OUT,
  HK_SKIP,

  HK_SHOW_PC,
  HK_SET_PC,

  HK_BP_TOGGLE,
  HK_BP_ADD,
  HK_MBP_ADD,

  HK_TRIGGER_SYNC_BUTTON,
  HK_WIIMOTE1_CONNECT,
  HK_WIIMOTE2_CONNECT,
  HK_WIIMOTE3_CONNECT,
  HK_WIIMOTE4_CONNECT,
  HK_BALANCEBOARD_CONNECT,
  HK_TOGGLE_SD_CARD,
  HK_TOGGLE_USB_KEYBOARD,

  HK_NEXT_WIIMOTE_PROFILE_1,
  HK_PREV_WIIMOTE_PROFILE_1,
  HK_NEXT_GAME_WIIMOTE_PROFILE_1,
  HK_PREV_GAME_WIIMOTE_PROFILE_1,
  HK_NEXT_WIIMOTE_PROFILE_2,
  HK_PREV_WIIMOTE_PROFILE_2,
  HK_NEXT_GAME_WIIMOTE_PROFILE_2,
  HK_PREV_GAME_WIIMOTE_PROFILE_2,
  HK_NEXT_WIIMOTE_PROFILE_3,
  HK_PREV_WIIMOTE_PROFILE_3,
  HK_NEXT_GAME_WIIMOTE_PROFILE_3,
  HK_PREV_GAME_WIIMOTE_PROFILE_3,
  HK_NEXT_WIIMOTE_PROFILE_4,
  HK_PREV_WIIMOTE_PROFILE_4,
  HK_NEXT_GAME_WIIMOTE_PROFILE_4,
  HK_PREV_GAME_WIIMOTE_PROFILE_4,

  HK_TOGGLE_CROP,
  HK_TOGGLE_AR,
  HK_TOGGLE_SKIP_EFB_ACCESS,
  HK_TOGGLE_EFBCOPIES,
  HK_TOGGLE_XFBCOPIES,
  HK_TOGGLE_IMMEDIATE_XFB,
  HK_TOGGLE_FOG,
  HK_TOGGLE_DUMPTEXTURES,
  HK_TOGGLE_TEXTURES,

  HK_INCREASE_IR,
  HK_DECREASE_IR,

  HK_FREELOOK_TOGGLE,

  HK_TOGGLE_STEREO_SBS,
  HK_TOGGLE_STEREO_TAB,
  HK_TOGGLE_STEREO_ANAGLYPH,

  HK_DECREASE_DEPTH,
  HK_INCREASE_DEPTH,
  HK_DECREASE_CONVERGENCE,
  HK_INCREASE_CONVERGENCE,

  HK_LOAD_STATE_SLOT_1,
  HK_LOAD_STATE_SLOT_2,
  HK_LOAD_STATE_SLOT_3,
  HK_LOAD_STATE_SLOT_4,
  HK_LOAD_STATE_SLOT_5,
  HK_LOAD_STATE_SLOT_6,
  HK_LOAD_STATE_SLOT_7,
  HK_LOAD_STATE_SLOT_8,
  HK_LOAD_STATE_SLOT_9,
  HK_LOAD_STATE_SLOT_10,
  HK_LOAD_STATE_SLOT_SELECTED,

  HK_SAVE_STATE_SLOT_1,
  HK_SAVE_STATE_SLOT_2,
  HK_SAVE_STATE_SLOT_3,
  HK_SAVE_STATE_SLOT_4,
  HK_SAVE_STATE_SLOT_5,
  HK_SAVE_STATE_SLOT_6,
  HK_SAVE_STATE_SLOT_7,
  HK_SAVE_STATE_SLOT_8,
  HK_SAVE_STATE_SLOT_9,
  HK_SAVE_STATE_SLOT_10,
  HK_SAVE_STATE_SLOT_SELECTED,

  HK_SELECT_STATE_SLOT_1,
  HK_SELECT_STATE_SLOT_2,
  HK_SELECT_STATE_SLOT_3,
  HK_SELECT_STATE_SLOT_4,
  HK_SELECT_STATE_SLOT_5,
  HK_SELECT_STATE_SLOT_6,
  HK_SELECT_STATE_SLOT_7,
  HK_SELECT_STATE_SLOT_8,
  HK_SELECT_STATE_SLOT_9,
  HK_SELECT_STATE_SLOT_10,

  HK_LOAD_LAST_STATE_1,
  HK_LOAD_LAST_STATE_2,
  HK_LOAD_LAST_STATE_3,
  HK_LOAD_LAST_STATE_4,
  HK_LOAD_LAST_STATE_5,
  HK_LOAD_LAST_STATE_6,
  HK_LOAD_LAST_STATE_7,
  HK_LOAD_LAST_STATE_8,
  HK_LOAD_LAST_STATE_9,
  HK_LOAD_LAST_STATE_10,

  HK_SAVE_FIRST_STATE,
  HK_UNDO_LOAD_STATE,
  HK_UNDO_SAVE_STATE,
  HK_SAVE_STATE_FILE,
  HK_LOAD_STATE_FILE,
  HK_INCREMENT_SELECTED_STATE_SLOT,
  HK_DECREMENT_SELECTED_STATE_SLOT,

  HK_GBA_LOAD,
  HK_GBA_UNLOAD,
  HK_GBA_RESET,

  HK_GBA_VOLUME_DOWN,
  HK_GBA_VOLUME_UP,
  HK_GBA_TOGGLE_MUTE,

  HK_GBA_1X,
  HK_GBA_2X,
  HK_GBA_3X,
  HK_GBA_4X,

  HK_SKYLANDERS_PORTAL,
  HK_INFINITY_BASE,

  NUM_HOTKEYS,
};

enum HotkeyGroup : int
{
  HKGP_GENERAL,
  HKGP_VOLUME,
  HKGP_SPEED,
  HKGP_FRAME_ADVANCE,
  HKGP_MOVIE,
  HKGP_STEPPING,
  HKGP_PC,
  HKGP_BREAKPOINT,
  HKGP_WII,
  HKGP_CONTROLLER_PROFILE_1,
  HKGP_CONTROLLER_PROFILE_2,
  HKGP_CONTROLLER_PROFILE_3,
  HKGP_CONTROLLER_PROFILE_4,
  HKGP_GRAPHICS_TOGGLES,
  HKGP_IR,
  HKGP_FREELOOK,
  HKGP_3D_TOGGLE,
  HKGP_3D_DEPTH,
  HKGP_LOAD_STATE,
  HKGP_SAVE_STATE,
  HKGP_SELECT_STATE,
  HKGP_LOAD_LAST_STATE,
  HKGP_STATE_MISC,
  HKGP_GBA_CORE,
  HKGP_GBA_VOLUME,
  HKGP_GBA_SIZE,
  HKGP_USB_EMU,

  NUM_HOTKEY_GROUPS,
};

struct HotkeyStatus
{
  std::array<u32, NUM_HOTKEY_GROUPS> button;
  s8 err;
};

class HotkeyManager : public ControllerEmu::EmulatedController
{
public:
  HotkeyManager();
  ~HotkeyManager();

  void GetInput(HotkeyStatus* hk, bool ignore_focus);
  std::string GetName() const override;
  InputConfig* GetConfig() const override;
  ControllerEmu::ControlGroup* GetHotkeyGroup(HotkeyGroup group) const;
  int FindGroupByID(int id) const;
  int GetIndexForGroup(int group, int id) const;
  void LoadDefaults(const ControllerInterface& ciface) override;

private:
  std::array<ControllerEmu::Buttons*, NUM_HOTKEY_GROUPS> m_keys{};
  std::array<ControllerEmu::ControlGroup*, NUM_HOTKEY_GROUPS> m_hotkey_groups{};
};

namespace HotkeyManagerEmu
{
void Initialize();
void Shutdown();
void LoadConfig();

InputConfig* GetConfig();
ControllerEmu::ControlGroup* GetHotkeyGroup(HotkeyGroup group);
void GetStatus(bool ignore_focus);
bool IsEnabled();
void Enable(bool enable_toggle);
bool IsPressed(int Id, bool held);
}  // namespace HotkeyManagerEmu
