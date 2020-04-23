// Copyright (c) 2020 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <string>
#include <cctype>

#include "CTiglError.h"
#include "to_string.h"

namespace tigl
{
namespace generated
{
    // This enum is used in:
    // CPACSEnginePosition
    // CPACSEnginePylon
    // CPACSFuselage
    // CPACSGenericGeometricComponent
    // CPACSGuideCurveProfileGeometry
    // CPACSProfileGeometry
    // CPACSRotor
    // CPACSWing

    enum CPACSSymmetry
    {
        x_y_plane,
        x_z_plane,
        y_z_plane
    };

    inline std::string TiglSymmetryAxisToString(const CPACSSymmetry& value)
    {
        switch(value) {
        case x_y_plane: return "x-y-plane";
        case x_z_plane: return "x-z-plane";
        case y_z_plane: return "y-z-plane";
        default: throw CTiglError("Invalid enum value \"" + std_to_string(static_cast<int>(value)) + "\" for enum type CPACSSymmetry");
        }
    }
    inline CPACSSymmetry stringToTiglSymmetryAxis(const std::string& value)
    {
        auto toLower = [](std::string str) { for (char& c : str) { c = std::tolower(c); } return str; };
        if (toLower(value) == "x-y-plane") { return x_y_plane; }
        if (toLower(value) == "x-z-plane") { return x_z_plane; }
        if (toLower(value) == "y-z-plane") { return y_z_plane; }
        throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSSymmetry");
    }
} // namespace generated

// CPACSSymmetry is customized, use type TiglSymmetryAxis directly
} // namespace tigl
