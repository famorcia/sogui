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

static const char rcsid[] =
  "$Id$";

/*!
  \class SoAnyFullViewer SoAnyFullViewer.h
  \brief The SoAnyFullViewer class is a collection of common functions for
  all the FullViewer components for Coin.
*/

#include <Inventor/Be/widgets/SoAnyPopupMenu.h>
#include <Inventor/Be/common/SoAnyFullViewer.h>

// ************************************************************************

SoAnyPopupMenu *
SoAnyFullViewer::buildStandardPopupMenu(
  void )
{
  SoAnyPopupMenu * menu = new SoAnyPopupMenu;

  menu->NewMenu( "rootmenu", ROOT_MENU );

  menu->NewMenu( "functionsmenu", FUNCTIONS_MENU );
  menu->SetMenuTitle( FUNCTIONS_MENU, "Functions" );
  menu->NewMenu( "drawstylesmenu", DRAWSTYLES_MENU );
  menu->SetMenuTitle( DRAWSTYLES_MENU, "Draw Styles" );
  menu->NewMenuItem( "examining", EXAMINING_ITEM );
  menu->NewMenuItem( "decoration", DECORATION_ITEM );
  menu->NewMenuItem( "headlight", HEADLIGHT_ITEM );
  menu->NewMenuItem( "preferences", PREFERENCES_ITEM );
  menu->SetMenuItemTitle( PREFERENCES_ITEM, "Preferences..." );

  menu->AddMenu( ROOT_MENU, FUNCTIONS_MENU );
  menu->AddMenu( ROOT_MENU, DRAWSTYLES_MENU );
  menu->AddMenuItem( ROOT_MENU, EXAMINING_ITEM );
  menu->AddMenuItem( ROOT_MENU, DECORATION_ITEM );
  menu->AddMenuItem( ROOT_MENU, HEADLIGHT_ITEM );
  menu->AddMenuItem( ROOT_MENU, PREFERENCES_ITEM );

  menu->NewMenuItem( "help", HELP_ITEM );
  menu->NewMenuItem( "home", HOME_ITEM );
  menu->NewMenuItem( "set_home", SET_HOME_ITEM );
  menu->NewMenuItem( "view_all", VIEW_ALL_ITEM );
  menu->NewMenuItem( "seek", SEEK_ITEM );
  menu->NewMenuItem( "copy_view", COPY_VIEW_ITEM );
  menu->NewMenuItem( "paste_view", PASTE_VIEW_ITEM );

  menu->AddMenuItem( FUNCTIONS_MENU, HELP_ITEM );
  menu->AddMenuItem( FUNCTIONS_MENU, HOME_ITEM );
  menu->AddMenuItem( FUNCTIONS_MENU, SET_HOME_ITEM );
  menu->AddMenuItem( FUNCTIONS_MENU, VIEW_ALL_ITEM );
  menu->AddMenuItem( FUNCTIONS_MENU, SEEK_ITEM );
  menu->AddMenuItem( FUNCTIONS_MENU, COPY_VIEW_ITEM );
  menu->AddMenuItem( FUNCTIONS_MENU, PASTE_VIEW_ITEM );

  menu->NewMenuItem( "as_is", AS_IS_ITEM );
  menu->NewMenuItem( "hidden_line", HIDDEN_LINE_ITEM );
  menu->NewMenuItem( "no_textures", NO_TEXTURE_ITEM );
  menu->NewMenuItem( "low_resolution", LOW_RESOLUTION_ITEM );
  menu->NewMenuItem( "wireframe", WIREFRAME_ITEM );
  menu->NewMenuItem( "points", POINTS_ITEM );
  menu->NewMenuItem( "bounding_box", BOUNDING_BOX_ITEM );

  menu->NewRadioGroup( STILL_GROUP );
  menu->AddRadioGroupItem( STILL_GROUP, AS_IS_ITEM );
  menu->AddRadioGroupItem( STILL_GROUP, HIDDEN_LINE_ITEM );
  menu->AddRadioGroupItem( STILL_GROUP, NO_TEXTURE_ITEM );
  menu->AddRadioGroupItem( STILL_GROUP, LOW_RESOLUTION_ITEM );
  menu->AddRadioGroupItem( STILL_GROUP, WIREFRAME_ITEM );
  menu->AddRadioGroupItem( STILL_GROUP, POINTS_ITEM );
  menu->AddRadioGroupItem( STILL_GROUP, BOUNDING_BOX_ITEM );
  menu->SetMenuItemMarked( AS_IS_ITEM, TRUE );

  menu->NewMenuItem( "move_same_as_still", MOVE_SAME_AS_STILL_ITEM );
  menu->NewMenuItem( "move_no_texture", MOVE_NO_TEXTURE_ITEM );
  menu->NewMenuItem( "move_low_res", MOVE_LOW_RES_ITEM );
  menu->NewMenuItem( "move_wireframe", MOVE_WIREFRAME_ITEM );
  menu->NewMenuItem( "move_low_res_wireframe", MOVE_LOW_RES_WIREFRAME_ITEM );
  menu->NewMenuItem( "move_points", MOVE_POINTS_ITEM );
  menu->NewMenuItem( "move_low_res_points", MOVE_LOW_RES_POINTS_ITEM );
  menu->NewMenuItem( "move_bounding_box", MOVE_BOUNDING_BOX_ITEM );

  menu->NewRadioGroup( MOVE_GROUP );
  menu->AddRadioGroupItem( MOVE_GROUP, MOVE_SAME_AS_STILL_ITEM );
  menu->AddRadioGroupItem( MOVE_GROUP, MOVE_NO_TEXTURE_ITEM );
  menu->AddRadioGroupItem( MOVE_GROUP, MOVE_LOW_RES_ITEM );
  menu->AddRadioGroupItem( MOVE_GROUP, MOVE_WIREFRAME_ITEM );
  menu->AddRadioGroupItem( MOVE_GROUP, MOVE_LOW_RES_WIREFRAME_ITEM );
  menu->AddRadioGroupItem( MOVE_GROUP, MOVE_POINTS_ITEM );
  menu->AddRadioGroupItem( MOVE_GROUP, MOVE_LOW_RES_POINTS_ITEM );
  menu->AddRadioGroupItem( MOVE_GROUP, MOVE_BOUNDING_BOX_ITEM );
  menu->SetMenuItemMarked( MOVE_SAME_AS_STILL_ITEM, TRUE );

  menu->NewMenuItem( "single_buffer", SINGLE_BUFFER_ITEM );
  menu->NewMenuItem( "double_buffer", DOUBLE_BUFFER_ITEM );
  menu->NewMenuItem( "interactive_buffer", INTERACTIVE_BUFFER_ITEM );

  menu->NewRadioGroup( BUFFER_GROUP );
  menu->AddRadioGroupItem( BUFFER_GROUP, SINGLE_BUFFER_ITEM );
  menu->AddRadioGroupItem( BUFFER_GROUP, DOUBLE_BUFFER_ITEM );
  menu->AddRadioGroupItem( BUFFER_GROUP, INTERACTIVE_BUFFER_ITEM );
  menu->SetMenuItemMarked( DOUBLE_BUFFER_ITEM, TRUE );

  menu->AddMenuItem( DRAWSTYLES_MENU, AS_IS_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, HIDDEN_LINE_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, NO_TEXTURE_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, LOW_RESOLUTION_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, WIREFRAME_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, POINTS_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, BOUNDING_BOX_ITEM );
//  menu->AddSeparatorItem( DRAWSTYLES_MENU );
  menu->AddMenuItem( DRAWSTYLES_MENU, MOVE_SAME_AS_STILL_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, MOVE_NO_TEXTURE_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, MOVE_LOW_RES_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, MOVE_WIREFRAME_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, MOVE_LOW_RES_WIREFRAME_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, MOVE_POINTS_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, MOVE_LOW_RES_POINTS_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, MOVE_BOUNDING_BOX_ITEM );
//  menu->AddSeparatorItem( DRAWSTYLES_MENU );
  menu->AddMenuItem( DRAWSTYLES_MENU, SINGLE_BUFFER_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, DOUBLE_BUFFER_ITEM );
  menu->AddMenuItem( DRAWSTYLES_MENU, INTERACTIVE_BUFFER_ITEM );

  return menu;
} // buildPopupMenu()

// ************************************************************************
