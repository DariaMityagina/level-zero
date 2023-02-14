/*
 * Copyright (C) 2023 Intel Corporation
 *
 * SPDX-License-Identifier: Apache 2.0
 *
 * @file ze_layer.h
 *
 */
#pragma once
#include "ze_ddi.h"
#include "ze_util.h"
#include "tracing_imp.h"

namespace tracing_layer
{
    ///////////////////////////////////////////////////////////////////////////////
    class __zedlllocal context_t
    {
    public:
        ze_api_version_t version = ZE_API_VERSION_1_5;

        ze_dditable_t   zeDdiTable = {};

        context_t();
        ~context_t();
    };

    extern context_t context;
} // namespace tracing_layer
