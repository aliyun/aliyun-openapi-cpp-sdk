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

#include <alibabacloud/dms-enterprise/model/CreateStandardGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

CreateStandardGroupResult::CreateStandardGroupResult() :
	ServiceResult()
{}

CreateStandardGroupResult::CreateStandardGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateStandardGroupResult::~CreateStandardGroupResult()
{}

void CreateStandardGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto standardGroupNode = value["StandardGroup"];
	if(!standardGroupNode["GroupName"].isNull())
		standardGroup_.groupName = standardGroupNode["GroupName"].asString();
	if(!standardGroupNode["Description"].isNull())
		standardGroup_.description = standardGroupNode["Description"].asString();
	if(!standardGroupNode["DbType"].isNull())
		standardGroup_.dbType = standardGroupNode["DbType"].asString();
	if(!standardGroupNode["LastMenderId"].isNull())
		standardGroup_.lastMenderId = std::stol(standardGroupNode["LastMenderId"].asString());
	if(!standardGroupNode["GroupMode"].isNull())
		standardGroup_.groupMode = standardGroupNode["GroupMode"].asString();
	if(!standardGroupNode["GroupId"].isNull())
		standardGroup_.groupId = std::stol(standardGroupNode["GroupId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

CreateStandardGroupResult::StandardGroup CreateStandardGroupResult::getStandardGroup()const
{
	return standardGroup_;
}

std::string CreateStandardGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateStandardGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateStandardGroupResult::getSuccess()const
{
	return success_;
}

