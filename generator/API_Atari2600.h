/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2014-2015 by Michael Kohn
 *
 */

#ifndef _API_ATARI_2600_H
#define _API_ATARI_2600_H

class API_Atari2600
{
public:
  virtual int atari2600_waitHsync_I() { return -1; }
  virtual int atari2600_waitHsync_I(int count) { return -1; }
  virtual int atari2600_waitHsync() { return -1; }
  virtual int atari2600_startVblank() { return -1; }
  virtual int atari2600_waitVblank() { return -1; }
  virtual int atari2600_startOverscan() { return -1; }
  virtual int atari2600_waitOverscan() { return -1; }
  virtual int atari2600_setColorPlayer0_I() { return -1; }
  virtual int atari2600_setColorPlayer0_I(int color) { return -1; }
  virtual int atari2600_setColorPlayer1_I() { return -1; }
  virtual int atari2600_setColorPlayer1_I(int color) { return -1; }
  virtual int atari2600_setColorPlayfield_I() { return -1; }
  virtual int atari2600_setColorPlayfield_I(int color) { return -1; }
  virtual int atari2600_setColorBackground_I() { return -1; }
  virtual int atari2600_setColorBackground_I(int color) { return -1; }

  virtual int atari2600_resetPlayer0() { return -1; }
  virtual int atari2600_resetPlayer1() { return -1; }
  virtual int atari2600_resetMissile0() { return -1; }
  virtual int atari2600_resetMissile1() { return -1; }
  virtual int atari2600_resetBall() { return -1; }
  virtual int atari2600_resetMissile0ToPlayer0On() { return -1; }
  virtual int atari2600_resetMissile1ToPlayer1On() { return -1; }
  virtual int atari2600_resetMissile0ToPlayer0Off() { return -1; }
  virtual int atari2600_resetMissile1ToPlayer1Off() { return -1; }
  virtual int atari2600_applyHorizontalMotion() { return -1; }
  virtual int atari2600_clearMotionRegisters() { return -1; }
  virtual int atari2600_clearCollisionLatches() { return -1; }

  virtual int atari2600_enableMissile0() { return -1; }
  virtual int atari2600_enableMissile1() { return -1; }
  virtual int atari2600_enableBall() { return -1; }
  virtual int atari2600_disableMissile0() { return -1; }
  virtual int atari2600_disableMissile1() { return -1; }
  virtual int atari2600_disableBall() { return -1; }

  virtual int atari2600_enablePlayer0Reflect() { return -1; }
  virtual int atari2600_enablePlayer1Reflect() { return -1; }
  virtual int atari2600_disablePlayer0Reflect() { return -1; }
  virtual int atari2600_disablePlayer1Reflect() { return -1; }

  virtual int atari2600_setPlayfield0_B() { return -1; }
  virtual int atari2600_setPlayfield0_B(int value) { return -1; }
  virtual int atari2600_setPlayfield1_B() { return -1; }
  virtual int atari2600_setPlayfield1_B(int value) { return -1; }
  virtual int atari2600_setPlayfield2_B() { return -1; }
  virtual int atari2600_setPlayfield2_B(int value) { return -1; }
};

#endif

