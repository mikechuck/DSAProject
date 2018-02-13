#pragma once
#ifndef ENUMS_H
#define ENUMS_H

void runEnums();

enum class ItemType {
	SWORD,
	TORCH,
	POTION
};

std::string getItemType(ItemType itemType);

#endif ENUMS_H
