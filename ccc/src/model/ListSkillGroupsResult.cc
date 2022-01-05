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

#include <alibabacloud/ccc/model/ListSkillGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSkillGroupsResult::ListSkillGroupsResult() :
	ServiceResult()
{}

ListSkillGroupsResult::ListSkillGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillGroupsResult::~ListSkillGroupsResult()
{}

void ListSkillGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["SkillGroup"];
	for (auto dataNodeListSkillGroup : allListNode)
	{
		Data::SkillGroup skillGroupObject;
		if(!dataNodeListSkillGroup["DisplayName"].isNull())
			skillGroupObject.displayName = dataNodeListSkillGroup["DisplayName"].asString();
		if(!dataNodeListSkillGroup["Description"].isNull())
			skillGroupObject.description = dataNodeListSkillGroup["Description"].asString();
		if(!dataNodeListSkillGroup["PhoneNumberCount"].isNull())
			skillGroupObject.phoneNumberCount = std::stoi(dataNodeListSkillGroup["PhoneNumberCount"].asString());
		if(!dataNodeListSkillGroup["SkillGroupId"].isNull())
			skillGroupObject.skillGroupId = dataNodeListSkillGroup["SkillGroupId"].asString();
		if(!dataNodeListSkillGroup["SkillGroupName"].isNull())
			skillGroupObject.skillGroupName = dataNodeListSkillGroup["SkillGroupName"].asString();
		if(!dataNodeListSkillGroup["UserCount"].isNull())
			skillGroupObject.userCount = std::stoi(dataNodeListSkillGroup["UserCount"].asString());
		if(!dataNodeListSkillGroup["InstanceId"].isNull())
			skillGroupObject.instanceId = dataNodeListSkillGroup["InstanceId"].asString();
		data_.list.push_back(skillGroupObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSkillGroupsResult::getMessage()const
{
	return message_;
}

int ListSkillGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListSkillGroupsResult::Data ListSkillGroupsResult::getData()const
{
	return data_;
}

std::string ListSkillGroupsResult::getCode()const
{
	return code_;
}

