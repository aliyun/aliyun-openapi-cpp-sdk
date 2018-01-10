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
		LoadBalancer loadBalancerObject;
		loadBalancerObject.loadBalancerId = value["LoadBalancerId"].asString();
		loadBalancerObject.count = std::stoi(value["Count"].asString());
		auto allMasterSlaveVServerGroups = value["MasterSlaveVServerGroups"]["MasterSlaveVServerGroup"];
		for (auto value : allMasterSlaveVServerGroups)
		{
			LoadBalancer::MasterSlaveVServerGroup masterSlaveVServerGroupObject;
			masterSlaveVServerGroupObject.groupId = value["GroupId"].asString();
			masterSlaveVServerGroupObject.groupName = value["GroupName"].asString();
			auto allBackendServers = value["BackendServers"]["BackendServer"];
			for (auto value : allBackendServers)
			{
				LoadBalancer::MasterSlaveVServerGroup::BackendServer backendServerObject;
				backendServerObject.vmName = value["VmName"].asString();
				backendServerObject.weight = std::stoi(value["Weight"].asString());
				backendServerObject.port = std::stoi(value["Port"].asString());
				backendServerObject.networkType = value["NetworkType"].asString();
				masterSlaveVServerGroupObject.backendServers1.push_back(backendServerObject);
			}
			loadBalancerObject.masterSlaveVServerGroups.push_back(masterSlaveVServerGroupObject);
		}
		auto allVServerGroups = value["VServerGroups"]["VServerGroup"];
		for (auto value : allVServerGroups)
		{
			LoadBalancer::VServerGroup vServerGroupObject;
			vServerGroupObject.groupId = value["GroupId"].asString();
			vServerGroupObject.groupName = value["GroupName"].asString();
			auto allBackendServers = value["BackendServers"]["BackendServer"];
			for (auto value : allBackendServers)
			{
				LoadBalancer::VServerGroup::BackendServer backendServerObject;
				backendServerObject.vmName = value["VmName"].asString();
				backendServerObject.weight = std::stoi(value["Weight"].asString());
				backendServerObject.port = std::stoi(value["Port"].asString());
				backendServerObject.networkType = value["NetworkType"].asString();
				vServerGroupObject.backendServers2.push_back(backendServerObject);
			}
			loadBalancerObject.vServerGroups.push_back(vServerGroupObject);
		}
		auto allBackendServers = value["BackendServers"]["BackendServer"];
		for (auto value : allBackendServers)
		{
			LoadBalancer::BackendServer backendServerObject;
			backendServerObject.vmName = value["VmName"].asString();
			backendServerObject.weight = std::stoi(value["Weight"].asString());
			backendServerObject.port = std::stoi(value["Port"].asString());
			backendServerObject.networkType = value["NetworkType"].asString();
			loadBalancerObject.backendServers.push_back(backendServerObject);
		}
		loadBalancers_.push_back(loadBalancerObject);
	}
	message_ = value["Message"].asString();
	success_ = std::stoi(value["Success"].asString());

}

std::string DescribeLoadBalancersRelatedEcsResult::getMessage()const
{
	return message_;
}

void DescribeLoadBalancersRelatedEcsResult::setMessage(const std::string& message)
{
	message_ = message;
}

bool DescribeLoadBalancersRelatedEcsResult::getSuccess()const
{
	return success_;
}

void DescribeLoadBalancersRelatedEcsResult::setSuccess(bool success)
{
	success_ = success;
}

