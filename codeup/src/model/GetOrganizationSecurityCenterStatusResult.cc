/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/codeup/model/GetOrganizationSecurityCenterStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

GetOrganizationSecurityCenterStatusResult::GetOrganizationSecurityCenterStatusResult() :
	ServiceResult()
{}

GetOrganizationSecurityCenterStatusResult::GetOrganizationSecurityCenterStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOrganizationSecurityCenterStatusResult::~GetOrganizationSecurityCenterStatusResult()
{}

void GetOrganizationSecurityCenterStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Enable"].isNull())
		result_.enable = resultNode["Enable"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetOrganizationSecurityCenterStatusResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetOrganizationSecurityCenterStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetOrganizationSecurityCenterStatusResult::getSuccess()const
{
	return success_;
}

GetOrganizationSecurityCenterStatusResult::Result GetOrganizationSecurityCenterStatusResult::getResult()const
{
	return result_;
}

