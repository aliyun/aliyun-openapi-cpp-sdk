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

#include <alibabacloud/emr/model/GetNodeGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetNodeGroupResult::GetNodeGroupResult() :
	ServiceResult()
{}

GetNodeGroupResult::GetNodeGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNodeGroupResult::~GetNodeGroupResult()
{}

void GetNodeGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto nodeGroupNode = value["NodeGroup"];
	if(!nodeGroupNode["NodeGroupId"].isNull())
		nodeGroup_.nodeGroupId = nodeGroupNode["NodeGroupId"].asString();
	if(!nodeGroupNode["NodeGroupName"].isNull())
		nodeGroup_.nodeGroupName = nodeGroupNode["NodeGroupName"].asString();
	if(!nodeGroupNode["NodeGroupType"].isNull())
		nodeGroup_.nodeGroupType = nodeGroupNode["NodeGroupType"].asString();
	if(!nodeGroupNode["NodeCount"].isNull())
		nodeGroup_.nodeCount = std::stoi(nodeGroupNode["NodeCount"].asString());
	if(!nodeGroupNode["PaymentType"].isNull())
		nodeGroup_.paymentType = nodeGroupNode["PaymentType"].asString();
	if(!nodeGroupNode["Description"].isNull())
		nodeGroup_.description = nodeGroupNode["Description"].asString();
	if(!nodeGroupNode["Status"].isNull())
		nodeGroup_.status = nodeGroupNode["Status"].asString();
	if(!nodeGroupNode["NodeGroupStatus"].isNull())
		nodeGroup_.nodeGroupStatus = nodeGroupNode["NodeGroupStatus"].asString();
	if(!nodeGroupNode["NodeRamRole"].isNull())
		nodeGroup_.nodeRamRole = nodeGroupNode["NodeRamRole"].asString();
	if(!nodeGroupNode["ZoneId"].isNull())
		nodeGroup_.zoneId = nodeGroupNode["ZoneId"].asString();
	if(!nodeGroupNode["SecurityGroupId"].isNull())
		nodeGroup_.securityGroupId = nodeGroupNode["SecurityGroupId"].asString();
	if(!nodeGroupNode["PaymentDuration"].isNull())
		nodeGroup_.paymentDuration = std::stoi(nodeGroupNode["PaymentDuration"].asString());
	if(!nodeGroupNode["PaymentDurationUnit"].isNull())
		nodeGroup_.paymentDurationUnit = nodeGroupNode["PaymentDurationUnit"].asString();
	if(!nodeGroupNode["AutoPayOrder"].isNull())
		nodeGroup_.autoPayOrder = nodeGroupNode["AutoPayOrder"].asString() == "true";
	if(!nodeGroupNode["AutoRenew"].isNull())
		nodeGroup_.autoRenew = nodeGroupNode["AutoRenew"].asString() == "true";
	if(!nodeGroupNode["ScalingGroup"].isNull())
		nodeGroup_.scalingGroup = nodeGroupNode["ScalingGroup"].asString() == "true";
	if(!nodeGroupNode["AutoRenewDuration"].isNull())
		nodeGroup_.autoRenewDuration = std::stoi(nodeGroupNode["AutoRenewDuration"].asString());
	if(!nodeGroupNode["AutoRenewDurationUnit"].isNull())
		nodeGroup_.autoRenewDurationUnit = nodeGroupNode["AutoRenewDurationUnit"].asString();
	if(!nodeGroupNode["WithPublicIp"].isNull())
		nodeGroup_.withPublicIp = nodeGroupNode["WithPublicIp"].asString() == "true";
	if(!nodeGroupNode["NodeKeyPairName"].isNull())
		nodeGroup_.nodeKeyPairName = nodeGroupNode["NodeKeyPairName"].asString();
	if(!nodeGroupNode["NodeRootPassword"].isNull())
		nodeGroup_.nodeRootPassword = nodeGroupNode["NodeRootPassword"].asString();
	if(!nodeGroupNode["SpotStrategy"].isNull())
		nodeGroup_.spotStrategy = nodeGroupNode["SpotStrategy"].asString();
	if(!nodeGroupNode["StateChangeReason"].isNull())
		nodeGroup_.stateChangeReason = nodeGroupNode["StateChangeReason"].asString();
	auto allDataDisksNode = nodeGroupNode["DataDisks"]["Disk"];
	for (auto nodeGroupNodeDataDisksDisk : allDataDisksNode)
	{
		NodeGroup::Disk diskObject;
		if(!nodeGroupNodeDataDisksDisk["Category"].isNull())
			diskObject.category = nodeGroupNodeDataDisksDisk["Category"].asString();
		if(!nodeGroupNodeDataDisksDisk["Size"].isNull())
			diskObject.size = std::stoi(nodeGroupNodeDataDisksDisk["Size"].asString());
		if(!nodeGroupNodeDataDisksDisk["PerformanceLevel"].isNull())
			diskObject.performanceLevel = nodeGroupNodeDataDisksDisk["PerformanceLevel"].asString();
		if(!nodeGroupNodeDataDisksDisk["Count"].isNull())
			diskObject.count = std::stoi(nodeGroupNodeDataDisksDisk["Count"].asString());
		nodeGroup_.dataDisks.push_back(diskObject);
	}
	auto systemDiskNode = nodeGroupNode["SystemDisk"];
	if(!systemDiskNode["Category"].isNull())
		nodeGroup_.systemDisk.category = systemDiskNode["Category"].asString();
	if(!systemDiskNode["Size"].isNull())
		nodeGroup_.systemDisk.size = std::stoi(systemDiskNode["Size"].asString());
	if(!systemDiskNode["PerformanceLevel"].isNull())
		nodeGroup_.systemDisk.performanceLevel = systemDiskNode["PerformanceLevel"].asString();
	if(!systemDiskNode["Count"].isNull())
		nodeGroup_.systemDisk.count = std::stoi(systemDiskNode["Count"].asString());
		auto allInstanceTypes = nodeGroupNode["InstanceTypes"]["String"];
		for (auto value : allInstanceTypes)
			nodeGroup_.instanceTypes.push_back(value.asString());
		auto allVSwitchIds = nodeGroupNode["VSwitchIds"]["String"];
		for (auto value : allVSwitchIds)
			nodeGroup_.vSwitchIds.push_back(value.asString());

}

GetNodeGroupResult::NodeGroup GetNodeGroupResult::getNodeGroup()const
{
	return nodeGroup_;
}

