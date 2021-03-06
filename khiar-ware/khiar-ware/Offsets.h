#ifndef OFFSETS_H
#define OFFSETS_H

#include <windows.h>

namespace signitures {
	const DWORD anim_overlays = 10624 ;
	const DWORD clientstate_choked_commands = 19760 ;
	const DWORD clientstate_delta_ticks = 372 ;
	const DWORD clientstate_last_outgoing_command = 19756 ;
	const DWORD clientstate_net_channel = 156 ;
	const DWORD convar_name_hash_table = 192760 ;
	const DWORD dwClientState = 5808100 ;
	const DWORD dwClientState_GetLocalPlayer = 384 ;
	const DWORD dwClientState_IsHLTV = 19784 ;
	const DWORD dwClientState_Map = 652 ;
	const DWORD dwClientState_MapDirectory = 392 ;
	const DWORD dwClientState_MaxPlayer = 904 ;
	const DWORD dwClientState_PlayerInfo = 21184 ;
	const DWORD dwClientState_State = 264 ;
	const DWORD dwClientState_ViewAngles = 19856 ;
	const DWORD dwEntityList = 81424908 ;
	const DWORD dwForceAttack = 52262708 ;
	const DWORD dwForceAttack2 = 52262720 ;
	const DWORD dwForceBackward = 52262780 ;
	const DWORD dwForceForward = 52262792 ;
	const DWORD dwForceJump = 86315004 ;
	const DWORD dwForceLeft = 52262816 ;
	const DWORD dwForceRight = 52262804 ;
	const DWORD dwGameDir = 6457344 ;
	const DWORD dwGameRulesProxy = 86786796 ;
	const DWORD dwGetAllClasses = 14376988 ;
	const DWORD dwGlobalVars = 5807336 ;
	const DWORD dwGlowObjectManager = 86963912 ;
	const DWORD dwInput = 85952464 ;
	const DWORD dwInterfaceLinkList = 9731060 ;
	const DWORD dwLocalPlayer = 14213836 ;
	const DWORD dwMouseEnable = 14237296 ;
	const DWORD dwMouseEnablePtr = 14237248 ;
	const DWORD dwPlayerResource = 52255424 ;
	const DWORD dwRadarBase = 85835652 ;
	const DWORD dwSensitivity = 14236940 ;
	const DWORD dwSensitivityPtr = 14236896 ;
	const DWORD dwSetClanTag = 565680 ;
	const DWORD dwViewMatrix = 81365796 ;
	const DWORD dwWeaponTable = 85955216 ;
	const DWORD dwWeaponTableIndex = 12892 ;
	const DWORD dwYawPtr = 14236368 ;
	const DWORD dwZoomSensitivityRatioPtr = 14257520 ;
	const DWORD dwbSendPackets = 882586 ;
	const DWORD dwppDirect3DDevice9 = 684112 ;
	const DWORD find_hud_element = 796719616 ;
	const DWORD force_update_spectator_glow = 3866106 ;
	const DWORD interface_engine_cvar = 256492 ;
	const DWORD is_c4_owner = 3918400 ;
	const DWORD m_bDormant = 237 ;
	const DWORD m_flSpawnTime = 41840 ;
	const DWORD m_pStudioHdr = 10572 ;
	const DWORD m_pitchClassPtr = 85836320 ;
	const DWORD m_yawClassPtr = 14236368 ;
	const DWORD model_ambient_min = 5820508 ;
	const DWORD set_abs_angles = 1969024 ;
	const DWORD set_abs_origin = 1968576 ;
};

namespace netvars {
	const DWORD cs_gamerules_data = 0 ;
	const DWORD m_ArmorValue = 45948 ;
	const DWORD m_Collision = 800 ;
	const DWORD m_CollisionGroup = 1140 ;
	const DWORD m_Local = 12220 ;
	const DWORD m_MoveType = 604 ;
	const DWORD m_OriginalOwnerXuidHigh = 12740 ;
	const DWORD m_OriginalOwnerXuidLow = 12736 ;
	const DWORD m_SurvivalGameRuleDecisionTypes = 4904 ;
	const DWORD m_SurvivalRules = 3328 ;
	const DWORD m_aimPunchAngle = 12332 ;
	const DWORD m_aimPunchAngleVel = 12344 ;
	const DWORD m_angEyeAnglesX = 45952 ;
	const DWORD m_angEyeAnglesY = 45956 ;
	const DWORD m_bBombDefused = 10672 ;
	const DWORD m_bBombPlanted = 2469 ;
	const DWORD m_bBombTicking = 10624 ;
	const DWORD m_bFreezePeriod = 32 ;
	const DWORD m_bGunGameImmunity = 14660 ;
	const DWORD m_bHasDefuser = 45964 ;
	const DWORD m_bHasHelmet = 45936 ;
	const DWORD m_bInReload = 12965 ;
	const DWORD m_bIsDefusing = 14640 ;
	const DWORD m_bIsQueuedMatchmaking = 116 ;
	const DWORD m_bIsScoped = 14632 ;
	const DWORD m_bIsValveDS = 124 ;
	const DWORD m_bSpotted = 2365 ;
	const DWORD m_bSpottedByMask = 2432 ;
	const DWORD m_bStartedArming = 13296 ;
	const DWORD m_bUseCustomAutoExposureMax = 2521 ;
	const DWORD m_bUseCustomAutoExposureMin = 2520 ;
	const DWORD m_bUseCustomBloomScale = 2522 ;
	const DWORD m_clrRender = 112 ;
	const DWORD m_dwBoneMatrix = 9896 ;
	const DWORD m_fAccuracyPenalty = 13104 ;
	const DWORD m_fFlags = 260 ;
	const DWORD m_flC4Blow = 10640 ;
	const DWORD m_flCustomAutoExposureMax = 2528 ;
	const DWORD m_flCustomAutoExposureMin = 2524 ;
	const DWORD m_flCustomBloomScale = 2532 ;
	const DWORD m_flDefuseCountDown = 10668 ;
	const DWORD m_flDefuseLength = 10664 ;
	const DWORD m_flFallbackWear = 12752 ;
	const DWORD m_flFlashDuration = 42016 ;
	const DWORD m_flFlashMaxAlpha = 42012 ;
	const DWORD m_flLastBoneSetupTime = 10532 ;
	const DWORD m_flLowerBodyYawTarget = 14992 ;
	const DWORD m_flNextAttack = 11632 ;
	const DWORD m_flNextPrimaryAttack = 12856 ;
	const DWORD m_flSimulationTime = 616 ;
	const DWORD m_flTimerLength = 10644 ;
	const DWORD m_hActiveWeapon = 12024 ;
	const DWORD m_hBombDefuser = 10676 ;
	const DWORD m_hMyWeapons = 11768 ;
	const DWORD m_hObserverTarget = 13196 ;
	const DWORD m_hOwner = 10700 ;
	const DWORD m_hOwnerEntity = 332 ;
	const DWORD m_hViewModel = 13048 ;
	const DWORD m_iAccountID = 12232 ;
	const DWORD m_iClip1 = 12900 ;
	const DWORD m_iCompetitiveRanking = 6788 ;
	const DWORD m_iCompetitiveWins = 7048 ;
	const DWORD m_iCrosshairId = 46056 ;
	const DWORD m_iDefaultFOV = 13100 ;
	const DWORD m_iEntityQuality = 12204 ;
	const DWORD m_iFOVStart = 12776 ;
	const DWORD m_iGlowIndex = 42040 ;
	const DWORD m_iHealth = 256 ;
	const DWORD m_iItemDefinitionIndex = 12202 ;
	const DWORD m_iItemIDHigh = 12224 ;
	const DWORD m_iMostRecentModelBoneCounter = 9872 ;
	const DWORD m_iObserverMode = 13176 ;
	const DWORD m_iShotsFired = 41872 ;
	const DWORD m_iState = 12888 ;
	const DWORD m_iTeamNum = 244 ;
	const DWORD m_lifeState = 607 ;
	const DWORD m_nBombSite = 10628 ;
	const DWORD m_nFallbackPaintKit = 12744 ;
	const DWORD m_nFallbackSeed = 12748 ;
	const DWORD m_nFallbackStatTrak = 12756 ;
	const DWORD m_nForceBone = 9868 ;
	const DWORD m_nTickBase = 13360 ;
	const DWORD m_nViewModelIndex = 10688 ;
	const DWORD m_rgflCoordinateFrame = 1092 ;
	const DWORD m_szCustomName = 12348 ;
	const DWORD m_szLastPlaceName = 13748 ;
	const DWORD m_thirdPersonViewAngles = 12760 ;
	const DWORD m_vecOrigin = 312 ;
	const DWORD m_vecVelocity = 276 ;
	const DWORD m_vecViewOffset = 264 ;
	const DWORD m_viewPunchAngle = 12320 ;
	const DWORD m_zoomLevel = 13264 ;
};

#endif