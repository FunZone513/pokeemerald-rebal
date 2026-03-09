//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 155
    [DIFFICULTY_NORMAL][GYM_LEADER_MARTIN] =
    {
#line 156
        .trainerName = _("Martin"),
#line 157
        .trainerClass = TRAINER_CLASS_LEADER,
#line 158
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 160
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 161
        .items = { ITEM_POTION, ITEM_SUPER_POTION },
#line 162
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 164
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 167
            .ev = TRAINER_PARTY_EVS(236, 236, 36, 0, 0, 0),
#line 169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 165
            .ability = ABILITY_STURDY,
#line 166
            .lvl = 12,
#line 168
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 169
                MOVE_STEALTH_ROCK,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 174
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 177
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 236, 236, 0),
#line 179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 175
            .ability = ABILITY_SPEED_BOOST,
#line 176
            .lvl = 12,
#line 178
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 179
                MOVE_STRUGGLE_BUG,
                MOVE_QUICK_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_DETECT,
            },
            },
            {
#line 184
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 186
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 224, 224, 0),
#line 188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 185
            .lvl = 12,
#line 187
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 188
                MOVE_WATER_PULSE,
                MOVE_AQUA_JET,
                MOVE_FLAIL,
            },
            },
            {
#line 192
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 195
            .ev = TRAINER_PARTY_EVS(12, 0, 244, 0, 0, 224),
#line 197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 193
            .ability = ABILITY_PRANKSTER,
#line 194
            .lvl = 13,
#line 196
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 197
                MOVE_FAKE_OUT,
                MOVE_SHADOW_SNEAK,
                MOVE_WILL_O_WISP,
                MOVE_SCRATCH,
            },
            },
            {
#line 202
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 202
            .heldItem = ITEM_SITRUS_BERRY,
#line 205
            .ev = TRAINER_PARTY_EVS(0, 228, 244, 0, 0, 28),
#line 207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 203
            .ability = ABILITY_GLUTTONY,
#line 204
            .lvl = 15,
#line 206
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 207
                MOVE_LICK,
                MOVE_TACKLE,
                MOVE_RECYCLE,
                MOVE_CURSE,
            },
            },
        },
    },
#line 212
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER1] =
    {
#line 213
        .trainerName = _("Carlos"),
#line 214
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 215
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 217
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 218
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 220
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 221
            .ability = ABILITY_INTIMIDATE,
#line 222
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 224
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 225
            .ability = ABILITY_HUSTLE,
#line 226
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 227
                MOVE_FURY_SWIPES,
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 231
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 232
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 234
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER2] =
    {
#line 235
        .trainerName = _("Cindy"),
#line 236
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 237
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 238
F_TRAINER_FEMALE | 
#line 239
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 240
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 242
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 243
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 244
                MOVE_TACKLE,
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 249
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 250
            .ability = ABILITY_STATIC,
#line 251
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 252
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 257
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER3] =
    {
#line 258
        .trainerName = _("David"),
#line 259
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 260
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 262
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 263
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 265
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 266
            .ability = ABILITY_WEAK_ARMOR,
#line 267
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 268
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 272
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 273
            .ability = ABILITY_WEAK_ARMOR,
#line 274
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 275
                MOVE_FURY_CUTTER,
                MOVE_ROCK_SLIDE,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 279
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER4] =
    {
#line 280
        .trainerName = _("Samuel"),
#line 281
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 282
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 284
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 285
        .doubleBattle = TRUE,
#line 286
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 288
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 291
            .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 252, 0),
#line 293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 289
            .ability = ABILITY_COMPOUND_EYES,
#line 290
            .lvl = 13,
#line 292
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 293
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_GUST,
                MOVE_BUG_BITE,
            },
            },
            {
#line 298
            .species = SPECIES_BEAUTIFLY,
#line 298
            .gender = TRAINER_MON_FEMALE,
#line 301
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 299
            .ability = ABILITY_SWARM,
#line 300
            .lvl = 13,
#line 302
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 303
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 308
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_BUG_CATCHER] =
    {
#line 309
        .trainerName = _("Bert"),
#line 310
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 311
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 313
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 314
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 316
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 317
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 319
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 320
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 321
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 326
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 327
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 329
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_GIRL] =
    {
#line 330
        .trainerName = _("Lola"),
#line 331
        .trainerClass = TRAINER_CLASS_LASS,
#line 332
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 333
F_TRAINER_FEMALE | 
#line 334
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 335
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 337
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 338
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 340
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 341
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 343
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_BOY] =
    {
#line 344
        .trainerName = _("Mark"),
#line 345
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 346
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 348
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 349
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 351
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 352
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 354
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_GIRL] =
    {
#line 355
        .trainerName = _("Susie"),
#line 356
        .trainerClass = TRAINER_CLASS_LASS,
#line 357
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 358
F_TRAINER_FEMALE | 
#line 359
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 360
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 362
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 363
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 365
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 366
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 368
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_LITTLEGIRL] =
    {
#line 369
        .trainerName = _("Mary"),
#line 370
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 371
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 372
F_TRAINER_FEMALE | 
#line 373
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 374
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 376
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 377
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 378
                MOVE_WATER_GUN,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 381
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_FISHERMAN] =
    {
#line 382
        .trainerName = _("Jeff"),
#line 383
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 384
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 386
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 387
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 389
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 390
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 392
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 393
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 395
    [DIFFICULTY_NORMAL][TRAINER_ROUTE4_SCHOOLKID] =
    {
#line 396
        .trainerName = _("Timothy"),
#line 397
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 398
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 400
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 401
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 403
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 404
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 406
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 407
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 409
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_PICNICKER] =
    {
#line 410
        .trainerName = _("Brittany"),
#line 411
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 412
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 413
F_TRAINER_FEMALE | 
#line 414
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 415
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 417
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 418
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 420
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 421
            .ability = ABILITY_STURDY,
#line 422
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 425
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_CAVE_FISHERMAN] =
    {
#line 426
        .trainerName = _("Alan"),
#line 427
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 428
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 430
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 431
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 433
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 434
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 436
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 437
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 439
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 440
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 442
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_BLACKBELT] =
    {
#line 443
        .trainerName = _("Lister"),
#line 444
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 445
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 447
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 448
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 450
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 452
            .ev = TRAINER_PARTY_EVS(244, 248, 0, 0, 0, 8),
#line 455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 451
            .ability = ABILITY_IRON_FIST,
#line 454
            .lvl = 20,
#line 453
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 455
                MOVE_SHADOW_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 460
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_HIKER] =
    {
#line 461
        .trainerName = _("Raymond"),
#line 462
        .trainerClass = TRAINER_CLASS_HIKER,
#line 463
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 465
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 466
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 468
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 470
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 469
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 471
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 472
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 474
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_PICNICKER] =
    {
#line 475
        .trainerName = _("Chloe"),
#line 476
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 477
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 478
F_TRAINER_FEMALE | 
#line 479
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 480
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 482
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 483
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 485
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 486
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 488
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_SCHOOL_KID] =
    {
#line 489
        .trainerName = _("Jerry"),
#line 490
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 491
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 493
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 494
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 496
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 497
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 499
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 500
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 502
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 503
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 505
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 506
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 508
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_HIKER] =
    {
#line 509
        .trainerName = _("Daniel"),
#line 510
        .trainerClass = TRAINER_CLASS_HIKER,
#line 511
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 513
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 514
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 516
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 517
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 519
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 520
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 522
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_BUG_CATCHER] =
    {
#line 523
        .trainerName = _("Charlie"),
#line 524
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 525
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 527
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 528
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 530
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 531
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 533
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 535
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 534
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 536
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 537
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 539
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_WOMAN] =
    {
#line 540
        .trainerName = _("Laurel"),
#line 541
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 542
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 543
F_TRAINER_FEMALE | 
#line 544
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 545
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 547
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 548
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 550
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 551
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 553
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_GIRL] =
    {
#line 554
        .trainerName = _("Grace"),
#line 555
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 556
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 557
F_TRAINER_FEMALE | 
#line 558
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 559
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 561
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 562
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 564
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 565
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 567
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_PICNICKER] =
    {
#line 568
        .trainerName = _("Riley"),
#line 569
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 570
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 571
F_TRAINER_FEMALE | 
#line 572
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 573
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 575
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 576
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 578
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 579
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 581
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_CAMPER] =
    {
#line 582
        .trainerName = _("Arthur"),
#line 583
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 584
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 586
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 587
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 589
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 590
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 592
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 593
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 595
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BLACK_BELT] =
    {
#line 596
        .trainerName = _("Mitchell"),
#line 597
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 598
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 600
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 601
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 603
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 604
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 606
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 607
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 609
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BATTLE_GIRL] =
    {
#line 610
        .trainerName = _("Leanna"),
#line 611
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 612
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 613
F_TRAINER_FEMALE | 
#line 614
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 615
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 617
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 618
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 620
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_PICNICKER] =
    {
#line 621
        .trainerName = _("Imogen"),
#line 622
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 623
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 624
F_TRAINER_FEMALE | 
#line 625
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 626
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 628
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 630
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 629
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 631
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 632
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 634
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 635
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 637
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_HIKER] =
    {
#line 638
        .trainerName = _("Aaron"),
#line 639
        .trainerClass = TRAINER_CLASS_HIKER,
#line 640
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 642
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 643
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 645
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 647
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 646
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 648
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 649
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 651
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 652
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 654
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 655
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 657
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 658
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 660
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 661
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 663
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT1] =
    {
#line 664
        .trainerName = _("Ricky"),
#line 665
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 666
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 668
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 669
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 671
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 672
            .ability = ABILITY_SIMPLE,
#line 674
            .lvl = 18,
#line 673
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_EMBER,
                MOVE_AMNESIA,
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 680
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 681
            .ability = ABILITY_FLAME_BODY,
#line 683
            .lvl = 18,
#line 682
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 684
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 688
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT2] =
    {
#line 689
        .trainerName = _("Bessa"),
#line 690
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 691
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 692
F_TRAINER_FEMALE | 
#line 693
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 694
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 696
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 697
            .ability = ABILITY_WEAK_ARMOR,
#line 699
            .lvl = 20,
#line 698
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 700
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 705
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_ENTRANCE_MAGMA_GRUNT] =
    {
#line 706
        .trainerName = _("Harry"),
#line 707
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 708
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 710
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 711
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 713
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 715
            .ability = ABILITY_SAND_STREAM,
#line 714
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 716
                MOVE_SAND_ATTACK,
                MOVE_YAWN,
                MOVE_DIG,
                MOVE_BITE,
            },
            },
        },
    },
#line 721
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_HIKER] =
    {
#line 722
        .trainerName = _("Broden"),
#line 723
        .trainerClass = TRAINER_CLASS_HIKER,
#line 724
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 726
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 727
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 729
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 730
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 732
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 733
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 735
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BATTLE_GIRL] =
    {
#line 736
        .trainerName = _("Angela"),
#line 737
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 738
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 739
F_TRAINER_FEMALE | 
#line 740
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 741
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 743
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 744
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 746
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 750
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 747
            .ability = ABILITY_HUGE_POWER,
#line 749
            .lvl = 20,
#line 748
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 750
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_TACKLE,
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 755
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BEAUTY] =
    {
#line 756
        .trainerName = _("Rachel"),
#line 757
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 758
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 759
F_TRAINER_FEMALE | 
#line 760
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 761
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 763
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 764
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 766
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 767
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 769
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 770
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 772
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 774
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 773
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 775
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MAGMA_GRUNT] =
    {
#line 776
        .trainerName = _("Joseph"),
#line 777
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 778
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 780
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 781
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 783
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 784
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 786
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 787
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 789
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_LASS] =
    {
#line 790
        .trainerName = _("Rebecca"),
#line 791
        .trainerClass = TRAINER_CLASS_LASS,
#line 792
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 793
F_TRAINER_FEMALE | 
#line 794
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 795
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 797
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 799
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 798
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 800
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 802
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 801
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 803
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 804
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 806
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MANIAC] =
    {
#line 807
        .trainerName = _("Blake"),
#line 808
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 809
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 811
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 812
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 814
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 815
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 817
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 818
            .ability = ABILITY_SAND_VEIL,
#line 819
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 820
                MOVE_ROCK_SLIDE,
                MOVE_STOMPING_TANTRUM,
                MOVE_SANDSTORM,
                MOVE_BITE,
            },
            },
        },
    },
#line 825
    [DIFFICULTY_NORMAL][GYM_LEADER_DOUGLAS] =
    {
#line 826
        .trainerName = _("Douglas"),
#line 827
        .trainerClass = TRAINER_CLASS_LEADER,
#line 828
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 830
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 831
        .items = { ITEM_SUPER_POTION, ITEM_FULL_HEAL },
#line 832
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 834
            .species = SPECIES_NACLI,
#line 834
            .gender = TRAINER_MON_MALE,
#line 837
            .ev = TRAINER_PARTY_EVS(236, 0, 36, 0, 0, 236),
#line 839
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 835
            .ability = ABILITY_STURDY,
#line 836
            .lvl = 19,
#line 838
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 839
                MOVE_IRON_DEFENSE,
                MOVE_STEALTH_ROCK,
                MOVE_BULLDOZE,
                MOVE_TACKLE,
            },
            },
            {
#line 844
            .species = SPECIES_CHINCHOU,
#line 844
            .gender = TRAINER_MON_FEMALE,
#line 847
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
#line 849
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 845
            .ability = ABILITY_WATER_ABSORB,
#line 846
            .lvl = 19,
#line 848
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 850
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_BUBBLE_BEAM,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 855
            .species = SPECIES_MAKUHITA,
#line 855
            .gender = TRAINER_MON_MALE,
#line 858
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
#line 860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 856
            .ability = ABILITY_GUTS,
#line 857
            .lvl = 20,
#line 859
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 860
                MOVE_BULK_UP,
                MOVE_COUNTER,
                MOVE_FIRE_PUNCH,
                MOVE_ARM_THRUST,
            },
            },
            {
#line 865
            .species = SPECIES_VIGOROTH,
#line 865
            .gender = TRAINER_MON_MALE,
#line 868
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 0),
#line 870
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 866
            .ability = ABILITY_VITAL_SPIRIT,
#line 867
            .lvl = 20,
#line 869
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 870
                MOVE_SLASH,
                MOVE_NIGHT_SLASH,
                MOVE_BULK_UP,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 875
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 875
            .heldItem = ITEM_WIDE_LENS,
#line 878
            .ev = TRAINER_PARTY_EVS(236, 236, 0, 36, 0, 0),
#line 880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 876
            .ability = ABILITY_LEVITATE,
#line 877
            .lvl = 22,
#line 879
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 880
                MOVE_COSMIC_POWER,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
                MOVE_MORNING_SUN,
            },
            },
        },
    },
#line 885
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_PICNICKER] =
    {
#line 886
        .trainerName = _("Madeline"),
#line 887
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 888
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 889
F_TRAINER_FEMALE | 
#line 890
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 891
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 893
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 895
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 894
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 896
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 897
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 899
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 900
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 902
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_COLLECTOR] =
    {
#line 903
        .trainerName = _("Johan"),
#line 904
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 905
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 907
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 908
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 910
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 911
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 913
            .species = SPECIES_RALTS,
#line 913
            .gender = TRAINER_MON_FEMALE,
#line 915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 914
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 915
                MOVE_CONFUSION,
                MOVE_DRAINING_KISS,
                MOVE_DOUBLE_TEAM,
            },
            },
        },
    },
#line 919
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_TWINS] =
    {
#line 920
        .trainerName = _("Pibi & Jay"),
#line 921
        .trainerClass = TRAINER_CLASS_TWINS,
#line 922
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 923
F_TRAINER_FEMALE | 
#line 924
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 925
        .doubleBattle = TRUE,
#line 926
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 928
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 930
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 929
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 930
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 935
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 938
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 936
            .ability = ABILITY_TECHNICIAN,
#line 937
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 938
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 942
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_BLACKBELT] =
    {
#line 943
        .trainerName = _("Soho"),
#line 944
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 945
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 947
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 948
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 950
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 951
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 953
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 954
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 956
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT] =
    {
#line 957
        .trainerName = _("Evan"),
#line 958
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 959
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 961
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 962
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 964
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 966
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 965
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 967
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 968
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 970
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_YOUNGSTER] =
    {
#line 971
        .trainerName = _("Taylor"),
#line 972
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 973
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 975
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 976
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 978
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 979
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 981
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 982
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 984
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 985
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 987
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_COUPLE] =
    {
#line 988
        .trainerName = _("Amy & Luke"),
#line 989
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 990
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 992
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 993
        .doubleBattle = TRUE,
#line 994
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 996
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 998
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 997
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 999
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1000
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1002
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1003
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1005
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1007
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1006
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1008
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERF] =
    {
#line 1009
        .trainerName = _("Leila"),
#line 1010
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1011
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 1012
F_TRAINER_FEMALE | 
#line 1013
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1014
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1016
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1017
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1019
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1020
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1022
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERM] =
    {
#line 1023
        .trainerName = _("Matt"),
#line 1024
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1025
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 1027
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1028
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1030
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1031
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1033
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1034
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1036
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1037
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1039
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_LADY] =
    {
#line 1040
        .trainerName = _("Cordelia"),
#line 1041
        .trainerClass = TRAINER_CLASS_LADY,
#line 1042
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1043
F_TRAINER_FEMALE | 
#line 1044
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1045
        .items = { ITEM_FULL_RESTORE },
#line 1046
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1048
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1049
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1051
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1052
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1054
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1055
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1057
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1058
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1060
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1061
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1063
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERM] =
    {
#line 1064
        .trainerName = _("Kyle"),
#line 1065
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1066
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1068
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1069
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1071
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1072
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1074
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1075
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1077
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERF] =
    {
#line 1078
        .trainerName = _("Kerry"),
#line 1079
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1080
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1081
F_TRAINER_FEMALE | 
#line 1082
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1083
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1085
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1087
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1086
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1088
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1089
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1091
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_FISHERMAN] =
    {
#line 1092
        .trainerName = _("Leonard"),
#line 1093
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1094
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1096
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1097
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1099
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1100
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1102
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1103
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1105
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1106
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1108
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_EXPERT] =
    {
#line 1109
        .trainerName = _("Gergino"),
#line 1110
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1111
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1113
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1114
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1116
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1117
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1119
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1120
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1122
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_HIKER] =
    {
#line 1123
        .trainerName = _("Rictor"),
#line 1124
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1125
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1127
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1128
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1130
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1131
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1133
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1134
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1136
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_YOUNGSTER] =
    {
#line 1137
        .trainerName = _("Henry"),
#line 1138
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1139
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1141
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1142
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1144
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1145
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1147
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1148
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1150
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1151
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1153
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_HIKER] =
    {
#line 1154
        .trainerName = _("Hugh"),
#line 1155
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1156
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1158
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1159
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1161
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1162
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1164
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1165
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1167
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1168
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1170
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_PICNICKER] =
    {
#line 1171
        .trainerName = _("Rayleigh"),
#line 1172
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1173
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1174
F_TRAINER_FEMALE | 
#line 1175
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1176
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1178
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1179
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1181
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1182
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1184
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_GUITARIST] =
    {
#line 1185
        .trainerName = _("Kurt"),
#line 1186
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 1187
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 1189
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1190
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1192
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1193
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1195
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1196
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1198
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BUG_CATCHER] =
    {
#line 1199
        .trainerName = _("Bryan"),
#line 1200
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1201
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1203
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1204
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1206
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1207
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1209
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1210
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1212
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1213
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1215
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1216
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1218
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_FISHERMAN] =
    {
#line 1219
        .trainerName = _("Oscar"),
#line 1220
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1221
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1223
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1224
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1226
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1227
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1229
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BLACKBELT] =
    {
#line 1230
        .trainerName = _("Ian"),
#line 1231
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 1232
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 1234
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1235
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1237
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1239
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1238
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1240
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1241
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1243
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BATTLEGIRL] =
    {
#line 1244
        .trainerName = _("Elise"),
#line 1245
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1246
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 1247
F_TRAINER_FEMALE | 
#line 1248
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1249
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1251
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1252
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1254
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1255
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1257
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTF] =
    {
#line 1258
        .trainerName = _("Deborah"),
#line 1259
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1260
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1261
F_TRAINER_FEMALE | 
#line 1262
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1263
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1265
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1269
            .ev = TRAINER_PARTY_EVS(228, 0, 236, 12, 32, 0),
#line 1271
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1266
            .ability = ABILITY_HEALER,
#line 1267
            .lvl = 24,
#line 1270
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1268
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1272
                MOVE_SOFT_BOILED,
                MOVE_HEAL_PULSE,
                MOVE_ICY_WIND,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 1277
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTM] =
    {
#line 1278
        .trainerName = _("Dale"),
#line 1279
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1280
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1282
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1283
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1285
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1289
            .ev = TRAINER_PARTY_EVS(248, 248, 0, 4, 0, 0),
#line 1291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1286
            .ability = ABILITY_THICK_FAT,
#line 1287
            .lvl = 24,
#line 1290
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1288
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1291
                MOVE_HEAVY_SLAM,
                MOVE_CRUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1296
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT1] =
    {
#line 1297
        .trainerName = _("Jeremy"),
#line 1298
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1299
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1301
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1302
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1304
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1305
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1307
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1308
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1310
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT2] =
    {
#line 1311
        .trainerName = _("Charles"),
#line 1312
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1313
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1315
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1316
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1318
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1319
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1321
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1322
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1324
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT3] =
    {
#line 1325
        .trainerName = _("Liam"),
#line 1326
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1327
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1329
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1330
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1332
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1333
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1335
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1336
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1338
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_ADMIN] =
    {
#line 1339
        .trainerName = _("Sayla"),
#line 1340
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 1341
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 1342
F_TRAINER_FEMALE | 
#line 1343
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1344
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1346
            .species = SPECIES_CLAMPERL,
#line 1346
            .gender = TRAINER_MON_FEMALE,
#line 1348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1347
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1348
                MOVE_WHIRLPOOL,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 1351
            .species = SPECIES_FRILLISH,
#line 1351
            .gender = TRAINER_MON_FEMALE,
#line 1354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1353
            .ability = ABILITY_CURSED_BODY,
#line 1352
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1354
                MOVE_ABSORB,
                MOVE_POISON_STING,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1358
            .species = SPECIES_SEEL,
#line 1358
            .gender = TRAINER_MON_FEMALE,
#line 1360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1359
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1360
                MOVE_HEADBUTT,
                MOVE_ICY_WIND,
                MOVE_ICE_SHARD,
                MOVE_LICK,
            },
            },
        },
    },
#line 1365
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_MAGMA_GRUNT] =
    {
#line 1366
        .trainerName = _("Malcolm"),
#line 1367
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1368
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1370
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1371
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1373
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1375
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1374
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1376
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1377
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1379
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1380
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1382
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1383
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1385
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT1] =
    {
#line 1386
        .trainerName = _("Fred"),
#line 1387
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1388
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1390
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1391
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1393
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1394
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1396
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT2] =
    {
#line 1397
        .trainerName = _("Stacy"),
#line 1398
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1399
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1400
F_TRAINER_FEMALE | 
#line 1401
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1402
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1404
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1405
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1407
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1409
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1408
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1410
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT3] =
    {
#line 1411
        .trainerName = _("Alec"),
#line 1412
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1413
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1415
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1416
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1418
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1419
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1421
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1422
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1424
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT4] =
    {
#line 1425
        .trainerName = _("Harold"),
#line 1426
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1427
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1429
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1430
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1432
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1433
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1435
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1436
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1438
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1439
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1441
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT5] =
    {
#line 1442
        .trainerName = _("Ricky"),
#line 1443
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1444
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1446
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1447
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1449
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1450
            .ability = ABILITY_SIMPLE,
#line 1452
            .lvl = 21,
#line 1451
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1453
                MOVE_HEAT_WAVE,
                MOVE_TACKLE,
                MOVE_STOCKPILE,
            },
            },
            {
#line 1457
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1458
            .ability = ABILITY_FLAME_BODY,
#line 1460
            .lvl = 21,
#line 1459
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1461
                MOVE_FLAMETHROWER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1465
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT6] =
    {
#line 1466
        .trainerName = _("Bessa"),
#line 1467
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1468
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1469
F_TRAINER_FEMALE | 
#line 1470
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1471
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1473
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1474
            .ability = ABILITY_WEAK_ARMOR,
#line 1476
            .lvl = 24,
#line 1475
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1477
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 1482
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT7] =
    {
#line 1483
        .trainerName = _("Carla"),
#line 1484
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1485
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1486
F_TRAINER_FEMALE | 
#line 1487
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1488
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1490
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1491
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1493
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1495
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1494
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1495
                MOVE_WILL_O_WISP,
                MOVE_EMBER,
                MOVE_QUICK_ATTACK,
                MOVE_DISABLE,
            },
            },
            {
#line 1500
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1501
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1503
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_ADMIN] =
    {
#line 1504
        .trainerName = _("Terrance"),
#line 1505
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 1506
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 1508
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1509
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1511
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1513
            .ability = ABILITY_DROUGHT,
#line 1512
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1514
                MOVE_PROTECT,
                MOVE_LAVA_PLUME,
                MOVE_SMOKESCREEN,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1519
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1520
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1521
                MOVE_ROCK_SLIDE,
                MOVE_FLAMETHROWER,
                MOVE_YAWN,
            },
            },
            {
#line 1525
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1527
            .ability = ABILITY_FLAME_BODY,
#line 1526
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1528
                MOVE_CONFUSE_RAY,
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_SMOG,
            },
            },
        },
    },
#line 1533
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_PICNICKER] =
    {
#line 1534
        .trainerName = _("Nadia"),
#line 1535
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1536
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1537
F_TRAINER_FEMALE | 
#line 1538
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1539
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1541
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1543
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1542
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1544
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1545
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1547
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BUG_CATCHER] =
    {
#line 1548
        .trainerName = _("Barney"),
#line 1549
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1550
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1552
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1553
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1555
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1556
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1558
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1559
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1561
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_PSYCHIC] =
    {
#line 1562
        .trainerName = _("EDWARD"),
#line 1563
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 1564
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 1566
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1567
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1569
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1570
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1572
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1573
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1575
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BUG_MANIAC] =
    {
#line 1576
        .trainerName = _("Edwardo"),
#line 1577
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 1578
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 1580
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1581
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1583
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1584
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1586
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_NINJA_BOY] =
    {
#line 1587
        .trainerName = _("Yorushi"),
#line 1588
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 1589
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 1591
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1592
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1594
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1595
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1597
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1598
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1600
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BIRD_KEEPER] =
    {
#line 1601
        .trainerName = _("Albero"),
#line 1602
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1603
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1605
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1606
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1608
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1610
            .ability = ABILITY_DRIZZLE,
#line 1609
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1612
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1613
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1615
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1616
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1618
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BEAUTY] =
    {
#line 1619
        .trainerName = _("Rosanne"),
#line 1620
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1621
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1622
F_TRAINER_FEMALE | 
#line 1623
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1624
        .doubleBattle = FALSE,
#line 1625
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1627
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1630
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1628
            .ability = ABILITY_HUGE_POWER,
#line 1629
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1631
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1632
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1635
    [DIFFICULTY_NORMAL][RIVAL_EVELYNN_1] =
    {
#line 1636
        .trainerName = _("Evelynn"),
#line 1637
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1638
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 1639
F_TRAINER_FEMALE | 
#line 1640
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1641
        .items = { ITEM_SUPER_POTION },
#line 1642
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1644
            .species = SPECIES_ROSELIA,
#line 1644
            .gender = TRAINER_MON_FEMALE,
#line 1647
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 1649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1646
            .ability = ABILITY_POISON_POINT,
#line 1645
            .lvl = 16,
#line 1648
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1649
                MOVE_MAGICAL_LEAF,
                MOVE_POISON_STING,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1654
            .species = SPECIES_VENIPEDE,
#line 1654
            .gender = TRAINER_MON_FEMALE,
#line 1657
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1656
            .ability = ABILITY_SPEED_BOOST,
#line 1655
            .lvl = 16,
#line 1658
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1659
                MOVE_ROLLOUT,
                MOVE_POISON_TAIL,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
            },
            },
            {
#line 1664
            .species = SPECIES_MAWILE,
#line 1664
            .gender = TRAINER_MON_FEMALE,
#line 1667
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1666
            .ability = ABILITY_INTIMIDATE,
#line 1665
            .lvl = 18,
#line 1668
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1669
                MOVE_BITE,
                MOVE_SUCKER_PUNCH,
                MOVE_FAIRY_WIND,
            },
            },
        },
    },
