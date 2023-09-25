#include "Inventory.h"

Inventory::Inventory(int x,int y)
{
	this->x = x;
	this->y = y;
	size = x * y;
	items = new Item[x * y];

	for ( int i = 0; i < size; i++ ) {
		items[i].SetCheck( false );
	}
}

void Inventory::MakeInven()
{
	for ( int i = 0; i < size; i++ ) {
		if (i > 0 && i % y == 0 ) {
			cout << endl;
		}
		if ( items[i].GetCheck() == 0 ) {
			cout << " [" << items[i].GetCheck() << "] ";
		}
		else if(items[i].GetCheck() == 1) {
			//여기에 코드 입력
		}
		
	}
}
