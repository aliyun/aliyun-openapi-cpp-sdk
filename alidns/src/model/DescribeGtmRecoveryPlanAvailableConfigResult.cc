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
	auto allInstances = value["Instances"]["Instance"];
	for (auto value : allInstances)
	{
		Instance instancesObject;
		if(!value["InstanceId"].isNull())
			instancesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			instancesObject.instanceName = value["InstanceName"].asString();
		auto allAddrPools = value["AddrPools"]["AddrPool"];
		for (auto value : allAddrPools)
		{
			Instance::AddrPool addrPoolsObject;
			if(!value["AddrPoolId"].isNull())
				addrPoolsObject.addrPoolId = value["AddrPoolId"].asString();
			if(!value["Name"].isNull())
				addrPoolsObject.name = value["Name"].asString();
			instancesObject.addrPools.push_back(addrPoolsObject);
		}
		instances_.push_back(instancesObject);
	}

}

std::vector<DescribeGtmRecoveryPlanAvailableConfigResult::Instance> DescribeGtmRecoveryPlanAvailableConfigResult::getInstances()const
{
	return instances_;
}

