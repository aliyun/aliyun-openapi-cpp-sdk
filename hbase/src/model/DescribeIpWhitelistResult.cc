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

#include <alibabacloud/hbase/model/DescribeIpWhitelistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeIpWhitelistResult::DescribeIpWhitelistResult() :
	ServiceResult()
{}

DescribeIpWhitelistResult::DescribeIpWhitelistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpWhitelistResult::~DescribeIpWhitelistResult()
{}

void DescribeIpWhitelistResult::parse(const std::string &payload)
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
		if(!valueGroupsGroup["IpVersion"].isNull())
			groupsObject.ipVersion = std::stoi(valueGroupsGroup["IpVersion"].asString());
		auto allIpList = value["IpList"]["Ip"];
		for (auto value : allIpList)
			groupsObject.ipList.push_back(value.asString());
		groups_.push_back(groupsObject);
	}

}

std::vector<DescribeIpWhitelistResult::Group> DescribeIpWhitelistResult::getGroups()const
{
	return groups_;
}

