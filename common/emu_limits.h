/*	EQEMu: Everquest Server Emulator
	
	Copyright (C) 2001-2016 EQEMu Development Team (http://eqemulator.net)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE. See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef COMMON_EMU_LIMITS_H
#define COMMON_EMU_LIMITS_H

#include "types.h"

#include <stdlib.h>


namespace EntityLimits
{
	namespace npc {
		enum : int { Invalid = -1, Null, Safety };

		enum : bool { False = false, True = true };

		const size_t InvTypeTradeSize = 4;

	} /*npc*/

	namespace merc {
		enum : int { Invalid = -1, Null, Safety };

		enum : bool { False = false, True = true };

		const size_t InvTypeTradeSize = 4;

	} /*merc*/

	namespace bot {
		enum : int { Invalid = -1, Null, Safety };

		enum : bool { False = false, True = true };

		const size_t InvTypeTradeSize = 8;

	} /*bot*/

	namespace pet {
		enum : int { Invalid = -1, Null, Safety };

		enum : bool { False = false, True = true };

		const size_t InvTypeTradeSize = 4;

	} /*pet*/

}; /*EntityLimits*/

#endif /*COMMON_EMU_LIMITS_H*/