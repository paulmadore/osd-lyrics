#ifndef _OL_LRC_FETCH_UI_H_
#define _OL_LRC_FETCH_UI_H_

#include "ol_music_info.h"

struct _OlLrcCandidate;
struct _OlLrcFetchEngine;

void ol_lrc_fetch_ui_show (struct _OlLrcFetchEngine *engine,
                           const struct _OlLrcCandidate *candidates,
                           int count,
                           const OlMusicInfo *music_info,
                           const char *filename);
                           

#endif /* _OL_LRC_FETCH_UI_H_ */
