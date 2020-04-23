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

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <CCPACSPointXY.h>
#include <string>
#include <tixi.h>
#include "CPACSBeamCrossSection.h"
#include "CPACSBeamStiffness.h"
#include "CreateIfNotExists.h"
#include "CTiglUIDObject.h"
#include "ITiglUIDRefObject.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSProfileBasedStructuralElement;

namespace generated
{
    // This class is used in:
    // CPACSProfileBasedStructuralElement

    /// @brief globalBeamPropertiesType
    /// 
    /// globalBeamPropertiesType, containing the global beam
    /// properties such as EA, EI, mass
    /// 
    class CPACSGlobalBeamProperties : public CTiglReqUIDObject, public ITiglUIDRefObject
    {
    public:
        TIGL_EXPORT CPACSGlobalBeamProperties(CCPACSProfileBasedStructuralElement* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSGlobalBeamProperties();

        TIGL_EXPORT CCPACSProfileBasedStructuralElement* GetParent();

        TIGL_EXPORT const CCPACSProfileBasedStructuralElement* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetMaterialUID() const;
        TIGL_EXPORT virtual void SetMaterialUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetSource() const;
        TIGL_EXPORT virtual void SetSource(const std::string& value);

        TIGL_EXPORT virtual const bool& GetConsistancy() const;
        TIGL_EXPORT virtual void SetConsistancy(const bool& value);

        TIGL_EXPORT virtual const CPACSBeamCrossSection& GetBeamCrossSection() const;
        TIGL_EXPORT virtual CPACSBeamCrossSection& GetBeamCrossSection();

        TIGL_EXPORT virtual const CCPACSPointXY& GetBeamCOG() const;
        TIGL_EXPORT virtual CCPACSPointXY& GetBeamCOG();

        TIGL_EXPORT virtual const boost::optional<CCPACSPointXY>& GetBeamShearCenter() const;
        TIGL_EXPORT virtual boost::optional<CCPACSPointXY>& GetBeamShearCenter();

        TIGL_EXPORT virtual const boost::optional<CPACSBeamStiffness>& GetBeamStiffness() const;
        TIGL_EXPORT virtual boost::optional<CPACSBeamStiffness>& GetBeamStiffness();

        TIGL_EXPORT virtual const boost::optional<double>& GetBeamSpecificMass() const;
        TIGL_EXPORT virtual void SetBeamSpecificMass(const boost::optional<double>& value);

        TIGL_EXPORT virtual CCPACSPointXY& GetBeamShearCenter(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveBeamShearCenter();

        TIGL_EXPORT virtual CPACSBeamStiffness& GetBeamStiffness(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveBeamStiffness();

    protected:
        CCPACSProfileBasedStructuralElement* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                         m_uID;
        std::string                         m_materialUID;
        std::string                         m_source;
        bool                                m_consistancy;
        CPACSBeamCrossSection               m_beamCrossSection;
        CCPACSPointXY                       m_beamCOG;
        boost::optional<CCPACSPointXY>      m_beamShearCenter;
        boost::optional<CPACSBeamStiffness> m_beamStiffness;
        boost::optional<double>             m_beamSpecificMass;

    private:
        TIGL_EXPORT const CTiglUIDObject* GetNextUIDObject() const final;
        TIGL_EXPORT void NotifyUIDChange(const std::string& oldUid, const std::string& newUid) final;

        CPACSGlobalBeamProperties(const CPACSGlobalBeamProperties&) = delete;
        CPACSGlobalBeamProperties& operator=(const CPACSGlobalBeamProperties&) = delete;

        CPACSGlobalBeamProperties(CPACSGlobalBeamProperties&&) = delete;
        CPACSGlobalBeamProperties& operator=(CPACSGlobalBeamProperties&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSGlobalBeamProperties = generated::CPACSGlobalBeamProperties;
} // namespace tigl
