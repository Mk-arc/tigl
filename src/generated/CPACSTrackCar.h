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

#include <CCPACSMaterialDefinition.h>
#include <string>
#include <tixi.h>
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CTiglUIDObject;

namespace generated
{
    class CPACSTrackStructure;

    // This class is used in:
    // CPACSTrackStructure

    /// @brief trackCarType
    /// 
    /// 
    /// 
    class CPACSTrackCar
    {
    public:
        TIGL_EXPORT CPACSTrackCar(CPACSTrackStructure* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSTrackCar();

        TIGL_EXPORT CPACSTrackStructure* GetParent();

        TIGL_EXPORT const CPACSTrackStructure* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const CCPACSMaterialDefinition& GetMaterial() const;
        TIGL_EXPORT virtual CCPACSMaterialDefinition& GetMaterial();

    protected:
        CPACSTrackStructure* m_parent;

        CTiglUIDManager* m_uidMgr;

        /// Definition of the material properties.
        CCPACSMaterialDefinition m_material;

    private:
        CPACSTrackCar(const CPACSTrackCar&) = delete;
        CPACSTrackCar& operator=(const CPACSTrackCar&) = delete;

        CPACSTrackCar(CPACSTrackCar&&) = delete;
        CPACSTrackCar& operator=(CPACSTrackCar&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSTrackCar = generated::CPACSTrackCar;
using CCPACSTrackStructure = generated::CPACSTrackStructure;
} // namespace tigl
