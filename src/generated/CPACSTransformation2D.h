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
#include "CPACSPointZ.h"
#include "CreateIfNotExists.h"
#include "CTiglUIDObject.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSProfileBasedStructuralElement;

namespace generated
{
    // This class is used in:
    // CPACSProfileBasedStructuralElement

    /// @brief transformation2DType
    /// 
    /// 
    /// 
    class CPACSTransformation2D : public CTiglReqUIDObject
    {
    public:
        TIGL_EXPORT CPACSTransformation2D(CCPACSProfileBasedStructuralElement* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSTransformation2D();

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

        TIGL_EXPORT virtual const boost::optional<CCPACSPointXY>& GetScaling() const;
        TIGL_EXPORT virtual boost::optional<CCPACSPointXY>& GetScaling();

        TIGL_EXPORT virtual const boost::optional<CPACSPointZ>& GetRotation() const;
        TIGL_EXPORT virtual boost::optional<CPACSPointZ>& GetRotation();

        TIGL_EXPORT virtual const boost::optional<CCPACSPointXY>& GetTranslation() const;
        TIGL_EXPORT virtual boost::optional<CCPACSPointXY>& GetTranslation();

        TIGL_EXPORT virtual CCPACSPointXY& GetScaling(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveScaling();

        TIGL_EXPORT virtual CPACSPointZ& GetRotation(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveRotation();

        TIGL_EXPORT virtual CCPACSPointXY& GetTranslation(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveTranslation();

    protected:
        CCPACSProfileBasedStructuralElement* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                    m_uID;

        /// Scaling of the structural profile
        boost::optional<CCPACSPointXY> m_scaling;

        /// rotation around z-axis of profile definition
        boost::optional<CPACSPointZ>   m_rotation;

        /// translation of profile definition
        boost::optional<CCPACSPointXY> m_translation;

    private:
        CPACSTransformation2D(const CPACSTransformation2D&) = delete;
        CPACSTransformation2D& operator=(const CPACSTransformation2D&) = delete;

        CPACSTransformation2D(CPACSTransformation2D&&) = delete;
        CPACSTransformation2D& operator=(CPACSTransformation2D&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSTransformation2D = generated::CPACSTransformation2D;
} // namespace tigl
