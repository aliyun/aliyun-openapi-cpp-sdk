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

#include <alibabacloud/emr/model/ListClusterHostGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterHostGroupResult::ListClusterHostGroupResult() :
	ServiceResult()
{}

ListClusterHostGroupResult::ListClusterHostGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterHostGroupResult::~ListClusterHostGroupResult()
{}

void ListClusterHostGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHostGroupListNode = value["HostGroupList"]["HostGroup"];
	for (auto valueHostGroupListHostGroup : allHostGroupListNode)
	{
		HostGroup hostGroupListObject;
		if(!valueHostGroupListHostGroup["HostGroupId"].isNull())
			hostGroupListObject.hostGroupId = valueHostGroupListHostGroup["HostGroupId"].asString();
		if(!valueHostGroupListHostGroup["HostGroupName"].isNull())
			hostGroupListObject.hostGroupName = valueHostGroupListHostGroup["HostGroupName"].asString();
		if(!valueHostGroupListHostGroup["HostGroupType"].isNull())
			hostGroupListObject.hostGroupType = valueHostGroupListHostGroup["HostGroupType"].asString();
		if(!valueHostGroupListHostGroup["HostGroupSubType"].isNull())
			hostGroupListObject.hostGroupSubType = valueHostGroupListHostGroup["HostGroupSubType"].asString();
		if(!valueHostGroupListHostGroup["InstanceType"].isNull())
			hostGroupListObject.instanceType = valueHostGroupListHostGroup["InstanceType"].asString();
		if(!valueHostGroupListHostGroup["SystemDiskType"].isNull())
			hostGroupListObject.systemDiskType = valueHostGroupListHostGroup["SystemDiskType"].asString();
		if(!valueHostGroupListHostGroup["SystemDiskSize"].isNull())
			hostGroupListObject.systemDiskSize = std::stoi(valueHostGroupListHostGroup["SystemDiskSize"].asString());
		if(!valueHostGroupListHostGroup["SystemDiskCount"].isNull())
			hostGroupListObject.systemDiskCount = std::stoi(valueHostGroupListHostGroup["SystemDiskCount"].asString());
		if(!valueHostGroupListHostGroup["DataDiskType"].isNull())
			hostGroupListObject.dataDiskType = valueHostGroupListHostGroup["DataDiskType"].asString();
		if(!valueHostGroupListHostGroup["DataDiskSize"].isNull())
			hostGroupListObject.dataDiskSize = std::stoi(valueHostGroupListHostGroup["DataDiskSize"].asString());
		if(!valueHostGroupListHostGroup["DataDiskCount"].isNull())
			hostGroupListObject.dataDiskCount = std::stoi(valueHostGroupListHostGroup["DataDiskCount"].asString());
		if(!valueHostGroupListHostGroup["Cpu"].isNull())
			hostGroupListObject.cpu = std::stoi(valueHostGroupListHostGroup["Cpu"].asString());
		if(!valueHostGroupListHostGroup["Memory"].isNull())
			hostGroupListObject.memory = std::stoi(valueHostGroupListHostGroup["Memory"].asString());
		if(!valueHostGroupListHostGroup["Status"].isNull())
			hostGroupListObject.status = valueHostGroupListHostGroup["Status"].asString();
		if(!valueHostGroupListHostGroup["LockType"].isNull())
			hostGroupListObject.lockType = valueHostGroupListHostGroup["LockType"].asString();
		if(!valueHostGroupListHostGroup["LockReason"].isNull())
			hostGroupListObject.lockReason = valueHostGroupListHostGroup["LockReason"].asString();
		if(!valueHostGroupListHostGroup["PayType"].isNull())
			hostGroupListObject.payType = valueHostGroupListHostGroup["PayType"].asString();
		if(!valueHostGroupListHostGroup["ChargeType"].isNull())
			hostGroupListObject.chargeType = valueHostGroupListHostGroup["ChargeType"].asString();
		if(!valueHostGroupListHostGroup["NodeCount"].isNull())
			hostGroupListObject.nodeCount = std::stoi(valueHostGroupListHostGroup["NodeCount"].asString());
		if(!valueHostGroupListHostGroup["VswitchId"].isNull())
			hostGroupListObject.vswitchId = valueHostGroupListHostGroup["VswitchId"].asString();
		if(!valueHostGroupListHostGroup["Comment"].isNull())
			hostGroupListObject.comment = valueHostGroupListHostGroup["Comment"].asString();
		if(!valueHostGroupListHostGroup["SecurityGroupId"].isNull())
			hostGroupListObject.securityGroupId = valueHostGroupListHostGroup["SecurityGroupId"].asString();
		if(!valueHostGroupListHostGroup["gmtCreate"].isNull())
			hostGroupListObject.gmtCreate = valueHostGroupListHostGroup["gmtCreate"].asString();
		if(!valueHostGroupListHostGroup["gmtModified"].isNull())
			hostGroupListObject.gmtModified = valueHostGroupListHostGroup["gmtModified"].asString();
		if(!valueHostGroupListHostGroup["HostGroupChangeType"].isNull())
			hostGroupListObject.hostGroupChangeType = valueHostGroupListHostGroup["HostGroupChangeType"].asString();
		if(!valueHostGroupListHostGroup["HostGroupChangeStatus"].isNull())
			hostGroupListObject.hostGroupChangeStatus = valueHostGroupListHostGroup["HostGroupChangeStatus"].asString();
		if(!valueHostGroupListHostGroup["ScalingGroupBizId"].isNull())
			hostGroupListObject.scalingGroupBizId = valueHostGroupListHostGroup["ScalingGroupBizId"].asString();
		if(!valueHostGroupListHostGroup["ScalingGroupActiveStatus"].isNull())
			hostGroupListObject.scalingGroupActiveStatus = valueHostGroupListHostGroup["ScalingGroupActiveStatus"].asString();
		if(!valueHostGroupListHostGroup["ScalingInMode"].isNull())
			hostGroupListObject.scalingInMode = valueHostGroupListHostGroup["ScalingInMode"].asString();
		if(!valueHostGroupListHostGroup["ScalingGroupMinNode"].isNull())
			hostGroupListObject.scalingGroupMinNode = std::stoi(valueHostGroupListHostGroup["ScalingGroupMinNode"].asString());
		if(!valueHostGroupListHostGroup["ScalingGroupMaxNode"].isNull())
			hostGroupListObject.scalingGroupMaxNode = std::stoi(valueHostGroupListHostGroup["ScalingGroupMaxNode"].asString());
		if(!valueHostGroupListHostGroup["ScalingGroupConfigState"].isNull())
			hostGroupListObject.scalingGroupConfigState = valueHostGroupListHostGroup["ScalingGroupConfigState"].asString();
		if(!valueHostGroupListHostGroup["CostSavingPercent"].isNull())
			hostGroupListObject.costSavingPercent = std::stof(valueHostGroupListHostGroup["CostSavingPercent"].asString());
		hostGroupList_.push_back(hostGroupListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();

}

int ListClusterHostGroupResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterHostGroupResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListClusterHostGroupResult::getClusterId()const
{
	return clusterId_;
}

int ListClusterHostGroupResult::getTotal()const
{
	return total_;
}

std::vector<ListClusterHostGroupResult::HostGroup> ListClusterHostGroupResult::getHostGroupList()const
{
	return hostGroupList_;
}

