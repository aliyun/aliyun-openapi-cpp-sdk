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

#include <alibabacloud/edas/model/InsertOrUpdateRegionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

InsertOrUpdateRegionResult::InsertOrUpdateRegionResult() :
	ServiceResult()
{}

InsertOrUpdateRegionResult::InsertOrUpdateRegionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InsertOrUpdateRegionResult::~InsertOrUpdateRegionResult()
{}

void InsertOrUpdateRegionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userDefineRegionEntityNode = value["UserDefineRegionEntity"];
	if(!userDefineRegionEntityNode["Id"].isNull())
		userDefineRegionEntity_.id = std::stol(userDefineRegionEntityNode["Id"].asString());
	if(!userDefineRegionEntityNode["UserId"].isNull())
		userDefineRegionEntity_.userId = userDefineRegionEntityNode["UserId"].asString();
	if(!userDefineRegionEntityNode["RegionId"].isNull())
		userDefineRegionEntity_.regionId = userDefineRegionEntityNode["RegionId"].asString();
	if(!userDefineRegionEntityNode["RegionName"].isNull())
		userDefineRegionEntity_.regionName = userDefineRegionEntityNode["RegionName"].asString();
	if(!userDefineRegionEntityNode["Description"].isNull())
		userDefineRegionEntity_.description = userDefineRegionEntityNode["Description"].asString();
	if(!userDefineRegionEntityNode["BelongRegion"].isNull())
		userDefineRegionEntity_.belongRegion = userDefineRegionEntityNode["BelongRegion"].asString();
	if(!userDefineRegionEntityNode["DebugEnable"].isNull())
		userDefineRegionEntity_.debugEnable = userDefineRegionEntityNode["DebugEnable"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string InsertOrUpdateRegionResult::getMessage()const
{
	return message_;
}

InsertOrUpdateRegionResult::UserDefineRegionEntity InsertOrUpdateRegionResult::getUserDefineRegionEntity()const
{
	return userDefineRegionEntity_;
}

int InsertOrUpdateRegionResult::getCode()const
{
	return code_;
}

