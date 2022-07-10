#ifndef PLAYBOX_H
#define PLAYBOX_H

#include "maths.h"
#include "body.h"
#include "joint.h"
#include "arbiter.h"
#include "world.h"

#include "pd_api.h"

extern void registerPlaybox(void);

static int libplaybox2d_test(lua_State* L);

static const lua_reg libplaybox2d[] =
{
	//{ "__gc",					particlelib_dealloc },
	//{ "new", 					particlelib_newobject },
	//{ "setNumberOfParticles", 	particlelib_setNumberOfParticles },
	//{ "particleCountInRect", 	particlelib_particleCountInRect },
	//{ "update",					particlelib_update },
	{ "test1", 					libplaybox2d_test },
	{ NULL, NULL }
};

#endif