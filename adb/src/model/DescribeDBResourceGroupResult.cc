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

#include <alibabacloud/adb/model/DescribeDBResourceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDBResourceGroupResult::DescribeDBResourceGroupResult() :
	ServiceResult()
{}

DescribeDBResourceGroupResult::DescribeDBResourceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBResourceGroupResult::~DescribeDBResourceGroupResult()
{}

void DescribeDBResourceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupsInfoNode = value["GroupsInfo"]["PoolInfo"];
	for (auto valueGroupsInfoPoolInfo : allGroupsInfoNode)
	{
		PoolInfo groupsInfoObject;
		if(!valueGroupsInfoPoolInfo["GroupType"].isNull())
			groupsInfoObject.groupType = valueGroupsInfoPoolInfo["GroupType"].asString();
		if(!valueGroupsInfoPoolInfo["UpdateTime"].isNull())
			groupsInfoObject.updateTime = valueGroupsInfoPoolInfo["UpdateTime"].asString();
		if(!valueGroupsInfoPoolInfo["GroupName"].isNull())
			groupsInfoObject.groupName = valueGroupsInfoPoolInfo["GroupName"].asString();
		if(!valueGroupsInfoPoolInfo["CreateTime"].isNull())
			groupsInfoObject.createTime = valueGroupsInfoPoolInfo["CreateTime"].asString();
		if(!valueGroupsInfoPoolInfo["GroupUsers"].isNull())
			groupsInfoObject.groupUsers = valueGroupsInfoPoolInfo["GroupUsers"].asString();
		if(!valueGroupsInfoPoolInfo["NodeNum"].isNull())
			groupsInfoObject.nodeNum = std::stoi(valueGroupsInfoPoolInfo["NodeNum"].asString());
		groupsInfo_.push_back(groupsInfoObject);
	}
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeDBResourceGroupResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeDBResourceGroupResult::PoolInfo> DescribeDBResourceGroupResult::getGroupsInfo()const
{
	return groupsInfo_;
}

