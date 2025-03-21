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

#include <alibabacloud/eiam/model/GetGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetGroupResult::GetGroupResult() :
	ServiceResult()
{}

GetGroupResult::GetGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGroupResult::~GetGroupResult()
{}

void GetGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto groupNode = value["Group"];
	if(!groupNode["GroupId"].isNull())
		group_.groupId = groupNode["GroupId"].asString();
	if(!groupNode["GroupName"].isNull())
		group_.groupName = groupNode["GroupName"].asString();
	if(!groupNode["Description"].isNull())
		group_.description = groupNode["Description"].asString();
	if(!groupNode["GroupExternalId"].isNull())
		group_.groupExternalId = groupNode["GroupExternalId"].asString();
	if(!groupNode["GroupSourceType"].isNull())
		group_.groupSourceType = groupNode["GroupSourceType"].asString();
	if(!groupNode["GroupSourceId"].isNull())
		group_.groupSourceId = groupNode["GroupSourceId"].asString();
	if(!groupNode["CreateTime"].isNull())
		group_.createTime = std::stol(groupNode["CreateTime"].asString());
	if(!groupNode["UpdateTime"].isNull())
		group_.updateTime = std::stol(groupNode["UpdateTime"].asString());
	if(!groupNode["InstanceId"].isNull())
		group_.instanceId = groupNode["InstanceId"].asString();

}

GetGroupResult::Group GetGroupResult::getGroup()const
{
	return group_;
}

