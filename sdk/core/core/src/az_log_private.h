// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT

#ifndef _az_LOG_PRIVATE_H
#define _az_LOG_PRIVATE_H

#include <az_http.h>
#include <az_result.h>

#include <stdint.h>

#include <_az_cfg_prefix.h>

void _az_log_http_request(az_http_request * hrb);

void _az_log_http_response(
    az_http_response * response,
    uint64_t duration_msec,
    az_http_request * hrb);

#include <_az_cfg_suffix.h>

#endif