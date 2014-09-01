// Filename: luiIterators.h
// Created by:  tobspr (01Sep14)
//

#ifndef LUI_ITERATORS_H
#define LUI_ITERATORS_H

#include "pandabase.h"
#include "pandasymbols.h"

class LUISprite;
class LUIObject;

typedef pset<PT(LUIObject)>::iterator lui_object_iterator;
typedef pset<PT(LUISprite)>::iterator lui_sprite_iterator;

class EXPCL_PANDASKEL LUISpriteIterator {

PUBLISHED:

  INLINE LUISprite *__next__() {
    if (_iter != _end) {
      return *_iter++;
    }
    return NULL;
  }

  INLINE LUISpriteIterator &__iter__() {
    return *this;
  }

public:

  // Inline constructor for now
  LUISpriteIterator(lui_sprite_iterator begin, lui_sprite_iterator end) 
    : _iter(begin), _end(end) {
  }

protected:
  lui_sprite_iterator _iter;
  lui_sprite_iterator _end;

};


#endif