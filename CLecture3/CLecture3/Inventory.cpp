#include "Inventory.h"

Inventory::Inventory(int x,int y)
{
	this->x = x;
	this->y = y;
	selectIndex = 0;
	lineX = x;
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
			cout << "□";
		}
		else if ( items[i].GetCheck() == 1 ) {
			cout << "■";
		}

		/*cout << " [" << items[i].GetCheck() << "] ";*/

	}
}

void Inventory::AddItem()
{
	for ( int i = 0; i < size; i++ ) {
		if ( items[i].GetCheck() == false ) {
			items[i].SetCheck( true );
			break;
		}

		if ( i == size - 1 ) {
			if ( items[size - 1].GetCheck() == true ) {
				cout << "인벤토리가 가득 찼음" << endl;
			}
		}
	}
}


