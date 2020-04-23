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
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDManager;
class CTiglUIDObject;
class CCPACSNacelleCowl;

namespace generated
{
    class CPACSNacelleGuideCurve;

    // This class is used in:
    // CPACSNacelleCowl

    class CPACSNacelleGuideCurves
    {
    public:
        TIGL_EXPORT CPACSNacelleGuideCurves(CCPACSNacelleCowl* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSNacelleGuideCurves();

        TIGL_EXPORT CCPACSNacelleCowl* GetParent();

        TIGL_EXPORT const CCPACSNacelleCowl* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<std::unique_ptr<CPACSNacelleGuideCurve>>& GetNacelleGuideCurves() const;
        TIGL_EXPORT virtual std::vector<std::unique_ptr<CPACSNacelleGuideCurve>>& GetNacelleGuideCurves();

        TIGL_EXPORT virtual CPACSNacelleGuideCurve& AddNacelleGuideCurve();
        TIGL_EXPORT virtual void RemoveNacelleGuideCurve(CPACSNacelleGuideCurve& ref);

    protected:
        CCPACSNacelleCowl* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::vector<std::unique_ptr<CPACSNacelleGuideCurve>> m_nacelleGuideCurves;

    private:
        CPACSNacelleGuideCurves(const CPACSNacelleGuideCurves&) = delete;
        CPACSNacelleGuideCurves& operator=(const CPACSNacelleGuideCurves&) = delete;

        CPACSNacelleGuideCurves(CPACSNacelleGuideCurves&&) = delete;
        CPACSNacelleGuideCurves& operator=(CPACSNacelleGuideCurves&&) = delete;
    };
} // namespace generated

// CPACSNacelleGuideCurves is customized, use type CCPACSNacelleGuideCurves directly

// Aliases in tigl namespace
using CCPACSNacelleGuideCurve = generated::CPACSNacelleGuideCurve;
} // namespace tigl
