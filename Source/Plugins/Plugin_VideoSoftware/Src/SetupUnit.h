// Copyright (C) 2003-2009 Dolphin Project.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2.0.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License 2.0 for more details.

// A copy of the GPL 2.0 should have been included with the program.
// If not, see http://www.gnu.org/licenses/

// Official Git repository and contact information can be found at
// http://code.google.com/p/dolphin-emu/


#ifndef _SETUPUNIT_H_
#define _SETUPUNIT_H_

#include "Common.h"
#include "NativeVertexFormat.h"
#include "ChunkFile.h"

class SetupUnit
{
	u8 m_PrimType;
	int m_VertexCounter;

	OutputVertexData m_Vertices[3];
	OutputVertexData *m_VertPointer[3];
	OutputVertexData *m_VertWritePointer;

	void SetupQuad();
	void SetupTriangle();
	void SetupTriStrip();
	void SetupTriFan();
	void SetupLine();
	void SetupLineStrip();
	void SetupPoint();

public:
	void Init(u8 primitiveType);

	OutputVertexData* GetVertex() { return m_VertWritePointer; }

	void SetupVertex();
	void DoState(PointerWrap &p);
};

#endif
