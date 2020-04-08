#pragma once
#include "license/bsd"
#include "bios_hle_includes.hpp"

enum gdrom_opcode_e {
    GDROM_OP_PIOREAD = 16,
    GDROM_OP_DMAREAD = 17,
    GDROM_OP_GETTOC = 18,
    GDROM_OP_GETTOC2 = 19,
    GDROM_OP_PLAY = 20,
    GDROM_OP_PLAY_SECTOR = 21 , 
    GDROM_OP_PAUSE = 22,
    GDROM_OP_RELEASE = 23,
    GDROM_OP_INIT = 24,
    GDROM_OP_SEEK = 27,
    GDROM_OP_READ = 28,
    GDROM_OP_STOP = 33,
    GDROM_OP_GETSCD = 34,
    GDROM_OP_GETSES = 35,
    GDROM_OP_FIRST = GDROM_OP_PIOREAD,
    GDROM_OP_LAST = GDROM_OP_GETSES,
    GDROM_OP_COUNT = (GDROM_OP_LAST - GDROM_OP_FIRST) + 1,
};

void bios_hle_gdrom_opcodes_impl_NOP();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_PIOREAD();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_DMAREAD();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_GETTOC();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_GETTOC2();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_PLAY();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_PLAY_SECTOR();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_PAUSE();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_RELEASE();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_INIT();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_SEEK();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_READ();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_STOP();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_GETSCD();
void bios_hle_gdrom_opcodes_impl_GDROM_OP_GETSES();

static callback_t bios_hle_gdrom_opcodes_fptr[] = {// respect the ORDER!!!
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//0
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//5
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//10
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//15
    {"GDROM_OP_PIOREAD",(int64_t)GDROM_OP_PIOREAD,&bios_hle_gdrom_opcodes_impl_GDROM_OP_PIOREAD},//16
    {"GDROM_OP_DMAREAD",(int64_t)GDROM_OP_DMAREAD,&bios_hle_gdrom_opcodes_impl_GDROM_OP_DMAREAD},//17
    {"GDROM_OP_GETTOC",(int64_t)GDROM_OP_GETTOC,&bios_hle_gdrom_opcodes_impl_GDROM_OP_GETTOC},//18
    {"GDROM_OP_GETTOC2",(int64_t)GDROM_OP_GETTOC2,&bios_hle_gdrom_opcodes_impl_GDROM_OP_GETTOC2},//19
    {"GDROM_OP_PLAY",(int64_t)GDROM_OP_PLAY,&bios_hle_gdrom_opcodes_impl_GDROM_OP_PLAY},//20
    {"GDROM_OP_PLAY_SECTOR",(int64_t)GDROM_OP_PLAY_SECTOR,&bios_hle_gdrom_opcodes_impl_GDROM_OP_PLAY_SECTOR},//21
    {"GDROM_OP_PAUSE",(int64_t)GDROM_OP_PAUSE,&bios_hle_gdrom_opcodes_impl_GDROM_OP_PAUSE},//22
    {"GDROM_OP_RELEASE",(int64_t)GDROM_OP_RELEASE,&bios_hle_gdrom_opcodes_impl_GDROM_OP_RELEASE},//23
    {"GDROM_OP_INIT",(int64_t)GDROM_OP_INIT,&bios_hle_gdrom_opcodes_impl_GDROM_OP_INIT},//24
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//25
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//26
    {"GDROM_OP_SEEK",(int64_t)GDROM_OP_SEEK,&bios_hle_gdrom_opcodes_impl_GDROM_OP_SEEK},//27
    {"GDROM_OP_READ",(int64_t)GDROM_OP_READ,&bios_hle_gdrom_opcodes_impl_GDROM_OP_READ},//28
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//29
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//30
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//31
    {"NOP",-1,&bios_hle_gdrom_opcodes_impl_NOP},//32
    {"GDROM_OP_STOP",(int64_t)GDROM_OP_STOP,&bios_hle_gdrom_opcodes_impl_GDROM_OP_STOP},//33
    {"GDROM_OP_GETSCD",(int64_t)GDROM_OP_GETSCD,&bios_hle_gdrom_opcodes_impl_GDROM_OP_GETSCD},//34
    {"GDROM_OP_GETSES",(int64_t)GDROM_OP_GETSES,&bios_hle_gdrom_opcodes_impl_GDROM_OP_GETSES},//25
};