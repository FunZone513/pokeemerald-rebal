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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 164
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 165
            .ability = ABILITY_STURDY,
#line 166
            .lvl = 12,
#line 167
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 168
                MOVE_STEALTH_ROCK,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 172
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 173
            .lvl = 12,
#line 174
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 175
                MOVE_WATER_PULSE,
                MOVE_AQUA_JET,
                MOVE_FLAIL,
            },
            },
            {
#line 179
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 180
            .ability = ABILITY_PRANKSTER,
#line 181
            .lvl = 13,
#line 182
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 183
                MOVE_FAKE_OUT,
                MOVE_SHADOW_SNEAK,
                MOVE_WILL_O_WISP,
                MOVE_SCRATCH,
            },
            },
            {
#line 188
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 188
            .heldItem = ITEM_SITRUS_BERRY,
#line 192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 189
            .ability = ABILITY_GLUTTONY,
#line 190
            .lvl = 15,
#line 191
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 192
                MOVE_LICK,
                MOVE_TACKLE,
                MOVE_RECYCLE,
                MOVE_CURSE,
            },
            },
        },
    },
#line 197
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER1] =
    {
#line 198
        .trainerName = _("Carlos"),
#line 199
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 200
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 202
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 203
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 205
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 206
            .ability = ABILITY_INTIMIDATE,
#line 207
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 209
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 210
            .ability = ABILITY_HUSTLE,
#line 211
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 212
                MOVE_FURY_SWIPES,
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 216
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 217
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 219
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER2] =
    {
#line 220
        .trainerName = _("Cindy"),
#line 221
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 222
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 223
F_TRAINER_FEMALE | 
#line 224
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 225
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 227
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 228
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 229
                MOVE_TACKLE,
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 234
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 235
            .ability = ABILITY_STATIC,
#line 236
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 237
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 242
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER3] =
    {
#line 243
        .trainerName = _("David"),
#line 244
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 245
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 247
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 248
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 250
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 251
            .ability = ABILITY_WEAK_ARMOR,
#line 252
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 253
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 257
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 258
            .ability = ABILITY_WEAK_ARMOR,
#line 259
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 260
                MOVE_FURY_CUTTER,
                MOVE_ROCK_SLIDE,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 264
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER4] =
    {
#line 265
        .trainerName = _("Samuel"),
#line 266
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 267
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 269
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 270
        .doubleBattle = TRUE,
#line 271
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 273
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 276
            .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 252, 0),
#line 278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 274
            .ability = ABILITY_COMPOUND_EYES,
#line 275
            .lvl = 13,
#line 277
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 278
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_GUST,
                MOVE_BUG_BITE,
            },
            },
            {
#line 283
            .species = SPECIES_BEAUTIFLY,
#line 283
            .gender = TRAINER_MON_FEMALE,
#line 286
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 284
            .ability = ABILITY_SWARM,
#line 285
            .lvl = 13,
#line 287
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 288
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 293
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_BUG_CATCHER] =
    {
#line 294
        .trainerName = _("Bert"),
#line 295
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 296
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 298
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 299
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 301
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 302
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 304
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 305
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 306
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 311
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 312
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 314
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_GIRL] =
    {
#line 315
        .trainerName = _("Lola"),
#line 316
        .trainerClass = TRAINER_CLASS_LASS,
#line 317
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 318
F_TRAINER_FEMALE | 
#line 319
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 320
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 322
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 323
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 325
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 326
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 328
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_BOY] =
    {
#line 329
        .trainerName = _("Mark"),
#line 330
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 331
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 333
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 334
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 336
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 337
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 339
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_GIRL] =
    {
#line 340
        .trainerName = _("Susie"),
#line 341
        .trainerClass = TRAINER_CLASS_LASS,
#line 342
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 343
F_TRAINER_FEMALE | 
#line 344
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 345
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 347
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 348
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 350
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 351
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 353
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_LITTLEGIRL] =
    {
#line 354
        .trainerName = _("Mary"),
#line 355
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 356
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 357
F_TRAINER_FEMALE | 
#line 358
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 359
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 361
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 362
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 363
                MOVE_WATER_GUN,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 366
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_FISHERMAN] =
    {
#line 367
        .trainerName = _("Jeff"),
#line 368
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 369
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 371
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 372
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 374
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 375
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 377
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 378
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 380
    [DIFFICULTY_NORMAL][TRAINER_ROUTE4_SCHOOLKID] =
    {
#line 381
        .trainerName = _("Timothy"),
#line 382
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 383
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 385
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 386
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 388
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 389
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 391
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 392
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 394
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_PICNICKER] =
    {
#line 395
        .trainerName = _("Brittany"),
#line 396
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 397
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 398
F_TRAINER_FEMALE | 
#line 399
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 400
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 402
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 403
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 405
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 406
            .ability = ABILITY_STURDY,
#line 407
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 410
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_CAVE_FISHERMAN] =
    {
#line 411
        .trainerName = _("Alan"),
#line 412
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 413
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 415
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 416
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 418
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 419
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 421
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 422
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 424
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 425
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 427
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_BLACKBELT] =
    {
#line 428
        .trainerName = _("Lister"),
#line 429
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 430
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 432
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 433
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 435
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 439
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 436
            .ability = ABILITY_IRON_FIST,
#line 438
            .lvl = 22,
#line 437
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 439
                MOVE_SHADOW_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 444
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_HIKER] =
    {
#line 445
        .trainerName = _("Raymond"),
#line 446
        .trainerClass = TRAINER_CLASS_HIKER,
#line 447
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 449
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 450
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 452
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 453
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 455
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 457
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 456
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 458
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_PICNICKER] =
    {
#line 459
        .trainerName = _("Chloe"),
#line 460
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 461
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 462
F_TRAINER_FEMALE | 
#line 463
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 464
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 466
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 467
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 469
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 471
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 470
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 472
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_SCHOOL_KID] =
    {
#line 473
        .trainerName = _("Jerry"),
#line 474
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 475
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 477
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 478
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 480
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 481
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 483
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 484
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 486
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 487
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 489
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 490
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 492
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_HIKER] =
    {
#line 493
        .trainerName = _("Daniel"),
#line 494
        .trainerClass = TRAINER_CLASS_HIKER,
#line 495
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 497
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 498
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 500
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 501
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 503
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 504
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 506
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_BUG_CATCHER] =
    {
#line 507
        .trainerName = _("Charlie"),
#line 508
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 509
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 511
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 512
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 514
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 515
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 517
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 519
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 518
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 520
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 521
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 523
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_WOMAN] =
    {
#line 524
        .trainerName = _("Laurel"),
#line 525
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 526
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 527
F_TRAINER_FEMALE | 
#line 528
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 529
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 531
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 532
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 534
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 535
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 537
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_GIRL] =
    {
#line 538
        .trainerName = _("Grace"),
#line 539
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 540
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 541
F_TRAINER_FEMALE | 
#line 542
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 543
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 545
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 546
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 548
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 549
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 551
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_PICNICKER] =
    {
#line 552
        .trainerName = _("Riley"),
#line 553
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 554
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 555
F_TRAINER_FEMALE | 
#line 556
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 557
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 559
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 560
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 562
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 563
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 565
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_CAMPER] =
    {
#line 566
        .trainerName = _("Arthur"),
#line 567
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 568
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 570
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 571
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 573
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 575
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 574
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 576
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 577
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 579
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BLACK_BELT] =
    {
#line 580
        .trainerName = _("Mitchell"),
#line 581
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 582
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 584
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 585
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 587
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 588
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 590
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 591
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 593
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BATTLE_GIRL] =
    {
#line 594
        .trainerName = _("Leanna"),
#line 595
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 596
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 597
F_TRAINER_FEMALE | 
#line 598
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 599
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 601
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 602
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 604
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_PICNICKER] =
    {
#line 605
        .trainerName = _("Imogen"),
#line 606
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 607
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 608
F_TRAINER_FEMALE | 
#line 609
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 610
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 612
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 613
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 615
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 616
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 618
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 619
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 621
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_HIKER] =
    {
#line 622
        .trainerName = _("Aaron"),
#line 623
        .trainerClass = TRAINER_CLASS_HIKER,
#line 624
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 626
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 627
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 629
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 631
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 630
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 632
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 633
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 635
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 636
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 638
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 639
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 641
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 642
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 644
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 645
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 647
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT1] =
    {
#line 648
        .trainerName = _("Ricky"),
#line 649
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 650
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 652
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 653
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 655
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 656
            .ability = ABILITY_SIMPLE,
#line 658
            .lvl = 18,
#line 657
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 659
                MOVE_EMBER,
                MOVE_AMNESIA,
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 664
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 665
            .ability = ABILITY_FLAME_BODY,
#line 667
            .lvl = 18,
#line 666
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 668
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 672
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT2] =
    {
#line 673
        .trainerName = _("Bessa"),
#line 674
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 675
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 676
F_TRAINER_FEMALE | 
#line 677
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 678
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 680
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 681
            .ability = ABILITY_WEAK_ARMOR,
#line 683
            .lvl = 20,
#line 682
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 684
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 689
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_ENTRANCE_MAGMA_GRUNT] =
    {
#line 690
        .trainerName = _("Harry"),
#line 691
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 692
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 694
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 695
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 697
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 699
            .ability = ABILITY_SAND_STREAM,
#line 698
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 700
                MOVE_SAND_ATTACK,
                MOVE_YAWN,
                MOVE_DIG,
                MOVE_BITE,
            },
            },
        },
    },
#line 705
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_HIKER] =
    {
#line 706
        .trainerName = _("Broden"),
#line 707
        .trainerClass = TRAINER_CLASS_HIKER,
#line 708
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 710
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 711
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 713
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 714
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 716
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 718
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 717
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 719
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BATTLE_GIRL] =
    {
#line 720
        .trainerName = _("Angela"),
#line 721
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 722
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 723
F_TRAINER_FEMALE | 
#line 724
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 725
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 727
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 728
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 730
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 731
            .ability = ABILITY_HUGE_POWER,
#line 733
            .lvl = 20,
#line 732
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 734
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_TACKLE,
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 739
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BEAUTY] =
    {
#line 740
        .trainerName = _("Rachel"),
#line 741
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 742
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 743
F_TRAINER_FEMALE | 
#line 744
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 745
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 747
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 748
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 750
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 751
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 753
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 754
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 756
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 758
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 757
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 759
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MAGMA_GRUNT] =
    {
#line 760
        .trainerName = _("Joseph"),
#line 761
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 762
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 764
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 765
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 767
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 768
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 770
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 771
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 773
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_LASS] =
    {
#line 774
        .trainerName = _("Rebecca"),
#line 775
        .trainerClass = TRAINER_CLASS_LASS,
#line 776
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 777
F_TRAINER_FEMALE | 
#line 778
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 779
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 781
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 782
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 784
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 785
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 787
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 788
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 790
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MANIAC] =
    {
#line 791
        .trainerName = _("Blake"),
#line 792
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 793
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 795
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 796
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 798
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 799
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 801
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 802
            .ability = ABILITY_SAND_VEIL,
#line 803
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 804
                MOVE_ROCK_SLIDE,
                MOVE_STOMPING_TANTRUM,
                MOVE_SANDSTORM,
                MOVE_BITE,
            },
            },
        },
    },
#line 809
    [DIFFICULTY_NORMAL][GYM_LEADER_DOUGLAS] =
    {
#line 810
        .trainerName = _("Douglas"),
#line 811
        .trainerClass = TRAINER_CLASS_LEADER,
#line 812
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 814
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 815
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 816
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 818
            .species = SPECIES_MAKUHITA,
#line 818
            .gender = TRAINER_MON_MALE,
#line 823
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 819
            .ability = ABILITY_GUTS,
#line 820
            .lvl = 19,
#line 822
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 821
            .teraType = TYPE_FIGHTING,
            .moves = {
#line 823
                MOVE_BULK_UP,
                MOVE_COUNTER,
                MOVE_FIRE_PUNCH,
                MOVE_ARM_THRUST,
            },
            },
            {
#line 828
            .species = SPECIES_CHINCHOU,
#line 828
            .gender = TRAINER_MON_FEMALE,
#line 833
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 829
            .ability = ABILITY_WATER_ABSORB,
#line 830
            .lvl = 19,
#line 832
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 831
            .teraType = TYPE_WATER,
            .moves = {
#line 834
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 838
            .species = SPECIES_VIGOROTH,
#line 838
            .gender = TRAINER_MON_MALE,
#line 843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 839
            .ability = ABILITY_VITAL_SPIRIT,
#line 840
            .lvl = 19,
#line 842
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 841
            .teraType = TYPE_NORMAL,
            .moves = {
#line 843
                MOVE_SLASH,
                MOVE_LOW_KICK,
                MOVE_BULK_UP,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 848
            .species = SPECIES_ONIX,
#line 848
            .gender = TRAINER_MON_MALE,
#line 853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 849
            .ability = ABILITY_WEAK_ARMOR,
#line 850
            .lvl = 21,
#line 852
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 851
            .teraType = TYPE_ROCK,
            .moves = {
#line 853
                MOVE_CURSE,
                MOVE_SMACK_DOWN,
                MOVE_DRAGON_BREATH,
                MOVE_BULLDOZE,
            },
            },
            {
#line 858
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 858
            .heldItem = ITEM_WIDE_LENS,
#line 863
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 859
            .ability = ABILITY_LEVITATE,
#line 860
            .lvl = 22,
#line 862
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 861
            .teraType = TYPE_ROCK,
            .moves = {
#line 863
                MOVE_COSMIC_POWER,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
                MOVE_MORNING_SUN,
            },
            },
        },
    },
#line 868
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_PICNICKER] =
    {
#line 869
        .trainerName = _("Madeline"),
#line 870
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 871
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 872
F_TRAINER_FEMALE | 
#line 873
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 874
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 876
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 878
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 877
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 879
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 880
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 882
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 883
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 885
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_COLLECTOR] =
    {
#line 886
        .trainerName = _("Johan"),
#line 887
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 888
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 890
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 891
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 893
            .species = SPECIES_NINCADA,
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
            .species = SPECIES_RALTS,
#line 896
            .gender = TRAINER_MON_FEMALE,
#line 898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 897
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 898
                MOVE_CONFUSION,
                MOVE_DRAINING_KISS,
                MOVE_DOUBLE_TEAM,
            },
            },
        },
    },
#line 902
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_TWINS] =
    {
#line 903
        .trainerName = _("Pibi & Jay"),
#line 904
        .trainerClass = TRAINER_CLASS_TWINS,
#line 905
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 906
F_TRAINER_FEMALE | 
#line 907
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 908
        .doubleBattle = TRUE,
#line 909
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 911
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 912
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 913
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 918
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 919
            .ability = ABILITY_TECHNICIAN,
#line 920
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 921
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 925
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_BLACKBELT] =
    {
#line 926
        .trainerName = _("Soho"),
#line 927
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 928
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 930
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 931
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 933
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 935
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 934
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 936
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 938
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 937
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 939
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT] =
    {
#line 940
        .trainerName = _("Evan"),
#line 941
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 942
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 944
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 945
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 947
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 948
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 950
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 951
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 953
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_YOUNGSTER] =
    {
#line 954
        .trainerName = _("Taylor"),
#line 955
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 956
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 958
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 959
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 961
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 962
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 964
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 966
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 965
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 967
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 968
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 970
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_COUPLE] =
    {
#line 971
        .trainerName = _("Amy & Luke"),
#line 972
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 973
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 975
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 976
        .doubleBattle = TRUE,
#line 977
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 979
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 980
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 982
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 983
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 985
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 986
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 988
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 990
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 989
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 991
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERF] =
    {
#line 992
        .trainerName = _("Leila"),
#line 993
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 994
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 995
F_TRAINER_FEMALE | 
#line 996
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 997
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 999
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1000
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1002
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1003
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1005
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERM] =
    {
#line 1006
        .trainerName = _("Matt"),
#line 1007
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1008
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 1010
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1011
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1013
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1014
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1016
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1017
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1019
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1020
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1022
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_LADY] =
    {
#line 1023
        .trainerName = _("Cordelia"),
#line 1024
        .trainerClass = TRAINER_CLASS_LADY,
#line 1025
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1026
F_TRAINER_FEMALE | 
#line 1027
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1028
        .items = { ITEM_FULL_RESTORE },
#line 1029
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1031
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1032
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1034
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1035
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1037
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1039
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1038
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1040
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1041
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1043
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1044
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1046
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERM] =
    {
#line 1047
        .trainerName = _("Kyle"),
#line 1048
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1049
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1051
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1052
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1054
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1055
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1057
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1058
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1060
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERF] =
    {
#line 1061
        .trainerName = _("Kerry"),
#line 1062
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1063
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1064
F_TRAINER_FEMALE | 
#line 1065
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1066
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1068
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1070
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1069
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1071
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1072
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1074
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_FISHERMAN] =
    {
#line 1075
        .trainerName = _("Leonard"),
#line 1076
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1077
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1079
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1080
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1082
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1083
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1085
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1087
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1086
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1088
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1089
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1091
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_EXPERT] =
    {
#line 1092
        .trainerName = _("Gergino"),
#line 1093
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1094
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1096
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1097
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1099
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1100
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1102
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1103
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1105
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_HIKER] =
    {
#line 1106
        .trainerName = _("Rictor"),
#line 1107
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1108
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1110
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1111
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1113
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1114
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1116
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1117
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1119
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_YOUNGSTER] =
    {
#line 1120
        .trainerName = _("Henry"),
#line 1121
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1122
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1124
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1125
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1127
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1128
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1130
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1131
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1133
            .species = SPECIES_MIGHTYENA,
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
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_HIKER] =
    {
#line 1137
        .trainerName = _("Hugh"),
#line 1138
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1139
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1141
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1142
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1144
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1145
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1147
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1148
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1150
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1151
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1153
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_PICNICKER] =
    {
#line 1154
        .trainerName = _("Rayleigh"),
#line 1155
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1156
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1157
F_TRAINER_FEMALE | 
#line 1158
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1159
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1161
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1162
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1164
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1165
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1167
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_GUITARIST] =
    {
#line 1168
        .trainerName = _("Kurt"),
#line 1169
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 1170
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 1172
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1173
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1175
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1176
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1178
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1179
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1181
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BUG_CATCHER] =
    {
#line 1182
        .trainerName = _("Bryan"),
#line 1183
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1184
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1186
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1187
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1189
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1190
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1192
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1193
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1195
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1196
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1198
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1199
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1201
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_FISHERMAN] =
    {
#line 1202
        .trainerName = _("Oscar"),
#line 1203
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1204
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1206
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1207
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1209
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1210
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1212
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BLACKBELT] =
    {
#line 1213
        .trainerName = _("Ian"),
#line 1214
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 1215
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 1217
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1218
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1220
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1222
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1221
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1223
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1224
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1226
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BATTLEGIRL] =
    {
#line 1227
        .trainerName = _("Elise"),
#line 1228
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1229
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 1230
F_TRAINER_FEMALE | 
#line 1231
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1232
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1234
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1235
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1237
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1239
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1238
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1240
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTF] =
    {
#line 1241
        .trainerName = _("Deborah"),
#line 1242
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1243
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1244
F_TRAINER_FEMALE | 
#line 1245
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1246
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1248
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1253
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1249
            .ability = ABILITY_HEALER,
#line 1250
            .lvl = 25,
#line 1252
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1251
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1254
                MOVE_SOFT_BOILED,
                MOVE_HEAL_PULSE,
                MOVE_ICY_WIND,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 1259
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTM] =
    {
#line 1260
        .trainerName = _("Dale"),
#line 1261
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1262
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1264
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1265
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1267
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1268
            .ability = ABILITY_THICK_FAT,
#line 1269
            .lvl = 25,
#line 1271
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1270
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1272
                MOVE_HEAVY_SLAM,
                MOVE_CRUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1277
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT1] =
    {
#line 1278
        .trainerName = _("Jeremy"),
#line 1279
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1280
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1282
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1283
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1285
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1286
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1288
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1289
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1291
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT2] =
    {
#line 1292
        .trainerName = _("Charles"),
#line 1293
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1294
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1296
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1297
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1299
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1300
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1302
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1303
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1305
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT3] =
    {
#line 1306
        .trainerName = _("Liam"),
#line 1307
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1308
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1310
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1311
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1313
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1314
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1316
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1317
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1319
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_ADMIN] =
    {
#line 1320
        .trainerName = _("Sayla"),
#line 1321
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 1322
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 1323
F_TRAINER_FEMALE | 
#line 1324
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1325
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1327
            .species = SPECIES_CLAMPERL,
#line 1327
            .gender = TRAINER_MON_FEMALE,
#line 1329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1328
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1329
                MOVE_WHIRLPOOL,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 1332
            .species = SPECIES_FRILLISH,
#line 1332
            .gender = TRAINER_MON_FEMALE,
#line 1335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1334
            .ability = ABILITY_CURSED_BODY,
#line 1333
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1335
                MOVE_ABSORB,
                MOVE_POISON_STING,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1339
            .species = SPECIES_SEEL,
#line 1339
            .gender = TRAINER_MON_FEMALE,
#line 1341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1340
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1341
                MOVE_HEADBUTT,
                MOVE_ICY_WIND,
                MOVE_ICE_SHARD,
                MOVE_LICK,
            },
            },
        },
    },
#line 1346
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_MAGMA_GRUNT] =
    {
#line 1347
        .trainerName = _("Malcolm"),
#line 1348
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1349
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1351
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1352
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1354
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1355
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1357
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1358
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1360
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1361
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1363
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1364
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1366
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT1] =
    {
#line 1367
        .trainerName = _("Fred"),
#line 1368
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1369
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1371
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1372
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1374
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1375
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1377
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT2] =
    {
#line 1378
        .trainerName = _("Stacy"),
#line 1379
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1380
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1381
F_TRAINER_FEMALE | 
#line 1382
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1383
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1385
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1386
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1388
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1389
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1391
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT3] =
    {
#line 1392
        .trainerName = _("Alec"),
#line 1393
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1394
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1396
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1397
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1399
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1400
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1402
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1403
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1405
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT4] =
    {
#line 1406
        .trainerName = _("Harold"),
#line 1407
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1408
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1410
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1411
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1413
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1415
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1414
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1416
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1417
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1419
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1420
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1422
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT5] =
    {
#line 1423
        .trainerName = _("Ricky"),
#line 1424
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1425
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1427
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1428
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1430
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1431
            .ability = ABILITY_SIMPLE,
#line 1433
            .lvl = 21,
#line 1432
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1434
                MOVE_HEAT_WAVE,
                MOVE_TACKLE,
                MOVE_STOCKPILE,
            },
            },
            {
#line 1438
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1439
            .ability = ABILITY_FLAME_BODY,
#line 1441
            .lvl = 24,
#line 1440
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1442
                MOVE_FLAMETHROWER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1446
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT6] =
    {
#line 1447
        .trainerName = _("Bessa"),
#line 1448
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1449
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1450
F_TRAINER_FEMALE | 
#line 1451
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1452
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1454
            .species = SPECIES_HIPPOPOTAS,
#line 1454
            .gender = TRAINER_MON_FEMALE,
#line 1456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1455
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1456
                MOVE_CRUNCH,
                MOVE_SAND_TOMB,
                MOVE_YAWN,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 1461
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1462
            .ability = ABILITY_WEAK_ARMOR,
#line 1464
            .lvl = 24,
#line 1463
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1465
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 1472
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT7] =
    {
#line 1473
        .trainerName = _("Carla"),
#line 1474
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1475
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1476
F_TRAINER_FEMALE | 
#line 1477
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1478
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1480
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1481
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1483
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1484
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1485
                MOVE_WILL_O_WISP,
                MOVE_EMBER,
                MOVE_QUICK_ATTACK,
                MOVE_DISABLE,
            },
            },
            {
#line 1490
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1491
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1493
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_ADMIN] =
    {
#line 1494
        .trainerName = _("Terrance"),
#line 1495
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 1496
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 1498
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1499
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1501
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1503
            .ability = ABILITY_DROUGHT,
#line 1502
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1504
                MOVE_PROTECT,
                MOVE_LAVA_PLUME,
                MOVE_SMOKESCREEN,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1509
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1510
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1511
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 1515
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1517
            .ability = ABILITY_FLAME_BODY,
#line 1516
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1518
                MOVE_CONFUSE_RAY,
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_SMOG,
            },
            },
        },
    },
#line 1523
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_PICNICKER] =
    {
#line 1524
        .trainerName = _("Nadia"),
#line 1525
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1526
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1527
F_TRAINER_FEMALE | 
#line 1528
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1529
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1531
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1532
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1534
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1535
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1537
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BUG_CATCHER] =
    {
#line 1538
        .trainerName = _("Barney"),
#line 1539
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1540
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1542
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1543
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1545
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1546
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1548
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1549
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1551
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_PSYCHIC] =
    {
#line 1552
        .trainerName = _("Edward"),
#line 1553
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 1554
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 1556
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1557
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1559
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1560
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1562
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1563
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1565
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BUG_MANIAC] =
    {
#line 1566
        .trainerName = _("Edwardo"),
#line 1567
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 1568
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 1570
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1571
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1573
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1575
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1574
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1576
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_NINJA_BOY] =
    {
#line 1577
        .trainerName = _("Yorushi"),
#line 1578
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 1579
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 1581
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1582
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1584
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1585
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1587
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1588
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1590
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BIRD_KEEPER] =
    {
#line 1591
        .trainerName = _("Albero"),
#line 1592
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1593
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1595
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1596
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1598
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1600
            .ability = ABILITY_DRIZZLE,
#line 1599
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1602
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1603
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1605
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1606
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1608
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BEAUTY] =
    {
#line 1609
        .trainerName = _("Rosanne"),
#line 1610
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1611
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1612
F_TRAINER_FEMALE | 
#line 1613
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1614
        .doubleBattle = FALSE,
#line 1615
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1617
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1618
            .ability = ABILITY_HUGE_POWER,
#line 1619
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1621
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1622
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1624
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_AQUA_GRUNT] =
    {
#line 1625
        .trainerName = _("Vincent"),
#line 1626
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1627
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1629
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1630
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1632
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1633
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1635
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1636
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1638
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1639
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1641
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_MAGMA_GRUNT] =
    {
#line 1642
        .trainerName = _("Ryan"),
#line 1643
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1644
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1646
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1647
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1649
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1650
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1652
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1653
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1655
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_PASS_FISHERMAN] =
    {
#line 1656
        .trainerName = _("Fitzgerald"),
#line 1657
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1658
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1660
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1661
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1663
            .species = SPECIES_HUNTAIL,
#line 1663
            .gender = TRAINER_MON_MALE,
#line 1665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1664
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1666
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_PASS_PSYCHIC] =
    {
#line 1667
        .trainerName = _("Aspin"),
#line 1668
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 1669
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 1671
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1672
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1674
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1675
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1677
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1679
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1678
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1680
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_PASS_HEXMANIAC] =
    {
#line 1681
        .trainerName = _("Leah"),
#line 1682
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1683
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1684
F_TRAINER_FEMALE | 
#line 1685
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1686
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1688
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1689
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1691
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1692
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1694
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1695
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1697
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_PASS_RUNNER] =
    {
#line 1698
        .trainerName = _("Brett"),
#line 1699
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1700
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 1702
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1703
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1705
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1706
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1708
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1710
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1709
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1713
    [DIFFICULTY_NORMAL][RIVAL_EVELYNN_1] =
    {
#line 1714
        .trainerName = _("Evelynn"),
#line 1715
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1716
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 1717
F_TRAINER_FEMALE | 
#line 1718
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1719
        .items = { ITEM_SUPER_POTION },
#line 1720
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1722
            .species = SPECIES_ROSELIA,
#line 1722
            .gender = TRAINER_MON_FEMALE,
#line 1725
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 1727
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1724
            .ability = ABILITY_POISON_POINT,
#line 1723
            .lvl = 16,
#line 1726
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1727
                MOVE_MAGICAL_LEAF,
                MOVE_POISON_STING,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1732
            .species = SPECIES_VENIPEDE,
#line 1732
            .gender = TRAINER_MON_FEMALE,
#line 1735
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1734
            .ability = ABILITY_SPEED_BOOST,
#line 1733
            .lvl = 16,
#line 1736
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1737
                MOVE_ROLLOUT,
                MOVE_POISON_TAIL,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
            },
            },
            {
#line 1742
            .species = SPECIES_MAWILE,
#line 1742
            .gender = TRAINER_MON_FEMALE,
#line 1745
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1744
            .ability = ABILITY_INTIMIDATE,
#line 1743
            .lvl = 18,
#line 1746
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1747
                MOVE_BITE,
                MOVE_SUCKER_PUNCH,
                MOVE_FAIRY_WIND,
            },
            },
        },
    },
