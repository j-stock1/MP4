#pragma once
using namespace std;
#include "Tile.h"
#include "Entity.h"
#include <vector>

class Entity;

class Map{
public:
	Map();
	Map(int w_, int h_);
	Tile* get_tile_p(int x, int y);
	void set_tile(int x, int y, Tile* t);
	void add_entity(Entity* e);
	int get_entity(int x, int y);
	int get_w();
	int get_h();
	bool check_solid(int x, int y);
	void update();
	void add_flag(string flag);
	string get_flag();
	vector<string> get_flags();
	void render();
	string render(int x, int y, int w_, int h_, bool out);
private:
	int w;
	int h;
	vector<Tile*> tiles;
	vector<Entity*> entities;
	Tile empty = Tile();
	vector<string> flags;
};
