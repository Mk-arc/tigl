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
#include <cctype>

#include "CTiglError.h"
#include "to_string.h"

namespace tigl
{
    namespace generated
    {
        // This enum is used in:
        // CPACSRotorHub
        
        // generated from /xsd:schema/xsd:complexType[742]/xsd:complexContent/xsd:extension/xsd:all/xsd:element[3]/xsd:simpleType
        #ifdef HAVE_CPP11
        enum class CPACSRotorHub_type
        #else
        enum CPACSRotorHub_type
        #endif
        {
            semiRigid,
            rigid,
            articulated,
            hingeless
        };
        
        #ifdef HAVE_CPP11
        inline std::string CPACSRotorHub_typeToString(const CPACSRotorHub_type& value)
        {
            switch(value) {
            case CPACSRotorHub_type::semiRigid: return "semiRigid";
            case CPACSRotorHub_type::rigid: return "rigid";
            case CPACSRotorHub_type::articulated: return "articulated";
            case CPACSRotorHub_type::hingeless: return "hingeless";
            default: throw CTiglError("Invalid enum value \"" + std_to_string(static_cast<int>(value)) + "\" for enum type CPACSRotorHub_type");
            }
        }
        inline CPACSRotorHub_type stringToCPACSRotorHub_type(const std::string& value)
        {
            auto toLower = [](std::string str) { for (char& c : str) { c = std::tolower(c); } return str; };
            if (toLower(value) == "semirigid") { return CPACSRotorHub_type::semiRigid; }
            if (toLower(value) == "rigid") { return CPACSRotorHub_type::rigid; }
            if (toLower(value) == "articulated") { return CPACSRotorHub_type::articulated; }
            if (toLower(value) == "hingeless") { return CPACSRotorHub_type::hingeless; }
            throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSRotorHub_type");
        }
        #else
        inline std::string CPACSRotorHub_typeToString(const CPACSRotorHub_type& value)
        {
            switch(value) {
            case semiRigid: return "semiRigid";
            case rigid: return "rigid";
            case articulated: return "articulated";
            case hingeless: return "hingeless";
            default: throw CTiglError("Invalid enum value \"" + std_to_string(static_cast<int>(value)) + "\" for enum type CPACSRotorHub_type");
            }
        }
        inline CPACSRotorHub_type stringToCPACSRotorHub_type(const std::string& value)
        {
            struct ToLower { std::string operator()(std::string str) { for (std::size_t i = 0; i < str.length(); i++) { str[i] = std::tolower(str[i]); } return str; } } toLower;
            if (toLower(value) == "semirigid") { return semiRigid; }
            if (toLower(value) == "rigid") { return rigid; }
            if (toLower(value) == "articulated") { return articulated; }
            if (toLower(value) == "hingeless") { return hingeless; }
            throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSRotorHub_type");
        }
        #endif
    }
    
    // Aliases in tigl namespace
    #ifdef HAVE_CPP11
    using ECPACSRotorHub_type = generated::CPACSRotorHub_type;
    #else
    typedef generated::CPACSRotorHub_type ECPACSRotorHub_type;
    #endif
}