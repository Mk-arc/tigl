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
#include <CCPACSDoors.h>
#include <CCPACSPressureBulkheads.h>
#include <string>
#include <tixi.h>
#include "CPACSDoorSurroundStructuresAssembly.h"
#include "CPACSProfileBasedStructuralElements.h"
#include "CPACSRivets.h"
#include "CPACSSeatModules.h"
#include "CPACSSheetBasedStructuralElements.h"
#include "CPACSStructuralWallElements.h"
#include "CPACSWindows.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CTiglUIDObject;

namespace generated
{
    class CPACSVehicles;

    // This class is used in:
    // CPACSVehicles

    /// @brief structuralElementsType
    /// 
    /// structuralElements Type, containing the different structural
    /// elements
    /// 
    class CPACSStructuralElements
    {
    public:
        TIGL_EXPORT CPACSStructuralElements(CPACSVehicles* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSStructuralElements();

        TIGL_EXPORT CPACSVehicles* GetParent();

        TIGL_EXPORT const CPACSVehicles* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const boost::optional<CPACSSheetBasedStructuralElements>& GetSheetBasedStructuralElements() const;
        TIGL_EXPORT virtual boost::optional<CPACSSheetBasedStructuralElements>& GetSheetBasedStructuralElements();

        TIGL_EXPORT virtual const boost::optional<CPACSProfileBasedStructuralElements>& GetProfileBasedStructuralElements() const;
        TIGL_EXPORT virtual boost::optional<CPACSProfileBasedStructuralElements>& GetProfileBasedStructuralElements();

        TIGL_EXPORT virtual const boost::optional<CPACSStructuralWallElements>& GetStructuralWallElements() const;
        TIGL_EXPORT virtual boost::optional<CPACSStructuralWallElements>& GetStructuralWallElements();

        TIGL_EXPORT virtual const boost::optional<CCPACSPressureBulkheads>& GetPressureBulkheads() const;
        TIGL_EXPORT virtual boost::optional<CCPACSPressureBulkheads>& GetPressureBulkheads();

        TIGL_EXPORT virtual const boost::optional<CPACSWindows>& GetWindows() const;
        TIGL_EXPORT virtual boost::optional<CPACSWindows>& GetWindows();

        TIGL_EXPORT virtual const boost::optional<CCPACSDoors>& GetDoors() const;
        TIGL_EXPORT virtual boost::optional<CCPACSDoors>& GetDoors();

        TIGL_EXPORT virtual const boost::optional<CPACSDoorSurroundStructuresAssembly>& GetDoorSurroundStructures() const;
        TIGL_EXPORT virtual boost::optional<CPACSDoorSurroundStructuresAssembly>& GetDoorSurroundStructures();

        TIGL_EXPORT virtual const boost::optional<CPACSSeatModules>& GetSeatModules() const;
        TIGL_EXPORT virtual boost::optional<CPACSSeatModules>& GetSeatModules();

        TIGL_EXPORT virtual const boost::optional<CPACSRivets>& GetRivets() const;
        TIGL_EXPORT virtual boost::optional<CPACSRivets>& GetRivets();

        TIGL_EXPORT virtual CPACSSheetBasedStructuralElements& GetSheetBasedStructuralElements(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveSheetBasedStructuralElements();

        TIGL_EXPORT virtual CPACSProfileBasedStructuralElements& GetProfileBasedStructuralElements(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveProfileBasedStructuralElements();

        TIGL_EXPORT virtual CPACSStructuralWallElements& GetStructuralWallElements(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveStructuralWallElements();

        TIGL_EXPORT virtual CCPACSPressureBulkheads& GetPressureBulkheads(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemovePressureBulkheads();

        TIGL_EXPORT virtual CPACSWindows& GetWindows(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveWindows();

        TIGL_EXPORT virtual CCPACSDoors& GetDoors(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveDoors();

        TIGL_EXPORT virtual CPACSDoorSurroundStructuresAssembly& GetDoorSurroundStructures(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveDoorSurroundStructures();

        TIGL_EXPORT virtual CPACSSeatModules& GetSeatModules(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveSeatModules();

        TIGL_EXPORT virtual CPACSRivets& GetRivets(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveRivets();

    protected:
        CPACSVehicles* m_parent;

        CTiglUIDManager* m_uidMgr;

        boost::optional<CPACSSheetBasedStructuralElements>   m_sheetBasedStructuralElements;
        boost::optional<CPACSProfileBasedStructuralElements> m_profileBasedStructuralElements;
        boost::optional<CPACSStructuralWallElements>         m_structuralWallElements;
        boost::optional<CCPACSPressureBulkheads>             m_pressureBulkheads;
        boost::optional<CPACSWindows>                        m_windows;
        boost::optional<CCPACSDoors>                         m_doors;
        boost::optional<CPACSDoorSurroundStructuresAssembly> m_doorSurroundStructures;
        boost::optional<CPACSSeatModules>                    m_seatModules;
        boost::optional<CPACSRivets>                         m_rivets;

    private:
        CPACSStructuralElements(const CPACSStructuralElements&) = delete;
        CPACSStructuralElements& operator=(const CPACSStructuralElements&) = delete;

        CPACSStructuralElements(CPACSStructuralElements&&) = delete;
        CPACSStructuralElements& operator=(CPACSStructuralElements&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSStructuralElements = generated::CPACSStructuralElements;
using CCPACSVehicles = generated::CPACSVehicles;
} // namespace tigl
