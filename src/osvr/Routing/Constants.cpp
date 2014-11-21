/** @file
    @brief Implementation

    @date 2014

    @author
    Ryan Pavlik
    <ryan@sensics.com>
    <http://sensics.com>
*/

// Copyright 2014 Sensics, Inc.
//
// All rights reserved.
//
// (Final version intended to be licensed under
// the Apache License, Version 2.0)

// Internal Includes
#include <osvr/Routing/Constants.h>

// Library/third-party includes
// - none

// Standard includes
// - none

namespace osvr {
namespace routing {
    const char getPathSeparatorCharacter() { return getPathSeparator()[0]; }

    const char *getPathSeparator() { return "/"; }
} // namespace routing
} // namespace osvr
