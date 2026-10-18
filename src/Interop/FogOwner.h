#pragma once

// FogOwner: redirect this fork's fog-of-war updates to a chosen house.
// When set, RevealFogShroud calls from OTHER houses are skipped, so the
// single global fog state belongs to the owner. Null restores normal
// behavior. Used by Kaleidoscope for observer perspective switching.
class HouseClass;

extern HouseClass* PhobosFogOwner;