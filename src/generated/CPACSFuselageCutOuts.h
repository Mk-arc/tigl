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

#include <string>
#include <tixi.h>
#include <vector>
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
    class CTiglUIDManager;
    
    namespace generated
    {
        class CPACSFuselageCutOut;
        
        // This class is used in:
        // CPACSFuselage
        
        // generated from /xsd:schema/xsd:complexType[360]
        class CPACSFuselageCutOuts
        {
        public:
            TIGL_EXPORT CPACSFuselageCutOuts(CTiglUIDManager* uidMgr);
            TIGL_EXPORT virtual ~CPACSFuselageCutOuts();
            
            TIGL_EXPORT CTiglUIDManager& GetUIDManager();
            TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT virtual const std::vector<unique_ptr<CPACSFuselageCutOut> >& GetElements() const;
            TIGL_EXPORT virtual std::vector<unique_ptr<CPACSFuselageCutOut> >& GetElements();
            
            TIGL_EXPORT virtual CPACSFuselageCutOut& AddElement();
            TIGL_EXPORT virtual void RemoveElement(CPACSFuselageCutOut& ref);
            
        protected:
            CTiglUIDManager* m_uidMgr;
            
            std::vector<unique_ptr<CPACSFuselageCutOut> > m_elements;
            
        private:
            #ifdef HAVE_CPP11
            CPACSFuselageCutOuts(const CPACSFuselageCutOuts&) = delete;
            CPACSFuselageCutOuts& operator=(const CPACSFuselageCutOuts&) = delete;
            
            CPACSFuselageCutOuts(CPACSFuselageCutOuts&&) = delete;
            CPACSFuselageCutOuts& operator=(CPACSFuselageCutOuts&&) = delete;
            #else
            CPACSFuselageCutOuts(const CPACSFuselageCutOuts&);
            CPACSFuselageCutOuts& operator=(const CPACSFuselageCutOuts&);
            #endif
        };
    }
    
    // Aliases in tigl namespace
    #ifdef HAVE_CPP11
    using CCPACSFuselageCutOuts = generated::CPACSFuselageCutOuts;
    using CCPACSFuselageCutOut = generated::CPACSFuselageCutOut;
    #else
    typedef generated::CPACSFuselageCutOuts CCPACSFuselageCutOuts;
    typedef generated::CPACSFuselageCutOut CCPACSFuselageCutOut;
    #endif
}