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

#include <alibabacloud/sas/model/DescribeAllGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAllGroupsResult::DescribeAllGroupsResult() :
	ServiceResult()
{}

DescribeAllGroupsResult::DescribeAllGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAllGroupsResult::~DescribeAllGroupsResult()
{}

void DescribeAllGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupsNode = value["Groups"]["Group"];
	for (auto valueGroupsGroup : allGroupsNode)
	{
		Group groupsObject;
		if(!valueGroupsGroup["GroupName"].isNull())
			groupsObject.groupName = valueGroupsGroup["GroupName"].asString();
		if(!valueGroupsGroup["GroupId"].isNull())
			groupsObject.groupId = std::stoi(valueGroupsGroup["GroupId"].asString());
		if(!valueGroupsGroup["GroupFlag"].isNull())
			groupsObject.groupFlag = std::stoi(valueGroupsGroup["GroupFlag"].asString());
		groups_.push_back(groupsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<DescribeAllGroupsResult::Group> DescribeAllGroupsResult::getGroups()const
{
	return groups_;
}

int DescribeAllGroupsResult::getCount()const
{
	return count_;
}

