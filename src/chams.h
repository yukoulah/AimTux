#ifndef __CHAMS_H
#define __CHAMS_H

#include <sstream>
#include <fstream>
#include <zconf.h>
#include <pwd.h>
#include "SDK.h"
#include "interfaces.h"
#include "settings.h"
#include "entity.h"

namespace Chams
{
	void CreateMaterials();
	void DrawModelExecute(void* thisptr, void* context, void *state, const ModelRenderInfo_t &pInfo, matrix3x4_t *pCustomBoneToWorld);
	void CreateMove(CUserCmd* cmd);
}

#endif