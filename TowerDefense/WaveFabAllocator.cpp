#include "WaveFabAllocator.h"
#include "DrawableGameComponent.h"

WaveFabAllocator::WaveFabAllocator()
{

}

DrawableGameComponent* WaveFabAllocator::buildFab(World::Map *map)
{
	EnemyFab *efab = new EnemyFab(map);
	return efab;
}

EnemyFab* WaveFabAllocator::buildFab2(World::Map *map)
{
	EnemyFab *efab = new EnemyFab(map);
	return efab;
}