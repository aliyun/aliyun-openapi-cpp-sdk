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

#include <alibabacloud/emr/model/ListNodeGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListNodeGroupsResult::ListNodeGroupsResult() :
	ServiceResult()
{}

ListNodeGroupsResult::ListNodeGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeGroupsResult::~ListNodeGroupsResult()
{}

void ListNodeGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeGroupsNode = value["NodeGroups"]["NodeGroup"];
	for (auto valueNodeGroupsNodeGroup : allNodeGroupsNode)
	{
		NodeGroup nodeGroupsObject;
		if(!valueNodeGroupsNodeGroup["NodeGroupId"].isNull())
			nodeGroupsObject.nodeGroupId = valueNodeGroupsNodeGroup["NodeGroupId"].asString();
		if(!valueNodeGroupsNodeGroup["NodeGroupName"].isNull())
			nodeGroupsObject.nodeGroupName = valueNodeGroupsNodeGroup["NodeGroupName"].asString();
		if(!valueNodeGroupsNodeGroup["NodeGroupType"].isNull())
			nodeGroupsObject.nodeGroupType = valueNodeGroupsNodeGroup["NodeGroupType"].asString();
		if(!valueNodeGroupsNodeGroup["NodeCount"].isNull())
			nodeGroupsObject.nodeCount = std::stoi(valueNodeGroupsNodeGroup["NodeCount"].asString());
		if(!valueNodeGroupsNodeGroup["PaymentType"].isNull())
			nodeGroupsObject.paymentType = valueNodeGroupsNodeGroup["PaymentType"].asString();
		if(!valueNodeGroupsNodeGroup["Description"].isNull())
			nodeGroupsObject.description = valueNodeGroupsNodeGroup["Description"].asString();
		if(!valueNodeGroupsNodeGroup["Status"].isNull())
			nodeGroupsObject.status = valueNodeGroupsNodeGroup["Status"].asString();
		if(!valueNodeGroupsNodeGroup["NodeGroupStatus"].isNull())
			nodeGroupsObject.nodeGroupStatus = valueNodeGroupsNodeGroup["NodeGroupStatus"].asString();
		if(!valueNodeGroupsNodeGroup["NodeRamRole"].isNull())
			nodeGroupsObject.nodeRamRole = valueNodeGroupsNodeGroup["NodeRamRole"].asString();
		if(!valueNodeGroupsNodeGroup["ZoneId"].isNull())
			nodeGroupsObject.zoneId = valueNodeGroupsNodeGroup["ZoneId"].asString();
		if(!valueNodeGroupsNodeGroup["SecurityGroupId"].isNull())
			nodeGroupsObject.securityGroupId = valueNodeGroupsNodeGroup["SecurityGroupId"].asString();
		if(!valueNodeGroupsNodeGroup["PaymentDuration"].isNull())
			nodeGroupsObject.paymentDuration = std::stoi(valueNodeGroupsNodeGroup["PaymentDuration"].asString());
		if(!valueNodeGroupsNodeGroup["PaymentDurationUnit"].isNull())
			nodeGroupsObject.paymentDurationUnit = valueNodeGroupsNodeGroup["PaymentDurationUnit"].asString();
		if(!valueNodeGroupsNodeGroup["AutoPayOrder"].isNull())
			nodeGroupsObject.autoPayOrder = valueNodeGroupsNodeGroup["AutoPayOrder"].asString() == "true";
		if(!valueNodeGroupsNodeGroup["AutoRenew"].isNull())
			nodeGroupsObject.autoRenew = valueNodeGroupsNodeGroup["AutoRenew"].asString() == "true";
		if(!valueNodeGroupsNodeGroup["ScalingGroup"].isNull())
			nodeGroupsObject.scalingGroup = valueNodeGroupsNodeGroup["ScalingGroup"].asString() == "true";
		if(!valueNodeGroupsNodeGroup["AutoRenewDuration"].isNull())
			nodeGroupsObject.autoRenewDuration = std::stoi(valueNodeGroupsNodeGroup["AutoRenewDuration"].asString());
		if(!valueNodeGroupsNodeGroup["AutoRenewDurationUnit"].isNull())
			nodeGroupsObject.autoRenewDurationUnit = valueNodeGroupsNodeGroup["AutoRenewDurationUnit"].asString();
		if(!valueNodeGroupsNodeGroup["WithPublicIp"].isNull())
			nodeGroupsObject.withPublicIp = valueNodeGroupsNodeGroup["WithPublicIp"].asString() == "true";
		if(!valueNodeGroupsNodeGroup["NodeKeyPairName"].isNull())
			nodeGroupsObject.nodeKeyPairName = valueNodeGroupsNodeGroup["NodeKeyPairName"].asString();
		if(!valueNodeGroupsNodeGroup["NodeRootPassword"].isNull())
			nodeGroupsObject.nodeRootPassword = valueNodeGroupsNodeGroup["NodeRootPassword"].asString();
		if(!valueNodeGroupsNodeGroup["SpotStrategy"].isNull())
			nodeGroupsObject.spotStrategy = valueNodeGroupsNodeGroup["SpotStrategy"].asString();
		if(!valueNodeGroupsNodeGroup["StateChangeReason"].isNull())
			nodeGroupsObject.stateChangeReason = valueNodeGroupsNodeGroup["StateChangeReason"].asString();
		auto allDataDisksNode = valueNodeGroupsNodeGroup["DataDisks"]["Disk"];
		for (auto valueNodeGroupsNodeGroupDataDisksDisk : allDataDisksNode)
		{
			NodeGroup::Disk dataDisksObject;
			if(!valueNodeGroupsNodeGroupDataDisksDisk["Category"].isNull())
				dataDisksObject.category = valueNodeGroupsNodeGroupDataDisksDisk["Category"].asString();
			if(!valueNodeGroupsNodeGroupDataDisksDisk["Size"].isNull())
				dataDisksObject.size = std::stoi(valueNodeGroupsNodeGroupDataDisksDisk["Size"].asString());
			if(!valueNodeGroupsNodeGroupDataDisksDisk["PerformanceLevel"].isNull())
				dataDisksObject.performanceLevel = valueNodeGroupsNodeGroupDataDisksDisk["PerformanceLevel"].asString();
			if(!valueNodeGroupsNodeGroupDataDisksDisk["Count"].isNull())
				dataDisksObject.count = std::stoi(valueNodeGroupsNodeGroupDataDisksDisk["Count"].asString());
			nodeGroupsObject.dataDisks.push_back(dataDisksObject);
		}
		auto systemDiskNode = value["SystemDisk"];
		if(!systemDiskNode["Category"].isNull())
			nodeGroupsObject.systemDisk.category = systemDiskNode["Category"].asString();
		if(!systemDiskNode["Size"].isNull())
			nodeGroupsObject.systemDisk.size = std::stoi(systemDiskNode["Size"].asString());
		if(!systemDiskNode["PerformanceLevel"].isNull())
			nodeGroupsObject.systemDisk.performanceLevel = systemDiskNode["PerformanceLevel"].asString();
		if(!systemDiskNode["Count"].isNull())
			nodeGroupsObject.systemDisk.count = std::stoi(systemDiskNode["Count"].asString());
		auto allInstanceTypes = value["InstanceTypes"]["String"];
		for (auto value : allInstanceTypes)
			nodeGroupsObject.instanceTypes.push_back(value.asString());
		auto allVSwitchIds = value["VSwitchIds"]["String"];
		for (auto value : allVSwitchIds)
			nodeGroupsObject.vSwitchIds.push_back(value.asString());
		nodeGroups_.push_back(nodeGroupsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListNodeGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListNodeGroupsResult::getNextToken()const
{
	return nextToken_;
}

int ListNodeGroupsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListNodeGroupsResult::NodeGroup> ListNodeGroupsResult::getNodeGroups()const
{
	return nodeGroups_;
}

