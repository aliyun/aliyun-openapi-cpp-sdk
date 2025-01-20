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

#include <alibabacloud/polardb/model/DescribeDBClusterAccessWhitelistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterAccessWhitelistResult::DescribeDBClusterAccessWhitelistResult() :
	ServiceResult()
{}

DescribeDBClusterAccessWhitelistResult::DescribeDBClusterAccessWhitelistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterAccessWhitelistResult::~DescribeDBClusterAccessWhitelistResult()
{}

void DescribeDBClusterAccessWhitelistResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBClusterSecurityGroupsNode = value["DBClusterSecurityGroups"]["DBClusterSecurityGroup"];
	for (auto valueDBClusterSecurityGroupsDBClusterSecurityGroup : allDBClusterSecurityGroupsNode)
	{
		DBClusterSecurityGroup dBClusterSecurityGroupsObject;
		if(!valueDBClusterSecurityGroupsDBClusterSecurityGroup["SecurityGroupId"].isNull())
			dBClusterSecurityGroupsObject.securityGroupId = valueDBClusterSecurityGroupsDBClusterSecurityGroup["SecurityGroupId"].asString();
		if(!valueDBClusterSecurityGroupsDBClusterSecurityGroup["SecurityGroupName"].isNull())
			dBClusterSecurityGroupsObject.securityGroupName = valueDBClusterSecurityGroupsDBClusterSecurityGroup["SecurityGroupName"].asString();
		dBClusterSecurityGroups_.push_back(dBClusterSecurityGroupsObject);
	}
	auto allItemsNode = value["Items"]["DBClusterIPArray"];
	for (auto valueItemsDBClusterIPArray : allItemsNode)
	{
		DBClusterIPArray itemsObject;
		if(!valueItemsDBClusterIPArray["DBClusterIPArrayAttribute"].isNull())
			itemsObject.dBClusterIPArrayAttribute = valueItemsDBClusterIPArray["DBClusterIPArrayAttribute"].asString();
		if(!valueItemsDBClusterIPArray["DBClusterIPArrayName"].isNull())
			itemsObject.dBClusterIPArrayName = valueItemsDBClusterIPArray["DBClusterIPArrayName"].asString();
		if(!valueItemsDBClusterIPArray["SecurityIps"].isNull())
			itemsObject.securityIps = valueItemsDBClusterIPArray["SecurityIps"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBClusterAccessWhitelistResult::DBClusterIPArray> DescribeDBClusterAccessWhitelistResult::getItems()const
{
	return items_;
}

std::vector<DescribeDBClusterAccessWhitelistResult::DBClusterSecurityGroup> DescribeDBClusterAccessWhitelistResult::getDBClusterSecurityGroups()const
{
	return dBClusterSecurityGroups_;
}

