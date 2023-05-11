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

#include <alibabacloud/alidns/model/DescribeGtmRecoveryPlanAvailableConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmRecoveryPlanAvailableConfigResult::DescribeGtmRecoveryPlanAvailableConfigResult() :
	ServiceResult()
{}

DescribeGtmRecoveryPlanAvailableConfigResult::DescribeGtmRecoveryPlanAvailableConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmRecoveryPlanAvailableConfigResult::~DescribeGtmRecoveryPlanAvailableConfigResult()
{}

void DescribeGtmRecoveryPlanAvailableConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		auto allAddrPoolsNode = valueInstancesInstance["AddrPools"]["AddrPool"];
		for (auto valueInstancesInstanceAddrPoolsAddrPool : allAddrPoolsNode)
		{
			Instance::AddrPool addrPoolsObject;
			if(!valueInstancesInstanceAddrPoolsAddrPool["AddrPoolId"].isNull())
				addrPoolsObject.addrPoolId = valueInstancesInstanceAddrPoolsAddrPool["AddrPoolId"].asString();
			if(!valueInstancesInstanceAddrPoolsAddrPool["Name"].isNull())
				addrPoolsObject.name = valueInstancesInstanceAddrPoolsAddrPool["Name"].asString();
			instancesObject.addrPools.push_back(addrPoolsObject);
		}
		instances_.push_back(instancesObject);
	}

}

std::vector<DescribeGtmRecoveryPlanAvailableConfigResult::Instance> DescribeGtmRecoveryPlanAvailableConfigResult::getInstances()const
{
	return instances_;
}

