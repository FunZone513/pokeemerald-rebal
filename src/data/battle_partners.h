//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_SCORCHED_CHAMBERS_EVELYNN] =
    {
#line 9
        .trainerName = _("Evelynn"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .encounterMusic_gender =
#line 12
F_TRAINER_FEMALE | 
#line 13
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 18
            .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
#line 20
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .ability = ABILITY_CLEAR_BODY,
#line 16
            .lvl = 22,
#line 19
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_SMACK_DOWN,
                MOVE_STEALTH_ROCK,
                MOVE_LIGHT_SCREEN,
                MOVE_TACKLE,
            },
            },
            {
#line 25
            .species = SPECIES_WHIRLIPEDE,
#line 25
            .gender = TRAINER_MON_FEMALE,
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .ability = ABILITY_POISON_POINT,
#line 26
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 28
                MOVE_ROLLOUT,
                MOVE_PROTECT,
                MOVE_BUG_BITE,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 33
            .species = SPECIES_MAWILE,
#line 33
            .gender = TRAINER_MON_FEMALE,
#line 36
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 38
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 35
            .ability = ABILITY_INTIMIDATE,
#line 34
            .lvl = 24,
#line 37
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 38
                MOVE_BITE,
                MOVE_SUCKER_PUNCH,
                MOVE_FAIRY_WIND,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 43
    [DIFFICULTY_NORMAL][PARTNER_ROUTE7_NIDOQUEEN] =
    {
#line 44
        .trainerName = _("NIDOQUEEN"),
#line 45
        .trainerClass = TRAINER_CLASS_BOSS_POKEMON,
#line 46
        .trainerPic = TRAINER_BACK_PIC_NIDOQUEEN,
        .encounterMusic_gender =
#line 47
F_TRAINER_FEMALE | 
#line 48
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 50
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 53
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 52
            .ability = ABILITY_POISON_POINT,
#line 51
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 53
                MOVE_EARTH_POWER,
                MOVE_POISON_JAB,
                MOVE_CRUNCH,
                MOVE_DOUBLE_KICK,
            },
            },
        },
    },
