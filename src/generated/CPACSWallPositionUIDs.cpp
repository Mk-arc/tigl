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

#include <cassert>
#include "CCPACSFuselageWallSegment.h"
#include "CPACSWallPositionUIDs.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "CTiglUIDObject.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSWallPositionUIDs::CPACSWallPositionUIDs(CCPACSFuselageWallSegment* parent, CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
    {
        //assert(parent != NULL);
        m_parent = parent;
    }

    CPACSWallPositionUIDs::~CPACSWallPositionUIDs()
    {
        if (m_uidMgr) {
            for (std::vector<std::string>::iterator it = m_wallPositionUIDs.begin(); it != m_wallPositionUIDs.end(); ++it) {
                if (!it->empty()) m_uidMgr->TryUnregisterReference(*it, *this);
            }
        }
    }

    const CCPACSFuselageWallSegment* CPACSWallPositionUIDs::GetParent() const
    {
        return m_parent;
    }

    CCPACSFuselageWallSegment* CPACSWallPositionUIDs::GetParent()
    {
        return m_parent;
    }

    const CTiglUIDObject* CPACSWallPositionUIDs::GetNextUIDParent() const
    {
        if (m_parent) {
            if (m_parent->GetUID())
                return m_parent;
            else
                return m_parent->GetNextUIDParent();
        }
        return nullptr;
    }

    CTiglUIDObject* CPACSWallPositionUIDs::GetNextUIDParent()
    {
        if (m_parent) {
            if (m_parent->GetUID())
                return m_parent;
            else
                return m_parent->GetNextUIDParent();
        }
        return nullptr;
    }

    CTiglUIDManager& CPACSWallPositionUIDs::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSWallPositionUIDs::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSWallPositionUIDs::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read element wallPositionUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/wallPositionUID")) {
            tixi::TixiReadElements(tixiHandle, xpath + "/wallPositionUID", m_wallPositionUIDs, 2, tixi::xsdUnbounded);
            if (m_uidMgr) {
                for (std::vector<std::string>::iterator it = m_wallPositionUIDs.begin(); it != m_wallPositionUIDs.end(); ++it) {
                    if (!it->empty()) m_uidMgr->RegisterReference(*it, *this);
                }
            }
        }

    }

    void CPACSWallPositionUIDs::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write element wallPositionUID
        tixi::TixiSaveElements(tixiHandle, xpath + "/wallPositionUID", m_wallPositionUIDs);

    }

    const std::vector<std::string>& CPACSWallPositionUIDs::GetWallPositionUIDs() const
    {
        return m_wallPositionUIDs;
    }

    std::vector<std::string>& CPACSWallPositionUIDs::GetWallPositionUIDs()
    {
        return m_wallPositionUIDs;
    }

    const CTiglUIDObject* CPACSWallPositionUIDs::GetNextUIDObject() const
    {
        return GetNextUIDParent();
    }

    void CPACSWallPositionUIDs::NotifyUIDChange(const std::string& oldUid, const std::string& newUid)
    {
        for (auto& entry : m_wallPositionUIDs) {
            if (entry == oldUid) {
                entry = newUid;
            }
        }
    }

} // namespace generated
} // namespace tigl
