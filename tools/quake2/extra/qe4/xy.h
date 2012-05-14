/*
===========================================================================
Copyright (C) 1997-2006 Id Software, Inc.

This file is part of Quake 2 Tools source code.

Quake 2 Tools source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Quake 2 Tools source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Quake 2 Tools source code; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

// window system independent camera view code

typedef struct
{
	int		width, height;

	qboolean	timing;

	vec3_t	origin;			// at center of window
	float	scale;

	float	topclip, bottomclip;

	qboolean d_dirty;
} xy_t;

BOOL XYExcludeBrush(brush_t	*pb);

void XY_Init (void);
void XY_MouseDown (int x, int y, int buttons);
void XY_MouseUp (int x, int y, int buttons);
void XY_MouseMoved (int x, int y, int buttons);
void XY_Draw (void);
void XY_Overlay (void);

BOOL FilterBrush(brush_t *pb);
