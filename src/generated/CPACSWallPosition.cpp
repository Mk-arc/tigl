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
#include "CPACSWallPosition.h"
#include "CPACSWallPositions.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSWallPosition::CPACSWallPosition(CPACSWallPositions* parent, CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
        , m_y(0)
        , m_z(0)
    {
        //assert(parent != NULL);
        m_parent = parent;
    }

    CPACSWallPosition::~CPACSWallPosition()
    {
        if (m_uidMgr && m_uID) m_uidMgr->TryUnregisterObject(*m_uID);
        if (m_uidMgr) {
            if (m_bulkheadUID_choice1 && !m_bulkheadUID_choice1->empty()) m_uidMgr->TryUnregisterReference(*m_bulkheadUID_choice1, *this);
            if (m_wallSegmentUID_choice2 && !m_wallSegmentUID_choice2->empty()) m_uidMgr->TryUnregisterReference(*m_wallSegmentUID_choice2, *this);
            if (m_fuselageSectionUID_choice3 && !m_fuselageSectionUID_choice3->empty()) m_uidMgr->TryUnregisterReference(*m_fuselageSectionUID_choice3, *this);
        }
    }

    const CPACSWallPositions* CPACSWallPosition::GetParent() const
    {
        return m_parent;
    }

    CPACSWallPositions* CPACSWallPosition::GetParent()
    {
        return m_parent;
    }

    const CTiglUIDObject* CPACSWallPosition::GetNextUIDParent() const
    {
        if (m_parent) {
            return m_parent->GetNextUIDParent();
        }
        return nullptr;
    }

    CTiglUIDObject* CPACSWallPosition::GetNextUIDParent()
    {
        if (m_parent) {
            return m_parent->GetNextUIDParent();
        }
        return nullptr;
    }

    CTiglUIDManager& CPACSWallPosition::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSWallPosition::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSWallPosition::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read attribute uID
        if (tixi::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
            m_uID = tixi::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            if (m_uID->empty()) {
                LOG(WARNING) << "Optional attribute uID is present but empty at xpath " << xpath;
            }
        }

        // read element bulkheadUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/bulkheadUID")) {
            m_bulkheadUID_choice1 = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/bulkheadUID");
            if (m_bulkheadUID_choice1->empty()) {
                LOG(WARNING) << "Optional element bulkheadUID is present but empty at xpath " << xpath;
            }
            if (m_uidMgr && !m_bulkheadUID_choice1->empty()) m_uidMgr->RegisterReference(*m_bulkheadUID_choice1, *this);
        }

        // read element wallSegmentUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/wallSegmentUID")) {
            m_wallSegmentUID_choice2 = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/wallSegmentUID");
            if (m_wallSegmentUID_choice2->empty()) {
                LOG(WARNING) << "Optional element wallSegmentUID is present but empty at xpath " << xpath;
            }
            if (m_uidMgr && !m_wallSegmentUID_choice2->empty()) m_uidMgr->RegisterReference(*m_wallSegmentUID_choice2, *this);
        }

        // read element fuselageSectionUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/fuselageSectionUID")) {
            m_fuselageSectionUID_choice3 = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/fuselageSectionUID");
            if (m_fuselageSectionUID_choice3->empty()) {
                LOG(WARNING) << "Optional element fuselageSectionUID is present but empty at xpath " << xpath;
            }
            if (m_uidMgr && !m_fuselageSectionUID_choice3->empty()) m_uidMgr->RegisterReference(*m_fuselageSectionUID_choice3, *this);
        }

        // read element x
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/x")) {
            m_x_choice4 = tixi::TixiGetElement<double>(tixiHandle, xpath + "/x");
        }

        // read element y
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/y")) {
            m_y = tixi::TixiGetElement<double>(tixiHandle, xpath + "/y");
        }
        else {
            LOG(ERROR) << "Required element y is missing at xpath " << xpath;
        }

        // read element z
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/z")) {
            m_z = tixi::TixiGetElement<double>(tixiHandle, xpath + "/z");
        }
        else {
            LOG(ERROR) << "Required element z is missing at xpath " << xpath;
        }

        if (m_uidMgr && m_uID) m_uidMgr->RegisterObject(*m_uID, *this);
        if (!ValidateChoices()) {
            LOG(ERROR) << "Invalid choice configuration at xpath " << xpath;
        }
    }

    void CPACSWallPosition::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        const std::vector<std::string> childElemOrder = { "bulkheadUID", "wallSegmentUID", "fuselageSectionUID", "x", "y", "z" };

        // write attribute uID
        if (m_uID) {
            tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", *m_uID);
        }
        else {
            if (tixi::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                tixi::TixiRemoveAttribute(tixiHandle, xpath, "uID");
            }
        }

        // write element bulkheadUID
        if (m_bulkheadUID_choice1) {
            tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/bulkheadUID", childElemOrder);
            tixi::TixiSaveElement(tixiHandle, xpath + "/bulkheadUID", *m_bulkheadUID_choice1);
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/bulkheadUID")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/bulkheadUID");
            }
        }

        // write element wallSegmentUID
        if (m_wallSegmentUID_choice2) {
            tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/wallSegmentUID", childElemOrder);
            tixi::TixiSaveElement(tixiHandle, xpath + "/wallSegmentUID", *m_wallSegmentUID_choice2);
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/wallSegmentUID")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/wallSegmentUID");
            }
        }

        // write element fuselageSectionUID
        if (m_fuselageSectionUID_choice3) {
            tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/fuselageSectionUID", childElemOrder);
            tixi::TixiSaveElement(tixiHandle, xpath + "/fuselageSectionUID", *m_fuselageSectionUID_choice3);
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/fuselageSectionUID")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/fuselageSectionUID");
            }
        }

        // write element x
        if (m_x_choice4) {
            tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/x", childElemOrder);
            tixi::TixiSaveElement(tixiHandle, xpath + "/x", *m_x_choice4);
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/x")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/x");
            }
        }

        // write element y
        tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/y", childElemOrder);
        tixi::TixiSaveElement(tixiHandle, xpath + "/y", m_y);

        // write element z
        tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/z", childElemOrder);
        tixi::TixiSaveElement(tixiHandle, xpath + "/z", m_z);

    }

    bool CPACSWallPosition::ValidateChoices() const
    {
        return
        (
            (
                (
                    // mandatory elements of this choice must be there
                    m_bulkheadUID_choice1.is_initialized()
                    &&
                    // elements of other choices must not be there
                    !(
                        m_wallSegmentUID_choice2.is_initialized()
                        ||
                        m_fuselageSectionUID_choice3.is_initialized()
                        ||
                        m_x_choice4.is_initialized()
                    )
                )
                +
                (
                    // mandatory elements of this choice must be there
                    m_wallSegmentUID_choice2.is_initialized()
                    &&
                    // elements of other choices must not be there
                    !(
                        m_bulkheadUID_choice1.is_initialized()
                        ||
                        m_fuselageSectionUID_choice3.is_initialized()
                        ||
                        m_x_choice4.is_initialized()
                    )
                )
                +
                (
                    // mandatory elements of this choice must be there
                    m_fuselageSectionUID_choice3.is_initialized()
                    &&
                    // elements of other choices must not be there
                    !(
                        m_bulkheadUID_choice1.is_initialized()
                        ||
                        m_wallSegmentUID_choice2.is_initialized()
                        ||
                        m_x_choice4.is_initialized()
                    )
                )
                +
                (
                    // mandatory elements of this choice must be there
                    m_x_choice4.is_initialized()
                    &&
                    // elements of other choices must not be there
                    !(
                        m_bulkheadUID_choice1.is_initialized()
                        ||
                        m_wallSegmentUID_choice2.is_initialized()
                        ||
                        m_fuselageSectionUID_choice3.is_initialized()
                    )
                )
                == 1
            )
        )
        ;
    }

    const boost::optional<std::string>& CPACSWallPosition::GetUID() const
    {
        return m_uID;
    }

    void CPACSWallPosition::SetUID(const boost::optional<std::string>& value)
    {
        if (m_uidMgr && value != m_uID) {
            if (!m_uID && value) {
                m_uidMgr->RegisterObject(*value, *this);
            }
            else if (m_uID && !value) {
                m_uidMgr->TryUnregisterObject(*m_uID);
            }
            else if (m_uID && value) {
                m_uidMgr->UpdateObjectUID(*m_uID, *value);
            }
        }
        m_uID = value;
    }

    const boost::optional<std::string>& CPACSWallPosition::GetBulkheadUID_choice1() const
    {
        return m_bulkheadUID_choice1;
    }

    void CPACSWallPosition::SetBulkheadUID_choice1(const boost::optional<std::string>& value)
    {
        if (m_uidMgr) {
            if (m_bulkheadUID_choice1 && !m_bulkheadUID_choice1->empty()) m_uidMgr->TryUnregisterReference(*m_bulkheadUID_choice1, *this);
            if (value && !value->empty()) m_uidMgr->RegisterReference(*value, *this);
        }
        m_bulkheadUID_choice1 = value;
    }

    const boost::optional<std::string>& CPACSWallPosition::GetWallSegmentUID_choice2() const
    {
        return m_wallSegmentUID_choice2;
    }

    void CPACSWallPosition::SetWallSegmentUID_choice2(const boost::optional<std::string>& value)
    {
        if (m_uidMgr) {
            if (m_wallSegmentUID_choice2 && !m_wallSegmentUID_choice2->empty()) m_uidMgr->TryUnregisterReference(*m_wallSegmentUID_choice2, *this);
            if (value && !value->empty()) m_uidMgr->RegisterReference(*value, *this);
        }
        m_wallSegmentUID_choice2 = value;
    }

    const boost::optional<std::string>& CPACSWallPosition::GetFuselageSectionUID_choice3() const
    {
        return m_fuselageSectionUID_choice3;
    }

    void CPACSWallPosition::SetFuselageSectionUID_choice3(const boost::optional<std::string>& value)
    {
        if (m_uidMgr) {
            if (m_fuselageSectionUID_choice3 && !m_fuselageSectionUID_choice3->empty()) m_uidMgr->TryUnregisterReference(*m_fuselageSectionUID_choice3, *this);
            if (value && !value->empty()) m_uidMgr->RegisterReference(*value, *this);
        }
        m_fuselageSectionUID_choice3 = value;
    }

    const boost::optional<double>& CPACSWallPosition::GetX_choice4() const
    {
        return m_x_choice4;
    }

    void CPACSWallPosition::SetX_choice4(const boost::optional<double>& value)
    {
        m_x_choice4 = value;
    }

    const double& CPACSWallPosition::GetY() const
    {
        return m_y;
    }

    void CPACSWallPosition::SetY(const double& value)
    {
        m_y = value;
    }

    const double& CPACSWallPosition::GetZ() const
    {
        return m_z;
    }

    void CPACSWallPosition::SetZ(const double& value)
    {
        m_z = value;
    }

    const CTiglUIDObject* CPACSWallPosition::GetNextUIDObject() const
    {
        return this;
    }

    void CPACSWallPosition::NotifyUIDChange(const std::string& oldUid, const std::string& newUid)
    {
        if (m_bulkheadUID_choice1 && *m_bulkheadUID_choice1 == oldUid) {
            m_bulkheadUID_choice1 = newUid;
        }
        if (m_wallSegmentUID_choice2 && *m_wallSegmentUID_choice2 == oldUid) {
            m_wallSegmentUID_choice2 = newUid;
        }
        if (m_fuselageSectionUID_choice3 && *m_fuselageSectionUID_choice3 == oldUid) {
            m_fuselageSectionUID_choice3 = newUid;
        }
    }

} // namespace generated
} // namespace tigl
