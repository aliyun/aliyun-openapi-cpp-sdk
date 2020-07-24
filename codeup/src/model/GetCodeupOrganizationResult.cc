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

#include <alibabacloud/codeup/model/GetCodeupOrganizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

GetCodeupOrganizationResult::GetCodeupOrganizationResult() :
	ServiceResult()
{}

GetCodeupOrganizationResult::GetCodeupOrganizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCodeupOrganizationResult::~GetCodeupOrganizationResult()
{}

void GetCodeupOrganizationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["OrganizationId"].isNull())
		result_.organizationId = resultNode["OrganizationId"].asString();
	if(!resultNode["Path"].isNull())
		result_.path = resultNode["Path"].asString();
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!resultNode["UpdatedAt"].isNull())
		result_.updatedAt = resultNode["UpdatedAt"].asString();
	if(!resultNode["NamespaceId"].isNull())
		result_.namespaceId = std::stol(resultNode["NamespaceId"].asString());
	if(!resultNode["UserRole"].isNull())
		result_.userRole = resultNode["UserRole"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string GetCodeupOrganizationResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetCodeupOrganizationResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetCodeupOrganizationResult::getSuccess()const
{
	return success_;
}

GetCodeupOrganizationResult::Result GetCodeupOrganizationResult::getResult()const
{
	return result_;
}

