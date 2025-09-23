// MagicPodsCore: https://github.com/steam3d/MagicPodsCore
// Copyright: 2020-2025 Aleksandr Maslov <https://magicpods.app> & Andrei Litvintsev <a.a.litvintsev@gmail.com>
// License: GPL-3.0

#pragma once

// Modalias: bluetooth:v{VendorIds}p{AppleProductIds}dB087
enum class AapModelIds : unsigned short {
    airpods1 = 0x2002,
    airpods2 = 0x200f, 
    airpods3 = 0x2013, 
    airpods4 = 0x2019, 
    airpods4anc = 0x201b, 
    airpodspro = 0x200e,
    airpodspro2 = 0x2014,
    airpodspro3 = 0x2027,    
    airpodsprousbc = 0x2024,
    powerbeatspro = 0x200b,
    airpodsmax = 0x200a,
    airpodsmax2024 = 0x201f,
    beatsSolo3 = 0x2006,
    beatssolopro = 0x200c,
    beatsstudio3 = 0x2009,
    beatsx = 0x2005,
    beatsflex = 0x2010,
    powerbeats3 = 0x2003,
    beatsfitpro = 0x2012,
    beatsstudiobuds = 0x2011,
    beatsstudiobudsplus = 0x2016,
    powerbeats4 = 0x200d,
    beatsstudiopro = 0x2017,
    powerbeatspro2 = 0x201d,
    beatssolobuds = 0x2026
};

static const AapModelIds AllAapModelsIds[] = {
    AapModelIds::airpods1,
    AapModelIds::airpods2,
    AapModelIds::airpods3,
    AapModelIds::airpods4,
    AapModelIds::airpods4anc,
    AapModelIds::airpodspro,
    AapModelIds::airpodspro2,
    AapModelIds::airpodspro3,
    AapModelIds::airpodsprousbc,
    AapModelIds::powerbeatspro,
    AapModelIds::airpodsmax,
    AapModelIds::airpodsmax2024,
    AapModelIds::beatsSolo3,
    AapModelIds::beatssolopro,
    AapModelIds::beatsstudio3,
    AapModelIds::beatsx,
    AapModelIds::beatsflex,
    AapModelIds::powerbeats3,
    AapModelIds::beatsfitpro,
    AapModelIds::beatsstudiobuds,
    AapModelIds::beatsstudiobudsplus,
    AapModelIds::powerbeats4,
    AapModelIds::beatsstudiopro,
    AapModelIds::powerbeatspro2,
    AapModelIds::beatssolobuds,
};