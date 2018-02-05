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

#include <alibabacloud/slb/model/DescribeVServerGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeVServerGroupsResult::DescribeVServerGroupsResult() :
	ServiceResult()
{}

DescribeVServerGroupsResult::DescribeVServerGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVServerGroupsResult::~DescribeVServerGroupsResult()
{}

void DescribeVServerGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVServerGroups = value["VServerGroups"]["VServerGroup"];
	for (auto value : allVServerGroups)
	{
		VServerGroup vServerGroupsObject;
		if(!value["VServerGroupId"].isNull())
			vServerGroupsObject.vServerGroupId = value["VServerGroupId"].asString();
		if(!value["VServerGroupName"].isNull())
			vServerGroupsObject.vServerGroupName = value["VServerGroupName"].asString();
		vServerGroups_.push_back(vServerGroupsObject);
	}

}

std::vector<DescribeVServerGroupsResult::VServerGroup> DescribeVServerGroupsResult::getVServerGroups()const
{
	return vServerGroups_;
}

