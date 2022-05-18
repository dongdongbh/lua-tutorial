#ifdef __cplusplus
# include <lua.hpp>
#else
*extern "C" {
# include "lua.h"
# include "lualib.h"
# include "lauxlib.h"
}
#endif

#include <iostream>
#include <string>

void basic_test(void)
{
    printf("Here is a test about lua with cpp.\n");
    lua_State *state = luaL_newstate();
    lua_close(state);
}

// Little error checking utility function
bool CheckLua(lua_State *L, int r)
{
    if (r != LUA_OK)
    {
        std::string errormsg = lua_tostring(L, -1);
        std::cout << errormsg << std::endl;
        return false;
    }
    return true;
}

int lua_HostFunction(lua_State *L)
{
    float a = (float)lua_tonumber(L, 1);
    float b = (float)lua_tonumber(L, 2);
    std::cout << "[CPP] HostFunction(" << a << ", " << b << ") called from Lua" << std::endl;
    float c = a * b;
    lua_pushnumber(L, c);
    return 1;
}

int main()
{
    struct Player
    {
        std::string title;
        std::string name;
        std::string family;
        int level;
    } player;



    std::string cmd = "a = 7 + 11 + math.sin(23.7)";
    lua_State *L = luaL_newstate();
    // add lua lib to the L lua vritual machine
    luaL_openlibs(L);

    lua_register(L, "HostFunction", lua_HostFunction);

    if (CheckLua(L, luaL_dofile(L, "VideoExample.lua")))
    {
        /*lua_getglobal(L, "GetPlayer");
        if (lua_isfunction(L, -1))
        {
            lua_pushnumber(L, 1);

            if (CheckLua(L, lua_pcall(L, 1, 1, 0)))
            {
                if (lua_istable(L, -1))
                {
                    lua_pushstring(L, "Name");
                    lua_gettable(L, -2);
                    player.name = lua_tostring(L, -1);
                    lua_pop(L, 1);

                    lua_pushstring(L, "Title");
                    lua_gettable(L, -2);
                    player.title = lua_tostring(L, -1);
                    lua_pop(L, 1);

                    lua_pushstring(L, "Family");
                    lua_gettable(L, -2);
                    player.family = lua_tostring(L, -1);
                    lua_pop(L, 1);

                    lua_pushstring(L, "Level");
                    lua_gettable(L, -2);
                    player.level = lua_tonumber(L, -1);
                    lua_pop(L, 1);
                }

                std::cout << player.title << " " << player.name << " of " << player.family  << " "  << player.level << std::endl;
            }
        }*/

        lua_getglobal(L, "DoAThing");

        if (lua_isfunction(L, -1))
        {
            lua_pushnumber(L, 5.0f);
            lua_pushnumber(L, 6.0f);
            if (CheckLua(L, lua_pcall(L, 2, 1, 0)))
            {
                std::cout << "[C++] Called in lua 'DoAThing(5.0f, 6.0f)', got " << (float)lua_tonumber(L, -1) << std::endl;
            }

        }

        /*lua_getglobal(L, "player");
        // here the -1 is the index of lua stack
        if (lua_istable(L, -1))
        {
            lua_pushstring(L, "Name");
            lua_gettable(L, -2);
            player.name = lua_tostring(L, -1);
            lua_pop(L, 1);

            lua_pushstring(L, "Title");
            lua_gettable(L, -2);
            player.title = lua_tostring(L, -1);
            lua_pop(L, 1);

            lua_pushstring(L, "Family");
            lua_gettable(L, -2);
            player.family = lua_tostring(L, -1);
            lua_pop(L, 1);

            lua_pushstring(L, "Level");
            lua_gettable(L, -2);
            player.level = lua_tonumber(L, -1);
            lua_pop(L, 1);
        }

        std::cout << player.title << " " << player.name << " of " << player.family  << " "  << player.level << std::endl;*/
    }


    lua_close(L);
    return 0;
}
