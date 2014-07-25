#ifndef __PNODE_H__
#define __PNODE_H__

#include "plant.h"

class pnode {

		plant *p;
		int x, y;
		pnode *next;
		
	public:
	
		pnode(plant *p, int x, int y, pnode* next);
		
		plant *getPlant();
		
		int getX() const;
		
		int getY() const;
		
		pnode *getNext();
		
		void setNext(pnode *n);

};

#endif
