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
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_AQUA_GRUNT1] =
    {
#line 648
        .trainerName = _("Albert"),
#line 649
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 650
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 652
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 653
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 655
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 656
            .ability = ABILITY_KEEN_EYE,
#line 658
            .lvl = 19,
#line 657
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 659
                MOVE_WATER_PULSE,
                MOVE_AIR_CUTTER,
                MOVE_GROWL,
            },
            },
            {
#line 663
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 664
            .ability = ABILITY_SHELL_ARMOR,
#line 666
            .lvl = 19,
#line 665
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 667
                MOVE_CRABHAMMER,
                MOVE_METAL_CLAW,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 671
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_AQUA_GRUNT2] =
    {
#line 672
        .trainerName = _("Susan"),
#line 673
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 674
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 675
F_TRAINER_FEMALE | 
#line 676
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 677
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 679
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 680
            .ability = ABILITY_SNIPER,
#line 682
            .lvl = 21,
#line 681
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 683
                MOVE_TWISTER,
                MOVE_BUBBLE,
                MOVE_DISABLE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 688
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_ENTRANCE_AQUA_GRUNT] =
    {
#line 689
        .trainerName = _("Harry"),
#line 690
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 691
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 693
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 694
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 696
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 698
            .ability = ABILITY_SHELL_ARMOR,
#line 697
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 699
                MOVE_CRABHAMMER,
                MOVE_AQUA_JET,
                MOVE_TAUNT,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 704
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_HIKER] =
    {
#line 705
        .trainerName = _("Broden"),
#line 706
        .trainerClass = TRAINER_CLASS_HIKER,
#line 707
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 709
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 710
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 712
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 713
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 715
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 716
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 718
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BATTLE_GIRL] =
    {
#line 719
        .trainerName = _("Angela"),
#line 720
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 721
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 722
F_TRAINER_FEMALE | 
#line 723
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 724
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 726
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 727
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 729
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 730
            .ability = ABILITY_HUGE_POWER,
#line 732
            .lvl = 20,
#line 731
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 733
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_TACKLE,
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 738
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BEAUTY] =
    {
#line 739
        .trainerName = _("Rachel"),
#line 740
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 741
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 742
F_TRAINER_FEMALE | 
#line 743
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 744
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 746
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 747
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 749
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 751
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 750
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 752
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 753
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 755
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 756
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 758
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_AQUA_GRUNT] =
    {
#line 759
        .trainerName = _("Joseph"),
#line 760
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 761
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 763
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 764
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 766
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 767
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 769
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 770
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 772
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_LASS] =
    {
#line 773
        .trainerName = _("Rebecca"),
#line 774
        .trainerClass = TRAINER_CLASS_LASS,
#line 775
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 776
F_TRAINER_FEMALE | 
#line 777
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 778
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 780
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 782
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 781
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 783
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 784
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 786
            .species = SPECIES_NOCTOWL,
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
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MANIAC] =
    {
#line 790
        .trainerName = _("Blake"),
#line 791
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 792
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 794
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 795
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 797
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 799
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 798
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 800
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 801
            .ability = ABILITY_SAND_VEIL,
#line 802
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 803
                MOVE_ROCK_SLIDE,
                MOVE_STOMPING_TANTRUM,
                MOVE_SANDSTORM,
                MOVE_BITE,
            },
            },
        },
    },
#line 808
    [DIFFICULTY_NORMAL][GYM_LEADER_DOUGLAS] =
    {
#line 809
        .trainerName = _("Douglas"),
#line 810
        .trainerClass = TRAINER_CLASS_LEADER,
#line 811
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 813
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 814
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 815
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 817
            .species = SPECIES_MAKUHITA,
#line 817
            .gender = TRAINER_MON_MALE,
#line 822
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 818
            .ability = ABILITY_GUTS,
#line 819
            .lvl = 19,
#line 821
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 820
            .teraType = TYPE_FIGHTING,
            .moves = {
#line 822
                MOVE_BULK_UP,
                MOVE_COUNTER,
                MOVE_FIRE_PUNCH,
                MOVE_ARM_THRUST,
            },
            },
            {
#line 827
            .species = SPECIES_CHINCHOU,
#line 827
            .gender = TRAINER_MON_FEMALE,
#line 832
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 828
            .ability = ABILITY_WATER_ABSORB,
#line 829
            .lvl = 19,
#line 831
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 830
            .teraType = TYPE_WATER,
            .moves = {
#line 833
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 837
            .species = SPECIES_VIGOROTH,
#line 837
            .gender = TRAINER_MON_MALE,
#line 842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 838
            .ability = ABILITY_VITAL_SPIRIT,
#line 839
            .lvl = 19,
#line 841
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 840
            .teraType = TYPE_NORMAL,
            .moves = {
#line 842
                MOVE_SLASH,
                MOVE_LOW_KICK,
                MOVE_BULK_UP,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 847
            .species = SPECIES_ONIX,
#line 847
            .gender = TRAINER_MON_MALE,
#line 852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 848
            .ability = ABILITY_WEAK_ARMOR,
#line 849
            .lvl = 21,
#line 851
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 850
            .teraType = TYPE_ROCK,
            .moves = {
#line 852
                MOVE_CURSE,
                MOVE_SMACK_DOWN,
                MOVE_DRAGON_BREATH,
                MOVE_BULLDOZE,
            },
            },
            {
#line 857
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 857
            .heldItem = ITEM_WIDE_LENS,
#line 861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 858
            .ability = ABILITY_LEVITATE,
#line 859
            .lvl = 22,
#line 860
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 861
                MOVE_COSMIC_POWER,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
                MOVE_MORNING_SUN,
            },
            },
        },
    },
#line 866
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_PICNICKER] =
    {
#line 867
        .trainerName = _("Madeline"),
#line 868
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 869
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 870
F_TRAINER_FEMALE | 
#line 871
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 872
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 874
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 875
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 877
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 878
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 880
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 881
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 883
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_COLLECTOR] =
    {
#line 884
        .trainerName = _("Johan"),
#line 885
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 886
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 888
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 889
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 891
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 892
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 894
            .species = SPECIES_RALTS,
#line 894
            .gender = TRAINER_MON_FEMALE,
#line 896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 895
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 896
                MOVE_CONFUSION,
                MOVE_DRAINING_KISS,
                MOVE_DOUBLE_TEAM,
            },
            },
        },
    },
#line 900
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_TWINS] =
    {
#line 901
        .trainerName = _("Pibi & Jay"),
#line 902
        .trainerClass = TRAINER_CLASS_TWINS,
#line 903
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 904
F_TRAINER_FEMALE | 
#line 905
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 906
        .doubleBattle = TRUE,
#line 907
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 909
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 910
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 911
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 916
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 919
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 917
            .ability = ABILITY_TECHNICIAN,
#line 918
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 919
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 923
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_BLACKBELT] =
    {
#line 924
        .trainerName = _("Soho"),
#line 925
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 926
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 928
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 929
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 931
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 932
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 934
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 935
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 937
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_POKECENTRE_AQUA_GRUNT] =
    {
#line 938
        .trainerName = _("Evan"),
#line 939
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 940
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 942
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 943
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 945
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 946
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 948
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 950
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 949
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 951
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_YOUNGSTER] =
    {
#line 952
        .trainerName = _("Taylor"),
#line 953
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 954
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 956
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 957
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 959
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 960
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 962
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 963
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 965
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 967
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 966
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 968
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_COUPLE] =
    {
#line 969
        .trainerName = _("Amy & Luke"),
#line 970
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 971
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 973
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 974
        .doubleBattle = TRUE,
#line 975
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 977
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 978
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 980
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 981
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 983
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 984
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 986
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 987
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 989
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERF] =
    {
#line 990
        .trainerName = _("Leila"),
#line 991
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 992
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 993
F_TRAINER_FEMALE | 
#line 994
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 995
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 997
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 998
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1000
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1001
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1003
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERM] =
    {
#line 1004
        .trainerName = _("Matt"),
#line 1005
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1006
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 1008
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1009
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1011
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1012
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1014
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1016
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1015
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1017
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1018
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1020
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_LADY] =
    {
#line 1021
        .trainerName = _("Cordelia"),
#line 1022
        .trainerClass = TRAINER_CLASS_LADY,
#line 1023
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1024
F_TRAINER_FEMALE | 
#line 1025
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1026
        .items = { ITEM_FULL_RESTORE },
#line 1027
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1029
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1030
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1032
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1033
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1035
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1036
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1038
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1040
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1039
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1041
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1042
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1044
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERM] =
    {
#line 1045
        .trainerName = _("Kyle"),
#line 1046
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1047
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1049
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1050
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1052
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1053
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1055
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1056
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1058
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERF] =
    {
#line 1059
        .trainerName = _("Kerry"),
#line 1060
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1061
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1062
F_TRAINER_FEMALE | 
#line 1063
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1064
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1066
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1067
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1069
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1071
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1070
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1072
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_FISHERMAN] =
    {
#line 1073
        .trainerName = _("Leonard"),
#line 1074
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1075
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1077
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1078
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1080
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1081
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1083
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1084
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1086
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1087
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1089
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_EXPERT] =
    {
#line 1090
        .trainerName = _("Gergino"),
#line 1091
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1092
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1094
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1095
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1097
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1098
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1100
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1101
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1103
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_HIKER] =
    {
#line 1104
        .trainerName = _("Rictor"),
#line 1105
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1106
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1108
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1109
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1111
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1112
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1114
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1115
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1117
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_YOUNGSTER] =
    {
#line 1118
        .trainerName = _("Henry"),
#line 1119
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1120
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1122
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1123
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1125
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1126
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1128
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1129
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1131
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1132
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1134
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_HIKER] =
    {
#line 1135
        .trainerName = _("Hugh"),
#line 1136
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1137
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1139
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1140
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1142
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1143
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1145
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1146
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1148
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1149
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1151
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_PICNICKER] =
    {
#line 1152
        .trainerName = _("Rayleigh"),
#line 1153
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1154
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1155
F_TRAINER_FEMALE | 
#line 1156
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1157
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1159
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1160
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1162
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1163
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1165
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_GUITARIST] =
    {
#line 1166
        .trainerName = _("Kurt"),
#line 1167
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 1168
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 1170
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1171
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1173
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1174
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1176
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1177
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1179
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BUG_CATCHER] =
    {
#line 1180
        .trainerName = _("Bryan"),
#line 1181
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1182
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1184
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1185
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1187
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1188
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1190
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1191
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1193
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1194
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1196
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1197
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1199
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_FISHERMAN] =
    {
#line 1200
        .trainerName = _("Oscar"),
#line 1201
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1202
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1204
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1205
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1207
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1208
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1210
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BLACKBELT] =
    {
#line 1211
        .trainerName = _("Ian"),
#line 1212
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 1213
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 1215
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1216
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1218
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1219
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1221
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1222
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1224
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BATTLEGIRL] =
    {
#line 1225
        .trainerName = _("Elise"),
#line 1226
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1227
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 1228
F_TRAINER_FEMALE | 
#line 1229
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1230
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1232
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1233
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1235
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1236
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1238
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTF] =
    {
#line 1239
        .trainerName = _("Deborah"),
#line 1240
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1241
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1242
F_TRAINER_FEMALE | 
#line 1243
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1244
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1246
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1251
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1247
            .ability = ABILITY_HEALER,
#line 1248
            .lvl = 26,
#line 1250
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1249
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1252
                MOVE_SOFT_BOILED,
                MOVE_HEAL_PULSE,
                MOVE_ICY_WIND,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 1257
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTM] =
    {
#line 1258
        .trainerName = _("Dale"),
#line 1259
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1260
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1262
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1263
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1265
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1266
            .ability = ABILITY_THICK_FAT,
#line 1267
            .lvl = 26,
#line 1269
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1268
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1270
                MOVE_HEAVY_SLAM,
                MOVE_CRUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1275
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT1] =
    {
#line 1276
        .trainerName = _("Jeremy"),
#line 1277
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1278
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1280
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1281
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1283
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1284
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1286
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1287
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1289
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT2] =
    {
#line 1290
        .trainerName = _("Charles"),
#line 1291
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1292
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1294
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1295
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1297
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1298
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1300
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1301
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1303
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT3] =
    {
#line 1304
        .trainerName = _("Liam"),
#line 1305
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1306
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1308
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1309
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1311
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1312
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1314
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1315
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1317
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_ADMIN] =
    {
#line 1318
        .trainerName = _("Sayla"),
#line 1319
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 1320
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 1321
F_TRAINER_FEMALE | 
#line 1322
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1323
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1325
            .species = SPECIES_CLAMPERL,
#line 1325
            .gender = TRAINER_MON_FEMALE,
#line 1327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1326
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1327
                MOVE_WHIRLPOOL,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 1330
            .species = SPECIES_FRILLISH,
#line 1330
            .gender = TRAINER_MON_FEMALE,
#line 1333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1332
            .ability = ABILITY_CURSED_BODY,
#line 1331
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1333
                MOVE_ABSORB,
                MOVE_POISON_STING,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1337
            .species = SPECIES_SEEL,
#line 1337
            .gender = TRAINER_MON_FEMALE,
#line 1339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1338
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1339
                MOVE_HEADBUTT,
                MOVE_ICY_WIND,
                MOVE_ICE_SHARD,
                MOVE_LICK,
            },
            },
        },
    },
#line 1344
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_MAGMA_GRUNT] =
    {
#line 1345
        .trainerName = _("Malcolm"),
#line 1346
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1347
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1349
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1350
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1352
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1353
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1355
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1356
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1358
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1359
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1361
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1362
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1364
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT1] =
    {
#line 1365
        .trainerName = _("Fred"),
#line 1366
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1367
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1369
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1370
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1372
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1373
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1375
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT2] =
    {
#line 1376
        .trainerName = _("Stacy"),
#line 1377
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1378
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1379
F_TRAINER_FEMALE | 
#line 1380
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1381
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1383
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1384
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1386
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1387
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1389
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT3] =
    {
#line 1390
        .trainerName = _("Alec"),
#line 1391
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1392
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1394
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1395
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1397
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1398
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1400
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1401
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1403
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT4] =
    {
#line 1404
        .trainerName = _("Harold"),
#line 1405
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1406
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1408
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1409
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1411
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1412
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1414
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1415
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1417
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1418
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1420
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT5] =
    {
#line 1421
        .trainerName = _("Ricky"),
#line 1422
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1423
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1425
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1426
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1428
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1429
            .ability = ABILITY_SIMPLE,
#line 1431
            .lvl = 21,
#line 1430
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1432
                MOVE_HEAT_WAVE,
                MOVE_TACKLE,
                MOVE_STOCKPILE,
            },
            },
            {
#line 1436
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1437
            .ability = ABILITY_FLAME_BODY,
#line 1439
            .lvl = 24,
#line 1438
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1440
                MOVE_FLAMETHROWER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1444
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT6] =
    {
#line 1445
        .trainerName = _("Bessa"),
#line 1446
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1447
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1448
F_TRAINER_FEMALE | 
#line 1449
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1450
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1452
            .species = SPECIES_HIPPOPOTAS,
#line 1452
            .gender = TRAINER_MON_FEMALE,
#line 1454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1453
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1454
                MOVE_CRUNCH,
                MOVE_SAND_TOMB,
                MOVE_YAWN,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 1459
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1460
            .ability = ABILITY_WEAK_ARMOR,
#line 1462
            .lvl = 24,
#line 1461
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1463
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 1468
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT7] =
    {
#line 1469
        .trainerName = _("Carla"),
#line 1470
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1471
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1472
F_TRAINER_FEMALE | 
#line 1473
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1474
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1476
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1478
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1477
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1479
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1480
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1481
                MOVE_WILL_O_WISP,
                MOVE_EMBER,
                MOVE_QUICK_ATTACK,
                MOVE_DISABLE,
            },
            },
            {
#line 1486
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1487
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1489
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_ADMIN] =
    {
#line 1490
        .trainerName = _("Terrance"),
#line 1491
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 1492
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 1494
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1495
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1497
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1499
            .ability = ABILITY_DROUGHT,
#line 1498
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1500
                MOVE_PROTECT,
                MOVE_LAVA_PLUME,
                MOVE_SMOKESCREEN,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1505
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1506
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1507
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 1511
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1513
            .ability = ABILITY_FLAME_BODY,
#line 1512
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1514
                MOVE_CONFUSE_RAY,
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_SMOG,
            },
            },
        },
    },
#line 1519
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_PICNICKER] =
    {
#line 1520
        .trainerName = _("Nadia"),
#line 1521
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1522
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1523
F_TRAINER_FEMALE | 
#line 1524
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1525
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1527
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1529
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1528
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1530
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1531
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1533
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BUG_CATCHER] =
    {
#line 1534
        .trainerName = _("Barney"),
#line 1535
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1536
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1538
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1539
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1541
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1543
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1542
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1544
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1545
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1547
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_PSYCHIC] =
    {
#line 1548
        .trainerName = _("Edward"),
#line 1549
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 1550
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 1552
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1553
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1555
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1556
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1558
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1559
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1561
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BUG_MANIAC] =
    {
#line 1562
        .trainerName = _("Edwardo"),
#line 1563
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 1564
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 1566
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1567
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1569
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1570
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1572
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_NINJA_BOY] =
    {
#line 1573
        .trainerName = _("Yorushi"),
#line 1574
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 1575
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 1577
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1578
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1580
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1581
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1583
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1584
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1586
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BIRD_KEEPER] =
    {
#line 1587
        .trainerName = _("Albero"),
#line 1588
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1589
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1591
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1592
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1594
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1596
            .ability = ABILITY_DRIZZLE,
#line 1595
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1598
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1599
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1601
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1602
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1604
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BEAUTY] =
    {
#line 1605
        .trainerName = _("Rosanne"),
#line 1606
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1607
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1608
F_TRAINER_FEMALE | 
#line 1609
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1610
        .doubleBattle = FALSE,
#line 1611
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1613
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1614
            .ability = ABILITY_HUGE_POWER,
#line 1615
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1617
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1618
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1620
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_AQUA_GRUNT] =
    {
#line 1621
        .trainerName = _("Vincent"),
#line 1622
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1623
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1625
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1626
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1628
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1630
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1629
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1631
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1632
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1634
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1635
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1637
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_MAGMA_GRUNT] =
    {
#line 1638
        .trainerName = _("Ryan"),
#line 1639
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1640
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1642
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1643
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1645
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1647
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1646
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1648
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1649
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1651
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_PASS_FISHERMAN] =
    {
#line 1652
        .trainerName = _("Fitzgerald"),
#line 1653
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1654
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1656
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1657
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1659
            .species = SPECIES_HUNTAIL,
#line 1659
            .gender = TRAINER_MON_MALE,
#line 1661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1660
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1662
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_PASS_PSYCHIC] =
    {
#line 1663
        .trainerName = _("Aspin"),
#line 1664
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 1665
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 1667
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1668
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1670
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1671
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1673
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1674
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1676
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_PASS_HEXMANIAC] =
    {
#line 1677
        .trainerName = _("Leah"),
#line 1678
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1679
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1680
F_TRAINER_FEMALE | 
#line 1681
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1682
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1684
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1686
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1685
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1687
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1688
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1690
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1691
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1693
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_PASS_RUNNER] =
    {
#line 1694
        .trainerName = _("Brett"),
#line 1695
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1696
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 1698
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1699
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1701
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1703
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1702
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1704
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1705
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1707
    [DIFFICULTY_NORMAL][TRAINER_ROUTE11_BUG_CATCHER] =
    {
#line 1708
        .trainerName = _("Stewart"),
#line 1709
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1710
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1712
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1713
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1715
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1716
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1718
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1719
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1721
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1722
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1724
    [DIFFICULTY_NORMAL][TRAINER_ROUTE11_BATTLE_GIRL] =
    {
#line 1725
        .trainerName = _("Leanna"),
#line 1726
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1727
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 1728
F_TRAINER_FEMALE | 
#line 1729
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1730
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1732
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1733
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1735
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1736
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1738
    [DIFFICULTY_NORMAL][TRAINER_ROUTE11_HIKER] =
    {
#line 1739
        .trainerName = _("Louis"),
#line 1740
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1741
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1743
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1744
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1746
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1747
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1749
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1751
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1750
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1752
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1753
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1755
    [DIFFICULTY_NORMAL][TRAINER_HEATSWELL_PATH_BLACKBELT] =
    {
#line 1756
        .trainerName = _("Argo"),
#line 1757
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 1758
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 1760
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1761
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1763
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1764
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1766
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1767
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1769
    [DIFFICULTY_NORMAL][TRAINER_HEATSWELL_PATH_KINDLER] =
    {
#line 1770
        .trainerName = _("Dan"),
#line 1771
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 1772
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 1774
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1775
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1777
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1778
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1780
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1782
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1781
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1783
            .species = SPECIES_FLETCHINDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1784
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1786
    [DIFFICULTY_NORMAL][TRAINER_HEATSWELL_PATH_BIKE_KID] =
    {
#line 1787
        .trainerName = _("Connor"),
#line 1788
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1789
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1791
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1792
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1794
            .species = SPECIES_CINCCINO,
#line 1794
            .gender = TRAINER_MON_FEMALE,
#line 1794
            .heldItem = ITEM_LUM_BERRY,
#line 1797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1796
            .ability = ABILITY_TECHNICIAN,
#line 1795
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1797
                MOVE_TAIL_SLAP,
                MOVE_BULLET_SEED,
                MOVE_REST,
                MOVE_SNORE,
            },
            },
        },
    },
#line 1802
    [DIFFICULTY_NORMAL][GYM_LEADER_LIFRADE] =
    {
#line 1803
        .trainerName = _("Lifrade"),
#line 1804
        .trainerClass = TRAINER_CLASS_LEADER,
#line 1805
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 1807
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1808
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 1809
        .doubleBattle = TRUE,
#line 1810
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1812
            .species = SPECIES_MAGCARGO,
#line 1812
            .gender = TRAINER_MON_MALE,
#line 1816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1813
            .ability = ABILITY_DROUGHT,
#line 1814
            .lvl = 28,
#line 1815
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1816
                MOVE_YAWN,
                MOVE_POWER_GEM,
                MOVE_HEAT_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 1821
            .species = SPECIES_TAUROS,
#line 1821
            .gender = TRAINER_MON_MALE,
#line 1825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1822
            .ability = ABILITY_INTIMIDATE,
#line 1823
            .lvl = 28,
#line 1824
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1825
                MOVE_TRAILBLAZE,
                MOVE_BODY_SLAM,
                MOVE_MEGAHORN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 1830
            .species = SPECIES_WHIMSICOTT,
#line 1830
            .gender = TRAINER_MON_FEMALE,
#line 1835
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1831
            .ability = ABILITY_PRANKSTER,
#line 1832
            .lvl = 28,
#line 1834
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1833
            .teraType = TYPE_GRASS,
            .moves = {
#line 1836
                MOVE_SUNNY_DAY,
                MOVE_DAZZLING_GLEAM,
                MOVE_STUN_SPORE,
                MOVE_SWIFT,
            },
            },
            {
#line 1841
            .species = SPECIES_LEAFEON,
#line 1841
            .gender = TRAINER_MON_FEMALE,
#line 1845
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1842
            .ability = ABILITY_CHLOROPHYLL,
#line 1843
            .lvl = 29,
#line 1844
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1845
                MOVE_RAZOR_LEAF,
                MOVE_LEAF_BLADE,
                MOVE_FIRE_FANG,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1850
            .species = SPECIES_TREVENANT,
#line 1850
            .gender = TRAINER_MON_MALE,
#line 1850
            .heldItem = ITEM_CUSTAP_BERRY,
#line 1854
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1851
            .ability = ABILITY_HARVEST,
#line 1852
            .lvl = 30,
#line 1853
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1854
                MOVE_HORN_LEECH,
                MOVE_WOOD_HAMMER,
                MOVE_WILL_O_WISP,
                MOVE_SHADOW_CLAW,
            },
            },
        },
    },
#line 1859
    [DIFFICULTY_NORMAL][TRAINER_PORT_EDAPH_GYM_CAMPER] =
    {
#line 1860
        .trainerName = _("Darcy"),
#line 1861
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1862
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1864
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1865
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1867
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1867
            .heldItem = ITEM_OCCA_BERRY,
#line 1869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1868
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1869
                MOVE_SPORE,
                MOVE_X_SCISSOR,
                MOVE_SLASH,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 1874
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1875
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1876
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_BODY_SLAM,
                MOVE_MILK_DRINK,
            },
            },
        },
    },
#line 1881
    [DIFFICULTY_NORMAL][TRAINER_PORT_EDAPH_GYM_SWIMMER] =
    {
#line 1882
        .trainerName = _("Declan"),
#line 1883
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1884
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1886
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1887
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1889
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1890
            .ability = ABILITY_OWN_TEMPO,
#line 1891
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1892
                MOVE_KNOCK_OFF,
                MOVE_FAKE_OUT,
                MOVE_LEECH_SEED,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 1897
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1897
            .heldItem = ITEM_CHESTO_BERRY,
#line 1900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1898
            .ability = ABILITY_OWN_TEMPO,
#line 1899
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1900
                MOVE_METRONOME,
                MOVE_SURF,
                MOVE_GIGA_DRAIN,
                MOVE_REST,
            },
            },
        },
    },
#line 1905
    [DIFFICULTY_NORMAL][TRAINER_PORT_EDAPH_GYM_WOMAN] =
    {
#line 1906
        .trainerName = _("Aloe"),
#line 1907
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 1908
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 1909
F_TRAINER_FEMALE | 
#line 1910
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1911
        .doubleBattle = TRUE,
#line 1912
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1914
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1915
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1916
                MOVE_TAILWIND,
                MOVE_COTTON_SPORE,
                MOVE_GIGA_DRAIN,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 1921
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1922
            .ability = ABILITY_CUTE_CHARM,
#line 1923
            .lvl = 27,
#line 1924
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1925
                MOVE_SOLAR_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 1930
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1931
            .ability = ABILITY_DROUGHT,
#line 1932
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1933
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_EXTRASENSORY,
                MOVE_NASTY_PLOT,
            },
            },
        },
    },
#line 1938
    [DIFFICULTY_NORMAL][TRAINER_PORT_EDAPH_GYM_BLACKBELT] =
    {
#line 1939
        .trainerName = _("Babbs"),
#line 1940
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 1941
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 1943
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1944
        .doubleBattle = TRUE,
#line 1945
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1947
            .species = SPECIES_PANCHAM,
#line 1947
            .gender = TRAINER_MON_MALE,
#line 1951
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1948
            .ability = ABILITY_SCRAPPY,
#line 1949
            .lvl = 28,
#line 1950
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1951
                MOVE_LEER,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_PUNCH,
                MOVE_ARM_THRUST,
            },
            },
            {
#line 1956
            .species = SPECIES_BRELOOM,
#line 1956
            .gender = TRAINER_MON_MALE,
#line 1960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1957
            .ability = ABILITY_TECHNICIAN,
#line 1958
            .lvl = 28,
#line 1959
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1960
                MOVE_BULLET_SEED,
                MOVE_MACH_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_THUNDER_PUNCH,
            },
            },
        },
    },
#line 1965
    [DIFFICULTY_NORMAL][TRAINER_ROUTE12_BUG_MANIAC] =
    {
#line 1966
        .trainerName = _("Sven"),
#line 1967
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 1968
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 1970
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1971
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1973
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1975
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1974
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1976
    [DIFFICULTY_NORMAL][TRAINER_ROUTE12_HIKER] =
    {
#line 1977
        .trainerName = _("Daryl"),
#line 1978
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1979
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1981
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1982
        .doubleBattle = FALSE,
#line 1983
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1985
            .species = SPECIES_NACLSTACK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1986
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1988
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1990
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1989
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1991
    [DIFFICULTY_NORMAL][TRAINER_ROUTE12_NINJA_BOY] =
    {
#line 1992
        .trainerName = _("Akira"),
#line 1993
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 1994
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 1996
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1997
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1999
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2000
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2002
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2003
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2005
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2007
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2006
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2008
    [DIFFICULTY_NORMAL][TRAINER_ROUTE12_BREEDER] =
    {
#line 2009
        .trainerName = _("Kaasa"),
#line 2010
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 2011
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 2012
F_TRAINER_FEMALE | 
#line 2013
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2014
        .doubleBattle = TRUE,
#line 2015
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2017
            .species = SPECIES_SLAKOTH,
#line 2017
            .gender = TRAINER_MON_MALE,
#line 2019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2018
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2020
            .species = SPECIES_BLITZLE,
#line 2020
            .gender = TRAINER_MON_MALE,
#line 2022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2021
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2023
            .species = SPECIES_DEERLING,
#line 2023
            .gender = TRAINER_MON_MALE,
#line 2025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2024
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2026
            .species = SPECIES_KIRLIA,
#line 2026
            .gender = TRAINER_MON_MALE,
#line 2028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2027
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2029
            .species = SPECIES_POOCHYENA,
#line 2029
            .gender = TRAINER_MON_MALE,
#line 2031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2030
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2032
            .species = SPECIES_TYROGUE,
#line 2032
            .gender = TRAINER_MON_MALE,
#line 2034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2033
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2035
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_MAGMA_GRUNT1] =
    {
#line 2036
        .trainerName = _("Ricky"),
#line 2037
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2038
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 2040
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2041
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2043
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2047
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2044
            .ability = ABILITY_FLAME_BODY,
#line 2046
            .lvl = 16,
#line 2045
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2047
                MOVE_FLAMETHROWER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
            {
#line 2051
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2055
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2052
            .ability = ABILITY_SIMPLE,
#line 2054
            .lvl = 16,
#line 2053
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2055
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 2059
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_MAGMA_GRUNT2] =
    {
#line 2060
        .trainerName = _("Bessa"),
#line 2061
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2062
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 2063
F_TRAINER_FEMALE | 
#line 2064
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2065
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2067
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2071
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2068
            .ability = ABILITY_WEAK_ARMOR,
#line 2070
            .lvl = 18,
#line 2069
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2071
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 2075
    [DIFFICULTY_NORMAL][TRAINER_MT_SCORCH_OUTER_PICNICKER] =
    {
#line 2076
        .trainerName = _("Yasmin"),
#line 2077
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2078
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2079
F_TRAINER_FEMALE | 
#line 2080
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2081
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2083
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2084
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2086
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2087
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2089
    [DIFFICULTY_NORMAL][TRAINER_MT_SCORCH_OUTER_HIKER] =
    {
#line 2090
        .trainerName = _("Warren"),
#line 2091
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2092
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2094
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2095
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2097
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2098
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2100
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2101
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2103
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2104
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2106
    [DIFFICULTY_NORMAL][TRAINER_MT_SCORCH_OUTER_KINDLER] =
    {
#line 2107
        .trainerName = _("Corey"),
#line 2108
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2109
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2111
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2112
        .aiFlags = AI_FLAG_KABOOM,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2114
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2115
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2116
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 2118
    [DIFFICULTY_NORMAL][TRAINER_MT_SCORCH_INSIDE_KINDLER] =
    {
#line 2119
        .trainerName = _("Frank"),
#line 2120
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2121
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2123
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2124
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2126
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2127
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2129
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2130
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2132
    [DIFFICULTY_NORMAL][TRAINER_MT_SCORCH_INSIDE_KINDLER_2] =
    {
#line 2133
        .trainerName = _("Shaun"),
#line 2134
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2135
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2137
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2138
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2140
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2141
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2143
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2144
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2146
    [DIFFICULTY_NORMAL][TRAINER_MT_SCORCH_INSIDE_HIKER] =
    {
#line 2147
        .trainerName = _("Warren"),
#line 2148
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2149
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2151
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2152
        .doubleBattle = FALSE,
#line 2153
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2155
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2156
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2158
    [DIFFICULTY_NORMAL][TRAINER_MT_SCORCH_INSIDE_COOL_TRAINER] =
    {
#line 2159
        .trainerName = _("Jackson"),
#line 2160
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2161
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 2163
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2164
        .items = { ITEM_HYPER_POTION },
#line 2165
        .doubleBattle = FALSE,
#line 2166
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2168
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2169
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2171
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2172
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2174
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2175
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2177
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2178
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2180
    [DIFFICULTY_NORMAL][TRAINER_MT_SCORCH_INSIDE_PSYCHIC] =
    {
#line 2181
        .trainerName = _("Nendin"),
#line 2182
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2183
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2185
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2186
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2188
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2189
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2191
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2192
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2194
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2195
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2197
    [DIFFICULTY_NORMAL][TRAINER_MT_SCORCH_ENTRANCE_RICH_BOY] =
    {
#line 2198
        .trainerName = _("Zackary"),
#line 2199
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2200
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2202
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2203
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2205
            .species = SPECIES_FLAAFFY,
#line 2205
            .gender = TRAINER_MON_FEMALE,
#line 2207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2206
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2210
    [DIFFICULTY_NORMAL][RIVAL_EVELYNN_1] =
    {
#line 2211
        .trainerName = _("Evelynn"),
#line 2212
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2213
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 2214
F_TRAINER_FEMALE | 
#line 2215
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2216
        .items = { ITEM_SUPER_POTION },
#line 2217
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2219
            .species = SPECIES_ROSELIA,
#line 2219
            .gender = TRAINER_MON_FEMALE,
#line 2222
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 2224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2221
            .ability = ABILITY_POISON_POINT,
#line 2220
            .lvl = 16,
#line 2223
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2224
                MOVE_MAGICAL_LEAF,
                MOVE_POISON_STING,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 2229
            .species = SPECIES_VENIPEDE,
#line 2229
            .gender = TRAINER_MON_FEMALE,
#line 2232
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 2234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2231
            .ability = ABILITY_SPEED_BOOST,
#line 2230
            .lvl = 16,
#line 2233
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2234
                MOVE_ROLLOUT,
                MOVE_POISON_TAIL,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
            },
            },
            {
#line 2239
            .species = SPECIES_MAWILE,
#line 2239
            .gender = TRAINER_MON_FEMALE,
#line 2242
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2241
            .ability = ABILITY_INTIMIDATE,
#line 2240
            .lvl = 18,
#line 2243
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2244
                MOVE_BITE,
                MOVE_SUCKER_PUNCH,
                MOVE_FAIRY_WIND,
            },
            },
        },
    },
