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

#include <alibabacloud/slb/model/DescribeLoadBalancersRelatedEcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancersRelatedEcsResult::DescribeLoadBalancersRelatedEcsResult() :
	ServiceResult()
{}

DescribeLoadBalancersRelatedEcsResult::DescribeLoadBalancersRelatedEcsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancersRelatedEcsResult::~DescribeLoadBalancersRelatedEcsResult()
{}

void DescribeLoadBalancersRelatedEcsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLoadBalancers = value["LoadBalancers"]["LoadBalancer"];
	for (auto value : allLoadBalancers)
	{
		LoadBalancer loadBalancersObject;
		if(!value["LoadBalancerId"].isNull())
			loadBalancersObject.loadBalancerId = value["LoadBalancerId"].asString();
		if(!value["Count"].isNull())
			loadBalancersObject.count = std::stoi(value["Count"].asString());
		auto allMasterSlaveVServerGroups = value["MasterSlaveVServerGroups"]["MasterSlaveVServerGroup"];
		for (auto value : allMasterSlaveVServerGroups)
		{
			LoadBalancer::MasterSlaveVServerGroup masterSlaveVServerGroupsObject;
			if(!value["GroupId"].isNull())
				masterSlaveVServerGroupsObject.groupId = value["GroupId"].asString();
			if(!value["GroupName"].isNull())
				masterSlaveVServerGroupsObject.groupName = value["GroupName"].asString();
			auto allBackendServers1 = value["BackendServers"]["BackendServer"];
			for (auto value : allBackendServers1)
			{
				LoadBalancer::MasterSlaveVServerGroup::BackendServer backendServers1Object;
				if(!value["VmName"].isNull())
					backendServers1Object.vmName = value["VmName"].asString();
				if(!value["Weight"].isNull())
					backendServers1Object.weight = std::stoi(value["Weight"].asString());
				if(!value["Port"].isNull())
					backendServers1Object.port = std::stoi(value["Port"].asString());
				if(!value["NetworkType"].isNull())
					backendServers1Object.networkType = value["NetworkType"].asString();
				masterSlaveVServerGroupsObject.backendServers1.push_back(backendServers1Object);
			}
			loadBalancersObject.masterSlaveVServerGroups.push_back(masterSlaveVServerGroupsObject);
		}
		auto allVServerGroups = value["VServerGroups"]["VServerGroup"];
		for (auto value : allVServerGroups)
		{
			LoadBalancer::VServerGroup vServerGroupsObject;
			if(!value["GroupId"].isNull())
				vServerGroupsObject.groupId = value["GroupId"].asString();
			if(!value["GroupName"].isNull())
				vServerGroupsObject.groupName = value["GroupName"].asString();
			auto allBackendServers2 = value["BackendServers"]["BackendServer"];
			for (auto value : allBackendServers2)
			{
				LoadBalancer::VServerGroup::BackendServer3 backendServers2Object;
				if(!value["VmName"].isNull())
					backendServers2Object.vmName = value["VmName"].asString();
				if(!value["Weight"].isNull())
					backendServers2Object.weight = std::stoi(value["Weight"].asString());
				if(!value["Port"].isNull())
					backendServers2Object.port = std::stoi(value["Port"].asString());
				if(!value["NetworkType"].isNull())
					backendServers2Object.networkType = value["NetworkType"].asString();
				vServerGroupsObject.backendServers2.push_back(backendServers2Object);
			}
			loadBalancersObject.vServerGroups.push_back(vServerGroupsObject);
		}
		auto allBackendServers = value["BackendServers"]["BackendServer"];
		for (auto value : allBackendServers)
		{
			LoadBalancer::BackendServer4 backendServersObject;
			if(!value["VmName"].isNull())
				backendServersObject.vmName = value["VmName"].asString();
			if(!value["Weight"].isNull())
				backendServersObject.weight = std::stoi(value["Weight"].asString());
			if(!value["Port"].isNull())
				backendServersObject.port = std::stoi(value["Port"].asString());
			if(!value["NetworkType"].isNull())
				backendServersObject.networkType = value["NetworkType"].asString();
			loadBalancersObject.backendServers.push_back(backendServersObject);
		}
		loadBalancers_.push_back(loadBalancersObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeLoadBalancersRelatedEcsResult::getMessage()const
{
	return message_;
}

std::vector<DescribeLoadBalancersRelatedEcsResult::LoadBalancer> DescribeLoadBalancersRelatedEcsResult::getLoadBalancers()const
{
	return loadBalancers_;
}

bool DescribeLoadBalancersRelatedEcsResult::getSuccess()const
{
	return success_;
}

