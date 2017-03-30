#include <atomic>

#include "WeaponDrop.h"
#include "../basic/Entity.h"
#include "../log/log.h"

using namespace std;


WeaponDrop::WeaponDrop(const int32_t id, const SDL_Rect& dest, const SDL_Rect& pickupSize,
        const int32_t wId): Entity(id, dest, dest, pickupSize), weaponId(wId) {
    logv("Created Weapon Drop\n");
}

WeaponDrop::~WeaponDrop() {
    logv("Destroy WeaponDrop\n");
}

int32_t WeaponDrop::getWeaponId() const{
    return weaponId;
}

int32_t WeaponDrop::getId() const {
    return Entity::getId();
}
