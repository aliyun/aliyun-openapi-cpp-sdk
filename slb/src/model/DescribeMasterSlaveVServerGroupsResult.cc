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

#include <alibabacloud/slb/model/DescribeMasterSlaveVServerGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeMasterSlaveVServerGroupsResult::DescribeMasterSlaveVServerGroupsResult() :
	ServiceResult()
{}

DescribeMasterSlaveVServerGroupsResult::DescribeMasterSlaveVServerGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMasterSlaveVServerGroupsResult::~DescribeMasterSlaveVServerGroupsResult()
{}

void DescribeMasterSlaveVServerGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMasterSlaveVServerGroupsNode = value["MasterSlaveVServerGroups"]["MasterSlaveVServerGroup"];
	for (auto valueMasterSlaveVServerGroupsMasterSlaveVServerGroup : allMasterSlaveVServerGroupsNode)
	{
		MasterSlaveVServerGroup masterSlaveVServerGroupsObject;
		if(!valueMasterSlaveVServerGroupsMasterSlaveVServerGroup["MasterSlaveVServerGroupId"].isNull())
			masterSlaveVServerGroupsObject.masterSlaveVServerGroupId = valueMasterSlaveVServerGroupsMasterSlaveVServerGroup["MasterSlaveVServerGroupId"].asString();
		if(!valueMasterSlaveVServerGroupsMasterSlaveVServerGroup["MasterSlaveVServerGroupName"].isNull())
			masterSlaveVServerGroupsObject.masterSlaveVServerGroupName = valueMasterSlaveVServerGroupsMasterSlaveVServerGroup["MasterSlaveVServerGroupName"].asString();
		masterSlaveVServerGroups_.push_back(masterSlaveVServerGroupsObject);
	}

}

std::vector<DescribeMasterSlaveVServerGroupsResult::MasterSlaveVServerGroup> DescribeMasterSlaveVServerGroupsResult::getMasterSlaveVServerGroups()const
{
	return masterSlaveVServerGroups_;
}

