/* Copyright (c) 2015-2016 The Khronos Group Inc.
 * Copyright (c) 2015-2016 Valve Corporation
 * Copyright (c) 2015-2016 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Jon Ashburn <jon@lunarg.com>
 **************************************************************************/
#pragma once
#include "vulkan/vulkan.h"
#include <stdio.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

const char *getLayerOption(const char *_option);
FILE *getLayerLogOutput(const char *_option, const char *layerName);
VkDebugReportFlagsEXT getLayerOptionFlags(const char *_option, uint32_t optionDefault);
bool getLayerOptionEnum(const char *_option, uint32_t *optionDefault);

void setLayerOption(const char *_option, const char *_val);
void setLayerOptionEnum(const char *_option, const char *_valEnum);
void print_msg_flags(VkFlags msgFlags, char *msg_flags);
#ifdef __cplusplus
}
#endif
