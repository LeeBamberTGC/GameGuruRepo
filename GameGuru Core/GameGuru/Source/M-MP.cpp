//----------------------------------------------------
//--- GAMEGURU - M-Multiplayer
//----------------------------------------------------

#include "gameguru.h"

// No multiplayer in free trial version
void mp_init ( void ) {}
void mp_loop ( void ) {}
void mp_free ( void ) {}
void mp_checkVoiceChat ( void ) {}
void mp_spawn_objects ( void ) {}
void mp_lua ( void ) {}
void mp_delete_entities ( void ) {}
void mp_pre_game_file_sync ( void ) {}
void mp_pre_game_file_sync_server ( void ) {}
void mp_pre_game_file_sync_client ( void ) {}
void mp_sendAvatarInfo ( void ) {}
void mp_animation ( void ) {}
void mp_update_player ( void ) {}
void mp_updatePlayerPositions ( void ) {}
void mp_server_message ( void ) {}
void mp_updatePlayerNamePlates ( void ) {}
void mp_updatePlayerAnimations ( void ) {}
void mp_switchAnim ( void ) {}
void mp_update_waist_rotation ( void ) {}
void mp_showdeath ( void ) {}
void mp_respawn ( void ) {}
void mp_getPlaceToSpawn ( void ) {}
void mp_getInitialPlayerCount ( void ) {}
void mp_nukeTestmap ( void ) {}
void mp_respawnEntities ( void ) {}
void mp_addDestroyedObject ( void ) {}
void mp_add_respawn_timed ( void ) {}
void mp_setLuaPlayerNames ( void ) {}
void mp_setLuaResetStats ( void ) {}
void mp_updatePlayerInput ( void ) {}
void mp_load_guns ( void ) {}
void mp_check_for_attachments ( void ) {}
void mp_addJetpackParticles ( void ) {}
void mp_NearOtherPlayers ( void ) {}
void mp_check_respawn_objects ( void ) {}
void mp_checkForEveryoneLeft ( void ) {}
void mp_lostConnection ( void ) {}
void mp_gameLoop ( void ) {}
void mp_dontShowOtherPlayers ( void ) {}
void mp_ending_game ( void ) {}
void mp_free_game ( void ) {}
void mp_subbedToItem ( void ) {}
void mp_checkItemSubbed ( void ) {}
void mp_resetGameStats ( void ) {}
void mp_update_all_projectiles ( void ) {}
void mp_destroyentity ( void ) {}
void mp_refresh ( void ) {}
void mp_setMessage ( void ) {}
void mp_setMessageDots ( void ) {}
void mp_message ( void ) {}
void mp_messageDots ( void ) {}
void mp_update_projectile ( void ) {}
void mp_serverSetLuaGameMode ( void ) {}
void mp_setServerTimer ( void ) {}
void mp_serverRespawnAll ( void ) {}
void mp_restoreEntities ( void ) {}
void mp_serverEndPlay ( void ) {}
void mp_setServerKillsToWin ( void ) {}
void mp_networkkill ( void ) {}
void mp_lobbyListBox ( void ) {}
void mp_createLobby ( void ) {}
void mp_searchForLobbies ( void ) {}
void mp_searchForFpms ( void ) {}
void mp_launchGame ( void ) {}
void mp_backToStart ( void ) {}
void mp_selectedALevel ( void ) {}
void mp_checkIfLevelHasCustomContent ( void ) {}
void mp_buildWorkShopItem ( void ) {}
void mp_buildingWorkshopItemFailed ( void ) {}
void mp_joinALobby ( void ) {}
void mp_canIJoinThisLobby ( void ) {}
void mp_leaveALobby ( void ) {}
void mp_SubscribeToWorkShopItem ( void ) {}
void mp_save_workshop_files_needed ( void ) {}
void mp_grabWorkshopChangedFlagAndVersion ( void ) {}
int mp_check_if_entity_is_from_install ( char* name_s ) { return 0; }
void mp_resetSteam ( void ) {}
void mp_shoot ( void ) {}
void mp_chat ( void ) {}
void mp_chatNew ( void ) {}

void mp_quitGame ( void ) 
{
	t.tstartoffade = Timer();
	t.tfadestealpha_f = 0.0;
	t.tspritetouse = 0;
	for ( t.tloop = 2000 ; t.tloop<=  3000; t.tloop++ )
	{
		if (  SpriteExist(t.tloop)  ==  0 ) { t.tspritetouse  =  t.tloop  ; break; }
	}
	while (  Timer() - t.tstartoffade < 500 ) 
	{
		t.tfadestealpha_f = (Timer() - t.tstartoffade)*2;
		if (  t.tfadestealpha_f < 0  )  t.tfadestealpha_f  =  0.0;
		if (  t.tfadestealpha_f > 255.0  )  t.tfadestealpha_f  =  255.0;
		if (  t.tspritetouse > 0 && ImageExist(g.panelimageoffset+1)  ==  1 ) 
		{
			Sprite (  t.tspritetouse,0,0,g.panelimageoffset+1 );
			SizeSprite (  t.tspritetouse,GetDisplayWidth()*10, GetDisplayHeight()*10 );
			SetSpriteDiffuse (  t.tspritetouse,0,0,0 );
			SetSpriteAlpha (  t.tspritetouse,t.tfadestealpha_f );
		}
		//SteamLoop (  );
		Sync (  );
	}
	if (  g.mp.isGameHost  ==  1 ) 
	{
		//SteamEndGame (  );
	}
	t.game.gameloop=0;
	t.game.levelloop=0;
	t.game.titleloop=0;
	t.game.quitflag=1;
}

void mp_freefadesprite ( void ) {}
void mp_backToEditor ( void ) {}
void mp_cleanupGame ( void ) {}
void mp_sendSteamIDToEditor ( void ) {}
void mp_checkIfLobbiesAvailable ( void ) {}
void mp_flashLightOff ( void ) {}
void mp_setupCoopTeam ( void ) {}
void mp_COOP_aiMoveTo ( void ) {}
void mp_entity_lua_lookatplayer ( void ) {}
void mp_entity_lua_fireweaponEffectOnly ( void ) {}
void mp_updateAIForCOOP ( void ) {}
void mp_coop_rotatetoplayer ( void ) {}
void mp_storeOldEntityPositions ( void ) {}
void mp_howManyEnemiesLeftToKill ( void ) {}
void mp_IKilledAnAI ( void ) {}
void mp_text ( int x, int y, int size, char* txt_s ) {}
void mp_textDots ( int x, int y, int size, char* txt_s ) {}
void mp_textColor ( int x, int y, int size, char* txt_s, int r, int g, int b ) {}
void mp_panel ( int x, int y, int x2, int y2 ) {}
void mp_livelog ( char* t_s ) {}
void mp_deleteFile ( char* tempFileToDelete_s ) {}
int mp_check_if_lua_entity_exists ( int tentitytocheck ) { return 0; }
void mp_sendlua ( int code, int e, int v ) {}

void SteamApplyPlayerDamage ( int index, int damage, int x, int y, int z, int force, int limb ) {}
int SteamGetPlayerAlive ( int a ) { return 0; }
char* SteamGetWorkshopItemPath ( void ) { return ""; }
void SteamDestroy ( int a ) { }
void SteamShowAgreement ( void ) { }
int SteamInit ( void ) { return 0; }
void SteamGetWorkshopItemPathDLL ( char* ) {}
int SteamIsWorkshopLoadingOnDLL ( void ) { return 0; }
void SteamSendLua ( int a, int b, int c ) {}
