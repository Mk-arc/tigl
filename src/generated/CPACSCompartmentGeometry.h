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
#include <tixi.h>
#include <vector>
#include "ITiglUIDRefObject.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CTiglUIDObject;

namespace generated
{
    class CPACSCompartment;

    // This class is used in:
    // CPACSCompartment

    class CPACSCompartmentGeometry : public ITiglUIDRefObject
    {
    public:
        TIGL_EXPORT CPACSCompartmentGeometry(CPACSCompartment* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSCompartmentGeometry();

        TIGL_EXPORT CPACSCompartment* GetParent();

        TIGL_EXPORT const CPACSCompartment* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<std::string>& GetBoundaryElementUIDs() const;
        TIGL_EXPORT virtual std::vector<std::string>& GetBoundaryElementUIDs();

    protected:
        CPACSCompartment* m_parent;

        CTiglUIDManager* m_uidMgr;

        /// UIDs of 2d structural fuselage elements
        /// (e.g., pressure bulkheads, walls or
        /// floors). The compartment will be
        /// enclosed with the fuselage skin
        std::vector<std::string> m_boundaryElementUIDs;

    private:
        TIGL_EXPORT const CTiglUIDObject* GetNextUIDObject() const final;
        TIGL_EXPORT void NotifyUIDChange(const std::string& oldUid, const std::string& newUid) final;

        CPACSCompartmentGeometry(const CPACSCompartmentGeometry&) = delete;
        CPACSCompartmentGeometry& operator=(const CPACSCompartmentGeometry&) = delete;

        CPACSCompartmentGeometry(CPACSCompartmentGeometry&&) = delete;
        CPACSCompartmentGeometry& operator=(CPACSCompartmentGeometry&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSCompartmentGeometry = generated::CPACSCompartmentGeometry;
using CCPACSCompartment = generated::CPACSCompartment;
} // namespace tigl