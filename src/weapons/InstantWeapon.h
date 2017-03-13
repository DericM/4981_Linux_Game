/*
    Created  by Deric M       01/03/17
*/
#ifndef INSTANTWEAPON_H
#define INSTANTWEAPON_H
#include "Weapon.h"
#include "../CollisionHandler.h"


class InstantWeapon: public Weapon  {
public:
	InstantWeapon(std::string type, int range, int damage, 
		int clip, int clipMax, int ammo, int AOE, int reloadSpeed);
	~InstantWeapon() = default;

	
    void fire(Marine &marine);
    

protected:

};

#endif
