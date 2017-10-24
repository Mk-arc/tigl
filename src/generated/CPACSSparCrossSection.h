// Copyright (c) 2016 RISC Software GmbH
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
#include <string>
#include <tixi.h>
#include "CPACSCap.h"
#include "CPACSSparCells.h"
#include "CPACSWeb.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
    class CTiglUIDManager;
    class CCPACSWingSparSegment;
    
    namespace generated
    {
        // This class is used in:
        // CPACSSparSegment
        
        // generated from /xsd:schema/xsd:complexType[785]
        class CPACSSparCrossSection
        {
        public:
            TIGL_EXPORT CPACSSparCrossSection(CCPACSWingSparSegment* parent, CTiglUIDManager* uidMgr);
            
            TIGL_EXPORT virtual ~CPACSSparCrossSection();
            
            TIGL_EXPORT CCPACSWingSparSegment* GetParent() const;
            
            TIGL_EXPORT CTiglUIDManager& GetUIDManager();
            TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT virtual const boost::optional<CPACSCap>& GetUpperCap() const;
            TIGL_EXPORT virtual boost::optional<CPACSCap>& GetUpperCap();
            
            TIGL_EXPORT virtual const boost::optional<CPACSCap>& GetLowerCap() const;
            TIGL_EXPORT virtual boost::optional<CPACSCap>& GetLowerCap();
            
            TIGL_EXPORT virtual const CPACSWeb& GetWeb1() const;
            TIGL_EXPORT virtual CPACSWeb& GetWeb1();
            
            TIGL_EXPORT virtual const boost::optional<CPACSWeb>& GetWeb2() const;
            TIGL_EXPORT virtual boost::optional<CPACSWeb>& GetWeb2();
            
            TIGL_EXPORT virtual const boost::optional<CPACSSparCells>& GetSparCells() const;
            TIGL_EXPORT virtual boost::optional<CPACSSparCells>& GetSparCells();
            
            TIGL_EXPORT virtual const double& GetRotation() const;
            TIGL_EXPORT virtual void SetRotation(const double& value);
            
            TIGL_EXPORT virtual CPACSCap& GetUpperCap(CreateIfNotExistsTag);
            TIGL_EXPORT virtual void RemoveUpperCap();
            
            TIGL_EXPORT virtual CPACSCap& GetLowerCap(CreateIfNotExistsTag);
            TIGL_EXPORT virtual void RemoveLowerCap();
            
            TIGL_EXPORT virtual CPACSWeb& GetWeb2(CreateIfNotExistsTag);
            TIGL_EXPORT virtual void RemoveWeb2();
            
            TIGL_EXPORT virtual CPACSSparCells& GetSparCells(CreateIfNotExistsTag);
            TIGL_EXPORT virtual void RemoveSparCells();
            
        protected:
            CCPACSWingSparSegment* m_parent;
            
            CTiglUIDManager* m_uidMgr;
            
            boost::optional<CPACSCap>       m_upperCap;
            boost::optional<CPACSCap>       m_lowerCap;
            CPACSWeb                        m_web1;
            boost::optional<CPACSWeb>       m_web2;
            boost::optional<CPACSSparCells> m_sparCells;
            double                          m_rotation;
            
        private:
            #ifdef HAVE_CPP11
            CPACSSparCrossSection(const CPACSSparCrossSection&) = delete;
            CPACSSparCrossSection& operator=(const CPACSSparCrossSection&) = delete;
            
            CPACSSparCrossSection(CPACSSparCrossSection&&) = delete;
            CPACSSparCrossSection& operator=(CPACSSparCrossSection&&) = delete;
            #else
            CPACSSparCrossSection(const CPACSSparCrossSection&);
            CPACSSparCrossSection& operator=(const CPACSSparCrossSection&);
            #endif
        };
    }
    
    // Aliases in tigl namespace
    #ifdef HAVE_CPP11
    using CCPACSSparCrossSection = generated::CPACSSparCrossSection;
    #else
    typedef generated::CPACSSparCrossSection CCPACSSparCrossSection;
    #endif
}