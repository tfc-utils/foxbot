//
// FoXBot - AI Bot for Halflife's Team Fortress Classic
//
// (http://foxbot.net)
//
// bot_func.h
//
// Copyright (C) 2003 - Tom "Redfox" Simpson
//
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//
// See the GNU General Public License for more details at:
// http://www.gnu.org/copyleft/gpl.html
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

#ifndef BOT_FUNC_H
#define BOT_FUNC_H

// prototypes of bot functions...

void BotSpawnInit(bot_t* pBot);

void BotCreate(edict_t* pPlayer, const char* arg1, const char* arg2, const char* arg3, const char* arg4);

void BotStartGame(bot_t* pBot);

int BotInFieldOfView(const bot_t* pBot, const Vector& dest);

bool BotCanSeeOrigin(const bot_t* pBot, const Vector& r_dest);

float BotViewAngleDiff(const Vector& r_pOrigin, const edict_t* pEdict);

long random_long(long lowval, long highval);

float random_float(float lowval, float highval);

void BotFindItem(bot_t* pBot);

void BotThink(bot_t* pBot);

void BotUpdateSkillInaccuracy();

void BotEnemyCheck(bot_t* pBot);

bool BotFireWeapon(const Vector& v_enemy, bot_t* pBot, int weapon_choice);

void BotShootAtEnemy(bot_t* pBot);

// DrEvils functions.
int BotNadeHandler(bot_t* pBot, bool timed, char newNadeType);

int BotAssessThreatLevel(const bot_t* pBot);

int BotTeamColorCheck(const edict_t* pent);

int PickRandomEnemyTeam(int my_team);

int BotGuessPlayerPosition(const bot_t* pBot, const Vector& r_playerOrigin);

int BotFindGrenadePoint(const bot_t* pBot, const Vector& r_vecOrigin);

void BotCheckForMultiguns(bot_t* pBot, float nearestdistance, edict_t *pNewEnemy, bool& rtn);

void BotSoundSense(edict_t* pEdict, const char* pszSample, float fVolume);

int FriendlyClassTotal(const edict_t* pEdict, int specifiedClass, bool ignoreSelf);

void UpdateFlagCarrierList();

bool PlayerHasFlag(const edict_t* Player);

bool PlayerIsInfected(const edict_t* pEntity);

#endif // BOT_FUNC_H
