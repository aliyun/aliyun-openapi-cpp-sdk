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

#include <alibabacloud/ecs/model/DescribeDeploymentSetTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDeploymentSetTopologyResult::DescribeDeploymentSetTopologyResult() :
	ServiceResult()
{}

DescribeDeploymentSetTopologyResult::DescribeDeploymentSetTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeploymentSetTopologyResult::~DescribeDeploymentSetTopologyResult()
{}

void DescribeDeploymentSetTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSwitchs = value["Switchs"]["Switch"];
	for (auto value : allSwitchs)
	{
		Switch switchObject;
		switchObject.switchId = value["SwitchId"].asString();
		auto allHosts = value["Hosts"]["Host"];
		for (auto value : allHosts)
		{
			Switch::Host hostObject;
			hostObject.hostId = value["HostId"].asString();
			auto allInstanceIds = value["InstanceIds"]["InstanceId"];
			for (auto value : allInstanceIds)
				hostObject.instanceIds.push_back(value.asString());
			switchObject.hosts.push_back(hostObject);
		}
		switchs_.push_back(switchObject);
	}
	auto allRacks = value["Racks"]["Rack"];
	for (auto value : allRacks)
	{
		Rack rackObject;
		rackObject.rackId = value["RackId"].asString();
		auto allHosts = value["Hosts"]["Host"];
		for (auto value : allHosts)
		{
			Rack::Host hostObject;
			hostObject.hostId = value["HostId"].asString();
			auto allInstanceIds3 = value["InstanceIds"]["InstanceId"];
			for (auto value : allInstanceIds3)
				hostObject.instanceIds3.push_back(value.asString());
			rackObject.hosts1.push_back(hostObject);
		}
		racks_.push_back(rackObject);
	}

}

