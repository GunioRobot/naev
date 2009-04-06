/*
 * See Licensing and Copyright notice in naev.h
 */

/**
 * @file nlua_space.c
 *
 * @brief Handles the Lua space bindings.
 *
 * These bindings control the planets and systems.
 */

#include "nlua_space.h"

#include "naev.h"

#include "lauxlib.h"

#include "log.h"
#include "nlua.h"
#include "nluadef.h"
#include "nlua_planet.h"
#include "nlua_system.h"


/**
 * @brief Loads the space library.
 *
 *    @param L State to load space library into.
 *    @param readonly Load read only functions?
 *    @return 0 on success.
 */
int lua_loadSpace( lua_State *L, int readonly )
{
   lua_loadPlanet( L, readonly );
   lua_loadSystem( L, readonly );

   return 0;
}

