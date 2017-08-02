#pragma once

#include "Graphics.h"
#include "Vec2i.h"

class SpriteCodex
{
public:
	// width and height of all tiles
	static constexpr int tileSize = 32;
	static constexpr int halfTileSize = tileSize/2;
	static constexpr int radius = (tileSize - 4) /2;
	// base color for all tiles
	static constexpr Color baseColor = { 192,192,192 };
	// 16x16 tile sprites assume (255,255,255) background and top left origin
	
	static void DrawTile(const Vec2i& pos, Graphics& gfx);
	static void DrawTileWhite(const Vec2i& pos, Graphics& gfx);
	static void DrawTileBlack(const Vec2i& pos, Graphics& gfx);
	static void DrawWhiteChecker(const Vec2i& pos, Graphics& gfx);
	static void DrawBlackChecker(const Vec2i& pos, Graphics& gfx);
	// Tile selector function valid input 0-8
	// Win Screen 254x192 center origin
	static void DrawWin(const Vec2i& pos, Graphics& gfx);

};