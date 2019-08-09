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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allHostGroupList = value["HostGroupList"]["HostGroup"];
	for (auto value : allHostGroupList)
	{
		HostGroup hostGroupListObject;
		if(!value["HostGroupId"].isNull())
			hostGroupListObject.hostGroupId = value["HostGroupId"].asString();
		if(!value["HostGroupName"].isNull())
			hostGroupListObject.hostGroupName = value["HostGroupName"].asString();
		if(!value["HostGroupType"].isNull())
			hostGroupListObject.hostGroupType = value["HostGroupType"].asString();
		if(!value["HostGroupSubType"].isNull())
			hostGroupListObject.hostGroupSubType = value["HostGroupSubType"].asString();
		if(!value["InstanceType"].isNull())
			hostGroupListObject.instanceType = value["InstanceType"].asString();
		if(!value["SystemDiskType"].isNull())
			hostGroupListObject.systemDiskType = value["SystemDiskType"].asString();
		if(!value["SystemDiskSize"].isNull())
			hostGroupListObject.systemDiskSize = std::stoi(value["SystemDiskSize"].asString());
		if(!value["SystemDiskCount"].isNull())
			hostGroupListObject.systemDiskCount = std::stoi(value["SystemDiskCount"].asString());
		if(!value["DataDiskType"].isNull())
			hostGroupListObject.dataDiskType = value["DataDiskType"].asString();
		if(!value["DataDiskSize"].isNull())
			hostGroupListObject.dataDiskSize = std::stoi(value["DataDiskSize"].asString());
		if(!value["DataDiskCount"].isNull())
			hostGroupListObject.dataDiskCount = std::stoi(value["DataDiskCount"].asString());
		if(!value["Cpu"].isNull())
			hostGroupListObject.cpu = std::stoi(value["Cpu"].asString());
		if(!value["Memory"].isNull())
			hostGroupListObject.memory = std::stoi(value["Memory"].asString());
		if(!value["Status"].isNull())
			hostGroupListObject.status = value["Status"].asString();
		if(!value["LockType"].isNull())
			hostGroupListObject.lockType = value["LockType"].asString();
		if(!value["LockReason"].isNull())
			hostGroupListObject.lockReason = value["LockReason"].asString();
		if(!value["PayType"].isNull())
			hostGroupListObject.payType = value["PayType"].asString();
		if(!value["ChargeType"].isNull())
			hostGroupListObject.chargeType = value["ChargeType"].asString();
		if(!value["NodeCount"].isNull())
			hostGroupListObject.nodeCount = std::stoi(value["NodeCount"].asString());
		if(!value["VswitchId"].isNull())
			hostGroupListObject.vswitchId = value["VswitchId"].asString();
		if(!value["Comment"].isNull())
			hostGroupListObject.comment = value["Comment"].asString();
		if(!value["SecurityGroupId"].isNull())
			hostGroupListObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["gmtCreate"].isNull())
			hostGroupListObject.gmtCreate = value["gmtCreate"].asString();
		if(!value["gmtModified"].isNull())
			hostGroupListObject.gmtModified = value["gmtModified"].asString();
		if(!value["HostGroupChangeType"].isNull())
			hostGroupListObject.hostGroupChangeType = value["HostGroupChangeType"].asString();
		if(!value["HostGroupChangeStatus"].isNull())
			hostGroupListObject.hostGroupChangeStatus = value["HostGroupChangeStatus"].asString();
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

