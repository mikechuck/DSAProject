#pragma once
#ifndef ENUMS_H
#define ENUMS_H

void runEnums();

enum ItemType {
	ITEMTYPE_SWORD,
	ITEMTYPE_TORCH,
	ITEMTYPE_POTION
};

std::string getItemType(ItemType itemType);

#endif ENUMS_H
