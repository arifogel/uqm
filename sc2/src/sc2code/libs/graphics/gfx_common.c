//Copyright Paul Reiche, Fred Ford. 1992-2002

/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

/******************************************

  Star Control II: 3DO => SDL Port

  Copyright Toys for Bob, 2002

  Programmer: Chris Nelson

*******************************************/


#include "libs/graphics/gfxintrn.h"
#include "libs/input/inpintrn.h"
#include "libs/graphics/gfx_common.h"


#define NUMBER_OF_PLUTVALS 32
#define NUMBER_OF_PLUT_UINT32s (NUMBER_OF_PLUTVALS >> 1)
#define GET_VAR_PLUT(i) (_varPLUTs + (i) * NUMBER_OF_PLUT_UINT32s)
DWORD* _varPLUTs; //Not a function
PDISPLAY_INTERFACE _pCurDisplay; //Not a function. Probably has to be initialized...

void (*mask_func_array[])
		(PRECT pClipRect, PRIMITIVEPTR PrimPtr)
		= { 0 };

int ScreenWidth;
int ScreenHeight;
int ScreenWidthActual;
int ScreenHeightActual;
int ScreenBPPActual;

int TFB_DEBUG_HALT;

