// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/logging/log.h"
#include "core/libraries/error_codes.h"
#include "core/libraries/libs.h"
#include "disc_map.h"
#include "disc_map_codes.h"

namespace Libraries::DiscMap {

int PS4_SYSV_ABI sceDiscMapGetPackageSize() {
    LOG_WARNING(Lib_DiscMap, "(DUMMY) called");
    return ORBIS_DISC_MAP_ERROR_NO_BITMAP_INFO;
}

int PS4_SYSV_ABI sceDiscMapIsRequestOnHDD() {
    LOG_WARNING(Lib_DiscMap, "(DUMMY) called");
    return ORBIS_DISC_MAP_ERROR_NO_BITMAP_INFO;
}

int PS4_SYSV_ABI Func_7C980FFB0AA27E7A() {
    LOG_ERROR(Lib_DiscMap, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI Func_8A828CAEE7EDD5E9() {
    LOG_ERROR(Lib_DiscMap, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI Func_E7EBCE96E92F91F8() {
    LOG_ERROR(Lib_DiscMap, "(STUBBED) called");
    return ORBIS_OK;
}

void RegisterlibSceDiscMap(Core::Loader::SymbolsResolver* sym) {
    LIB_FUNCTION("fl1eoDnwQ4s", "libSceDiscMap", 1, "libSceDiscMap", 1, 1,
                 sceDiscMapGetPackageSize);
    LIB_FUNCTION("lbQKqsERhtE", "libSceDiscMap", 1, "libSceDiscMap", 1, 1,
                 sceDiscMapIsRequestOnHDD);
    LIB_FUNCTION("fJgP+wqifno", "libSceDiscMap", 1, "libSceDiscMap", 1, 1, Func_7C980FFB0AA27E7A);
    LIB_FUNCTION("ioKMruft1ek", "libSceDiscMap", 1, "libSceDiscMap", 1, 1, Func_8A828CAEE7EDD5E9);
    LIB_FUNCTION("5+vOlukvkfg", "libSceDiscMap", 1, "libSceDiscMap", 1, 1, Func_E7EBCE96E92F91F8);
};

} // namespace Libraries::DiscMap
