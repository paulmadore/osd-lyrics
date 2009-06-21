/**
 * @file   ol_config_property.h
 * @author Tiger Soldier <tigersoldi@gmail.com>
 * @date   Sun Jun 21 09:34:30 2009
 * 
 * @brief  Defines properties that can be configured
 * 
 * 
 */

#ifndef _OL_CONFIG_PROPERTY_H_
#define _OL_CONFIG_PROPERTY_H_

enum {
  PROP_0,

  PROP_XALIGN,
  PROP_YALIGN,
  PROP_FONT_SIZE,
  PROP_WIDTH,
  PROP_LOCKED,
  PROP_FONT_FAMILY,
};

typedef struct _OlConfigBoolValue OlConfigBoolValue;
struct _OlConfigBoolValue
{
  int key;
  char *name;
  char *nick;
  char *description;
  gboolean default_value;
};

typedef struct _OlConfigStringValue OlConfigStringValue;
struct _OlConfigStringValue
{
  int key;
  char *name;
  char *nick;
  char *description;
  char *default_value;
};

typedef struct _OlConfigIntValue OlConfigIntValue;
struct _OlConfigIntValue
{
  int key;
  char *name;
  char *nick;
  char *description;
  int min;
  int max;
  int default_value;
};

typedef struct _OlConfigDoubleValue OlConfigDoubleValue;
struct _OlConfigDoubleValue
{
  int key;
  char *name;
  char *nick;
  char *description;
  double min;
  double max;
  double default_value;
};

static const OlConfigBoolValue config_bool[] = {
  {PROP_LOCKED, "locked", "Lock", "Whether the OSD is locked", TRUE},
};

static const OlConfigIntValue config_int[] = {
  {PROP_WIDTH, "width", "OSD Width", "The width of the OSD", 1, 10000, 1024},
};

static const OlConfigDoubleValue config_double[] = {
  {PROP_XALIGN, "xalign", "Horizontal position",
   "Horizontal position of window in desktop. "
   "0.0 is left aligned, 1.0 is right aligned",
   0.0, 1.0, 0.5},
  {PROP_YALIGN, "yalign", "Vertical position",
   "Vertical position of window in desktop. "
   "0.0 is left top, 1.0 is bottom aligned",
   0.0, 1.0, 0.5},
  {PROP_FONT_SIZE, "font-size", "OSD Font Size",
   "The font size of OSD lyrics",
   0.0, 10000.0, 30.0},
};

static const OlConfigStringValue config_str[] = {
  {PROP_FONT_FAMILY, "font-family", "OSD Font family",
   "Font family of OSD lyrics",
   "serif"},
};

#endif /* _OL_CONFIG_PROPERTY_H_ */
