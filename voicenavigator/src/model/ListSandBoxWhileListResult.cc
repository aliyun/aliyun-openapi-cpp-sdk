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

#include <alibabacloud/voicenavigator/model/ListSandBoxWhileListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

ListSandBoxWhileListResult::ListSandBoxWhileListResult() :
	ServiceResult()
{}

ListSandBoxWhileListResult::ListSandBoxWhileListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSandBoxWhileListResult::~ListSandBoxWhileListResult()
{}

void ListSandBoxWhileListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWhiteListNode = value["WhiteList"]["WhiteListItem"];
	for (auto valueWhiteListWhiteListItem : allWhiteListNode)
	{
		WhiteListItem whiteListObject;
		if(!valueWhiteListWhiteListItem["Uuid"].isNull())
			whiteListObject.uuid = valueWhiteListWhiteListItem["Uuid"].asString();
		if(!valueWhiteListWhiteListItem["PhoneNumber"].isNull())
			whiteListObject.phoneNumber = valueWhiteListWhiteListItem["PhoneNumber"].asString();
		if(!valueWhiteListWhiteListItem["Description"].isNull())
			whiteListObject.description = valueWhiteListWhiteListItem["Description"].asString();
		if(!valueWhiteListWhiteListItem["IsEnable"].isNull())
			whiteListObject.isEnable = std::stoi(valueWhiteListWhiteListItem["IsEnable"].asString());
		if(!valueWhiteListWhiteListItem["GmtCreate"].isNull())
			whiteListObject.gmtCreate = std::stol(valueWhiteListWhiteListItem["GmtCreate"].asString());
		if(!valueWhiteListWhiteListItem["InstanceId"].isNull())
			whiteListObject.instanceId = valueWhiteListWhiteListItem["InstanceId"].asString();
		if(!valueWhiteListWhiteListItem["GmtModified"].isNull())
			whiteListObject.gmtModified = std::stol(valueWhiteListWhiteListItem["GmtModified"].asString());
		if(!valueWhiteListWhiteListItem["Name"].isNull())
			whiteListObject.name = valueWhiteListWhiteListItem["Name"].asString();
		whiteList_.push_back(whiteListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListSandBoxWhileListResult::getTotalCount()const
{
	return totalCount_;
}

int ListSandBoxWhileListResult::getPageSize()const
{
	return pageSize_;
}

int ListSandBoxWhileListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListSandBoxWhileListResult::WhiteListItem> ListSandBoxWhileListResult::getWhiteList()const
{
	return whiteList_;
}

