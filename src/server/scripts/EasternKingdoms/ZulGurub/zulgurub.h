/*
 * Copyright (C) 2013-2015 InfinityCore <http://www.noffearrdeathproject.net/>
 * Copyright (C) 2006-2009 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEF_ZULGURUB_H
#define DEF_ZULGURUB_H

#define ZGScriptName "instance_zulgurub"

uint32 const EncounterCount = 5;

enum DataTypes
{
    DATA_VENOXIS                    = 0,
    DATA_MANDOKIR                   = 1,
    DATA_KILNARA                    = 2,
    DATA_ZANZIL                     = 3,
    DATA_JINDO                      = 4,

    // Cache of Madness
    DATA_HAZZARAH                   = 5,
    DATA_RENATAKI                   = 6,
    DATA_WUSHOOLAY                  = 7,
    DATA_GRILEK                     = 8,
    DATA_BEAM_TRIGGER               = 9,

    // Jin'do the Godbreaker
    DATA_JINDOR_TRIGGER             = 10,
    DATA_POSITION_ID                = 11,
    DATA_TIKI_MASK_ID               = 12,
};

enum CreatureIds
{
    NPC_VENOXIS                     = 52155,
    NPC_MANDOKIR                    = 52151,
    NPC_KILNARA                     = 52059,
    NPC_ZANZIL                      = 52053,
    NPC_JINDO                       = 52148,

    // Cache of Madness
    NPC_HAZZARAH                    = 52271,
    NPC_RENATAKI                    = 52269,
    NPC_WUSHOOLAY                   = 52286,
    NPC_GRILEK                      = 52258,

    // Bloodlord Mandokir
    NPC_CHAINED_SPIRIT              = 52156,
    NPC_HAKKAR_CHAINS               = 52430,
    NPC_OHGAN                       = 52157,

    // Jin'do the Godbreaker
    NPC_JINDO_TRIGGER               = 52150,
    NPC_SPIRIT_OF_HAKKAR            = 52222,
    NPC_SHADOW_OF_HAKKAR            = 52650,

    NPC_GAS_CLOUD                   = 52062,
    NPC_HAKKAR_RIFT                 = 52400,
    NPC_MADNESS_CONTROLLER          = 91004,
    NPC_TROLL_ARTIFACT_STAND        = 52452,
    NPC_ELF_ARTIFACT_STAND          = 52450,
    NPC_DWARF_ARTIFACT_STAND        = 52446,
    NPC_TROLL_ARTIFACT_SUM          = 52453,
    NPC_ELF_ARTIFACT_SUM            = 52451,
    NPC_DWARF_ARTIFACT_SUM          = 52449,
    NPC_CAVE_IN_TRIGGER             = 52387,

    // Venoxis
    NPC_GENERAL_PURPOSE_BUNNY       = 45979,
    NPC_POOL_OF_ACID_TEARS          = 52197,
    NPC_BLOOD_VENOM                 = 52525,
    NPC_VENOMOOUS_EFFUSION          = 52288,

};

enum GameObjectIds
{
    // High Priest Venoxis
    GO_VENOXIS_COIL                 = 208844,

    // Bloodlord Mandokir
    GO_ARENA_DOOR_1                 = 208845,
    GO_ARENA_DOOR_2                 = 208847,
    GO_ARENA_DOOR_3                 = 208848,
    GO_ARENA_DOOR_4                 = 208846,
    GO_ARENA_DOOR_5                 = 208849,

    // High Priestess Kilnara
    GO_FORCEFIELD                   = 180497,

    // Zanzil
    GO_ZANZIL_DOOR                  = 208850,

    // Cache of Madness
    GO_THE_CACHE_OF_MADNESS_DOOR    = 208843
};

template<class AI>
CreatureAI* GetZulGurubAI(Creature* creature)
{
    if (InstanceMap* instance = creature->GetMap()->ToInstanceMap())
        if (instance->GetInstanceScript())
            if (instance->GetScriptId() == sObjectMgr->GetScriptId(ZGScriptName))
                return new AI(creature);
    return NULL;
}

#endif
