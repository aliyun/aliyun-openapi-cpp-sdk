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

#include <alibabacloud/edas/model/ListUserDefineRegionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListUserDefineRegionResult::ListUserDefineRegionResult() :
	ServiceResult()
{}

ListUserDefineRegionResult::ListUserDefineRegionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserDefineRegionResult::~ListUserDefineRegionResult()
{}

void ListUserDefineRegionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserDefineRegionListNode = value["UserDefineRegionList"]["UserDefineRegionEntity"];
	for (auto valueUserDefineRegionListUserDefineRegionEntity : allUserDefineRegionListNode)
	{
		UserDefineRegionEntity userDefineRegionListObject;
		if(!valueUserDefineRegionListUserDefineRegionEntity["Id"].isNull())
			userDefineRegionListObject.id = std::stol(valueUserDefineRegionListUserDefineRegionEntity["Id"].asString());
		if(!valueUserDefineRegionListUserDefineRegionEntity["UserId"].isNull())
			userDefineRegionListObject.userId = valueUserDefineRegionListUserDefineRegionEntity["UserId"].asString();
		if(!valueUserDefineRegionListUserDefineRegionEntity["RegionId"].isNull())
			userDefineRegionListObject.regionId = valueUserDefineRegionListUserDefineRegionEntity["RegionId"].asString();
		if(!valueUserDefineRegionListUserDefineRegionEntity["RegionName"].isNull())
			userDefineRegionListObject.regionName = valueUserDefineRegionListUserDefineRegionEntity["RegionName"].asString();
		if(!valueUserDefineRegionListUserDefineRegionEntity["Description"].isNull())
			userDefineRegionListObject.description = valueUserDefineRegionListUserDefineRegionEntity["Description"].asString();
		if(!valueUserDefineRegionListUserDefineRegionEntity["BelongRegion"].isNull())
			userDefineRegionListObject.belongRegion = valueUserDefineRegionListUserDefineRegionEntity["BelongRegion"].asString();
		if(!valueUserDefineRegionListUserDefineRegionEntity["DebugEnable"].isNull())
			userDefineRegionListObject.debugEnable = valueUserDefineRegionListUserDefineRegionEntity["DebugEnable"].asString() == "true";
		userDefineRegionList_.push_back(userDefineRegionListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListUserDefineRegionResult::getMessage()const
{
	return message_;
}

std::vector<ListUserDefineRegionResult::UserDefineRegionEntity> ListUserDefineRegionResult::getUserDefineRegionList()const
{
	return userDefineRegionList_;
}

int ListUserDefineRegionResult::getCode()const
{
	return code_;
}

