/**************************************************************************\
 *
 *  Copyright (C) 2000 by Systems in Motion.  All rights reserved.
 *
 *  This file is part of the Coin library.
 *
 *  This file may be distributed under the terms of the Q Public License
 *  as defined by Troll Tech AS of Norway and appearing in the file
 *  LICENSE.QPL included in the packaging of this file.
 *
 *  If you want to use Coin in applications not covered by licenses
 *  compatible with the QPL, you can contact SIM to aquire a
 *  Professional Edition license for Coin.
 *
 *  Systems in Motion AS, Prof. Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ sales@sim.no Voice: +47 22114160 Fax: +47 67172912
 *
\**************************************************************************/

//  $Id$

#ifndef SOANY_FULLVIEWER_H
#define SOANY_FULLVIEWER_H

class SoAnyPopupMenu;

enum SoViewerPopupMenuItem {
  ROOT_MENU = 0,
  MENUTITLE_ITEM,

  FUNCTIONS_MENU,
  HELP_ITEM,
  HOME_ITEM,
  SET_HOME_ITEM,
  VIEW_ALL_ITEM,
  SEEK_ITEM,
  COPY_VIEW_ITEM,
  PASTE_VIEW_ITEM,

  DRAWSTYLES_MENU,
  AS_IS_ITEM,
  HIDDEN_LINE_ITEM,
  NO_TEXTURE_ITEM,
  LOW_RESOLUTION_ITEM,
  WIREFRAME_ITEM,
  POINTS_ITEM,
  BOUNDING_BOX_ITEM,
  MOVE_SAME_AS_STILL_ITEM,
  MOVE_NO_TEXTURE_ITEM,
  MOVE_LOW_RES_ITEM,
  MOVE_WIREFRAME_ITEM,
  MOVE_LOW_RES_WIREFRAME_ITEM,
  MOVE_POINTS_ITEM,
  MOVE_LOW_RES_POINTS_ITEM,
  MOVE_BOUNDING_BOX_ITEM,
  SINGLE_BUFFER_ITEM,
  DOUBLE_BUFFER_ITEM,
  INTERACTIVE_BUFFER_ITEM,

  EXAMINING_ITEM,
  DECORATION_ITEM,
  HEADLIGHT_ITEM,
  PREFERENCES_ITEM
}; // enum SoViewerPopupMenuItem

enum SoViewerPopupMenuRadioGroup {
  STILL_GROUP = 1,
  MOVE_GROUP,
  BUFFER_GROUP
}; // enum SoViewerPopupMenuRadioGroup

// ************************************************************************

class SoAnyFullViewer {
public:
  static SoAnyPopupMenu * buildStandardPopupMenu(void);

}; // class SoAnyFullViewer

// ************************************************************************

#endif // ! SOANY_FULLVIEWER_H
